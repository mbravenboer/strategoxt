package org.metaborg.runtime.task.primitives;

import static org.metaborg.runtime.task.util.TermTools.makeList;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class task_api_debug_info_0_1 extends AbstractPrimitive {
	public static task_api_debug_info_0_1 instance = new task_api_debug_info_0_1();

	public task_api_debug_info_0_1() {
		super("task_api_debug_info", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITermFactory factory = env.getFactory();
		final ITaskEngine engine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm tupleOrPartitionOrID = tvars[0];

		if(Tools.isTermTuple(tupleOrPartitionOrID) && tupleOrPartitionOrID.getSubtermCount() == 0) {
			env.setCurrent(createDebugTuples(engine.getTaskIDs(), engine, factory));
		} else if(Tools.isTermString(tupleOrPartitionOrID)) {
			env.setCurrent(createDebugTuples(engine.getInPartition((IStrategoString) tupleOrPartitionOrID), engine,
				factory));
		} else {
			env.setCurrent(createDebugTuple(tupleOrPartitionOrID, engine, factory));
		}

		return true;
	}

	private IStrategoList createDebugTuples(Iterable<IStrategoTerm> taskIDs, ITaskEngine engine, ITermFactory factory) {
		IStrategoList list = factory.makeList();
		for(IStrategoTerm taskID : taskIDs) {
			list = factory.makeListCons(createDebugTuple(taskID, engine, factory), list);
		}
		return list;
	}

	private IStrategoTerm createDebugTuple(IStrategoTerm taskID, ITaskEngine engine, ITermFactory factory) {
		Task task = engine.getTask(taskID);
		final IStrategoList dependencies = makeList(factory, engine.getDependencies(taskID));
		final IStrategoTerm message = task.message();
		final IStrategoTerm reads = makeList(factory, engine.getReads(taskID));
		final IStrategoTerm results;
		switch(task.status()) {
			case DependencyFail:
				results = depfail(factory);
				break;
			case Fail:
				results = fail(factory);
				break;
			case Success:
				results = makeList(factory, task.results());
				break;
			default:
				results = none(factory);
		}

		return taskTuple(factory, taskID, task.instruction, dependencies, reads, results, message == null
			? none(factory) : message, factory.makeInt((int) task.time()), factory.makeInt(task.evaluations()));
	}

	private IStrategoTerm taskTuple(ITermFactory factory, IStrategoTerm taskID, IStrategoTerm instruction,
		IStrategoTerm dependencies, IStrategoTerm reads, IStrategoTerm results, IStrategoTerm message,
		IStrategoInt time, IStrategoInt evaluations) {
		return factory.makeTuple(taskID, instruction, dependencies, reads, results, message, time, evaluations);
	}

	private IStrategoAppl fail(ITermFactory factory) {
		return factory.makeAppl(factory.makeConstructor("Fail", 0));
	}

	private IStrategoAppl depfail(ITermFactory factory) {
		return factory.makeAppl(factory.makeConstructor("DepFail", 0));
	}

	private IStrategoAppl none(ITermFactory factory) {
		return factory.makeAppl(factory.makeConstructor("None", 0));
	}
}

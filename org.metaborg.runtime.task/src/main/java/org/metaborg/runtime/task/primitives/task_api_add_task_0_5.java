package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_add_task_0_5 extends AbstractPrimitive {
	public static task_api_add_task_0_5 instance = new task_api_add_task_0_5();

	public task_api_add_task_0_5() {
		super("task_api_add_task", 0, 5);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoString partition = (IStrategoString) tvars[0];
		final IStrategoList dependencies = (IStrategoList) tvars[1];
		final IStrategoTerm instruction = tvars[2];
		final IStrategoInt isCombinator = (IStrategoInt) tvars[3];
		final IStrategoInt shortCircuit = (IStrategoInt) tvars[4];
		env.setCurrent(TaskManager.getInstance().getCurrent()
			.addTask(partition, dependencies, instruction, isCombinator.intValue() == 1, shortCircuit.intValue() == 1));
		return true;
	}
}
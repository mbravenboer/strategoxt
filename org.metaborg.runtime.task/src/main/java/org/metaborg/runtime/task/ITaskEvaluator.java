package org.metaborg.runtime.task;

import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

public interface ITaskEvaluator {
	/**
	 * Evaluates tasks given by a set of task identifiers.
	 * 
	 * @param scheduled The task identifiers of tasks to evaluate.
	 * @param context The Stratego context used to insert results and perform instructions/
	 * @param insert The strategy that inserts results into an instruction.
	 * @param perform The strategy that evaluates an instruction.
	 * 
	 * @return A tuple with all evaluated task identifiers and unevaluated task identifiers.
	 */
	public abstract IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert,
		Strategy perform);
	
	/**
	 * Resets the task evaluator to the initial state. 
	 */
	public abstract void reset();
}
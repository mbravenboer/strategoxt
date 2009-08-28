package org.strategoxt.lang;

import static org.spoofax.interpreter.core.Tools.*;
import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_fatal_err_0_2 extends Strategy {
	public static SRTS_EXT_fatal_err_0_2 instance = new SRTS_EXT_fatal_err_0_2();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm message, IStrategoTerm term) {
		if (message.getTermType() != STRING)
			return null;
		
		if (term.getTermType() == TUPLE && term.getSubtermCount() == 0) {
			throw new StrategoErrorExit(asJavaString(message));
		} else {
			throw new StrategoErrorExit(asJavaString(message), term);
		}
	}
}

package org.strategoxt.lang.gradual;

import org.strategoxt.lang.StrategoException;

public class StrategoCastException extends StrategoException {
    public final Type currentType;
    public final Type type;

    public StrategoCastException(Type currentType, Type type) {
        super("Cannot cast " + currentType + " to " + type);
        this.currentType = currentType;
        this.type = type;
    }
}
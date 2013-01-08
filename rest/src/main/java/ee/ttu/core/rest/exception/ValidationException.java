package ee.ttu.core.rest.exception;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;

import ee.ttu.core.rest.model.BaseEntity;

public class ValidationException extends Exception
{
    private static final long serialVersionUID = -8745848067134169867L;

    private Class< ? extends BaseEntity > clazz;
    private Map< String, String > errors = new LinkedHashMap< String, String >();

    public ValidationException( Class< ? extends BaseEntity > clazz )
    {
        super();
        this.clazz = clazz;
    }

    public Class< ? extends ee.ttu.core.rest.model.BaseEntity > getEntityClass()
    {
        return clazz;
    }

    public void addError( String field, String msg )
    {
        errors.put( field, msg );
    }

    public boolean hasErrors()
    {
        return !errors.isEmpty();
    }

    public Map< String, String > getErrors()
    {
        return Collections.unmodifiableMap( errors );
    }

}

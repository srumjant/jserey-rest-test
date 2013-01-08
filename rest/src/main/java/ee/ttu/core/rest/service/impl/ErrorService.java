package ee.ttu.core.rest.service.impl;

import java.util.HashMap;
import java.util.Map;

import ee.ttu.core.rest.exception.ErrorConstants;
import ee.ttu.core.rest.service.IErrorService;

public class ErrorService implements IErrorService
{
    private static Map< String, String > INSTANCES = new HashMap< String, String >();
    static
    {
        INSTANCES.put( ErrorConstants.VALIDATE_FIELD_IS_EMPTY, "Field '{0}' must be provided." );
        INSTANCES.put( ErrorConstants.VALIDATE_FIELD_LENGTH_TOO_LONG,
                "Field '{0}' length is too long. Maximum length is {1}." );
        INSTANCES.put( ErrorConstants.VALIDATE_FIELD_LENGTH_TOO_SHORT,
                "Field '{0}' length is too short. Minimum length is {1}." );
        INSTANCES.put( ErrorConstants.VALIDATE_ENTITY_EXISTS,
                "Entity with id '{0}' already exists." );
    }

    public String getErrorMsg( String key )
    {
        return getErrorMsg( key, new Object[] {} );
    }

    public String getErrorMsg( String key, Object... strings )
    {
        if( INSTANCES.containsKey( key ) )
        {
            return String.format( INSTANCES.get( key ), strings );
        }
        return null;
    }
}

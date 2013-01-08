package ee.ttu.core.rest.service;

public interface IErrorService
{
    public String getErrorMsg( String key );

    public String getErrorMsg( String key, Object... strings );
}

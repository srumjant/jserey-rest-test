package ee.ttu.core.rest.mapper;

import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
import javax.ws.rs.ext.Provider;

import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.ErrorObject;

@Provider
public class ValidationExceptionMapper implements ExceptionMapper<ValidationException>
{
    @Override
    public Response toResponse(ValidationException exception)
    {
        return Response.serverError().entity(new ErrorObject(exception.getMessage())).build();
    }
}

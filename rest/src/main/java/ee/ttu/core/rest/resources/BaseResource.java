package ee.ttu.core.rest.resources;

import java.util.List;

import javax.ws.rs.Consumes;
import javax.ws.rs.DELETE;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.PUT;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.Response;

import org.codehaus.jettison.json.JSONException;
import org.codehaus.jettison.json.JSONObject;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import ee.ttu.core.rest.exception.ServiceException;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.utils.CharsetMediaType;

@Consumes(CharsetMediaType.APPLICATION_JSON_UTF8)
@Produces(CharsetMediaType.APPLICATION_JSON_UTF8)
public abstract class BaseResource<T>
{
    protected Logger log = LoggerFactory.getLogger(BaseResource.class);

    @POST
    public abstract Response create(T entity) throws JSONException, ValidationException;

    @PUT
    @Path("/{id}")
    public abstract Response update(@PathParam("id") long id, T entity) throws JSONException,
            ValidationException;

    protected JSONObject toJson(ValidationException e)
    {
        try
        {
            JSONObject error = new JSONObject();
            error.put("errors", e.getErrors());
            return error;
        }
        catch(JSONException ex)
        {
        }
        return new JSONObject();
    }

    protected JSONObject toError(String error)
    {
        try
        {
            JSONObject obj = new JSONObject();
            obj.put("errors", error);
            return obj;
        }
        catch(JSONException e)
        {
        }
        return new JSONObject();
    }

    @GET
    @Path("/{id}")
    public abstract T get(@PathParam("id") long id) throws JSONException, ValidationException;

    @GET
    @Path("/list")
    public abstract List<T> list() throws JSONException, ValidationException;

    @DELETE
    @Path("/{id}")
    public abstract Response delete(@PathParam("id") long id) throws ServiceException;
}

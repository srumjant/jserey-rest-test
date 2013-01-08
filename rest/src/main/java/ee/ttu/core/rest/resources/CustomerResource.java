package ee.ttu.core.rest.resources;

import java.util.List;

import javax.ws.rs.DELETE;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.PUT;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.UriBuilder;
import javax.ws.rs.core.UriInfo;

import org.codehaus.jettison.json.JSONException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import ee.ttu.core.rest.exception.ServiceException;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.Customer;
import ee.ttu.core.rest.service.ICustomerService;

@Component
@Path("/customer")
public class CustomerResource extends BaseResource<Customer>
{
    @Autowired
    private ICustomerService service;

    @Context
    UriInfo uriInfo;

    @GET
    public String getResource()
    {
        return uriInfo.getAbsolutePath().toASCIIString();
    }

    @POST
    @Override
    public Response create(Customer customer) throws JSONException, ValidationException
    {
        if(service.create(customer))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.created(ub.path(String.valueOf(customer.getId())).build()).entity(customer).build();
        }

        throw new RuntimeException("Could not save contract.");
    }

    @PUT
    @Path("{id}")
    @Override
    public Response update(@PathParam("id") long id, Customer customer) throws JSONException,
            ValidationException
    {
        if (!service.exists(id))
        {
            return Response.noContent().build();
        }
        
        customer.setId(id);
        if(service.update(customer))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.created(ub.build()).entity(customer).build();
        }

        throw new RuntimeException("Could not update contract.");
    }

    @GET
    @Path("{id}")
    @Override
    public Customer get(@PathParam("id") long id) throws JSONException, ValidationException
    {
        if(service.exists(id))
        {
            return service.get(id);
        }

        throw new RuntimeException("Could not find entity with id: " + id);
    }

    @Override
    public List<Customer> list() throws JSONException, ValidationException
    {
        return service.list();
    }

    @DELETE
    @Path("{id}")
    @Override
    public Response delete(@PathParam("id") long id) throws ServiceException
    {
        Customer customer = service.get(id);
        if(customer == null)
        {
            return Response.noContent().build();
        }
        if(service.delete(customer))
        {
            return Response.ok().build();
        }
        throw new RuntimeException("Could not delete entity with id: " + id);
    }
}

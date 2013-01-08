package ee.ttu.core.rest.resources;

import java.util.List;

import javax.ws.rs.DELETE;
import javax.ws.rs.GET;
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
import ee.ttu.core.rest.model.CustomerAddress;
import ee.ttu.core.rest.service.ICustomerAddressService;

@Component
@Path("/customer/{customerId}/address")
public class CustomerAddressResource extends BaseResource<CustomerAddress>
{
    @Autowired
    private ICustomerAddressService service;

    @Context
    UriInfo uriInfo;

    @GET
    public String getResource()
    {
        return uriInfo.getAbsolutePath().toASCIIString();
    }

    @Override
    public Response create(CustomerAddress customerAddress) throws JSONException,
            ValidationException
    {
        if(service.create(customerAddress))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.created(ub.build()).entity(customerAddress).build();
        }

        throw new RuntimeException("Could not save contract.");
    }

    @PUT
    @Path("{id}")
    @Override
    public Response update(@PathParam("id") long id, CustomerAddress customerAddress)
            throws JSONException, ValidationException
    {
        if(!service.exists(id))
        {
            return Response.noContent().build();
        }
        
        Long customerId = Long.valueOf(uriInfo.getQueryParameters().get("customerId").toString());

        customerAddress.setCustomerId(customerId);
        customerAddress.setId(id);
        if(service.update(customerAddress))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.created(ub.build()).entity(customerAddress).build();
        }

        throw new RuntimeException("Could not update contract.");
    }

    @GET
    @Path("{id}")
    @Override
    public CustomerAddress get(@PathParam("id") long id) throws JSONException, ValidationException
    {
        if(service.exists(id))
        {
            return service.get(id);
        }

        throw new RuntimeException("Could not find entity with id: " + id);
    }

    @Override
    public List<CustomerAddress> list() throws JSONException, ValidationException
    {
        return service.list();
    }

    @DELETE
    @Path("{id}")
    @Override
    public Response delete(@PathParam("id") long id) throws ServiceException
    {
        CustomerAddress ca = service.get(id);
        if(ca == null)
        {
            return Response.noContent().build();
        }
        if(service.delete(ca))
        {
            return Response.ok().build();
        }
        throw new RuntimeException("Could not delete entity with id: " + id);
    }
}

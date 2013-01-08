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
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import ee.ttu.core.rest.exception.ServiceException;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.Contract;
import ee.ttu.core.rest.service.IContractService;

@Component
@Path("/contract")
public class ContractResource extends BaseResource<Contract>
{
    protected Logger log = LoggerFactory.getLogger(ContractResource.class);

    @Autowired
    private IContractService service;

    @Context
    UriInfo uriInfo;

    @GET
    public String getResource()
    {
        return uriInfo.getAbsolutePath().toASCIIString();
    }

    @POST
    @Override
    public Response create(Contract contract) throws JSONException, ValidationException
    {
        if(service.create(contract))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.created(ub.path(String.valueOf(contract.getId())).build()).entity(contract).build();
        }

        throw new RuntimeException("Could not save contract.");
    }

    @PUT
    @Path("{id}")
    @Override
    public Response update(@PathParam("id") long id, Contract contract) throws JSONException,
            ValidationException
    {
        if (!service.exists(id))
        {
            return Response.noContent().build();
        }
        
        contract.setId(id);
        if(service.update(contract))
        {
            UriBuilder ub = uriInfo.getAbsolutePathBuilder();
            return Response.ok(ub.path(String.valueOf(contract.getId())).build()).entity(contract).build();
        }

        throw new RuntimeException("Could not update contract.");
    }
    
    @GET
    @Path("{id}")
    @Override
    public Contract get(@PathParam("id") long id) throws JSONException, ValidationException
    {
        if(service.exists(id))
        {
            return service.get(id);
        }

        throw new RuntimeException("Could not find entity with id: " + id);
    }

    @Override
    public List<Contract> list() throws JSONException, ValidationException
    {
        return service.list();
    }
    
    @DELETE
    @Path("{id}")
    @Override
    public Response delete(@PathParam("id") long id) throws ServiceException
    {
        Contract contract = service.get(id);
        if(contract == null)
        {
            return Response.noContent().build();
        }
        if(service.delete(contract))
        {
            return Response.ok().build();
        }
        throw new RuntimeException("Could not delete entity with id: " + id);
    }
}

package ee.ttu.core.rest.dao.impl;

import org.springframework.beans.factory.annotation.Qualifier;

import ee.ttu.core.rest.dao.ICustomerAddressDao;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.CustomerAddress;

@Qualifier("customerAddressDao")
public class CustomerAddressDao extends GenericDao<CustomerAddress> implements ICustomerAddressDao
{
    @Override
    public void validate(CustomerAddress entity) throws ValidationException
    {
        // TODO Auto-generated method stub

    }
}

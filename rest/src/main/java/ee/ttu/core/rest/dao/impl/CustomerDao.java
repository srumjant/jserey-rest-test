package ee.ttu.core.rest.dao.impl;

import org.springframework.beans.factory.annotation.Qualifier;

import ee.ttu.core.rest.dao.ICustomerDao;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.Customer;

@Qualifier("customerDao")
public class CustomerDao extends GenericDao<Customer> implements ICustomerDao
{
    @Override
    public void validate(Customer entity) throws ValidationException
    {
        // TODO Auto-generated method stub

    }
}

package ee.ttu.core.rest.dao.impl;

import org.springframework.beans.factory.annotation.Qualifier;

import ee.ttu.core.rest.dao.IContractDao;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.Contract;

@Qualifier("contractDao")
public class ContractDao extends GenericDao<Contract> implements IContractDao
{
    @Override
    public void validate(Contract entity) throws ValidationException
    {
        // TODO Auto-generated method stub

    }

}

package ee.ttu.core.rest.service.impl;

import org.springframework.beans.factory.annotation.Qualifier;

import ee.ttu.core.rest.dao.IContractDao;
import ee.ttu.core.rest.model.Contract;
import ee.ttu.core.rest.service.IContractService;

@Qualifier("contractService")
public class ContractService extends BaseEntityService<IContractDao, Contract> implements
        IContractService
{

}

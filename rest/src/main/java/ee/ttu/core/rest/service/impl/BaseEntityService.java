package ee.ttu.core.rest.service.impl;

import java.util.List;

import org.springframework.transaction.annotation.Transactional;

import ee.ttu.core.rest.dao.IGenericDao;
import ee.ttu.core.rest.exception.ServiceException;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.BaseEntity;
import ee.ttu.core.rest.service.IBaseEntityService;

@Transactional(readOnly = true)
public abstract class BaseEntityService<I extends IGenericDao<T>, T extends BaseEntity> implements
        IBaseEntityService<T>
{
    protected I dao;

    @Override
    public boolean exists(Long id)
    {
        return dao.exists(id);
    }

    @Override
    public T get(Long id)
    {
        return dao.get(id);
    }

    @Override
    public List<T> list()
    {
        return dao.list();
    }

    @Override
    public List<T> list(int page, int pageSize)
    {
        return dao.list(page, pageSize);
    }

    @Override
    @Transactional(rollbackFor = Exception.class)
    public boolean create(T entity) throws ValidationException
    {
        return dao.createOrUpdate(entity);
    }

    @Override
    @Transactional(rollbackFor = Exception.class)
    public boolean update(T entity) throws ValidationException
    {
        return dao.createOrUpdate(entity);
    }

    @Override
    @Transactional(rollbackFor = Exception.class)
    public boolean delete(T entity) throws ServiceException
    {
        return dao.delete(entity);
    }

    public void setDao(I dao)
    {
        this.dao = dao;
    }
}

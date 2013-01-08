package ee.ttu.core.rest.service;

import java.util.List;

import ee.ttu.core.rest.exception.ServiceException;
import ee.ttu.core.rest.exception.ValidationException;

public interface IBaseEntityService<T>
{
    boolean create(T entity) throws ValidationException;
    
    boolean update(T entity) throws ValidationException;

    boolean exists(Long id);

    T get(Long id);

    List<T> list();

    List<T> list(int page, int pageSize);
    
    boolean delete(T entity) throws ServiceException;

}

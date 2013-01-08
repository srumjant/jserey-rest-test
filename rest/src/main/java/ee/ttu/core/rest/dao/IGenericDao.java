package ee.ttu.core.rest.dao;

import java.util.List;

import org.hibernate.criterion.DetachedCriteria;

import ee.ttu.core.rest.exception.ValidationException;

public interface IGenericDao<T>
{
    public boolean exists(Long id);

    public void validate(T entity) throws ValidationException;

    public T get(Long id);

    public T get(Long id, String fetchProfile);

    public List<T> list();

    public List<T> list(int page, int pageSize);

    public List<T> list(DetachedCriteria criteria);

    public List<T> list(DetachedCriteria criteria, String fetchProfile);

    public List<T> list(DetachedCriteria criteria, String fetchProfile, int page, int pageSize);

    public String getDefaultFetchProfile();

    public boolean createOrUpdate(T entity) throws ValidationException;

    public boolean delete(T entity);
}

package ee.ttu.core.rest.dao.impl;

import java.lang.reflect.ParameterizedType;
import java.util.Date;
import java.util.List;

import org.hibernate.criterion.DetachedCriteria;
import org.hibernate.criterion.Order;
import org.hibernate.criterion.Restrictions;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.dao.DataAccessException;

import ee.ttu.core.rest.dao.IGenericDao;
import ee.ttu.core.rest.exception.ErrorConstants;
import ee.ttu.core.rest.exception.ValidationException;
import ee.ttu.core.rest.model.BaseEntity;
import ee.ttu.core.rest.service.IErrorService;

public abstract class GenericDao<T> extends CustomHibernateDaoSupport implements IGenericDao<T>
{
    @Autowired
    private IErrorService errorService;
    private Logger log;
    private Class<T> clazz;

    @SuppressWarnings("unchecked")
    public GenericDao()
    {
        clazz = (Class<T>)((ParameterizedType)getClass().getGenericSuperclass())
                .getActualTypeArguments()[0];
        log = LoggerFactory.getLogger(clazz);
    }

    public String getDefaultFetchProfile()
    {
        return null;
    }

    public boolean exists(Long id)
    {
        DetachedCriteria criteria = createDetachedCriteria();
        criteria.add(Restrictions.eq(BaseEntity.ID, id));
        return getHibernateTemplate().findByCriteria(criteria).size() > 0;
    }

    public List<T> list()
    {
        return list(createDetachedCriteria(), null);
    }

    public List<T> list(int page, int pageSize)
    {
        return list(createDetachedCriteria(), null, page, pageSize);
    }

    public List<T> list(DetachedCriteria criteria)
    {
        return list(criteria, null);
    }

    public List<T> list(DetachedCriteria criteria, String fetchProfile)
    {
        return list(criteria, fetchProfile, 0, 0);
    }

    @SuppressWarnings("unchecked")
    public List<T> list(DetachedCriteria criteria, String fetchProfile, int page, int pageSize)
    {
        setFetchProfile(fetchProfile);
        int firstResult = page * pageSize;
        criteria.addOrder(Order.asc(BaseEntity.ID));
        return getHibernateTemplate().findByCriteria(criteria, firstResult, pageSize);
    }

    protected void setFetchProfile(String fetchProfile)
    {
        if(fetchProfile == null)
        {
            if(getDefaultFetchProfile() != null)
            {
                setFetchProfile(getDefaultFetchProfile());
                return;
            }
            return;
        }
        getSessionFactory().getCurrentSession().enableFetchProfile(fetchProfile);
    }

    public T get(Long id)
    {
        return get(id, null);
    }

    public T get(Long id, String fetchProfile)
    {
        setFetchProfile(fetchProfile);
        return getHibernateTemplate().get(clazz, id);
    }

    @SuppressWarnings("unchecked")
    public T get(DetachedCriteria criteria, String fetchProfile)
    {
        setFetchProfile(fetchProfile);
        List<T> list = getHibernateTemplate().findByCriteria(criteria);
        if(list.isEmpty())
        {
            return null;
        }
        return list.get(0);
    }

    protected DetachedCriteria createDetachedCriteria()
    {
        return createDetachedCriteria(clazz);
    }

    protected DetachedCriteria createDetachedCriteria(Class<?> clazz)
    {
        return DetachedCriteria.forClass(clazz);
    }

    public boolean createOrUpdate(T entity) throws ValidationException
    {
        try
        {
            validate(entity);
            getHibernateTemplate().saveOrUpdate(entity);
            return true;
        }
        catch(DataAccessException e)
        {
            log.error("Error saving entity: ", e);
            return false;
        }
    }

    public boolean delete(T entity)
    {
        try
        {
            getHibernateTemplate().delete(entity);
            return true;
        }
        catch(DataAccessException e)
        {
            log.error("Error deleting entity: ", e);
            return false;
        }
    }

    public abstract void validate(T entity) throws ValidationException;

    protected void addValidateError(ValidationException e, String field, String msg)
    {
        e.addError(field, msg);
    }

    protected void validateEntityExists(ValidationException e, String field, String entityLabel,
            String fieldLabel, boolean exists)
    {
        if(exists)
        {
            addValidateError(e, field, errorService.getErrorMsg(
                    ErrorConstants.VALIDATE_ENTITY_EXISTS, entityLabel, fieldLabel));
        }
    }

    protected void validateNotNull(ValidationException e, String field, String fieldLabel,
            Object value)
    {
        if(value == null)
        {
            addValidateError(e, field,
                    errorService.getErrorMsg(ErrorConstants.VALIDATE_FIELD_IS_EMPTY, fieldLabel));
        }
    }

    protected void validateNotEmpty(ValidationException e, String field, String fieldLabel,
            String value)
    {
        if(value == null || value.trim().length() < 1)
        {
            addValidateError(e, field,
                    errorService.getErrorMsg(ErrorConstants.VALIDATE_FIELD_IS_EMPTY, fieldLabel));
        }
    }

    protected void validateStringLength(ValidationException e, String field, String fieldLabel,
            String value, int maxLength)
    {
        if(value != null && value.length() > maxLength)
        {
            addValidateError(e, field, errorService.getErrorMsg(
                    ErrorConstants.VALIDATE_FIELD_LENGTH_TOO_LONG, fieldLabel, maxLength));
        }
    }

    protected void validateDateStartGreaterEnd(ValidationException e, String field,
            String fieldLabelStart, String fieldLabelEnd, Date start, Date end)
    {
        if(start != null && end != null)
        {
            if(0 < start.compareTo(end))
            {
                addValidateError(e, field, errorService.getErrorMsg(
                        ErrorConstants.VALIDATE_DATE_VALUE_START_GREATER_END_ERROR,
                        fieldLabelStart, fieldLabelEnd));
                return;
            }
        }
    }
}

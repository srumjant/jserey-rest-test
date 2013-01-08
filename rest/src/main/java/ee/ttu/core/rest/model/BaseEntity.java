package ee.ttu.core.rest.model;

import java.io.Serializable;
import java.net.URI;

public abstract class BaseEntity implements Serializable
{
    protected static final long serialVersionUID = 2197424282461845498L;

    public static final String ID = "id";

    public abstract long getId();

    public abstract void setId(long id);

    public abstract String toString();

    public abstract void setHref(URI href);

    public abstract URI getHref();
}

package ee.ttu.core.rest.model;

import java.net.URI;
import java.util.Date;
import java.util.Set;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.Transient;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlTransient;

import org.hibernate.annotations.GenericGenerator;
import org.hibernate.annotations.Parameter;

import com.sun.jersey.server.linking.Binding;
import com.sun.jersey.server.linking.Ref;

import ee.ttu.core.rest.resources.CustomerResource;

@Entity
@Table(name = "customer")
@XmlRootElement
@GenericGenerator(name = "customer_id", strategy = "sequence", parameters =
{@Parameter(name = "sequence", value = "public.customer_id")})
public class Customer extends BaseEntity
{
    private static final long serialVersionUID = 1643545095291657940L;

    private long id;
    private String firstName;
    private String lastName;
    private String identityCode;
    private String note;
    private Set<CustomerAddress> customerAddresses;
    private Date birthDate;
    private Date created;
    private Date updated;

    @Ref(resource = CustomerResource.class,
            value = "{id}",
            bindings = { @Binding(name = "id", value = "${instance.id}") }
    )
    private URI href;
    
    public Customer()
    {
    }

    @Id
    @Override
    @GeneratedValue(strategy = GenerationType.SEQUENCE, generator = "customer_id")
    @Column(name = "customer")
    public long getId()
    {
        return id;
    }

    public void setId(long id)
    {
        this.id = id;
    }

    @Column(name = "first_name")
    public String getFirstName()
    {
        return firstName;
    }

    public void setFirstName(String firstName)
    {
        this.firstName = firstName;
    }

    @Column(name = "last_name")
    public String getLastName()
    {
        return lastName;
    }

    public void setLastName(String lastName)
    {
        this.lastName = lastName;
    }

    @Column(name = "identity_code")
    public String getIdentityCode()
    {
        return identityCode;
    }

    public void setIdentityCode(String identityCode)
    {
        this.identityCode = identityCode;
    }

    public String getNote()
    {
        return note;
    }

    public void setNote(String note)
    {
        this.note = note;
    }

    @Column(name = "birth_date")
    public Date getBirthDate()
    {
        return birthDate;
    }

    public void setBirthDate(Date birthDate)
    {
        this.birthDate = birthDate;
    }

    public Date getCreated()
    {
        return created;
    }

    public void setCreated(Date created)
    {
        this.created = created;
    }

    public Date getUpdated()
    {
        return updated;
    }

    public void setUpdated(Date updated)
    {
        this.updated = updated;
    }

    @XmlTransient
    @OneToMany(fetch = FetchType.LAZY)
    @Transient
    public Set<CustomerAddress> getCustomerAddresses()
    {
        return customerAddresses;
    }

    public void setCustomerAddresses(Set<CustomerAddress> customerAddresses)
    {
        this.customerAddresses = customerAddresses;
    }

    @Override
    public String toString()
    {
        return "Customer [id=" + id + ", firstName=" + firstName + ", lastName=" + lastName
                + ", identityCode=" + identityCode + ", note=" + note + ", birthDate=" + birthDate
                + ", created=" + created + ", updated=" + updated + "]";
    }

    @Override
    public void setHref(URI href)
    {
        this.href = href;
    }

    @Transient
    @Override
    public URI getHref()
    {
        return href;
    }
}

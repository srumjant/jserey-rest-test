package ee.ttu.core.rest.model;

import java.net.URI;
import java.util.Date;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToOne;
import javax.persistence.Table;
import javax.persistence.Transient;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlTransient;

import org.hibernate.annotations.GenericGenerator;
import org.hibernate.annotations.Parameter;

import com.sun.jersey.server.linking.Binding;
import com.sun.jersey.server.linking.Ref;
import com.sun.xml.txw2.annotation.XmlElement;

import ee.ttu.core.rest.resources.ContractResource;

@Entity
@Table(name = "cst_address")
@XmlRootElement
@GenericGenerator(name = "s_cst_address", strategy = "sequence", parameters =
{@Parameter(name = "sequence", value = "public.s_cst_address")})
public class CustomerAddress extends BaseEntity
{
    private static final long serialVersionUID = -4119058464373348715L;

    private long id;
    private Customer customer;
    private long customerId;
    private String house;
    private String address;
    private String county;
    private String parish;
    private String townCounty;
    private String mobile;
    private String phone;
    private String sms;
    private String email;
    private String note;
    private String country;
    private Date created;
    private Date updated;

    @Ref(resource = ContractResource.class,
            value = "{id}",
            bindings = { @Binding(name = "id", value = "${instance.id}") }
    )
    private URI href;

    @Id
    @Override
    @GeneratedValue(strategy = GenerationType.SEQUENCE, generator = "s_cst_address")
    @Column(name = "cst_address")
    public long getId()
    {
        return id;
    }

    public void setId(long id)
    {
        this.id = id;
    }

    @XmlTransient
    @OneToOne
    @JoinColumn(name = "customer")
    public Customer getCustomer()
    {
        return customer;
    }

    public void setCustomer(Customer customer)
    {
        this.customer = customer;
        if(customer != null)
        {
            setCustomerId(customer.getId());
        }
    }

    @Transient
    @XmlElement("customer")
    public long getCustomerId()
    {
        return customerId;
    }

    public void setCustomerId(long customerId)
    {
        this.customerId = customerId;
    }

    public String getHouse()
    {
        return house;
    }

    public void setHouse(String house)
    {
        this.house = house;
    }

    public String getAddress()
    {
        return address;
    }

    public void setAddress(String address)
    {
        this.address = address;
    }

    public String getCounty()
    {
        return county;
    }

    public void setCounty(String county)
    {
        this.county = county;
    }

    public String getParish()
    {
        return parish;
    }

    public void setParish(String parish)
    {
        this.parish = parish;
    }

    @Column(name = "town_county")
    public String getTownCounty()
    {
        return townCounty;
    }

    public void setTownCounty(String townCounty)
    {
        this.townCounty = townCounty;
    }

    public String getMobile()
    {
        return mobile;
    }

    public void setMobile(String mobile)
    {
        this.mobile = mobile;
    }

    public String getPhone()
    {
        return phone;
    }

    public void setPhone(String phone)
    {
        this.phone = phone;
    }

    public String getSms()
    {
        return sms;
    }

    public void setSms(String sms)
    {
        this.sms = sms;
    }

    public String getEmail()
    {
        return email;
    }

    public void setEmail(String email)
    {
        this.email = email;
    }

    public String getNote()
    {
        return note;
    }

    public void setNote(String note)
    {
        this.note = note;
    }

    public String getCountry()
    {
        return country;
    }

    public void setCountry(String country)
    {
        this.country = country;
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

    @Override
    public String toString()
    {
        return "CustomerAddress [id=" + id + ", customerId=" + customerId + ", house=" + house
                + ", address=" + address + ", county=" + county + ", parish=" + parish
                + ", townCounty=" + townCounty + ", mobile=" + mobile + ", phone=" + phone
                + ", sms=" + sms + ", email=" + email + ", note=" + note + ", country=" + country
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

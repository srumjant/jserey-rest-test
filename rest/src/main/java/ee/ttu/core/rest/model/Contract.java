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
@Table(name = "contract")
@XmlRootElement
@GenericGenerator(name = "s_contract", strategy = "sequence", parameters =
{@Parameter(name = "sequence", value = "public.s_contract")})
public class Contract extends BaseEntity
{
    private static final long serialVersionUID = 9002355341038188878L;

    private long id;
    private Long contractNumber;
    private String name;
    private String description;
    private Date validFrom;
    private Date validTo;
    private Contract parentContract;
    private Long parentConractId;
    private String conditions;
    private String note;

    @Ref(resource = ContractResource.class, 
            value = "{id}",
            bindings = { @Binding(name = "id", value = "${instance.id}") }
    )
    private URI href;

    public Contract()
    {
    }

    @Id
    @Override
    @GeneratedValue(strategy = GenerationType.SEQUENCE, generator = "s_contract")
    @Column(name = "contract")
    public long getId()
    {
        return id;
    }

    public void setId(long id)
    {
        this.id = id;
    }

    @Column(name = "cnt_number")
    public Long getContractNumber()
    {
        return contractNumber;
    }

    public void setContractNumber(Long contractNumber)
    {
        this.contractNumber = contractNumber;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public String getDescription()
    {
        return description;
    }

    public void setDescription(String description)
    {
        this.description = description;
    }

    @Column(name = "valid_from")
    public Date getValidFrom()
    {
        return validFrom;
    }

    public void setValidFrom(Date validFrom)
    {
        this.validFrom = validFrom;
    }

    @Column(name = "valid_to")
    public Date getValidTo()
    {
        return validTo;
    }

    public void setValidTo(Date validTo)
    {
        this.validTo = validTo;
    }

    @XmlTransient
    @OneToOne
    @JoinColumn(name = "parent_cnt")
    public Contract getParentContract()
    {
        return parentContract;
    }

    public void setParentContract(Contract parentContract)
    {
        this.parentContract = parentContract;
        if(parentContract != null)
        {
            setParentConractId(parentContract.getId());
        }
    }

    @Transient
    @XmlElement("parentContract")
    public Long getParentConractId()
    {
        return parentConractId;
    }

    public void setParentConractId(Long parentConractId)
    {
        this.parentConractId = parentConractId;
    }

    public String getConditions()
    {
        return conditions;
    }

    public void setConditions(String conditions)
    {
        this.conditions = conditions;
    }

    public String getNote()
    {
        return note;
    }

    public void setNote(String note)
    {
        this.note = note;
    }

    @Override
    public String toString()
    {
        return "Contract [id=" + id + ", contractNumber=" + contractNumber + ", name=" + name
                + ", description=" + description + ", validFrom=" + validFrom + ", validTo="
                + validTo + ", parentConractId=" + parentConractId + ", conditions=" + conditions
                + ", note=" + note + "]";
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

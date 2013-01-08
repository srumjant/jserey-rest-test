package ee.ttu.core.rest.mapper;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.TimeZone;

import javax.ws.rs.ext.ContextResolver;
import javax.ws.rs.ext.Provider;

import org.codehaus.jackson.map.ObjectMapper;
import org.codehaus.jackson.map.SerializationConfig;
import org.springframework.stereotype.Component;

@Component
@Provider
public class ObjectMapperProvider implements ContextResolver<ObjectMapper>
{
    private static final String DATE_FORMAT = "yyyy-MM-dd'T'HH:mm:sss'Z'";

    public ObjectMapper getContext(Class<?> type)
    {
        // create the objectMapper.
        ObjectMapper objectMapper = new ObjectMapper();
        // configure the object mapper here, eg.
        objectMapper.configure(SerializationConfig.Feature.WRITE_DATES_AS_TIMESTAMPS, false);
        // set up ISO 8601 date/time stamp format:
        final DateFormat df = new SimpleDateFormat(DATE_FORMAT);
        df.setTimeZone(TimeZone.getTimeZone("UTC"));
        objectMapper.getDeserializationConfig().setDateFormat(df);

        return objectMapper;
    }
}
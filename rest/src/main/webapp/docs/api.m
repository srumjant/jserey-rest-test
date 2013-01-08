#import "api.h"
#ifndef DEF_APINS0ErrorObject_M
#define DEF_APINS0ErrorObject_M

/**
 * (no documentation provided)
 */
@implementation APINS0ErrorObject

/**
 * (no documentation provided)
 */
- (NSString *) message
{
  return _message;
}

/**
 * (no documentation provided)
 */
- (void) setMessage: (NSString *) newMessage
{
  [newMessage retain];
  [_message release];
  _message = newMessage;
}

- (void) dealloc
{
  [self setMessage: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  APINS0ErrorObject *_aPINS0ErrorObject;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _aPINS0ErrorObject = (APINS0ErrorObject *) [APINS0ErrorObject readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _aPINS0ErrorObject;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation APINS0ErrorObject */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface APINS0ErrorObject (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface APINS0ErrorObject (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation APINS0ErrorObject (JAXB)

/**
 * Read an instance of APINS0ErrorObject from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of APINS0ErrorObject defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  APINS0ErrorObject *_aPINS0ErrorObject = [[APINS0ErrorObject alloc] init];
  NS_DURING
  {
    [_aPINS0ErrorObject initWithReader: reader];
  }
  NS_HANDLER
  {
    _aPINS0ErrorObject = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_aPINS0ErrorObject autorelease];
  return _aPINS0ErrorObject;
}

/**
 * Initialize this instance of APINS0ErrorObject according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of APINS0ErrorObject to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a APINS0ErrorObject from an XML reader. The element to be read is
 * "error".
 *
 * @param reader The XML reader.
 * @return The APINS0ErrorObject.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  APINS0ErrorObject *_errorObject = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element error."];
    }
  }

  if (xmlStrcmp(BAD_CAST "error", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}error.");
#endif
    _errorObject = (APINS0ErrorObject *)[APINS0ErrorObject readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}error.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0ErrorObject. Expected element error. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0ErrorObject. Expected element error. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _errorObject;
}

/**
 * Writes this APINS0ErrorObject to XML under element name "error".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this APINS0ErrorObject to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "error", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}error. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}errorObject for root element {}error...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}errorObject for root element {}error...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}error. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "message", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMessage: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self message]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "message", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}message."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}message...");
#endif
    [[self message] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}message...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}message."];
    }
  }
}
@end /* implementation APINS0ErrorObject (JAXB) */

#endif /* DEF_APINS0ErrorObject_M */
#ifndef DEF_APINS0BaseEntity_M
#define DEF_APINS0BaseEntity_M

/**
 * (no documentation provided)
 */
@implementation APINS0BaseEntity

/**
 * (no documentation provided)
 */
- (long) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier
{
  _identifier = newIdentifier;
}

- (void) dealloc
{
  [super dealloc];
}
@end /* implementation APINS0BaseEntity */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface APINS0BaseEntity (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface APINS0BaseEntity (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation APINS0BaseEntity (JAXB)

/**
 * Read an instance of APINS0BaseEntity from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of APINS0BaseEntity defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  APINS0BaseEntity *_aPINS0BaseEntity = [[APINS0BaseEntity alloc] init];
  NS_DURING
  {
    [_aPINS0BaseEntity initWithReader: reader];
  }
  NS_HANDLER
  {
    _aPINS0BaseEntity = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_aPINS0BaseEntity autorelease];
  return _aPINS0BaseEntity;
}

/**
 * Initialize this instance of APINS0BaseEntity according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of APINS0BaseEntity to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdentifier: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_identifier);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}id."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
}
@end /* implementation APINS0BaseEntity (JAXB) */

#endif /* DEF_APINS0BaseEntity_M */
#ifndef DEF_APINS0CustomerAddress_M
#define DEF_APINS0CustomerAddress_M

/**
 * (no documentation provided)
 */
@implementation APINS0CustomerAddress

/**
 * (no documentation provided)
 */
- (long) customerId
{
  return _customerId;
}

/**
 * (no documentation provided)
 */
- (void) setCustomerId: (long) newCustomerId
{
  _customerId = newCustomerId;
}

/**
 * (no documentation provided)
 */
- (NSString *) house
{
  return _house;
}

/**
 * (no documentation provided)
 */
- (void) setHouse: (NSString *) newHouse
{
  [newHouse retain];
  [_house release];
  _house = newHouse;
}

/**
 * (no documentation provided)
 */
- (NSString *) address
{
  return _address;
}

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSString *) newAddress
{
  [newAddress retain];
  [_address release];
  _address = newAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) county
{
  return _county;
}

/**
 * (no documentation provided)
 */
- (void) setCounty: (NSString *) newCounty
{
  [newCounty retain];
  [_county release];
  _county = newCounty;
}

/**
 * (no documentation provided)
 */
- (NSString *) parish
{
  return _parish;
}

/**
 * (no documentation provided)
 */
- (void) setParish: (NSString *) newParish
{
  [newParish retain];
  [_parish release];
  _parish = newParish;
}

/**
 * (no documentation provided)
 */
- (NSString *) townCounty
{
  return _townCounty;
}

/**
 * (no documentation provided)
 */
- (void) setTownCounty: (NSString *) newTownCounty
{
  [newTownCounty retain];
  [_townCounty release];
  _townCounty = newTownCounty;
}

/**
 * (no documentation provided)
 */
- (NSString *) mobile
{
  return _mobile;
}

/**
 * (no documentation provided)
 */
- (void) setMobile: (NSString *) newMobile
{
  [newMobile retain];
  [_mobile release];
  _mobile = newMobile;
}

/**
 * (no documentation provided)
 */
- (NSString *) phone
{
  return _phone;
}

/**
 * (no documentation provided)
 */
- (void) setPhone: (NSString *) newPhone
{
  [newPhone retain];
  [_phone release];
  _phone = newPhone;
}

/**
 * (no documentation provided)
 */
- (NSString *) sms
{
  return _sms;
}

/**
 * (no documentation provided)
 */
- (void) setSms: (NSString *) newSms
{
  [newSms retain];
  [_sms release];
  _sms = newSms;
}

/**
 * (no documentation provided)
 */
- (NSString *) email
{
  return _email;
}

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail
{
  [newEmail retain];
  [_email release];
  _email = newEmail;
}

/**
 * (no documentation provided)
 */
- (NSString *) note
{
  return _note;
}

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote
{
  [newNote retain];
  [_note release];
  _note = newNote;
}

/**
 * (no documentation provided)
 */
- (NSString *) country
{
  return _country;
}

/**
 * (no documentation provided)
 */
- (void) setCountry: (NSString *) newCountry
{
  [newCountry retain];
  [_country release];
  _country = newCountry;
}

/**
 * (no documentation provided)
 */
- (NSDate *) created
{
  return _created;
}

/**
 * (no documentation provided)
 */
- (void) setCreated: (NSDate *) newCreated
{
  [newCreated retain];
  [_created release];
  _created = newCreated;
}

/**
 * (no documentation provided)
 */
- (NSDate *) updated
{
  return _updated;
}

/**
 * (no documentation provided)
 */
- (void) setUpdated: (NSDate *) newUpdated
{
  [newUpdated retain];
  [_updated release];
  _updated = newUpdated;
}

- (void) dealloc
{
  [self setHouse: nil];
  [self setAddress: nil];
  [self setCounty: nil];
  [self setParish: nil];
  [self setTownCounty: nil];
  [self setMobile: nil];
  [self setPhone: nil];
  [self setSms: nil];
  [self setEmail: nil];
  [self setNote: nil];
  [self setCountry: nil];
  [self setCreated: nil];
  [self setUpdated: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  APINS0CustomerAddress *_aPINS0CustomerAddress;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _aPINS0CustomerAddress = (APINS0CustomerAddress *) [APINS0CustomerAddress readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _aPINS0CustomerAddress;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation APINS0CustomerAddress */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface APINS0CustomerAddress (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface APINS0CustomerAddress (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation APINS0CustomerAddress (JAXB)

/**
 * Read an instance of APINS0CustomerAddress from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of APINS0CustomerAddress defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  APINS0CustomerAddress *_aPINS0CustomerAddress = [[APINS0CustomerAddress alloc] init];
  NS_DURING
  {
    [_aPINS0CustomerAddress initWithReader: reader];
  }
  NS_HANDLER
  {
    _aPINS0CustomerAddress = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_aPINS0CustomerAddress autorelease];
  return _aPINS0CustomerAddress;
}

/**
 * Initialize this instance of APINS0CustomerAddress according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of APINS0CustomerAddress to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a APINS0CustomerAddress from an XML reader. The element to be read is
 * "customerAddress".
 *
 * @param reader The XML reader.
 * @return The APINS0CustomerAddress.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  APINS0CustomerAddress *_customerAddress = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element customerAddress."];
    }
  }

  if (xmlStrcmp(BAD_CAST "customerAddress", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}customerAddress.");
#endif
    _customerAddress = (APINS0CustomerAddress *)[APINS0CustomerAddress readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}customerAddress.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0CustomerAddress. Expected element customerAddress. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0CustomerAddress. Expected element customerAddress. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _customerAddress;
}

/**
 * Writes this APINS0CustomerAddress to XML under element name "customerAddress".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this APINS0CustomerAddress to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customerAddress", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}customerAddress. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}customerAddress for root element {}customerAddress...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}customerAddress for root element {}customerAddress...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}customerAddress. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "customerId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setCustomerId: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "house", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}house of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}house of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setHouse: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "county", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}county of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}county of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCounty: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parish", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parish of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parish of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParish: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "townCounty", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}townCounty of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}townCounty of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTownCounty: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mobile", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mobile of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mobile of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMobile: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}phone of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhone: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "sms", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}sms of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}sms of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSms: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmail: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNote: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "country", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCountry: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "created", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setCreated: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "updated", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setUpdated: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customerId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}customerId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}customerId...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_customerId);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}customerId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}customerId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}customerId."];
    }
  }
  if ([self house]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "house", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}house."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}house...");
#endif
    [[self house] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}house...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}house."];
    }
  }
  if ([self address]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self address] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
  if ([self county]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "county", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}county."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}county...");
#endif
    [[self county] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}county...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}county."];
    }
  }
  if ([self parish]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parish", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parish."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parish...");
#endif
    [[self parish] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parish...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parish."];
    }
  }
  if ([self townCounty]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "townCounty", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}townCounty."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}townCounty...");
#endif
    [[self townCounty] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}townCounty...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}townCounty."];
    }
  }
  if ([self mobile]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mobile", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mobile."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mobile...");
#endif
    [[self mobile] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mobile...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mobile."];
    }
  }
  if ([self phone]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}phone."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}phone...");
#endif
    [[self phone] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}phone...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}phone."];
    }
  }
  if ([self sms]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sms", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}sms."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}sms...");
#endif
    [[self sms] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}sms...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}sms."];
    }
  }
  if ([self email]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}email."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}email...");
#endif
    [[self email] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}email...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}email."];
    }
  }
  if ([self note]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}note."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}note...");
#endif
    [[self note] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}note...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}note."];
    }
  }
  if ([self country]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "country", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}country."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}country...");
#endif
    [[self country] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}country...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}country."];
    }
  }
  if ([self created]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "created", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}created."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}created...");
#endif
    [[self created] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}created...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}created."];
    }
  }
  if ([self updated]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updated", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}updated."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}updated...");
#endif
    [[self updated] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}updated...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}updated."];
    }
  }
}
@end /* implementation APINS0CustomerAddress (JAXB) */

#endif /* DEF_APINS0CustomerAddress_M */
#ifndef DEF_APINS0Customer_M
#define DEF_APINS0Customer_M

/**
 * (no documentation provided)
 */
@implementation APINS0Customer

/**
 * (no documentation provided)
 */
- (NSString *) firstName
{
  return _firstName;
}

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName
{
  [newFirstName retain];
  [_firstName release];
  _firstName = newFirstName;
}

/**
 * (no documentation provided)
 */
- (NSString *) lastName
{
  return _lastName;
}

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName
{
  [newLastName retain];
  [_lastName release];
  _lastName = newLastName;
}

/**
 * (no documentation provided)
 */
- (NSString *) identityCode
{
  return _identityCode;
}

/**
 * (no documentation provided)
 */
- (void) setIdentityCode: (NSString *) newIdentityCode
{
  [newIdentityCode retain];
  [_identityCode release];
  _identityCode = newIdentityCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) note
{
  return _note;
}

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote
{
  [newNote retain];
  [_note release];
  _note = newNote;
}

/**
 * (no documentation provided)
 */
- (NSDate *) birthDate
{
  return _birthDate;
}

/**
 * (no documentation provided)
 */
- (void) setBirthDate: (NSDate *) newBirthDate
{
  [newBirthDate retain];
  [_birthDate release];
  _birthDate = newBirthDate;
}

/**
 * (no documentation provided)
 */
- (NSDate *) created
{
  return _created;
}

/**
 * (no documentation provided)
 */
- (void) setCreated: (NSDate *) newCreated
{
  [newCreated retain];
  [_created release];
  _created = newCreated;
}

/**
 * (no documentation provided)
 */
- (NSDate *) updated
{
  return _updated;
}

/**
 * (no documentation provided)
 */
- (void) setUpdated: (NSDate *) newUpdated
{
  [newUpdated retain];
  [_updated release];
  _updated = newUpdated;
}

- (void) dealloc
{
  [self setFirstName: nil];
  [self setLastName: nil];
  [self setIdentityCode: nil];
  [self setNote: nil];
  [self setBirthDate: nil];
  [self setCreated: nil];
  [self setUpdated: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  APINS0Customer *_aPINS0Customer;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _aPINS0Customer = (APINS0Customer *) [APINS0Customer readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _aPINS0Customer;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation APINS0Customer */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface APINS0Customer (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface APINS0Customer (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation APINS0Customer (JAXB)

/**
 * Read an instance of APINS0Customer from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of APINS0Customer defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  APINS0Customer *_aPINS0Customer = [[APINS0Customer alloc] init];
  NS_DURING
  {
    [_aPINS0Customer initWithReader: reader];
  }
  NS_HANDLER
  {
    _aPINS0Customer = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_aPINS0Customer autorelease];
  return _aPINS0Customer;
}

/**
 * Initialize this instance of APINS0Customer according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of APINS0Customer to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a APINS0Customer from an XML reader. The element to be read is
 * "customer".
 *
 * @param reader The XML reader.
 * @return The APINS0Customer.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  APINS0Customer *_customer = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element customer."];
    }
  }

  if (xmlStrcmp(BAD_CAST "customer", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}customer.");
#endif
    _customer = (APINS0Customer *)[APINS0Customer readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}customer.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0Customer. Expected element customer. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0Customer. Expected element customer. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _customer;
}

/**
 * Writes this APINS0Customer to XML under element name "customer".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this APINS0Customer to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customer", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}customer. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}customer for root element {}customer...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}customer for root element {}customer...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}customer. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFirstName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLastName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "identityCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}identityCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}identityCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentityCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNote: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "birthDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}birthDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}birthDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setBirthDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "created", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setCreated: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "updated", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setUpdated: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self firstName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}firstName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}firstName...");
#endif
    [[self firstName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}firstName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}firstName."];
    }
  }
  if ([self lastName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastName...");
#endif
    [[self lastName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastName."];
    }
  }
  if ([self identityCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "identityCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}identityCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}identityCode...");
#endif
    [[self identityCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}identityCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}identityCode."];
    }
  }
  if ([self note]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}note."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}note...");
#endif
    [[self note] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}note...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}note."];
    }
  }
  if ([self birthDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "birthDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}birthDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}birthDate...");
#endif
    [[self birthDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}birthDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}birthDate."];
    }
  }
  if ([self created]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "created", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}created."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}created...");
#endif
    [[self created] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}created...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}created."];
    }
  }
  if ([self updated]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updated", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}updated."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}updated...");
#endif
    [[self updated] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}updated...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}updated."];
    }
  }
}
@end /* implementation APINS0Customer (JAXB) */

#endif /* DEF_APINS0Customer_M */
#ifndef DEF_APINS0Contract_M
#define DEF_APINS0Contract_M

/**
 * (no documentation provided)
 */
@implementation APINS0Contract

/**
 * (no documentation provided)
 */
- (long *) contractNumber
{
  return _contractNumber;
}

/**
 * (no documentation provided)
 */
- (void) setContractNumber: (long *) newContractNumber
{
  if (_contractNumber != NULL) {
    free(_contractNumber);
  }
  _contractNumber = newContractNumber;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (NSDate *) validFrom
{
  return _validFrom;
}

/**
 * (no documentation provided)
 */
- (void) setValidFrom: (NSDate *) newValidFrom
{
  [newValidFrom retain];
  [_validFrom release];
  _validFrom = newValidFrom;
}

/**
 * (no documentation provided)
 */
- (NSDate *) validTo
{
  return _validTo;
}

/**
 * (no documentation provided)
 */
- (void) setValidTo: (NSDate *) newValidTo
{
  [newValidTo retain];
  [_validTo release];
  _validTo = newValidTo;
}

/**
 * (no documentation provided)
 */
- (long *) parentConractId
{
  return _parentConractId;
}

/**
 * (no documentation provided)
 */
- (void) setParentConractId: (long *) newParentConractId
{
  if (_parentConractId != NULL) {
    free(_parentConractId);
  }
  _parentConractId = newParentConractId;
}

/**
 * (no documentation provided)
 */
- (NSString *) conditions
{
  return _conditions;
}

/**
 * (no documentation provided)
 */
- (void) setConditions: (NSString *) newConditions
{
  [newConditions retain];
  [_conditions release];
  _conditions = newConditions;
}

/**
 * (no documentation provided)
 */
- (NSString *) note
{
  return _note;
}

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote
{
  [newNote retain];
  [_note release];
  _note = newNote;
}

- (void) dealloc
{
  [self setContractNumber: NULL];
  [self setName: nil];
  [self setDescription: nil];
  [self setValidFrom: nil];
  [self setValidTo: nil];
  [self setParentConractId: NULL];
  [self setConditions: nil];
  [self setNote: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  APINS0Contract *_aPINS0Contract;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _aPINS0Contract = (APINS0Contract *) [APINS0Contract readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _aPINS0Contract;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation APINS0Contract */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface APINS0Contract (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface APINS0Contract (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation APINS0Contract (JAXB)

/**
 * Read an instance of APINS0Contract from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of APINS0Contract defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  APINS0Contract *_aPINS0Contract = [[APINS0Contract alloc] init];
  NS_DURING
  {
    [_aPINS0Contract initWithReader: reader];
  }
  NS_HANDLER
  {
    _aPINS0Contract = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_aPINS0Contract autorelease];
  return _aPINS0Contract;
}

/**
 * Initialize this instance of APINS0Contract according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of APINS0Contract to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a APINS0Contract from an XML reader. The element to be read is
 * "contract".
 *
 * @param reader The XML reader.
 * @return The APINS0Contract.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  APINS0Contract *_contract = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element contract."];
    }
  }

  if (xmlStrcmp(BAD_CAST "contract", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}contract.");
#endif
    _contract = (APINS0Contract *)[APINS0Contract readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}contract.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0Contract. Expected element contract. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read APINS0Contract. Expected element contract. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _contract;
}

/**
 * Writes this APINS0Contract to XML under element name "contract".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this APINS0Contract to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "contract", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}contract. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}contract for root element {}contract...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}contract for root element {}contract...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}contract. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "contractNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setContractNumber: ((long*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "validFrom", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}validFrom of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}validFrom of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setValidFrom: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "validTo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}validTo of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}validTo of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setValidTo: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parentConractId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setParentConractId: ((long*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "conditions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}conditions of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}conditions of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setConditions: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNote: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self contractNumber] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "contractNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}contractNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}contractNumber...");
#endif
    status = xmlTextWriterWriteLongType(writer, [self contractNumber]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}contractNumber...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}contractNumber."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}contractNumber."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if ([self validFrom]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validFrom", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}validFrom."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}validFrom...");
#endif
    [[self validFrom] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}validFrom...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}validFrom."];
    }
  }
  if ([self validTo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validTo", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}validTo."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}validTo...");
#endif
    [[self validTo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}validTo...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}validTo."];
    }
  }
  if ([self parentConractId] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentConractId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parentConractId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parentConractId...");
#endif
    status = xmlTextWriterWriteLongType(writer, [self parentConractId]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parentConractId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}parentConractId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parentConractId."];
    }
  }
  if ([self conditions]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "conditions", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}conditions."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}conditions...");
#endif
    [[self conditions] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}conditions...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}conditions."];
    }
  }
  if ([self note]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}note."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}note...");
#endif
    [[self note] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}note...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}note."];
    }
  }
}
@end /* implementation APINS0Contract (JAXB) */

#endif /* DEF_APINS0Contract_M */

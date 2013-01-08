#include <enunciate-common.c>
#ifndef DEF_api_ns0_contract_H
#define DEF_api_ns0_contract_H

/**
 * (no documentation provided)
 */
struct api_ns0_contract {


  /**
   * (no documentation provided)
   */
  long id;

  /**
   * (no documentation provided)
   */
  long *contractNumber;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  struct tm *validFrom;

  /**
   * (no documentation provided)
   */
  struct tm *validTo;

  /**
   * (no documentation provided)
   */
  long *parentConractId;

  /**
   * (no documentation provided)
   */
  xmlChar *conditions;

  /**
   * (no documentation provided)
   */
  xmlChar *note;
};

/**
 * Reads a Contract element from XML. The element to be read is "contract", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Contract, or NULL in case of error.
 */
struct api_ns0_contract *xml_read_api_ns0_contract(xmlTextReaderPtr reader);

/**
 * Writes a Contract to XML under element name "contract".
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_api_ns0_contract(xmlTextWriterPtr writer, struct api_ns0_contract *_contract);

/**
 * Frees a Contract.
 *
 * @param _contract The Contract to free.
 */
void free_api_ns0_contract(struct api_ns0_contract *_contract);

/**
 * Reads a Contract element from XML. The element to be read is "contract", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Contract, or NULL in case of error.
 */
struct api_ns0_contract *xmlTextReaderReadNs0ContractElement(xmlTextReaderPtr reader);

/**
 * Writes a Contract to XML under element name "contract".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContractElement(xmlTextWriterPtr writer, struct api_ns0_contract *_contract);

/**
 * Writes a Contract to XML under element name "contract".
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContractElementNS(xmlTextWriterPtr writer, struct api_ns0_contract *_contract, int writeNamespaces);

/**
 * Frees the children of a Contract.
 *
 * @param _contract The Contract whose children are to be free.
 */
static void freeNs0ContractElement(struct api_ns0_contract *_contract);

/**
 * Reads a Contract from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Contract, or NULL in case of error.
 */
static struct api_ns0_contract *xmlTextReaderReadNs0ContractType(xmlTextReaderPtr reader);

/**
 * Writes a Contract to XML.
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContractType(xmlTextWriterPtr writer, struct api_ns0_contract *_contract);

/**
 * Frees the elements of a Contract.
 *
 * @param _contract The Contract to free.
 */
static void freeNs0ContractType(struct api_ns0_contract *_contract);

#endif /* DEF_api_ns0_contract_H */
#ifndef DEF_api_ns0_customer_H
#define DEF_api_ns0_customer_H

/**
 * (no documentation provided)
 */
struct api_ns0_customer {


  /**
   * (no documentation provided)
   */
  long id;

  /**
   * (no documentation provided)
   */
  xmlChar *firstName;

  /**
   * (no documentation provided)
   */
  xmlChar *lastName;

  /**
   * (no documentation provided)
   */
  xmlChar *identityCode;

  /**
   * (no documentation provided)
   */
  xmlChar *note;

  /**
   * (no documentation provided)
   */
  struct tm *birthDate;

  /**
   * (no documentation provided)
   */
  struct tm *created;

  /**
   * (no documentation provided)
   */
  struct tm *updated;
};

/**
 * Reads a Customer element from XML. The element to be read is "customer", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Customer, or NULL in case of error.
 */
struct api_ns0_customer *xml_read_api_ns0_customer(xmlTextReaderPtr reader);

/**
 * Writes a Customer to XML under element name "customer".
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_api_ns0_customer(xmlTextWriterPtr writer, struct api_ns0_customer *_customer);

/**
 * Frees a Customer.
 *
 * @param _customer The Customer to free.
 */
void free_api_ns0_customer(struct api_ns0_customer *_customer);

/**
 * Reads a Customer element from XML. The element to be read is "customer", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Customer, or NULL in case of error.
 */
struct api_ns0_customer *xmlTextReaderReadNs0CustomerElement(xmlTextReaderPtr reader);

/**
 * Writes a Customer to XML under element name "customer".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerElement(xmlTextWriterPtr writer, struct api_ns0_customer *_customer);

/**
 * Writes a Customer to XML under element name "customer".
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerElementNS(xmlTextWriterPtr writer, struct api_ns0_customer *_customer, int writeNamespaces);

/**
 * Frees the children of a Customer.
 *
 * @param _customer The Customer whose children are to be free.
 */
static void freeNs0CustomerElement(struct api_ns0_customer *_customer);

/**
 * Reads a Customer from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Customer, or NULL in case of error.
 */
static struct api_ns0_customer *xmlTextReaderReadNs0CustomerType(xmlTextReaderPtr reader);

/**
 * Writes a Customer to XML.
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerType(xmlTextWriterPtr writer, struct api_ns0_customer *_customer);

/**
 * Frees the elements of a Customer.
 *
 * @param _customer The Customer to free.
 */
static void freeNs0CustomerType(struct api_ns0_customer *_customer);

#endif /* DEF_api_ns0_customer_H */
#ifndef DEF_api_ns0_customerAddress_H
#define DEF_api_ns0_customerAddress_H

/**
 * (no documentation provided)
 */
struct api_ns0_customerAddress {


  /**
   * (no documentation provided)
   */
  long id;

  /**
   * (no documentation provided)
   */
  long customerId;

  /**
   * (no documentation provided)
   */
  xmlChar *house;

  /**
   * (no documentation provided)
   */
  xmlChar *address;

  /**
   * (no documentation provided)
   */
  xmlChar *county;

  /**
   * (no documentation provided)
   */
  xmlChar *parish;

  /**
   * (no documentation provided)
   */
  xmlChar *townCounty;

  /**
   * (no documentation provided)
   */
  xmlChar *mobile;

  /**
   * (no documentation provided)
   */
  xmlChar *phone;

  /**
   * (no documentation provided)
   */
  xmlChar *sms;

  /**
   * (no documentation provided)
   */
  xmlChar *email;

  /**
   * (no documentation provided)
   */
  xmlChar *note;

  /**
   * (no documentation provided)
   */
  xmlChar *country;

  /**
   * (no documentation provided)
   */
  struct tm *created;

  /**
   * (no documentation provided)
   */
  struct tm *updated;
};

/**
 * Reads a CustomerAddress element from XML. The element to be read is "customerAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The CustomerAddress, or NULL in case of error.
 */
struct api_ns0_customerAddress *xml_read_api_ns0_customerAddress(xmlTextReaderPtr reader);

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_api_ns0_customerAddress(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress);

/**
 * Frees a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress to free.
 */
void free_api_ns0_customerAddress(struct api_ns0_customerAddress *_customerAddress);

/**
 * Reads a CustomerAddress element from XML. The element to be read is "customerAddress", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The CustomerAddress, or NULL in case of error.
 */
struct api_ns0_customerAddress *xmlTextReaderReadNs0CustomerAddressElement(xmlTextReaderPtr reader);

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerAddressElement(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress);

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerAddressElementNS(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress, int writeNamespaces);

/**
 * Frees the children of a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress whose children are to be free.
 */
static void freeNs0CustomerAddressElement(struct api_ns0_customerAddress *_customerAddress);

/**
 * Reads a CustomerAddress from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The CustomerAddress, or NULL in case of error.
 */
static struct api_ns0_customerAddress *xmlTextReaderReadNs0CustomerAddressType(xmlTextReaderPtr reader);

/**
 * Writes a CustomerAddress to XML.
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CustomerAddressType(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress);

/**
 * Frees the elements of a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress to free.
 */
static void freeNs0CustomerAddressType(struct api_ns0_customerAddress *_customerAddress);

#endif /* DEF_api_ns0_customerAddress_H */
#ifndef DEF_api_ns0_errorObject_H
#define DEF_api_ns0_errorObject_H

/**
 * (no documentation provided)
 */
struct api_ns0_errorObject {


  /**
   * (no documentation provided)
   */
  xmlChar *message;
};

/**
 * Reads a ErrorObject element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ErrorObject, or NULL in case of error.
 */
struct api_ns0_errorObject *xml_read_api_ns0_errorObject(xmlTextReaderPtr reader);

/**
 * Writes a ErrorObject to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_api_ns0_errorObject(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject);

/**
 * Frees a ErrorObject.
 *
 * @param _errorObject The ErrorObject to free.
 */
void free_api_ns0_errorObject(struct api_ns0_errorObject *_errorObject);

/**
 * Reads a ErrorObject element from XML. The element to be read is "error", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ErrorObject, or NULL in case of error.
 */
struct api_ns0_errorObject *xmlTextReaderReadNs0ErrorElement(xmlTextReaderPtr reader);

/**
 * Writes a ErrorObject to XML under element name "error".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ErrorElement(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject);

/**
 * Writes a ErrorObject to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ErrorElementNS(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject, int writeNamespaces);

/**
 * Frees the children of a ErrorObject.
 *
 * @param _errorObject The ErrorObject whose children are to be free.
 */
static void freeNs0ErrorElement(struct api_ns0_errorObject *_errorObject);

/**
 * Reads a ErrorObject from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ErrorObject, or NULL in case of error.
 */
static struct api_ns0_errorObject *xmlTextReaderReadNs0ErrorObjectType(xmlTextReaderPtr reader);

/**
 * Writes a ErrorObject to XML.
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ErrorObjectType(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject);

/**
 * Frees the elements of a ErrorObject.
 *
 * @param _errorObject The ErrorObject to free.
 */
static void freeNs0ErrorObjectType(struct api_ns0_errorObject *_errorObject);

#endif /* DEF_api_ns0_errorObject_H */
#ifndef DEF_api_ns0_contract_M
#define DEF_api_ns0_contract_M

/**
 * Reads a Contract element from XML. The element to be read is "contract", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Contract, or NULL in case of error.
 */
struct api_ns0_contract *xml_read_api_ns0_contract(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ContractElement(reader);
}

/**
 * Writes a Contract to XML under element name "contract".
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_api_ns0_contract(xmlTextWriterPtr writer, struct api_ns0_contract *_contract) {
  return xmlTextWriterWriteNs0ContractElementNS(writer, _contract, 1);
}

/**
 * Frees a Contract.
 *
 * @param _contract The Contract to free.
 */
void free_api_ns0_contract(struct api_ns0_contract *_contract) {
  freeNs0ContractType(_contract);
  free(_contract);
}

/**
 * Reads a Contract element from XML. The element to be read is "contract", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Contract, or NULL in case of error.
 */
struct api_ns0_contract *xmlTextReaderReadNs0ContractElement(xmlTextReaderPtr reader) {
  struct api_ns0_contract *_contract = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "contract", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}contract.\n");
#endif
    _contract = xmlTextReaderReadNs0ContractType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_contract == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}contract failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}contract failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _contract;
}

/**
 * Writes a Contract to XML under element name "contract".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContractElement(xmlTextWriterPtr writer, struct api_ns0_contract *_contract) {
  return xmlTextWriterWriteNs0ContractElementNS(writer, _contract, 0);
}

/**
 * Writes a Contract to XML under element name "contract".
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContractElementNS(xmlTextWriterPtr writer, struct api_ns0_contract *_contract, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "contract", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}contract. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}contract for root element {}contract...\n");
#endif
  status = xmlTextWriterWriteNs0ContractType(writer, _contract);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}contract. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}contract. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Contract.
 *
 * @param _contract The Contract whose children are to be free.
 */
static void freeNs0ContractElement(struct api_ns0_contract *_contract) {
  freeNs0ContractType(_contract);
}

/**
 * Reads a Contract from XML. The reader is assumed to be at the start element.
 *
 * @return the Contract, or NULL in case of error.
 */
static struct api_ns0_contract *xmlTextReaderReadNs0ContractType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct api_ns0_contract *_contract = calloc(1, sizeof(struct api_ns0_contract));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ContractType(_contract);
        free(_contract);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->id = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "contractNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}contractNumber of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}contractNumber of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->contractNumber = ((long*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "validFrom", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}validFrom of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}validFrom of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->validFrom = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "validTo", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}validTo of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}validTo of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->validTo = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parentConractId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parentConractId of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parentConractId of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->parentConractId = ((long*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "conditions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}conditions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}conditions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->conditions = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContractType(_contract);
          free(_contract);
          return NULL;
        }

        _contract->note = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}contract.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}contract. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _contract;
}

/**
 * Writes a Contract to XML.
 *
 * @param writer The XML writer.
 * @param _contract The Contract to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ContractType(xmlTextWriterPtr writer, struct api_ns0_contract *_contract) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_contract->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->contractNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "contractNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}contractNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}contractNumber...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, (_contract->contractNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}contractNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}contractNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_contract->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_contract->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->validFrom != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validFrom", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}validFrom. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}validFrom...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_contract->validFrom));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}validFrom. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}validFrom. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->validTo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validTo", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}validTo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}validTo...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_contract->validTo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}validTo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}validTo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->parentConractId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentConractId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parentConractId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}parentConractId...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, (_contract->parentConractId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}parentConractId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parentConractId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->conditions != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "conditions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}conditions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}conditions...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_contract->conditions));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}conditions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}conditions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_contract->note != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}note...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_contract->note));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Contract.
 *
 * @param _contract The Contract to free.
 */
static void freeNs0ContractType(struct api_ns0_contract *_contract) {
  int i;
  if (_contract->contractNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor contractNumber of type api_ns0_contract...\n");
#endif
    freeXsLongType(_contract->contractNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor contractNumber of type api_ns0_contract...\n");
#endif
    free(_contract->contractNumber);
  }
  if (_contract->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type api_ns0_contract...\n");
#endif
    freeXsStringType(_contract->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type api_ns0_contract...\n");
#endif
    free(_contract->name);
  }
  if (_contract->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type api_ns0_contract...\n");
#endif
    freeXsStringType(_contract->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type api_ns0_contract...\n");
#endif
    free(_contract->description);
  }
  if (_contract->validFrom != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor validFrom of type api_ns0_contract...\n");
#endif
    freeXsDateTimeType(_contract->validFrom);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor validFrom of type api_ns0_contract...\n");
#endif
    free(_contract->validFrom);
  }
  if (_contract->validTo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor validTo of type api_ns0_contract...\n");
#endif
    freeXsDateTimeType(_contract->validTo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor validTo of type api_ns0_contract...\n");
#endif
    free(_contract->validTo);
  }
  if (_contract->parentConractId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parentConractId of type api_ns0_contract...\n");
#endif
    freeXsLongType(_contract->parentConractId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parentConractId of type api_ns0_contract...\n");
#endif
    free(_contract->parentConractId);
  }
  if (_contract->conditions != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor conditions of type api_ns0_contract...\n");
#endif
    freeXsStringType(_contract->conditions);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor conditions of type api_ns0_contract...\n");
#endif
    free(_contract->conditions);
  }
  if (_contract->note != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor note of type api_ns0_contract...\n");
#endif
    freeXsStringType(_contract->note);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor note of type api_ns0_contract...\n");
#endif
    free(_contract->note);
  }
}
#endif /* DEF_api_ns0_contract_M */
#ifndef DEF_api_ns0_customer_M
#define DEF_api_ns0_customer_M

/**
 * Reads a Customer element from XML. The element to be read is "customer", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Customer, or NULL in case of error.
 */
struct api_ns0_customer *xml_read_api_ns0_customer(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0CustomerElement(reader);
}

/**
 * Writes a Customer to XML under element name "customer".
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_api_ns0_customer(xmlTextWriterPtr writer, struct api_ns0_customer *_customer) {
  return xmlTextWriterWriteNs0CustomerElementNS(writer, _customer, 1);
}

/**
 * Frees a Customer.
 *
 * @param _customer The Customer to free.
 */
void free_api_ns0_customer(struct api_ns0_customer *_customer) {
  freeNs0CustomerType(_customer);
  free(_customer);
}

/**
 * Reads a Customer element from XML. The element to be read is "customer", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Customer, or NULL in case of error.
 */
struct api_ns0_customer *xmlTextReaderReadNs0CustomerElement(xmlTextReaderPtr reader) {
  struct api_ns0_customer *_customer = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "customer", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}customer.\n");
#endif
    _customer = xmlTextReaderReadNs0CustomerType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_customer == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}customer failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}customer failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _customer;
}

/**
 * Writes a Customer to XML under element name "customer".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CustomerElement(xmlTextWriterPtr writer, struct api_ns0_customer *_customer) {
  return xmlTextWriterWriteNs0CustomerElementNS(writer, _customer, 0);
}

/**
 * Writes a Customer to XML under element name "customer".
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CustomerElementNS(xmlTextWriterPtr writer, struct api_ns0_customer *_customer, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customer", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}customer. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}customer for root element {}customer...\n");
#endif
  status = xmlTextWriterWriteNs0CustomerType(writer, _customer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}customer. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}customer. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Customer.
 *
 * @param _customer The Customer whose children are to be free.
 */
static void freeNs0CustomerElement(struct api_ns0_customer *_customer) {
  freeNs0CustomerType(_customer);
}

/**
 * Reads a Customer from XML. The reader is assumed to be at the start element.
 *
 * @return the Customer, or NULL in case of error.
 */
static struct api_ns0_customer *xmlTextReaderReadNs0CustomerType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct api_ns0_customer *_customer = calloc(1, sizeof(struct api_ns0_customer));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0CustomerType(_customer);
        free(_customer);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->id = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->firstName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->lastName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "identityCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}identityCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}identityCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->identityCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->note = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "birthDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}birthDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}birthDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->birthDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "created", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->created = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "updated", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerType(_customer);
          free(_customer);
          return NULL;
        }

        _customer->updated = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}customer.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}customer. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _customer;
}

/**
 * Writes a Customer to XML.
 *
 * @param writer The XML writer.
 * @param _customer The Customer to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0CustomerType(xmlTextWriterPtr writer, struct api_ns0_customer *_customer) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_customer->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->firstName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}firstName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customer->firstName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->lastName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lastName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customer->lastName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->identityCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "identityCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}identityCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}identityCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customer->identityCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}identityCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}identityCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->note != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}note...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customer->note));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->birthDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "birthDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}birthDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}birthDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_customer->birthDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}birthDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}birthDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->created != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "created", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}created...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_customer->created));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customer->updated != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updated", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}updated...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_customer->updated));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Customer.
 *
 * @param _customer The Customer to free.
 */
static void freeNs0CustomerType(struct api_ns0_customer *_customer) {
  int i;
  if (_customer->firstName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor firstName of type api_ns0_customer...\n");
#endif
    freeXsStringType(_customer->firstName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor firstName of type api_ns0_customer...\n");
#endif
    free(_customer->firstName);
  }
  if (_customer->lastName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastName of type api_ns0_customer...\n");
#endif
    freeXsStringType(_customer->lastName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastName of type api_ns0_customer...\n");
#endif
    free(_customer->lastName);
  }
  if (_customer->identityCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor identityCode of type api_ns0_customer...\n");
#endif
    freeXsStringType(_customer->identityCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor identityCode of type api_ns0_customer...\n");
#endif
    free(_customer->identityCode);
  }
  if (_customer->note != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor note of type api_ns0_customer...\n");
#endif
    freeXsStringType(_customer->note);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor note of type api_ns0_customer...\n");
#endif
    free(_customer->note);
  }
  if (_customer->birthDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor birthDate of type api_ns0_customer...\n");
#endif
    freeXsDateTimeType(_customer->birthDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor birthDate of type api_ns0_customer...\n");
#endif
    free(_customer->birthDate);
  }
  if (_customer->created != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor created of type api_ns0_customer...\n");
#endif
    freeXsDateTimeType(_customer->created);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor created of type api_ns0_customer...\n");
#endif
    free(_customer->created);
  }
  if (_customer->updated != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor updated of type api_ns0_customer...\n");
#endif
    freeXsDateTimeType(_customer->updated);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor updated of type api_ns0_customer...\n");
#endif
    free(_customer->updated);
  }
}
#endif /* DEF_api_ns0_customer_M */
#ifndef DEF_api_ns0_customerAddress_M
#define DEF_api_ns0_customerAddress_M

/**
 * Reads a CustomerAddress element from XML. The element to be read is "customerAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The CustomerAddress, or NULL in case of error.
 */
struct api_ns0_customerAddress *xml_read_api_ns0_customerAddress(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0CustomerAddressElement(reader);
}

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_api_ns0_customerAddress(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress) {
  return xmlTextWriterWriteNs0CustomerAddressElementNS(writer, _customerAddress, 1);
}

/**
 * Frees a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress to free.
 */
void free_api_ns0_customerAddress(struct api_ns0_customerAddress *_customerAddress) {
  freeNs0CustomerAddressType(_customerAddress);
  free(_customerAddress);
}

/**
 * Reads a CustomerAddress element from XML. The element to be read is "customerAddress", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The CustomerAddress, or NULL in case of error.
 */
struct api_ns0_customerAddress *xmlTextReaderReadNs0CustomerAddressElement(xmlTextReaderPtr reader) {
  struct api_ns0_customerAddress *_customerAddress = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "customerAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}customerAddress.\n");
#endif
    _customerAddress = xmlTextReaderReadNs0CustomerAddressType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_customerAddress == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}customerAddress failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}customerAddress failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _customerAddress;
}

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CustomerAddressElement(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress) {
  return xmlTextWriterWriteNs0CustomerAddressElementNS(writer, _customerAddress, 0);
}

/**
 * Writes a CustomerAddress to XML under element name "customerAddress".
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CustomerAddressElementNS(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customerAddress", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}customerAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}customerAddress for root element {}customerAddress...\n");
#endif
  status = xmlTextWriterWriteNs0CustomerAddressType(writer, _customerAddress);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}customerAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}customerAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress whose children are to be free.
 */
static void freeNs0CustomerAddressElement(struct api_ns0_customerAddress *_customerAddress) {
  freeNs0CustomerAddressType(_customerAddress);
}

/**
 * Reads a CustomerAddress from XML. The reader is assumed to be at the start element.
 *
 * @return the CustomerAddress, or NULL in case of error.
 */
static struct api_ns0_customerAddress *xmlTextReaderReadNs0CustomerAddressType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct api_ns0_customerAddress *_customerAddress = calloc(1, sizeof(struct api_ns0_customerAddress));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0CustomerAddressType(_customerAddress);
        free(_customerAddress);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->id = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "customerId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}customerId of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}customerId of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->customerId = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "house", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}house of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}house of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->house = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->address = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "county", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}county of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}county of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->county = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parish", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parish of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parish of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->parish = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "townCounty", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}townCounty of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}townCounty of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->townCounty = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mobile", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mobile of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mobile of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->mobile = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->phone = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "sms", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}sms of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}sms of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->sms = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->email = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "note", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}note of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->note = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "country", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->country = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "created", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}created of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->created = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "updated", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}updated of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CustomerAddressType(_customerAddress);
          free(_customerAddress);
          return NULL;
        }

        _customerAddress->updated = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}customerAddress.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}customerAddress. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _customerAddress;
}

/**
 * Writes a CustomerAddress to XML.
 *
 * @param writer The XML writer.
 * @param _customerAddress The CustomerAddress to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0CustomerAddressType(xmlTextWriterPtr writer, struct api_ns0_customerAddress *_customerAddress) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_customerAddress->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "customerId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}customerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}customerId...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_customerAddress->customerId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}customerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}customerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->house != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "house", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}house. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}house...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->house));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}house. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}house. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->address != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->address));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->county != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "county", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}county. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}county...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->county));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}county. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}county. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->parish != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parish", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parish. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parish...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->parish));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parish. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parish. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->townCounty != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "townCounty", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}townCounty. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}townCounty...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->townCounty));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}townCounty. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}townCounty. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->mobile != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mobile", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mobile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mobile...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->mobile));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mobile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mobile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->phone != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}phone...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->phone));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->sms != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sms", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}sms. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}sms...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->sms));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}sms. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}sms. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->email != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}email...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->email));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->note != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "note", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}note...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->note));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}note. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->country != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "country", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}country...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_customerAddress->country));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->created != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "created", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}created...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_customerAddress->created));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}created. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_customerAddress->updated != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updated", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}updated...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_customerAddress->updated));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}updated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a CustomerAddress.
 *
 * @param _customerAddress The CustomerAddress to free.
 */
static void freeNs0CustomerAddressType(struct api_ns0_customerAddress *_customerAddress) {
  int i;
  if (_customerAddress->house != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor house of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->house);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor house of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->house);
  }
  if (_customerAddress->address != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->address);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->address);
  }
  if (_customerAddress->county != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor county of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->county);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor county of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->county);
  }
  if (_customerAddress->parish != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parish of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->parish);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parish of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->parish);
  }
  if (_customerAddress->townCounty != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor townCounty of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->townCounty);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor townCounty of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->townCounty);
  }
  if (_customerAddress->mobile != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mobile of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->mobile);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mobile of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->mobile);
  }
  if (_customerAddress->phone != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor phone of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->phone);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor phone of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->phone);
  }
  if (_customerAddress->sms != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor sms of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->sms);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor sms of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->sms);
  }
  if (_customerAddress->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->email);
  }
  if (_customerAddress->note != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor note of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->note);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor note of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->note);
  }
  if (_customerAddress->country != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor country of type api_ns0_customerAddress...\n");
#endif
    freeXsStringType(_customerAddress->country);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor country of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->country);
  }
  if (_customerAddress->created != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor created of type api_ns0_customerAddress...\n");
#endif
    freeXsDateTimeType(_customerAddress->created);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor created of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->created);
  }
  if (_customerAddress->updated != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor updated of type api_ns0_customerAddress...\n");
#endif
    freeXsDateTimeType(_customerAddress->updated);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor updated of type api_ns0_customerAddress...\n");
#endif
    free(_customerAddress->updated);
  }
}
#endif /* DEF_api_ns0_customerAddress_M */
#ifndef DEF_api_ns0_errorObject_M
#define DEF_api_ns0_errorObject_M

/**
 * Reads a ErrorObject element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ErrorObject, or NULL in case of error.
 */
struct api_ns0_errorObject *xml_read_api_ns0_errorObject(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ErrorElement(reader);
}

/**
 * Writes a ErrorObject to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_api_ns0_errorObject(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject) {
  return xmlTextWriterWriteNs0ErrorElementNS(writer, _errorObject, 1);
}

/**
 * Frees a ErrorObject.
 *
 * @param _errorObject The ErrorObject to free.
 */
void free_api_ns0_errorObject(struct api_ns0_errorObject *_errorObject) {
  freeNs0ErrorObjectType(_errorObject);
  free(_errorObject);
}

/**
 * Reads a ErrorObject element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ErrorObject, or NULL in case of error.
 */
struct api_ns0_errorObject *xmlTextReaderReadNs0ErrorElement(xmlTextReaderPtr reader) {
  struct api_ns0_errorObject *_errorObject = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "error", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}error.\n");
#endif
    _errorObject = xmlTextReaderReadNs0ErrorObjectType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_errorObject == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}error failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}error failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _errorObject;
}

/**
 * Writes a ErrorObject to XML under element name "error".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ErrorElement(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject) {
  return xmlTextWriterWriteNs0ErrorElementNS(writer, _errorObject, 0);
}

/**
 * Writes a ErrorObject to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ErrorElementNS(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "error", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}errorObject for root element {}error...\n");
#endif
  status = xmlTextWriterWriteNs0ErrorObjectType(writer, _errorObject);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ErrorObject.
 *
 * @param _errorObject The ErrorObject whose children are to be free.
 */
static void freeNs0ErrorElement(struct api_ns0_errorObject *_errorObject) {
  freeNs0ErrorObjectType(_errorObject);
}

/**
 * Reads a ErrorObject from XML. The reader is assumed to be at the start element.
 *
 * @return the ErrorObject, or NULL in case of error.
 */
static struct api_ns0_errorObject *xmlTextReaderReadNs0ErrorObjectType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct api_ns0_errorObject *_errorObject = calloc(1, sizeof(struct api_ns0_errorObject));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ErrorObjectType(_errorObject);
        free(_errorObject);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "message", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ErrorObjectType(_errorObject);
          free(_errorObject);
          return NULL;
        }

        _errorObject->message = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}errorObject.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}errorObject. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _errorObject;
}

/**
 * Writes a ErrorObject to XML.
 *
 * @param writer The XML writer.
 * @param _errorObject The ErrorObject to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ErrorObjectType(xmlTextWriterPtr writer, struct api_ns0_errorObject *_errorObject) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_errorObject->message != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "message", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}message...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_errorObject->message));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ErrorObject.
 *
 * @param _errorObject The ErrorObject to free.
 */
static void freeNs0ErrorObjectType(struct api_ns0_errorObject *_errorObject) {
  int i;
  if (_errorObject->message != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor message of type api_ns0_errorObject...\n");
#endif
    freeXsStringType(_errorObject->message);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor message of type api_ns0_errorObject...\n");
#endif
    free(_errorObject->message);
  }
}
#endif /* DEF_api_ns0_errorObject_M */

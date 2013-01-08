#import "enunciate-common.h"

@class APINS0ErrorObject;
@class APINS0BaseEntity;
@class APINS0CustomerAddress;
@class APINS0Customer;
@class APINS0Contract;

#ifndef DEF_APINS0ErrorObject_H
#define DEF_APINS0ErrorObject_H

/**
 * (no documentation provided)
 */
@interface APINS0ErrorObject : NSObject <EnunciateXML>
{
  @private
    NSString *_message;
}

/**
 * (no documentation provided)
 */
- (NSString *) message;

/**
 * (no documentation provided)
 */
- (void) setMessage: (NSString *) newMessage;
@end /* interface APINS0ErrorObject */

#endif /* DEF_APINS0ErrorObject_H */
#ifndef DEF_APINS0BaseEntity_H
#define DEF_APINS0BaseEntity_H

/**
 * (no documentation provided)
 */
@interface APINS0BaseEntity : NSObject
{
  @private
    long _identifier;
}

/**
 * (no documentation provided)
 */
- (long) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier;
@end /* interface APINS0BaseEntity */

#endif /* DEF_APINS0BaseEntity_H */
#ifndef DEF_APINS0CustomerAddress_H
#define DEF_APINS0CustomerAddress_H

/**
 * (no documentation provided)
 */
@interface APINS0CustomerAddress : APINS0BaseEntity <EnunciateXML>
{
  @private
    long _customerId;
    NSString *_house;
    NSString *_address;
    NSString *_county;
    NSString *_parish;
    NSString *_townCounty;
    NSString *_mobile;
    NSString *_phone;
    NSString *_sms;
    NSString *_email;
    NSString *_note;
    NSString *_country;
    NSDate *_created;
    NSDate *_updated;
}

/**
 * (no documentation provided)
 */
- (long) customerId;

/**
 * (no documentation provided)
 */
- (void) setCustomerId: (long) newCustomerId;

/**
 * (no documentation provided)
 */
- (NSString *) house;

/**
 * (no documentation provided)
 */
- (void) setHouse: (NSString *) newHouse;

/**
 * (no documentation provided)
 */
- (NSString *) address;

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSString *) newAddress;

/**
 * (no documentation provided)
 */
- (NSString *) county;

/**
 * (no documentation provided)
 */
- (void) setCounty: (NSString *) newCounty;

/**
 * (no documentation provided)
 */
- (NSString *) parish;

/**
 * (no documentation provided)
 */
- (void) setParish: (NSString *) newParish;

/**
 * (no documentation provided)
 */
- (NSString *) townCounty;

/**
 * (no documentation provided)
 */
- (void) setTownCounty: (NSString *) newTownCounty;

/**
 * (no documentation provided)
 */
- (NSString *) mobile;

/**
 * (no documentation provided)
 */
- (void) setMobile: (NSString *) newMobile;

/**
 * (no documentation provided)
 */
- (NSString *) phone;

/**
 * (no documentation provided)
 */
- (void) setPhone: (NSString *) newPhone;

/**
 * (no documentation provided)
 */
- (NSString *) sms;

/**
 * (no documentation provided)
 */
- (void) setSms: (NSString *) newSms;

/**
 * (no documentation provided)
 */
- (NSString *) email;

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail;

/**
 * (no documentation provided)
 */
- (NSString *) note;

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote;

/**
 * (no documentation provided)
 */
- (NSString *) country;

/**
 * (no documentation provided)
 */
- (void) setCountry: (NSString *) newCountry;

/**
 * (no documentation provided)
 */
- (NSDate *) created;

/**
 * (no documentation provided)
 */
- (void) setCreated: (NSDate *) newCreated;

/**
 * (no documentation provided)
 */
- (NSDate *) updated;

/**
 * (no documentation provided)
 */
- (void) setUpdated: (NSDate *) newUpdated;
@end /* interface APINS0CustomerAddress */

#endif /* DEF_APINS0CustomerAddress_H */
#ifndef DEF_APINS0Customer_H
#define DEF_APINS0Customer_H

/**
 * (no documentation provided)
 */
@interface APINS0Customer : APINS0BaseEntity <EnunciateXML>
{
  @private
    NSString *_firstName;
    NSString *_lastName;
    NSString *_identityCode;
    NSString *_note;
    NSDate *_birthDate;
    NSDate *_created;
    NSDate *_updated;
}

/**
 * (no documentation provided)
 */
- (NSString *) firstName;

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName;

/**
 * (no documentation provided)
 */
- (NSString *) lastName;

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName;

/**
 * (no documentation provided)
 */
- (NSString *) identityCode;

/**
 * (no documentation provided)
 */
- (void) setIdentityCode: (NSString *) newIdentityCode;

/**
 * (no documentation provided)
 */
- (NSString *) note;

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote;

/**
 * (no documentation provided)
 */
- (NSDate *) birthDate;

/**
 * (no documentation provided)
 */
- (void) setBirthDate: (NSDate *) newBirthDate;

/**
 * (no documentation provided)
 */
- (NSDate *) created;

/**
 * (no documentation provided)
 */
- (void) setCreated: (NSDate *) newCreated;

/**
 * (no documentation provided)
 */
- (NSDate *) updated;

/**
 * (no documentation provided)
 */
- (void) setUpdated: (NSDate *) newUpdated;
@end /* interface APINS0Customer */

#endif /* DEF_APINS0Customer_H */
#ifndef DEF_APINS0Contract_H
#define DEF_APINS0Contract_H

/**
 * (no documentation provided)
 */
@interface APINS0Contract : APINS0BaseEntity <EnunciateXML>
{
  @private
    long *_contractNumber;
    NSString *_name;
    NSString *_description;
    NSDate *_validFrom;
    NSDate *_validTo;
    long *_parentConractId;
    NSString *_conditions;
    NSString *_note;
}

/**
 * (no documentation provided)
 */
- (long *) contractNumber;

/**
 * (no documentation provided)
 */
- (void) setContractNumber: (long *) newContractNumber;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (NSDate *) validFrom;

/**
 * (no documentation provided)
 */
- (void) setValidFrom: (NSDate *) newValidFrom;

/**
 * (no documentation provided)
 */
- (NSDate *) validTo;

/**
 * (no documentation provided)
 */
- (void) setValidTo: (NSDate *) newValidTo;

/**
 * (no documentation provided)
 */
- (long *) parentConractId;

/**
 * (no documentation provided)
 */
- (void) setParentConractId: (long *) newParentConractId;

/**
 * (no documentation provided)
 */
- (NSString *) conditions;

/**
 * (no documentation provided)
 */
- (void) setConditions: (NSString *) newConditions;

/**
 * (no documentation provided)
 */
- (NSString *) note;

/**
 * (no documentation provided)
 */
- (void) setNote: (NSString *) newNote;
@end /* interface APINS0Contract */

#endif /* DEF_APINS0Contract_H */

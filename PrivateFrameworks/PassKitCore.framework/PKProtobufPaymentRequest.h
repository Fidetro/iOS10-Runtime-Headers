/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentRequest : PBRequest <NSCopying> {
    NSData * _applicationData;
    NSData * _billingContact;
    NSString * _countryCode;
    NSString * _currencyCode;
    bool  _expectsMerchantSession;
    struct { 
        unsigned int merchantCapabilities : 1; 
        unsigned int requiredBillingAddressFields : 1; 
        unsigned int requiredShippingAddressFields : 1; 
        unsigned int expectsMerchantSession : 1; 
    }  _has;
    unsigned int  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKProtobufPaymentMerchantSession * _merchantSession;
    NSString * _originatingURL;
    unsigned int  _requiredBillingAddressFields;
    unsigned int  _requiredShippingAddressFields;
    NSData * _shippingContact;
    NSMutableArray * _shippingMethods;
    NSMutableArray * _summaryItems;
    NSMutableArray * _supportedNetworks;
    NSMutableArray * _thumbnailURLs;
}

@property (nonatomic, retain) NSData *applicationData;
@property (nonatomic, retain) NSData *billingContact;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) bool expectsMerchantSession;
@property (nonatomic, readonly) bool hasApplicationData;
@property (nonatomic, readonly) bool hasBillingContact;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic) bool hasExpectsMerchantSession;
@property (nonatomic) bool hasMerchantCapabilities;
@property (nonatomic, readonly) bool hasMerchantIdentifier;
@property (nonatomic, readonly) bool hasMerchantSession;
@property (nonatomic, readonly) bool hasOriginatingURL;
@property (nonatomic) bool hasRequiredBillingAddressFields;
@property (nonatomic) bool hasRequiredShippingAddressFields;
@property (nonatomic, readonly) bool hasShippingContact;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, retain) NSString *merchantIdentifier;
@property (nonatomic, retain) PKProtobufPaymentMerchantSession *merchantSession;
@property (nonatomic, retain) NSString *originatingURL;
@property (nonatomic) unsigned int requiredBillingAddressFields;
@property (nonatomic) unsigned int requiredShippingAddressFields;
@property (nonatomic, retain) NSData *shippingContact;
@property (nonatomic, retain) NSMutableArray *shippingMethods;
@property (nonatomic, retain) NSMutableArray *summaryItems;
@property (nonatomic, retain) NSMutableArray *supportedNetworks;
@property (nonatomic, retain) NSMutableArray *thumbnailURLs;

+ (Class)shippingMethodsType;
+ (Class)summaryItemsType;
+ (Class)supportedNetworksType;
+ (Class)thumbnailURLsType;

- (void).cxx_destruct;
- (void)addShippingMethods:(id)arg1;
- (void)addSummaryItems:(id)arg1;
- (void)addSupportedNetworks:(id)arg1;
- (void)addThumbnailURLs:(id)arg1;
- (id)applicationData;
- (id)billingContact;
- (void)clearShippingMethods;
- (void)clearSummaryItems;
- (void)clearSupportedNetworks;
- (void)clearThumbnailURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)expectsMerchantSession;
- (bool)hasApplicationData;
- (bool)hasBillingContact;
- (bool)hasCountryCode;
- (bool)hasCurrencyCode;
- (bool)hasExpectsMerchantSession;
- (bool)hasMerchantCapabilities;
- (bool)hasMerchantIdentifier;
- (bool)hasMerchantSession;
- (bool)hasOriginatingURL;
- (bool)hasRequiredBillingAddressFields;
- (bool)hasRequiredShippingAddressFields;
- (bool)hasShippingContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)merchantCapabilities;
- (id)merchantIdentifier;
- (id)merchantSession;
- (void)mergeFrom:(id)arg1;
- (id)originatingURL;
- (bool)readFrom:(id)arg1;
- (unsigned int)requiredBillingAddressFields;
- (unsigned int)requiredShippingAddressFields;
- (void)setApplicationData:(id)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setExpectsMerchantSession:(bool)arg1;
- (void)setHasExpectsMerchantSession:(bool)arg1;
- (void)setHasMerchantCapabilities:(bool)arg1;
- (void)setHasRequiredBillingAddressFields:(bool)arg1;
- (void)setHasRequiredShippingAddressFields:(bool)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setRequiredBillingAddressFields:(unsigned int)arg1;
- (void)setRequiredShippingAddressFields:(unsigned int)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setSummaryItems:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setThumbnailURLs:(id)arg1;
- (id)shippingContact;
- (id)shippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (id)summaryItems;
- (id)summaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryItemsCount;
- (id)supportedNetworks;
- (id)supportedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedNetworksCount;
- (id)thumbnailURLs;
- (id)thumbnailURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)thumbnailURLsCount;
- (void)writeTo:(id)arg1;

@end

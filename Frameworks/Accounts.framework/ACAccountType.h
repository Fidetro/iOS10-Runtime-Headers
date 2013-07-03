/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, ACAccountStore, NSSet, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding> {
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    BOOL _supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
}

@property(readonly) NSString * accountTypeDescription;
@property(readonly) NSString * identifier;
@property(readonly) BOOL accessGranted;
@property(retain) NSURL * objectID;
@property int visibility;
@property(copy) id credentialProtectionPolicy;
@property(retain) NSString * credentialType;
@property ACAccountStore * accountStore;
@property int supportsAuthentication;
@property BOOL supportsMultipleAccounts;
@property(readonly) NSSet * supportedDataclasses;
@property(readonly) NSSet * syncableDataclasses;
@property(readonly) NSSet * accessKeys;

+ (BOOL)supportsSecureCoding;

- (void)setObjectID:(id)arg1;
- (void)setSupportsMultipleAccounts:(BOOL)arg1;
- (BOOL)accessGranted;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)supportedDataclasses;
- (id)credentialProtectionPolicy;
- (int)visibility;
- (id)syncableDataclasses;
- (void)setSupportsAuthentication:(int)arg1;
- (id)accountTypeDescription;
- (void)setCredentialType:(id)arg1;
- (id)credentialType;
- (id)initWithManagedAccountType:(id)arg1;
- (int)supportsAuthentication;
- (BOOL)supportsMultipleAccounts;
- (id)accountStore;
- (id)accessKeys;
- (void)setAccountStore:(id)arg1;
- (id)objectID;
- (void)setVisibility:(int)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

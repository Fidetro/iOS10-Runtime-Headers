/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSArray, NSString, NSData, _IDSAccount, NSDictionary, NSDate;

@interface IDSAccount : NSObject  {
    _IDSAccount *_internal;
}

@property(retain) NSString * loginID;
@property(readonly) NSString * serviceName;
@property(readonly) BOOL isActive;
@property(readonly) BOOL canSend;
@property(readonly) NSArray * devices;
@property(readonly) NSArray * aliases;
@property(readonly) NSArray * aliasStrings;
@property(readonly) NSArray * vettedAliases;
@property(readonly) NSDictionary * profileInfo;
@property(retain) NSDictionary * accountInfo;
@property(readonly) int accountType;
@property(readonly) NSString * uniqueID;
@property(readonly) int registrationStatus;
@property(readonly) NSArray * registeredURIs;
@property(readonly) NSData * registrationCertificate;
@property(readonly) NSDate * dateRegistered;
@property(readonly) NSDate * nextRegistrationDate;
@property(readonly) NSData * pushToken;
@property(readonly) NSString * regionID;
@property(readonly) NSString * regionBasePhoneNumber;
@property(readonly) NSDictionary * regionServerContext;
@property(readonly) NSString * profileID;


- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)deactivateAndPurgeIdentify;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)profileID;
- (id)regionServerContext;
- (id)regionBasePhoneNumber;
- (id)registrationCertificate;
- (id)registeredURIs;
- (id)dateRegistered;
- (id)nextRegistrationDate;
- (int)registrationStatus;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (id)vettedAliases;
- (id)aliases;
- (id)profileInfo;
- (BOOL)canSend;
- (void)setLoginID:(id)arg1;
- (id)accountInfo;
- (id)loginID;
- (void)_setIsEnabled:(BOOL)arg1;
- (void)setAccountInfo:(id)arg1;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)aliasStrings;
- (id)_internal;
- (id)pushToken;
- (void)setAuthToken:(id)arg1;
- (id)devices;
- (id)regionID;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)setPassword:(id)arg1;
- (int)accountType;
- (BOOL)isActive;
- (id)uniqueID;
- (void)dealloc;
- (id)description;
- (BOOL)_isEnabled;
- (id)serviceName;

@end

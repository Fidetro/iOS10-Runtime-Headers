/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DATaskManager, NSMutableDictionary, NSURL, DAStatusReport, NSString, ACAccount, NSData, NSArray;

@interface DAAccount : NSObject  {
    ACAccount *_backingAccountInfo;
    BOOL _hasInitted;
    BOOL _shouldPromptForPassword;
    BOOL _shouldUseOpportunisticSockets;
    BOOL _wasUserInitiated;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DAStatusReport *_statusReport;
    struct __CFDictionary { } *_consumers;
    struct __CFURLStorageSession { } *_storageSession;
    DATaskManager *_taskManager;
    BOOL _shouldFailAllTasks;
    BOOL _isValidating;
    NSArray *_appIdsForPasswordPrompt;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
}

@property(setter=setDAAccountVersion:) int daAccountVersion;
@property(readonly) NSString * persistentUUID;
@property(copy) NSString * accountDescription;
@property(copy) NSString * username;
@property(copy) NSString * user;
@property(copy) NSString * host;
@property int port;
@property(copy) NSString * password;
@property BOOL useSSL;
@property(readonly) int enabledDataclassesBitmask;
@property(readonly) BOOL isChildAccount;
@property(readonly) ACAccount * backingAccountInfo;
@property(readonly) DATaskManager * taskManager;
@property(readonly) int keychainAccessibilityType;
@property(readonly) NSString * scheduleIdentifier;
@property(retain) NSData * signingIdentityPersistentReference;
@property(retain) NSData * encryptionIdentityPersistentReference;
@property BOOL shouldDoInitialAutodiscovery;
@property(readonly) BOOL shouldAutodiscoverAccountProperties;
@property(readonly) NSString * scheme;
@property(copy) NSURL * principalURL;
@property(copy) NSString * principalPath;
@property(copy) NSString * emailAddress;
@property(copy) NSArray * emailAddresses;
@property BOOL shouldPromptForPassword;
@property(readonly) NSArray * appIdsForPasswordPrompt;
@property(readonly) BOOL shouldFailAllTasks;
@property(readonly) NSData * identityPersist;
@property BOOL shouldUseOpportunisticSockets;
@property BOOL wasUserInitiated;
@property BOOL isValidating;
@property(readonly) DAStatusReport * statusReport;
@property(retain) NSMutableDictionary * dataclassPropertyURLsByDataclass;

+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;

- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)getRootFolderWithConsumer:(id)arg1;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (id)notesFolders;
- (id)defaultNotesFolder;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { int x1; int x2; int x3; int x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (BOOL)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(struct { int x1; int x2; }*)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 consumer:(id)arg9;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { int x1; int x2; int x3; int x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (void)setDataclassPropertyURLsByDataclass:(id)arg1;
- (id)appIdsForPasswordPrompt;
- (void)setWasUserInitiated:(BOOL)arg1;
- (void)setShouldUseOpportunisticSockets:(BOOL)arg1;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (BOOL)shouldPromptForPassword;
- (BOOL)isSubscribedCalendarAccount;
- (BOOL)isGoogleAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isBookmarkDAVAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isActiveSyncAccount;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)isChildAccount;
- (void)cleanupAccountFiles;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (id)addUsernameToURL:(id)arg1;
- (int)keychainAccessibilityType;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)shouldAutodiscoverAccountProperties;
- (void)setShouldDoInitialAutodiscovery:(BOOL)arg1;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (BOOL)saveModifiedPropertiesOnBackingAccount;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (int)portFromDataclassPropertiesForDataclass:(id)arg1;
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (id)spinnerIdentifiers;
- (int)enabledDataclassesBitmask;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2;
- (BOOL)enabledForAnyDADataclasses:(int)arg1;
- (id)scheduleIdentifier;
- (id)syncStoreIdentifier;
- (void)resetAccountID;
- (BOOL)upgradeAccount;
- (void)setDAAccountVersion:(int)arg1;
- (int)daAccountVersion;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id)arg1;
- (BOOL)wasUserInitiated;
- (BOOL)isValidating;
- (void)saveAccountProperties;
- (id)_exceptionsDict;
- (void)saveAccountPropertiesWithCompletionHandler:(id)arg1;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
- (BOOL)_isIdentityManagedByProfile;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (BOOL)shouldDoInitialAutodiscovery;
- (void)setIsValidating:(BOOL)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
- (id)dataclassPropertyURLsByDataclass;
- (id)backingAccountInfo;
- (id)passwordWithExpected:(BOOL)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (id)stateString;
- (id)statusReport;
- (BOOL)enabledForDADataclass:(int)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)ingestBackingAccountInfoProperties;
- (void)_setPersistentUUID:(id)arg1;
- (void)resetStatusReport;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)signingIdentityPersistentReference;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (BOOL)isHotmailAccount;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (void)setPrincipalURL:(id)arg1;
- (BOOL)shouldFailAllTasks;
- (id)identityPersist;
- (BOOL)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)oauth2Token;
- (id)oauthInfoProvider;
- (id)additionalHeaderValues;
- (id)taskManager;
- (void)shutdown;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (id)principalURL;
- (BOOL)useSSL;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUser:(id)arg1;
- (void)tearDown;
- (BOOL)isDisabled;
- (id)persistentUUID;
- (void)setPrincipalPath:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (id)principalPath;
- (id)emailAddress;
- (id)displayName;
- (id)accountID;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAccountDescription:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)dataclassProperties;
- (id)username;
- (id)accountDescription;
- (void)setPort:(int)arg1;
- (void)reload;
- (id)password;
- (id)user;
- (int)port;
- (id)host;
- (id)scheme;
- (void)dealloc;
- (id)description;

@end

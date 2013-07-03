/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface LocalAccount : MailAccount  {
}

+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountTypeString;
+ (id)localAccount;
+ (id)accountTypeIdentifier;

- (id)transientDraftsFolder;
- (id)pushedMailboxUids;
- (BOOL)_shouldConfigureMailboxCache;
- (BOOL)supportsAppend;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLScheme;
- (id)mailboxPathExtension;
- (Class)storeClass;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (id)primaryMailboxUid;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)supportsArchiving;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)displayName;
- (void)setUsername:(id)arg1;
- (BOOL)isActive;
- (void)setHostname:(id)arg1;
- (id)uniqueId;

@end

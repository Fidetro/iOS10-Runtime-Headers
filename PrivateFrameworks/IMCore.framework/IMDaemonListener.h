/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSArray, NSProtocolChecker, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSData;

@interface IMDaemonListener : NSObject  {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_persistentProperties;
    NSMutableArray *_deferredChatMessages;
    NSMutableArray *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    NSDate *_myIdleSince;
    NSData *_myPicture;
    NSMutableDictionary *_contexts;
    NSString *_myStatusMessage;
    NSString *_myNowPlayingString;
    unsigned int _myStatus;
    unsigned long long _vcCapabilities;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
    BOOL _holdingChatMessages;
    BOOL _hidingDisconnect;
    BOOL _hasPendingProcessChange;
}

@property(readonly) NSDictionary * properties;
@property(readonly) NSDictionary * persistentProperties;
@property(readonly) unsigned int myStatus;
@property(readonly) NSString * myStatusMessage;
@property(readonly) unsigned long myIdleTime;
@property(readonly) unsigned long long vcCapabilities;
@property(readonly) BOOL shouldHoldChatMessages;
@property(readonly) BOOL isHoldingChatMessages;
@property(readonly) BOOL isSetupComplete;
@property(readonly) BOOL hasPostedSetupComplete;
@property(readonly) NSArray * handlers;
@property(readonly) NSArray * allServices;
@property(readonly) NSMutableDictionary * _contexts;
@property(setter=_setHidingDisconnect:) BOOL _hidingDisconnect;


- (void)standaloneFileTransferRegistered:(id)arg1;
- (id)valueOfPersistentProperty:(id)arg1;
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(BOOL)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (BOOL)hasPostedSetupComplete;
- (void)accountRemoved:(id)arg1;
- (void)_noteDisconnected;
- (BOOL)isSetupComplete;
- (id)persistentProperties;
- (unsigned long long)vcCapabilities;
- (void)_setHidingDisconnect:(BOOL)arg1;
- (id)_contexts;
- (id)valueOfProperty:(id)arg1;
- (id)_stampForContext:(id)arg1;
- (void)releaseHeldChatMessages;
- (void)holdChatMessages;
- (BOOL)_hidingDisconnect;
- (void)_deferredSetup:(id)arg1;
- (void)_setStamp:(id)arg1 forContext:(id)arg2;
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (void)_deferNotification:(id)arg1;
- (BOOL)shouldHoldChatMessages;
- (void)_processMyStatusChanged;
- (void)_processDeferredInvitationDictionary:(id)arg1;
- (BOOL)isHoldingChatMessages;
- (void)_reallyProcessMyStatusChanged;
- (void)databaseNoLongerFull;
- (void)databaseFull;
- (void)databaseUpdated:(id)arg1;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)account:(id)arg1 statusChanged:(id)arg2;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandDelivered:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandReceived:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (void)account:(id)arg1 blockIdleStatusChanged:(BOOL)arg2;
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(id)arg1 allowListChanged:(id)arg2;
- (void)account:(id)arg1 blockListChanged:(id)arg2;
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(id)arg1 defaultsChanged:(id)arg2;
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (id)myStatusMessage;
- (unsigned int)myStatus;
- (unsigned long)myIdleTime;
- (id)serviceWithName:(id)arg1;
- (id)allServices;
- (id)handlers;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)properties;

@end

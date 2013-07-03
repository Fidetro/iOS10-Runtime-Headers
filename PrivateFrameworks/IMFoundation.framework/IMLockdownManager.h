/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject  {
    BOOL _settingUpActivationState;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    unsigned int _state;
}

@property(readonly) BOOL isInternalInstall;
@property(readonly) BOOL isCarrierInstall;
@property(readonly) BOOL isActivated;
@property(readonly) BOOL isExpired;
@property(readonly) struct __SecIdentity { }* copyIdentity;
@property(readonly) NSString * uniqueDeviceIdentifier;
@property(setter=_setState:) unsigned int _state;
@property BOOL _settingUpActivationState;
@property BOOL _isInternalInstall;
@property BOOL _isCarrierInstall;
@property BOOL _hasShownWaitingAlertThisSession;
@property BOOL _hasShownMismatchedSIM;

+ (id)sharedInstance;

- (void)set_hasShownWaitingAlertThisSession:(BOOL)arg1;
- (BOOL)_hasShownWaitingAlertThisSession;
- (void)set_hasShownMismatchedSIM:(BOOL)arg1;
- (BOOL)_hasShownMismatchedSIM;
- (void)set_isCarrierInstall:(BOOL)arg1;
- (BOOL)_isCarrierInstall;
- (void)set_isInternalInstall:(BOOL)arg1;
- (void)set_settingUpActivationState:(BOOL)arg1;
- (BOOL)_settingUpActivationState;
- (id)uniqueDeviceIdentifier;
- (struct __SecIdentity { }*)copyIdentity;
- (BOOL)isExpired;
- (BOOL)isActivated;
- (BOOL)isCarrierInstall;
- (unsigned int)_state;
- (void)_resetActivationState;
- (void)_activationFailed;
- (int)lockdownState;
- (void)_setupActivationState;
- (BOOL)isInternalInstall;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)_isInternalInstall;
- (void)_setState:(unsigned int)arg1;

@end

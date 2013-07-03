/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIAlertView, NSArray;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
    NSArray *_allowedBundleIDs;
    BOOL _allowInStark;
}

@property BOOL ignoreIfAlreadyDisplaying;
@property BOOL allowInSetup;
@property BOOL pendInSetupIfNotAllowed;
@property(retain) NSArray * allowedBundleIDs;
@property BOOL allowInStark;

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;

- (id)sound;
- (void)setAllowInStark:(BOOL)arg1;
- (BOOL)allowInStark;
- (void)setAllowedBundleIDs:(id)arg1;
- (id)allowedBundleIDs;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)allowInSetup;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (BOOL)ignoreIfAlreadyDisplaying;
- (id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (int)alertPriority;
- (BOOL)preventInterruption;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)behavesSuperModally;
- (BOOL)forcesModalAlertAppearance;
- (id)alertItemNotificationSender;
- (id)alertItemNotificationDate;
- (int)alertItemNotificationType;
- (void)noteVolumeOrLockPressed;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)screenWillUndim;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (void)didActivate;
- (void)willActivate;
- (BOOL)_didEverActivate;
- (void)setPreventLockOver:(BOOL)arg1;
- (BOOL)preventLockOver;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (void)performUnlockAction;
- (double)autoDismissInterval;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)playPresentationSound;
- (BOOL)isCriticalAlert;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)togglesMediaControls;
- (int)unlockSource;
- (BOOL)unlocksScreen;
- (BOOL)undimsScreen;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)allowAutoUnlock;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)cleanPreviousConfiguration;
- (void)buttonDismissed;
- (BOOL)hasActiveKeyboardOnScreen;
- (id)alertSheet;
- (void)_playPresentationSound;
- (BOOL)didPlayPresentationSound;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setAllowInSetup:(BOOL)arg1;
- (Class)alertSheetClass;
- (BOOL)dismissOnLock;
- (void)dismiss:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)dismiss;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end

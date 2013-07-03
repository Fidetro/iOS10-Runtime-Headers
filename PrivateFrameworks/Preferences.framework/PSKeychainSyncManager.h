/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PSRootController, KeychainSyncSMSVerificationController, UIAlertView, KeychainSyncAdvancedSecurityCodeController, KeychainSyncSecurityCodeController, KeychainSyncPhoneNumberController, UIViewController, NSString, KeychainSyncDevicePINController, PSSetupController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    BOOL _joiningCircle;
    int _circleNotificationToken;
    int _flow;
    BOOL _pinCodeWasGenerated;
    UIAlertView *_passwordPrompt;
    UIAlertView *_incorrectRecoveryCodesAlert;
    UIAlertView *_devicePINChoiceAlert;
    UIAlertView *_devicePasscodeTooWeakAlert;
    UIAlertView *_devicePasscodeChangeAlert;
    UIAlertView *_enableWithExistingBackupAlert;
    UIAlertView *_resetConfirmationAlert;
    KeychainSyncDevicePINController *_devicePinController;
    KeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    KeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    KeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIViewController *_spinningViewController;
    NSString *_appleIDUsername;
    NSString *_appleIDPassword;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _passwordPromptCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _changeSecurityCodeCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resetCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _circleJoinCompletion;

    UIViewController *_passwordPromptControllerHost;
    UIViewController *_resetPromptControllerHost;
    PSSetupController *_settingsSetupController;
    PSRootController *_buddyNavigationController;
    NSString *_pinCode;
}

@property(getter=isRunningInBuddy,readonly) BOOL runningInBuddy;
@property(retain) NSString * appleIDUsername;
@property(retain) NSString * appleIDPassword;
@property(copy) id completion;
@property(copy) id passwordPromptCompletion;
@property(copy) id changeSecurityCodeCompletion;
@property(copy) id resetCompletion;
@property(copy) id circleJoinCompletion;
@property(retain) UIViewController * passwordPromptControllerHost;
@property(retain) UIViewController * resetPromptControllerHost;
@property(retain) PSSetupController * settingsSetupController;
@property(retain) PSRootController * buddyNavigationController;
@property(retain) NSString * pinCode;

+ (BOOL)isSimpleSecurityCode:(id)arg1;
+ (id)sharedManager;

- (id)buddyNavigationController;
- (id)settingsSetupController;
- (id)resetPromptControllerHost;
- (id)passwordPromptControllerHost;
- (id)circleJoinCompletion;
- (id)resetCompletion;
- (id)changeSecurityCodeCompletion;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(id)arg2;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 complexOnly:(BOOL)arg3 completion:(id)arg4;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg1;
- (void)setAppleIDPassword:(id)arg1;
- (id)passwordPromptCompletion;
- (id)pinCode;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)_changeToNewSecurityCode:(id)arg1 isSimple:(BOOL)arg2 wasGenerated:(BOOL)arg3 smsTarget:(id)arg4 smsTargetCountryInfo:(id)arg5;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (BOOL)_resetCircleAndDisableBackupWithError:(id*)arg1;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)_showGenericEnableErrorAlert;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id)arg1;
- (void)setPinCode:(id)arg1;
- (BOOL)changeSecurityCode:(id)arg1 isSimple:(BOOL)arg2 wasGenerated:(BOOL)arg3 smsTarget:(id)arg4 smsTargetCountryInfo:(id)arg5 error:(id*)arg6;
- (id)appleIDPassword;
- (id)appleIDUsername;
- (void)handleCircleChangedNotification;
- (void)setCircleJoinCompletion:(id)arg1;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(id)arg2;
- (void)setPasswordPromptControllerHost:(id)arg1;
- (void)setPasswordPromptCompletion:(id)arg1;
- (void)setAppleIDUsername:(id)arg1;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(BOOL)arg2 withCompletion:(id)arg3;
- (void)stopNavigationSpinner;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)setResetCompletion:(id)arg1;
- (void)setResetPromptControllerHost:(id)arg1;
- (void)promptForPasswordIfNeededWithCompletion:(id)arg1;
- (void)setChangeSecurityCodeCompletion:(id)arg1;
- (void)showController:(id)arg1;
- (void)setBuddyNavigationController:(id)arg1;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(id)arg2;
- (void)_preSetupCancelledWithDisabledStatus;
- (void)showPinChoiceAlert;
- (void)setSettingsSetupController:(id)arg1;
- (void)joinCircleWithCompletion:(id)arg1;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (BOOL)isRunningInBuddy;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)dealloc;
- (void)_cleanup;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (id)navigationController;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end

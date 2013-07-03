/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UILabel, UIButton, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase  {
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIButton *_okButton;
    BOOL _showsOkButton;
    UILabel *_promptLabel;
    BOOL _showsPromptLabel;
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property(readonly) UIButton * okButton;
@property BOOL showsOkButton;
@property(readonly) UILabel * promptLabel;
@property BOOL showsPromptLabel;


- (BOOL)showsPromptLabel;
- (id)promptLabel;
- (BOOL)showsOkButton;
- (struct CGSize { float x1; float x2; })_okButtonSize;
- (void)setShowsPromptLabel:(BOOL)arg1;
- (void)setShowsOkButton:(BOOL)arg1;
- (void)_okButtonHit;
- (struct CGSize { float x1; float x2; })_passcodeFieldSize;
- (struct CGSize { float x1; float x2; })_viewSize;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (id)okButton;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setBackgroundAlpha:(float)arg1;
- (id)initWithDefaultSize;
- (BOOL)canResignFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)layoutSubviews;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSTableCell, NSString, PSSpecifier, UIView<UIKeyInput>;

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    PSTableCell *_textEntryCell;
    UIView<UIKeyInput> *_textEntryView;
    PSSpecifier *_textEntrySpecifier;
    BOOL _hidesNextButton;
    BOOL _secureTextEntry;
    int _textEntryType;
    NSString *_textValue;
}

@property int textEntryType;
@property BOOL hidesNextButton;
@property BOOL secureTextEntry;
@property(retain) NSString * textValue;


- (BOOL)secureTextEntry;
- (id)getTextValueForSpecifier:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (id)textEntrySpecifier;
- (void)setTextValue:(id)arg1;
- (id)textValue;
- (BOOL)hidesNextButton;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (void)textEntryViewDidChange:(id)arg1;
- (void)didFinishEnteringPasscode:(id)arg1;
- (id)textEntryText;
- (id)textEntryView;
- (void)setTextEntryText:(id)arg1;
- (void)updateNextButton;
- (void)nextPressed;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (int)textEntryType;
- (void)setHidesNextButton:(BOOL)arg1;
- (void)setTextEntryType:(int)arg1;
- (id)specifiers;
- (void)textFieldChanged:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end

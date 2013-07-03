/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSAttributedString, UIGestureRecognizer, UIImage, UIToolbar, _UIBackdropView, UILabel, UIView, UIPopoverController, UIWindow, <UIActionSheetDelegate>, NSString, UIImageView, NSMutableArray;

@interface UIActionSheet : UIView  {
    <UIActionSheetDelegate> *_delegate;
    UILabel *_titleLabel;
    NSAttributedString *_attributedTitleString;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    float _startY;
    id _context;
    int _cancelButton;
    int _defaultButton;
    int _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    int _suspendTag;
    int _dismissButtonIndex;
    float _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_buttonsInTable;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_buttonTableView;
    UIView *_dimView;
    UIPopoverController *_popoverController;
    float _fontSizeInTableView;
    float _iconOffset;
    float _labelOffset;
    float _labelWidth;
    float _titleWidth;
    BOOL _oldIgnoreTapsValue;
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int sheetWasShown : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int popupFromPoint : 1; 
        unsigned int inPopover : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateClickedButtonAtIndex2 : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateCancel2 : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateWillPresent2 : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateDidPresent2 : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateWillDismiss2 : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int delegateDidDismiss2 : 1; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int twoColumnsLayoutMode : 7; 
        unsigned int threeColumnsLayoutMode : 7; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
        unsigned int useThreePartButtons : 1; 
        unsigned int useTwoPartButtons : 1; 
        unsigned int displaySelectedButtonGlyph : 1; 
        unsigned int indexOfSelectedButton : 7; 
        unsigned int useCustomSelectedButtonGlyph : 1; 
        unsigned int usesNewStyle : 1; 
        unsigned int isDesaturated : 1; 
        unsigned int creatingPopoverForDisplay : 1; 
    } _modalViewFlags;
    int _actionSheetStyle;
    UIImage *_selectedButtonGlyphImage;
    UIImage *_selectedButtonGlyphHighlightedImage;
    UIImageView *_shadowImageView;
    _UIBackdropView *_backdropView;
    UIGestureRecognizer *_dimViewGestureRecognizer;
    UIImage *_dimViewImage;
}

@property <UIActionSheetDelegate> * delegate;
@property(copy) NSString * title;
@property int actionSheetStyle;
@property(readonly) int numberOfButtons;
@property int cancelButtonIndex;
@property int destructiveButtonIndex;
@property(readonly) int firstOtherButtonIndex;
@property(getter=isVisible,readonly) BOOL visible;

+ (Class)_popoverControllerClass;
+ (struct CGSize { float x1; float x2; })minimumSize;
+ (id)_popupAlertBackground;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setIndexOfSelectedButton:(int)arg1;
- (void)setMessage:(id)arg1;
- (id)context;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (BOOL)isVisible;
- (void)_layoutIfNeeded;
- (void)setContext:(id)arg1;
- (void)layout;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)showFromBarButtonItem:(id)arg1;
- (void)showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned int)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(int)arg5 animated:(BOOL)arg6;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned int)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5;
- (void)setDestructiveButtonIndex:(int)arg1;
- (int)destructiveButtonIndex;
- (int)actionSheetStyle;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (int)threeColumnsLayoutMode;
- (void)setUseThreeColumnsButtonsLayout:(BOOL)arg1;
- (void)setUseTwoColumnsButtonsLayout:(BOOL)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)_resizeDimViewAnimatingUp:(BOOL)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)_buttonAtIndex:(int)arg1;
- (id)buttonAtIndex:(int)arg1;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)_attributedTitleString;
- (void)_setAttributedTitleString:(id)arg1;
- (BOOL)_shouldHaveBackdropView;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)_presentPopoverInCenterOfWindowForView:(id)arg1;
- (void)presentSheetInPopoverView:(id)arg1;
- (id)_presentingViewForView:(id)arg1;
- (void)_presentViaResponderChain:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned int)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8;
- (void)_presentFromBarButtonItem:(id)arg1 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(unsigned int)arg4 allowInteractionWithViews:(id)arg5 backgroundStyle:(int)arg6 animated:(BOOL)arg7;
- (void)_removeBackdropViewIfNecessary;
- (void)_transitionToLegacyAppearanceIfNecessary;
- (void)showFromToolbar:(id)arg1;
- (void)setThreeColumnsLayoutMode:(int)arg1;
- (void)setTwoColumnsLayoutMode:(int)arg1;
- (int)twoColumnsLayoutMode;
- (BOOL)useThreeColumnsButtonsLayout;
- (BOOL)useTwoColumnsButtonsLayout;
- (void)_applyParallaxToContentIfNecessary;
- (void)_transitionUIInView:(id)arg1 toSaturated:(BOOL)arg2;
- (void)_installGestureRecognizerInDimView;
- (BOOL)_shouldParallax;
- (void)_handleTap:(id)arg1;
- (id)_dimViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1 inView:(id)arg2;
- (void)presentSheetInContentView:(id)arg1;
- (void)_presentViaResponderChainFromYCoordinate:(float)arg1;
- (void)_hideActionSheetInsidePopOverAnimated:(BOOL)arg1;
- (void)_hideHostingPopOverViewAnimated:(BOOL)arg1;
- (void)_representActionSheetInsidePopOverAnimated:(BOOL)arg1;
- (void)_representHostingPopOverViewAnimated:(BOOL)arg1;
- (void)_actionSheetRepresentingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_actionSheetHidingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_popoverRepresentationAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_popoverHiddingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (int)firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (id)buttonTitleAtIndex:(int)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (void)presentSheetFromButtonBar:(id)arg1;
- (int)numberOfLinesInTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (BOOL)runsModal;
- (BOOL)blocksInteraction;
- (void)setBlocksInteraction:(BOOL)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (BOOL)dimsBackground;
- (void)setDimsBackground:(BOOL)arg1;
- (int)alertSheetStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (BOOL)isBodyTextTruncated;
- (BOOL)_dimsBackground;
- (void)_repopupNoAnimation;
- (BOOL)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (BOOL)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (BOOL)_isSBAlert;
- (int)buttonCount;
- (id)_addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (id)bodyText;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (float)_bottomVerticalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (float)_buttonHeight;
- (float)_titleHorizontalInset;
- (void)_setupTitleStyle;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_dimView;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)_appSuspended:(id)arg1;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSize;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (BOOL)_isHostedByPopOver;
- (BOOL)_isInsidePopOverContent;
- (void)_repopup;
- (void)_performPopup:(BOOL)arg1;
- (void)_setupInitialFrame;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_cleanupAfterPopupAnimation;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_canShowAlerts;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)layoutAnimated:(BOOL)arg1;
- (BOOL)_needsKeyboard;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)buttons;
- (int)_currentOrientation;
- (void)_buttonClicked:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)textFieldCount;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)setAlertSheetStyle:(int)arg1;
- (BOOL)requiresPortraitOrientation;
- (id)keyboard;
- (BOOL)_isAnimating;
- (id)textField;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (int)numberOfButtons;
- (id)_relinquishPopoverController;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)setActionSheetStyle:(int)arg1;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)setNumberOfRows:(int)arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (void)dismiss;
- (id)tableView;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)showInView:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (struct CGSize { float x1; float x2; })_maxSize;
- (id)_titleLabel;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (id)textFieldAtIndex:(int)arg1;
- (float)_maxHeight;
- (int)defaultButtonIndex;
- (float)_separatorInset;
- (int)numberOfRows;
- (BOOL)canBecomeFirstResponder;
- (id)_normalInheritedTintColor;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (BOOL)_canDrawContent;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)cancelButtonIndex;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (id)mf_tagForButtonIndex:(int)arg1;
- (int)mf_addButtonWithTitle:(id)arg1 tag:(id)arg2;

@end

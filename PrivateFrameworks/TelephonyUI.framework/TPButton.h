/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class _UIBackdropView, TPShineLabelView;

@interface TPButton : UIButton  {
    int _color;
    _UIBackdropView *_backdropView;
    struct CGSize { 
        float width; 
        float height; 
    } offsetForshineLabel;
    BOOL _blursBackground;
    TPShineLabelView *_shineLabelView;
}

@property BOOL blursBackground;
@property(retain) TPShineLabelView * shineLabelView;

+ (id)acceptVideoButtonImage;
+ (id)answerButtonImage;
+ (float)defaultHeightForColor:(int)arg1;
+ (id)declineVideoButtonImage;
+ (id)declineButtonImage;
+ (float)defaultWidthForSideButton;
+ (float)maxWidthForCenterButton;
+ (float)defaultWidthForCenterButton;
+ (float)defaultHeight;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (id)shineLabelView;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setTitleVerticalOffset:(float)arg1;
- (void)setIconVerticalOffset:(float)arg1;
- (void)setTitleImagePadding:(float)arg1;
- (void)setMinimumTitleFontSize:(float)arg1 maximumTitleFontSize:(float)arg2;
- (void)setMinimumTitleFontSize:(float)arg1;
- (void)setShineLabelView:(id)arg1;
- (void)setButtonColor:(int)arg1;
- (void)setPlusSeparatedTitle:(id)arg1;
- (int)buttonColor;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (void)setShineLabelOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setUsesShineLabelWithText:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)setBlursBackground:(BOOL)arg1;
- (BOOL)blursBackground;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end

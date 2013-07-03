/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIPressedIndicatorView, UILabel, UIView, UIColor, UIToolbarButtonBadge;

@interface UIToolbarButton : UIControl  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    UILabel *_label;
    UIToolbarButtonBadge *_badge;
    _UIPressedIndicatorView *_pressedIndicator;
    int _barStyle;
    int _style;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    BOOL _bezel;
    float _minimumWidth;
    float _maximumWidth;
    float _labelHeight;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
    UIColor *_toolbarTintColor;
    BOOL _isAnimatedTrashButton;
    id _appearanceStorage;
    BOOL _isInTopBar;
    Class _appearanceGuideClass;
}

@property(getter=isAnimatedTrashButton) BOOL animatedTrashButton;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;
@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)setAnimatedTrashButton:(BOOL)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (BOOL)_useBarHeight;
- (void)_setBarHeight:(float)arg1;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2;
- (BOOL)_isOn;
- (void)_setOn:(BOOL)arg1;
- (float)_paddingForLeft:(BOOL)arg1;
- (BOOL)_canGetPadding;
- (void)_setInfoFlexibleWidth:(BOOL)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2;
- (void)_setInfoWidth:(float)arg1;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)setUseSelectedImage:(BOOL)arg1;
- (void)_showPressedIndicator:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_buttonBarHitRect;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSizesToFitImage:(BOOL)arg1;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(int)arg5 withStyle:(int)arg6 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg12 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg13 landscape:(BOOL)arg14;
- (void)_setInTopBar:(BOOL)arg1;
- (void)_updateInfoTextColorsForState:(unsigned int)arg1;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1;
- (BOOL)_useSilverLook;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (BOOL)_shouldApplyPadding;
- (BOOL)isAnimatedTrashButton;
- (void)_adjustToolbarButtonInfo;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_positionBadge;
- (BOOL)_infoIsButton;
- (void)_setPressed:(BOOL)arg1;
- (BOOL)_isBordered;
- (void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2;
- (id)_newButton;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (BOOL)_shouldDelaySendingTouchesEndedActionUntilNextRunLoop;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)setHighlighted:(BOOL)arg1;
- (id)_tintColor;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (Class)_appearanceGuideClass;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_info;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

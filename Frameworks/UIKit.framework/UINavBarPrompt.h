/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UILabel;

@interface UINavBarPrompt : UIView  {
    UILabel *_label;
    UINavigationBar *_navBar;
}

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)dealloc;
- (struct CGSize { float x1; float x2; })_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (struct CGSize { float x1; float x2; })_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;
- (void)clearWeakReference:(id)arg1;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLanguage;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end

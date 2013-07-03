/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIScrollView, TPButton;

@interface TPSlidingButton : UIView  {
    UIScrollView *_scrollView;
    TPButton *_acceptButton;
    TPButton *_endButton;
    TPButton *_sideButtonLeft;
    TPButton *_sideButtonRight;
    int _type;
}

@property(retain) UIScrollView * scrollView;
@property(retain) TPButton * acceptButton;
@property(retain) TPButton * endButton;
@property(retain) TPButton * sideButtonLeft;
@property(retain) TPButton * sideButtonRight;
@property int type;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setEndButton:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (id)acceptButton;
- (id)endButton;
- (id)initWithSlidingButtonType:(int)arg1;
- (id)sideButtonRight;
- (id)sideButtonLeft;
- (void)setSideButtonRight:(id)arg1;
- (void)setSideButtonLeft:(id)arg1;
- (void)setType:(int)arg1;
- (void)dealloc;
- (id)scrollView;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setScrollView:(id)arg1;
- (void)layoutSubviews;
- (int)type;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, GKLabel;

@interface GKNotificationBannerView : UIView  {
    UIImageView *_imageView;
    GKLabel *_titleLabel;
    GKLabel *_messageLabel;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchHandler;

    float _preferredWidthPad;
    double _duration;
}

@property(readonly) UIImageView * imageView;
@property(readonly) GKLabel * titleLabel;
@property(readonly) GKLabel * messageLabel;
@property(readonly) float preferredWidthPad;
@property double duration;
@property(copy) id completionHandler;
@property(copy) id touchHandler;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)showWithTouchHandler:(id)arg1;
- (void)showWithCompletionHandler:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)touchHandler;
- (void)setTouchHandler:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (float)preferredWidthPad;
- (void)callCompletionHandler;
- (void)_wasTouched:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (void)setCompletionHandler:(id)arg1;
- (id)imageView;
- (id)messageLabel;
- (id)completionHandler;
- (id)titleLabel;
- (double)duration;

@end

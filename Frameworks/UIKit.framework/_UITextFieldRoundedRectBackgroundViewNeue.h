/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIBezierPath;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UITextFieldBackgroundView  {
    BOOL _customStrokeColor;
    BOOL _customFillColor;
    float _cornerRadius;
    UIBezierPath *_customPath;
}

@property(copy) UIColor * strokeColor;
@property(copy) UIColor * fillColor;
@property float lineWidth;
@property float cornerRadius;
@property(copy) UIBezierPath * customPath;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (id)fillColor;
- (float)cornerRadius;
- (float)lineWidth;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCustomPath:(id)arg1;
- (float)_pixelAlignment;
- (float)_pathInset;
- (id)customPath;
- (void)_updatePath;
- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (void)setLineWidth:(float)arg1 updatePath:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (id)_layer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setLineWidth:(float)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer  {
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _borderWidths;
    struct CGSize { 
        double width; 
        double height; 
    } _imageSize;
    long long _imageTreatment;
}

@property(retain) UIColor * backgroundColor;
@property(retain) UIColor * borderColor;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property struct CGSize { double x1; double x2; } imageSize;
@property long long imageTreatment;


- (void)setImageTreatment:(long long)arg1;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_backgroundIsOpaque;
- (id)_uberImageWithInputSize:(struct CGSize { double x1; double x2; })arg1 drawBlock:(id)arg2;
- (id)_scaledImageWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawBlock:(id)arg2;
- (id)_arcRoundedImageWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 drawBlock:(id)arg3;
- (id)_outputImageWithInputSize:(struct CGSize { double x1; double x2; })arg1 drawBlock:(id)arg2;
- (long long)imageTreatment;
- (id)imageForColor:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (void)setBorderWidths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageForImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)borderColor;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setBorderColor:(id)arg1;
- (void).cxx_destruct;

@end
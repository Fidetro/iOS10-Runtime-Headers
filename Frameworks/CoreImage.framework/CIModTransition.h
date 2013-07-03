/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIModTransition : CIFilter  {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputCompression;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputTargetImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputTime;
@property(retain) NSNumber * inputAngle;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputCompression;

+ (id)customAttributes;

- (id)inputTime;
- (id)inputCompression;
- (void)setInputCompression:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (id)inputTargetImage;
- (void)setInputTime:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end

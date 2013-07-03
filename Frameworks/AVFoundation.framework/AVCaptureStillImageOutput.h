/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput  {
    AVCaptureStillImageOutputInternal *_internal;
}

@property(copy) NSDictionary * outputSettings;
@property(readonly) NSArray * availableImageDataCVPixelFormatTypes;
@property(readonly) NSArray * availableImageDataCodecTypes;
@property(getter=isCapturingStillImage,readonly) BOOL capturingStillImage;

+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(void*)arg1 size:(unsigned long)arg2;
+ (struct CGImage { }*)cgImageForBGRASurface:(void*)arg1 size:(unsigned long)arg2;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void*)arg1 size:(unsigned long)arg2 metadata:(id)arg3;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (unsigned long)maxStillImageJPEGDataSize;
+ (void)initialize;

- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2 imageIsEV0:(BOOL*)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (id)firstActiveConnection;
- (BOOL)isCapturingStillImage;
- (BOOL)resumeVideoProcessing;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;
- (void)setRawCaptureEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (void)setYoMamaWearsCombatBootsAutomaticallyWhenAvailable:(BOOL)arg1;
- (BOOL)yoMamaWearsCombatBootsAutomaticallyWhenAvailable;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (BOOL)isEV0CaptureEnabled;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (BOOL)isHDRCaptureEnabled;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (BOOL)isRawCaptureSupported;
- (id)availableImageDataCodecTypes;
- (id)availableImageDataCVPixelFormatTypes;
- (BOOL)isRawCaptureEnabled;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setHDRMode:(int)arg1;
- (int)HDRMode;
- (unsigned long)imageDataFormatType;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)isYoMamaWearsCombatBootsSupported;
- (BOOL)isHDRSupported;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)outputSettings;
- (void)setOutputSettings:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLTextureWithRGBColorMasksProgram : VGLTextureWithAlphaProgram  {
    int _uRColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _rColor;
    int _uGColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _gColor;
    int _uBColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _bColor;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } rColor;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } gColor;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } bColor;

+ (id)fragName;

- (struct _VGLColor { float x1; float x2; float x3; float x4; })bColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })gColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })rColor;
- (void)setBColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setGColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setRColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setup;
- (id).cxx_construct;

@end
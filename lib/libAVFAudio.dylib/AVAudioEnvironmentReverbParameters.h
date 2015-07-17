/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEnvironmentReverbParameters : NSObject {
    void *_impl;
}

@property (nonatomic) BOOL enable;
@property (nonatomic, readonly) AVAudioUnitEQFilterParameters *filterParameters;
@property (nonatomic) float level;

- (void)dealloc;
- (BOOL)enable;
- (id)filterParameters;
- (id)init;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; void x5; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x6; BOOL x7; void*x8; out const void*x9; unsigned int x10/* : ? */; out out long x11; void*x12; void*x13; short x14; void*x15; double x16; SEL x17; SEL x18; void*x19; void*x20; void*x21; SEL x22; SEL x23; void*x24; long x25; long x26; out BOOL x27; void*x28; void*x29; out const void*x30; unsigned int x31/* : ? */; out out long x32; void*x33; void*x34; void*x35; void*x36; unsigned long *x37; unsigned int x38; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_39_1_1; } x39; }*)arg1;
- (float)level;
- (void)loadFactoryReverbPreset:(int)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setLevel:(float)arg1;

@end
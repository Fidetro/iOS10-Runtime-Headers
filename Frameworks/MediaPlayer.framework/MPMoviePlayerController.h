/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    id _implementation;
}

@property(copy) NSURL * contentURL;
@property(readonly) UIView * view;
@property(readonly) UIView * backgroundView;
@property(readonly) int playbackState;
@property(readonly) int loadState;
@property int controlStyle;
@property int repeatMode;
@property BOOL shouldAutoplay;
@property(getter=isFullscreen) BOOL fullscreen;
@property int scalingMode;
@property(readonly) BOOL readyForDisplay;
@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (void)allInstancesResignActive;

- (BOOL)readyForDisplay;
- (BOOL)_isReadyForDisplay;
- (void)_resignActive;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)currentPlaybackTime;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)playableDuration;
- (int)movieSourceType;
- (void)setMovieSourceType:(int)arg1;
- (int)movieMediaTypes;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (BOOL)isPreparedToPlay;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (BOOL)allowsAirPlay;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (void)setShouldAutoplay:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (id)initWithContentURL:(id)arg1;
- (void)setContentURL:(id)arg1;
- (int)loadState;
- (id)contentURL;
- (BOOL)isAirPlayVideoActive;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (void)play;
- (void)prepareToPlay;
- (int)playbackState;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)initWithAsset:(id)arg1;
- (id)backgroundView;
- (id)view;
- (void)pause;
- (double)duration;
- (void)stop;

@end

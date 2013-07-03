/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSError, AVPlayerInternal;

@interface AVPlayer : NSObject  {
    AVPlayerInternal *_player;
}

@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) int _externalProtectionStatus;
@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) BOOL audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property BOOL allowsPixelBufferPoolSharing;
@property BOOL disallowsAMRAudio;
@property BOOL appliesMediaSelectionCriteriaAutomatically;
@property(copy) NSString * audioOutputDeviceUniqueID;
@property(readonly) int status;
@property(readonly) NSError * error;

+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (BOOL)automaticallyNotifiesObserversOfAudioOutputDeviceUniqueID;
+ (BOOL)automaticallyNotifiesObserversOfAppliesMediaSelectionCriteriaAutomatically;
+ (BOOL)automaticallyNotifiesObserversOfDisallowsHardwareAcceleratedVideoDecoder;
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAllowsPixelBufferPoolSharing;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (BOOL)automaticallyNotifiesObserversOfMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+ (BOOL)automaticallyNotifiesObserversOfUserVolume;
+ (id)keyPathsForValuesAffectingRate;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (void)initialize;

- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)setAutoSwitchStreamVariants:(BOOL)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (id)audioOutputDeviceUniqueID;
- (id)_audioOutputDeviceUniqueID;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (BOOL)appliesMediaSelectionCriteriaAutomatically;
- (BOOL)_appliesMediaSelectionCriteriaAutomatically;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (BOOL)disallowsAMRAudio;
- (BOOL)_disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)_disallowsAMRAudio;
- (void)setAllowsPixelBufferPoolSharing:(BOOL)arg1;
- (BOOL)allowsPixelBufferPoolSharing;
- (BOOL)_allowsPixelBufferPoolSharing;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (id)_clientName;
- (BOOL)_shouldDetachContentLayersFromFigPlayer;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_CALayerDestinationIsTVOut;
- (float)maxRateForAudioPlayback;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (float)minRateForAudioPlayback;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (BOOL)isAudioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (id)_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;
- (int)_externalProtectionStatus;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (BOOL)_shouldLogPerformanceData;
- (void)_setCurrentSubtitlesPayload:(id)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)_pixelBufferAttributeMediator;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)isAirPlayVideoActive;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (BOOL)allowsAirPlayVideo;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (int)externalPlaybackType;
- (BOOL)isExternalPlaybackActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (BOOL)isClosedCaptionDisplayEnabled;
- (int)actionAtItemEnd;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(id)arg2;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)_removeAllItems;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (BOOL)_isChangingValueForKey:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)_copyPerformanceDataForCurrentItem;
- (id)_fpNotificationNames;
- (id)_playerLayers;
- (void)_detachLayersFromFigPlayer;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)allowsExternalPlayback;
- (BOOL)_usesAudioOnlyModeForExternalPlayback;
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)_allowsExternalPlayback;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (int)_actionAtItemEnd;
- (int)_defaultActionAtItemEnd;
- (BOOL)_isMuted;
- (float)_playerVolume;
- (id)playerAVAudioSession;
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)arg1;
- (int)_createPrerollID;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)seekToDate:(id)arg1;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setCurrentItem:(id)arg1;
- (void)_createPlayer:(int)arg1 asyncSetUp:(BOOL)arg2 item:(id)arg3 preparationRequested:(BOOL)arg4 completionHandler:(id)arg5;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_attachLayersToFigPlayer;
- (BOOL)_externalPlaybackActive;
- (id)_propertyStorage;
- (BOOL)_airPlayVideoActive;
- (void)_addFPListeners;
- (BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3;
- (BOOL)_removeItem:(id)arg1;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (struct OpaqueFigPlayer { }*)_figPlayer;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_currentItem;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_removeFPListeners;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)arg1;
- (BOOL)_iapdExtendedModeIsActive;
- (void)_didFinishSuspension:(id)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setActionAtItemEnd:(int)arg1;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (id)initWithPlayerItem:(id)arg1;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (BOOL)autoSwitchStreamVariants;
- (id)externalPlaybackVideoGravity;
- (id)expectedAssetTypes;
- (id)_currentSubtitlesPayload;
- (id)_stateDispatchQueue;
- (void)_conformContentLayer:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_addLayer:(id)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (id)_weakReference;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (float)rate;
- (float)volume;
- (void)play;
- (id)dispatchQueue;
- (float)_rate;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)_removeAllLayers;
- (int)status;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (id)init;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)error;
- (void)_willEnterForeground:(id)arg1;
- (id)currentItem;
- (id)_items;
- (void)pause;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

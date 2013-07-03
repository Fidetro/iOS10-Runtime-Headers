/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVSystemController : NSObject  {
    struct AVSystemControllerPrivate { BOOL x1; BOOL x2; float x3; id x4; struct OpaqueFigPlayer {} *x5; } *_priv;
}

+ (id)sharedAVSystemController;
+ (void)initialize;

- (void)postEffectiveVolumeNotification:(void*)arg1;
- (void)postFullMuteDidChangeNotification:(void*)arg1;
- (void)handleServerDied;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (BOOL)currentRouteHasVolumeControl;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (id)routeForCategory:(id)arg1;
- (BOOL)enablePortDiscovery:(BOOL)arg1;
- (BOOL)getPortDiscoveryEnabled;
- (BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1;
- (BOOL)getVolume:(float*)arg1 forCategory:(id)arg2;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)okToNotifyFromThisThread;
- (id)pickableRoutesForCategory:(id)arg1;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2;
- (id)attributeForKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end

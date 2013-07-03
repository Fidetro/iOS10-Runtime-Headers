/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSBundle, NSHashTable, CLLocation, <MKLocationProvider>, NSTimer, GEOLocationShifter, CLHeading, GEOLocation, NSString, <MKLocationRecorder>, _MKWiFiObserver;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate> {
    <MKLocationProvider> *_locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_regionMonitors;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    double _lastLocationUpdateTime;
    BOOL _isLastLocationStale;
    BOOL _lastLocationPushed;
    BOOL _trackingLocation;
    BOOL _trackingHeading;
    <MKLocationRecorder> *_locationRecorder;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _headingUpdateTime;
    double _locationAccuracyUpdateTime;
    BOOL _allowUpdateCoalescing;
    NSTimer *_coalesceTimer;
    double _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    CLHeading *_throttledHeading;
    CLHeading *_heading;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _networkActivity;

    BOOL _enabled;
    BOOL _useCourseForHeading;
    BOOL _logStartStopLocationUpdates;
    int _consecutiveOutOfCourseCount;
    double _navCourse;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationCorrector;

    BOOL _continuedAfterBecomingInactive;
    BOOL _suspended;
    _MKWiFiObserver *_wifiObserver;
    BOOL _continuesWhileInactive;
}

@property(retain) <MKLocationProvider> * locationProvider;
@property(copy) id locationCorrector;
@property BOOL logStartStopLocationUpdates;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isLocationServicesAvailable;
@property(readonly) BOOL isLocationServicesPossiblyAvailable;
@property(readonly) BOOL isLocationServicesEnabled;
@property(readonly) BOOL isLocationServicesApproved;
@property(readonly) BOOL isLocationServicesDenied;
@property(readonly) BOOL isLocationServicesRestricted;
@property(readonly) BOOL isHeadingServicesAvailable;
@property(readonly) BOOL isAirplaneModeBlockingLocation;
@property(readonly) BOOL isWiFiEnabled;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) GEOLocation * currentLocation;
@property(readonly) GEOLocation * gridSnappedCurrentLocation;
@property(readonly) GEOLocation * courseCorrectedLocation;
@property int headingOrientation;
@property(readonly) BOOL locationShiftEnabled;
@property(readonly) BOOL hasLocation;
@property(readonly) CLLocation * lastLocation;
@property(readonly) BOOL isLastLocationStale;
@property(readonly) int lastLocationSource;
@property double desiredAccuracy;
@property double distanceFilter;
@property int activityType;
@property(readonly) double expectedGpsUpdateInterval;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property BOOL allowUpdateCoalescing;
@property BOOL useCourseForHeading;
@property(readonly) CLHeading * heading;
@property(retain) CLHeading * throttledHeading;
@property(copy) id networkActivity;
@property(retain) <MKLocationRecorder> * locationRecorder;
@property(readonly) double navigationCourse;
@property BOOL continuesWhileInactive;
@property(getter=wasLastLocationPushed,readonly) BOOL lastLocationPushed;

+ (void)setConsidersWiFiInAirplaneMode:(BOOL)arg1;
+ (id)sharedLocationManager;

- (void)setLogStartStopLocationUpdates:(BOOL)arg1;
- (BOOL)logStartStopLocationUpdates;
- (BOOL)allowUpdateCoalescing;
- (BOOL)wasLastLocationPushed;
- (id)locationCorrector;
- (double)navigationCourse;
- (void)setUseCourseForHeading:(BOOL)arg1;
- (void)setNetworkActivity:(id)arg1;
- (id)networkActivity;
- (BOOL)isLastLocationStale;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)stopMonitoringRegion:(id)arg1 observer:(id)arg2;
- (void)startMonitoringRegion:(id)arg1 observer:(id)arg2;
- (void)listenForLocationUpdates:(id)arg1;
- (void)pushLocation:(id)arg1;
- (void)setAllowUpdateCoalescing:(BOOL)arg1;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)setContinuesWhileInactive:(BOOL)arg1;
- (id)courseCorrectedLocation;
- (id)gridSnappedCurrentLocation;
- (void)_airplaneModeChanged;
- (void)_refreshAirplaneMode;
- (void)setLocationCorrector:(id)arg1;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;
- (void)_setTrackingHeading:(BOOL)arg1;
- (BOOL)isLocationServicesPossiblyAvailable:(id*)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_reportLocationFailureWithError:(id)arg1;
- (id)locationRecorder;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (BOOL)shouldStopCoalescingLocation:(id)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (BOOL)shouldStartCoalescingLocation:(id)arg1;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_reportLocationSuccess;
- (void)_stopCoalescingUpdates;
- (void)setCoalesceTimer:(id)arg1;
- (void)reportCoalescedUpdated;
- (BOOL)shouldCoalesceUpdates;
- (BOOL)isLocationServicesEnabled;
- (BOOL)isLocationServicesPossiblyAvailable;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (BOOL)continuesWhileInactive;
- (void)resetAfterResumeIfNecessary;
- (BOOL)_isTimeToResetOnResume;
- (void)_reportHeadingSuccess;
- (void)_syncLocationProviderWithTracking;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesRestricted;
- (BOOL)isLocationServicesDenied;
- (BOOL)isAirplaneModeBlockingLocation;
- (BOOL)isLocationServicesApproved;
- (id)locationProvider;
- (void)setLocationRecorder:(id)arg1;
- (void)_useCoreLocationProvider;
- (void)setLocationProvider:(id)arg1;
- (BOOL)isMonitoringRegionsAvailable;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (id)effectiveBundleIdentifier;
- (void)setEffectiveBundle:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2 monitoringRegion:(id)arg3;
- (void)locationProvider:(id)arg1 didExitRegion:(id)arg2;
- (void)locationProvider:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)dismissHeadingCalibrationDisplay;
- (int)headingOrientation;
- (double)distanceFilter;
- (void)setActivityType:(int)arg1;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (double)desiredAccuracy;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setThrottledHeading:(id)arg1;
- (id)throttledHeading;
- (double)headingUpdateTimeInterval;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (int)lastLocationSource;
- (double)expectedGpsUpdateInterval;
- (BOOL)useCourseForHeading;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (BOOL)isHeadingServicesAvailable;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (id)lastLocation;
- (void)setLastLocation:(id)arg1;
- (BOOL)locationShiftEnabled;
- (BOOL)hasLocation;
- (void)setHeading:(id)arg1;
- (id)currentLocation;
- (BOOL)isWiFiEnabled;
- (void)reset;
- (id)heading;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)init;
- (void)_suspend;
- (void)dealloc;
- (int)activityType;
- (id)effectiveBundle;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;

@end

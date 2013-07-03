/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, CLHeading, NSString, <MKUserLocationAnnotation>, <MKAnnotation>;

@interface MKUserLocationInternal : NSObject  {
    CLLocation *location;
    CLLocation *fixedLocation;
    CLLocation *predictedLocation;
    CLHeading *heading;
    NSString *title;
    NSString *subtitle;
    <MKUserLocationAnnotation> *_annotation;
    int source;
    double timestamp;
    BOOL updating;
    double course;
    <MKAnnotation> *annotation;
}

@property(retain) CLLocation * location;
@property(retain) CLLocation * fixedLocation;
@property(retain) CLLocation * predictedLocation;
@property(retain) CLHeading * heading;
@property(retain) NSString * title;
@property(retain) NSString * subtitle;
@property(readonly) <MKAnnotation> * annotation;
@property int source;
@property double timestamp;
@property(getter=isUpdating) BOOL updating;
@property double course;


- (id)fixedLocation;
- (void)setPredictedLocation:(id)arg1;
- (id)predictedLocation;
- (BOOL)isUpdating;
- (void)setFixedLocation:(id)arg1;
- (void)setCourse:(double)arg1;
- (void)setHeading:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (int)source;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)heading;
- (double)course;
- (id)location;
- (void)setSource:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)annotation;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;

@end

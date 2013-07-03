/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSNumber, NSUUID;

@interface CLBeaconRegion : CLRegion  {
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
}

@property(readonly) NSUUID * proximityUUID;
@property(readonly) NSNumber * major;
@property(readonly) NSNumber * minor;
@property BOOL notifyEntryStateOnDisplay;

+ (id)any;
+ (BOOL)supportsSecureCoding;

- (void)setNotifyEntryStateOnDisplay:(BOOL)arg1;
- (BOOL)notifyEntryStateOnDisplay;
- (id)peripheralDataWithMeasuredPower:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (BOOL)_measuredPowerForDevice;
- (id)minor;
- (id)major;
- (id)proximityUUID;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithClientRegion:(struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; })arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable  {
    unsigned long long _timestamp;
    int _available;
    unsigned int _deviceIdentifierMap;
    unsigned int _flags;
    int _reason;
    unsigned int _subreason;
    unsigned int _version;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int available : 1; 
        unsigned int deviceIdentifierMap : 1; 
        unsigned int flags : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int version : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasVersion;
@property unsigned int version;
@property BOOL hasFlags;
@property unsigned int flags;
@property BOOL hasAvailable;
@property int available;
@property BOOL hasReason;
@property int reason;
@property BOOL hasSubreason;
@property unsigned int subreason;
@property BOOL hasDeviceIdentifierMap;
@property unsigned int deviceIdentifierMap;


- (void)setHasAvailable:(BOOL)arg1;
- (void)setHasFlags:(BOOL)arg1;
- (BOOL)hasAvailable;
- (BOOL)hasFlags;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (unsigned int)subreason;
- (BOOL)hasSubreason;
- (BOOL)hasReason;
- (void)setHasDeviceIdentifierMap:(BOOL)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (unsigned int)deviceIdentifierMap;
- (BOOL)hasDeviceIdentifierMap;
- (void)setAvailable:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (BOOL)hasVersion;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (int)available;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setFlags:(unsigned int)arg1;
- (int)reason;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)version;
- (unsigned int)flags;

@end

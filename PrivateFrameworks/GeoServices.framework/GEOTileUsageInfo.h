/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable;

@interface GEOTileUsageInfo : NSObject  {
    double _startTime;
    double _endTime;
    NSMapTable *_tileStyleToCount;
    unsigned int _dataLength;
}

@property double startTime;
@property double endTime;
@property(readonly) NSMapTable * tileStyleToCount;
@property(readonly) unsigned int dataLength;


- (unsigned int)dataLength;
- (id)tileStyleToCount;
- (double)endTime;
- (void)addTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 dataLength:(unsigned int)arg2;
- (void)setEndTime:(double)arg1;
- (void)dealloc;
- (double)startTime;
- (void)setStartTime:(double)arg1;

@end

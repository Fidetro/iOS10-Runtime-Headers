/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable  {
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
}

@property(readonly) BOOL hasOriginalCoordinate;
@property(retain) GEOLatLng * originalCoordinate;
@property(readonly) BOOL hasCorrectedCoordinate;
@property(retain) GEOLatLng * correctedCoordinate;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasOriginalCoordinate;
- (void)setOriginalCoordinate:(id)arg1;
- (id)originalCoordinate;
- (id)correctedCoordinate;
- (BOOL)hasCorrectedCoordinate;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end

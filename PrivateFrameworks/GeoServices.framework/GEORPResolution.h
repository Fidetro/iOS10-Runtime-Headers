/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray;

@interface GEORPResolution : PBCodable  {
    double _resolutionDate;
    GEOMapRegion *_displayRegion;
    NSMutableArray *_localizedChangeLists;
    NSMutableArray *_updatedPlaces;
    struct { 
        unsigned int resolutionDate : 1; 
    } _has;
}

@property BOOL hasResolutionDate;
@property double resolutionDate;
@property(retain) NSMutableArray * updatedPlaces;
@property(readonly) BOOL hasDisplayRegion;
@property(retain) GEOMapRegion * displayRegion;
@property(retain) NSMutableArray * localizedChangeLists;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)localizedChangeLists;
- (id)updatedPlaces;
- (void)setHasResolutionDate:(BOOL)arg1;
- (id)localizedChangeListAtIndex:(unsigned int)arg1;
- (void)clearLocalizedChangeLists;
- (unsigned int)localizedChangeListsCount;
- (id)displayRegion;
- (BOOL)hasDisplayRegion;
- (id)updatedPlaceAtIndex:(unsigned int)arg1;
- (void)clearUpdatedPlaces;
- (unsigned int)updatedPlacesCount;
- (void)setResolutionDate:(double)arg1;
- (double)resolutionDate;
- (BOOL)hasResolutionDate;
- (void)addLocalizedChangeList:(id)arg1;
- (void)addUpdatedPlace:(id)arg1;
- (void)setLocalizedChangeLists:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setUpdatedPlaces:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end

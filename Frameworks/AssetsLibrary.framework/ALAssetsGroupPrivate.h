/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsFilter, PLPhotoLibrary, NSObject<PLAlbumProtocol>, ALAssetsLibrary, NSMutableDictionary;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
    BOOL _isValid;
    BOOL _isCloudSharedGroup;
    struct NSObject { Class x1; } *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned int _groupType;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) ALAssetsFilter * assetsFilter;
@property unsigned int groupType;
@property BOOL isValid;
@property ALAssetsLibrary * library;
@property(retain) NSMutableDictionary * propertyValues;
@property(retain) NSObject<PLAlbumProtocol> * album;
@property(retain) PLPhotoLibrary * _photoLibrary;
@property BOOL isCloudSharedGroup;


- (void)_performBlockAndWait:(id)arg1;
- (id)_photoLibrary;
- (void)setIsCloudSharedGroup:(BOOL)arg1;
- (void)setPropertyValues:(id)arg1;
- (id)assetsFilter;
- (void)resetAssets;
- (BOOL)hasFilter;
- (BOOL)isCloudSharedGroup;
- (int)albumFilter;
- (void)set_photoLibrary:(id)arg1;
- (void)libraryDidChange;
- (void)setAssetsFilter:(id)arg1;
- (void)populateAssets;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg1;
- (id)initWithAlbum:(struct NSObject { Class x1; }*)arg1 library:(id)arg2;
- (struct NSObject { Class x1; }*)album;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (id)propertyValues;
- (BOOL)isValid;
- (void)dealloc;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end

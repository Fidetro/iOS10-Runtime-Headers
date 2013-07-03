/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSObject<PhotoLibraryPTPDelegate>, NSMutableArray, NSString, NSFileManager, PLManagedObjectContext, NSArray;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    NSArray *_albumObjectIDs;
    NSString *_firstDCIMFolderServiced;
    NSMutableArray *_inflightAssets;
    NSFileManager *fileManager;
    PLPhotoLibrary *photoLibrary;
}

@property NSObject<PhotoLibraryPTPDelegate> * delegate;
@property(readonly) PLManagedObjectContext * managedObjectContext;
@property(readonly) NSArray * albumObjectIDs;
@property(retain) PLPhotoLibrary * photoLibrary;
@property(retain) NSFileManager * fileManager;


- (BOOL)_isPTPAlbum:(id)arg1;
- (id)_allAssetObjectIDs;
- (BOOL)libraryIsAvailable;
- (BOOL)ptpCanDeleteFiles;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (void)setPtpDelegate:(id)arg1;
- (BOOL)ptpDeletePhotoWithKey:(struct NSObject { Class x1; }*)arg1 andExtension:(id)arg2;
- (id)ptpThumbnailForPhotoWithKey:(struct NSObject { Class x1; }*)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotoWithObjectID:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;
- (void)_performBlockAndWait:(id)arg1;
- (id)_ptpInformationForAllAssets;
- (void)deleteAsset:(struct NSObject { Class x1; }*)arg1;
- (id)infoForAsset:(struct NSObject { Class x1; }*)arg1;
- (id)assetsInAssociation:(struct NSObject { Class x1; }*)arg1;
- (id)associationsInAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)infoForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)albumHandles;
- (id)albumObjectIDs;
- (id)fileManager;
- (void)setFileManager:(id)arg1;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4;
- (void)setPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (id)managedObjectContext;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end

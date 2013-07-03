/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator  {
    NSString *_localPeerID;
}

@property(readonly) NSString * localPeerID;

+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1;

- (BOOL)shouldRetryForError:(id)arg1 ignoreFile:(BOOL*)arg2;
- (void)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2 retryOnError:(BOOL)arg3 error:(id*)arg4 byAccessor:(id)arg5;
- (id)localPeerID;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;

@end

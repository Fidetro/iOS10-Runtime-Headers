/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityContainerMonitor, NSObject<OS_dispatch_queue>, PFUbiquitySwitchboardEntryMetadata, PFUbiquitySetupAssistant, NSString, PFUbiquityFilePresenter, NSMutableDictionary, PFUbiquityLocation;

@interface PFUbiquitySwitchboardEntry : NSObject  {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    unsigned int _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    BOOL _finishedSetupForStore;
    BOOL _hasScheduledFinishBlock;
    BOOL _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property unsigned int activeStoreCount;
@property(readonly) NSString * localPeerID;
@property(readonly) NSString * storeName;
@property(retain) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) PFUbiquityLocation * localRootLocation;
@property(readonly) PFUbiquityFilePresenter * filePresenter;
@property(readonly) PFUbiquityFilePresenter * localFilePresenter;
@property(readonly) PFUbiquityContainerMonitor * monitor;
@property(readonly) PFUbiquitySetupAssistant * finishingSetupAssistant;
@property(retain) PFUbiquitySwitchboardEntryMetadata * metadata;


- (id)finishingSetupAssistant;
- (id)monitor;
- (void)setActiveStoreCount:(unsigned int)arg1;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(id)arg2;
- (BOOL)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 finishBlock:(id)arg5;
- (void)monitorStateChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(id)arg2;
- (void)setupFinished;
- (void)containerIdentifierChanged:(id)arg1;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (void)entryWillBeRemovedFromSwitchboard;
- (unsigned int)activeStoreCount;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4;
- (id)localFilePresenter;
- (id)filePresenter;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (id)localRootLocation;
- (void)setUbiquityRootLocation:(id)arg1;
- (id)metaForStoreName:(id)arg1;
- (id)cacheWrapperForStoreName:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterPersistentStore:(id)arg1;
- (id)localPeerID;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)storeName;
- (id)init;
- (void)dealloc;
- (id)description;

@end

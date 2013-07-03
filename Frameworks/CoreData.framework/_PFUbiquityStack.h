/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSManagedObjectContext, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

@interface _PFUbiquityStack : NSObject  {
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}

@property(readonly) NSManagedObjectContext * metadataMOC;
@property(readonly) PFUbiquityMetadataFactoryEntry * metadataEntry;
@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityLocation * ubiquityRootURL;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * metadataStoreFileLocation;


- (id)metadataEntry;
- (id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2;
- (id)allPeers;
- (BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id*)arg2;
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)arg1;
- (id)initWithMetadataEntry:(id)arg1;
- (id)metadataStoreFileLocation;
- (id)createMinMetadataStoreKnowledgeVector:(id*)arg1;
- (id)createMetadataStoreKnowledgeVector:(id*)arg1;
- (id)metadataMOC;
- (id)localPeerID;
- (id)ubiquityRootURL;
- (id)storeName;
- (id)init;
- (void)dealloc;
- (id)description;

@end

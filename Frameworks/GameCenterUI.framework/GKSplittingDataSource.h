/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMutableDictionary, GKBasicCollectionViewDataSource;

@interface GKSplittingDataSource : GKCollectionViewDataSource  {
    GKBasicCollectionViewDataSource *_underlyingDataSource;
    NSMutableDictionary *_sectionToSectionInfo;
}

@property(retain) GKBasicCollectionViewDataSource * underlyingDataSource;
@property(readonly) int sectionCount;
@property(retain) NSMutableDictionary * sectionToSectionInfo;


- (void)setSectionToSectionInfo:(id)arg1;
- (id)sectionToSectionInfo;
- (id)underlyingDataSource;
- (id)indexPathsForItem:(id)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (id)titleForSection:(int)arg1;
- (void)removeAllSections;
- (void)removeSection:(int)arg1;
- (void)setSortDescriptors:(id)arg1 forSection:(int)arg2;
- (void)setFilterPredicate:(id)arg1 forSection:(int)arg2;
- (void)setItems:(id)arg1 forSection:(int)arg2;
- (id)sectionInfoForSection:(int)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)filteredItemsForRawItems:(id)arg1;
- (id)itemsForSection:(int)arg1;
- (void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2;
- (void)setUnderlyingDataSource:(id)arg1;
- (void)configureDataSource;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (int)sectionCount;
- (id)init;
- (void)dealloc;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;

@end

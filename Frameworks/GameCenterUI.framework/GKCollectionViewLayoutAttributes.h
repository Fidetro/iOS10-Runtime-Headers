/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKSectionMetrics, <UICollectionViewDataSource>, GKSupplementaryViewMetrics, NSMutableDictionary, UICollectionView;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes  {
    BOOL _allSectionItemsVisible;
    BOOL _isPinned;
    BOOL _isPartOfGlobalPinningGroup;
    BOOL _doesAbutLeftOfCollectionView;
    UICollectionView *_collectionView;
    float _unpinnedY;
    <UICollectionViewDataSource> *_dataSource;
    GKSectionMetrics *_sectionMetrics;
    GKSupplementaryViewMetrics *_supplementaryMetrics;
    unsigned int _currentVisibleItemCount;
    unsigned int _currentTotalItemCount;
    unsigned int _maxTotalItemCount;
    NSMutableDictionary *_sharedAttributes;
    unsigned int _gridLayoutLocation;
}

@property(retain) UICollectionView * collectionView;
@property BOOL allSectionItemsVisible;
@property BOOL isPinned;
@property float unpinnedY;
@property(retain) <UICollectionViewDataSource> * dataSource;
@property(retain) GKSectionMetrics * sectionMetrics;
@property(retain) GKSupplementaryViewMetrics * supplementaryMetrics;
@property unsigned int currentVisibleItemCount;
@property unsigned int currentTotalItemCount;
@property unsigned int maxTotalItemCount;
@property BOOL isPartOfGlobalPinningGroup;
@property(retain) NSMutableDictionary * sharedAttributes;
@property unsigned int gridLayoutLocation;
@property BOOL doesAbutLeftOfCollectionView;


- (unsigned int)gridLayoutLocation;
- (BOOL)isPartOfGlobalPinningGroup;
- (float)unpinnedY;
- (void)setDoesAbutLeftOfCollectionView:(BOOL)arg1;
- (void)setSharedAttributes:(id)arg1;
- (void)setGridLayoutLocation:(unsigned int)arg1;
- (void)setMaxTotalItemCount:(unsigned int)arg1;
- (void)setCurrentTotalItemCount:(unsigned int)arg1;
- (void)setCurrentVisibleItemCount:(unsigned int)arg1;
- (void)setSupplementaryMetrics:(id)arg1;
- (void)setSectionMetrics:(id)arg1;
- (void)setUnpinnedY:(float)arg1;
- (void)setIsPartOfGlobalPinningGroup:(BOOL)arg1;
- (void)setAllSectionItemsVisible:(BOOL)arg1;
- (BOOL)allSectionItemsVisible;
- (unsigned int)currentTotalItemCount;
- (void)setIsPinned:(BOOL)arg1;
- (id)sectionMetrics;
- (unsigned int)currentVisibleItemCount;
- (unsigned int)maxTotalItemCount;
- (id)supplementaryMetrics;
- (id)sharedAttributes;
- (BOOL)doesAbutLeftOfCollectionView;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCollectionView:(id)arg1;
- (id)collectionView;
- (BOOL)isPinned;

@end

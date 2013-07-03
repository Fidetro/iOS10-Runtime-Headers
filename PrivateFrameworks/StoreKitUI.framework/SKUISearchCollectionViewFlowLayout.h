/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UICollectionView, NSMutableArray;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout  {
    UICollectionView *_collectionView;
    int _numberOfRows;
    int _numberOfColumns;
    NSMutableArray *_sectionCounts;
    struct CGSize { 
        float width; 
        float height; 
    } _headerSize;
}


- (int)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(int)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, NSMutableIndexSet, SKUIItemCollectionController, SKUIIconDataConsumer, SKUIClientContext, <SKUIItemGridDelegate>, SKUIUber, NSArray, UICollectionView, SKUIItemArtworkContext, NSOperationQueue, NSMutableArray;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    <SKUIItemGridDelegate> *_delegate;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    NSMutableArray *_items;
    struct CGSize { 
        float width; 
        float height; 
    } _imageBoundingSize;
    NSOperationQueue *_operationQueue;
    UIImage *_placeholderImage;
    float _rowHeight;
    NSMutableIndexSet *_selectedItemIndexSet;
    SKUIUber *_uber;
    SKUIItemArtworkContext *_artworkContext;
}

@property(readonly) float rowHeight;
@property(retain) SKUIClientContext * clientContext;
@property struct CGPoint { float x1; float x2; } contentOffset;
@property <SKUIItemGridDelegate> * delegate;
@property(retain) SKUIIconDataConsumer * iconDataConsumer;
@property(retain) SKUIItemArtworkContext * artworkContext;
@property struct CGSize { float x1; float x2; } imageBoundingSize;
@property(copy) NSArray * items;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) SKUIUber * uber;


- (void)unhideIcons;
- (void)setItemCellClass:(Class)arg1;
- (id)popIconImageViewForItemAtIndex:(int)arg1;
- (id)initWithRowHeight:(float)arg1;
- (int)_numberOfColumnsForOrientation:(int)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (id)iconDataConsumer;
- (struct CGSize { float x1; float x2; })imageBoundingSize;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { float x1; float x2; })arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
- (void)setArtworkContext:(id)arg1;
- (id)_itemCollectionController;
- (void)setImageBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)setUber:(id)arg1;
- (id)artworkContext;
- (id)uber;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)items;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)_collectionView;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (float)rowHeight;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end

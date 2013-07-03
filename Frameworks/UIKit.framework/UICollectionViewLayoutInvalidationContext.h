/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray;

@interface UICollectionViewLayoutInvalidationContext : NSObject  {
    NSMutableDictionary *_invalidatedSupplementaryViews;
    NSArray *_updateItems;
    struct { 
        unsigned int invalidateDataSource : 1; 
        unsigned int invalidateEverything : 1; 
    } _invalidationContextFlags;
}

@property(readonly) BOOL invalidateEverything;
@property(readonly) BOOL invalidateDataSourceCounts;


- (void)dealloc;
- (BOOL)invalidateEverything;
- (BOOL)invalidateDataSourceCounts;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (id)_invalidatedSupplementaryViews;
- (void)_setUpdateItems:(id)arg1;
- (void)_setInvalidateEverything:(BOOL)arg1;
- (void)_setInvalidateDataSourceCounts:(BOOL)arg1;
- (id)_updateItems;

@end

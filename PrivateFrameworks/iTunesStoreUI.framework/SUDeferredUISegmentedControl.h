/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deferredFrame;
    float _deferredMaxTotalWidth;
    float _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    int _deferredSegmentedControlStyle;
    unsigned int _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)_saveSegmentsAsDeferred;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (void)setDeferringInterfaceUpdates:(BOOL)arg1;
- (BOOL)isDeferringInterfaceUpdates;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)dealloc;
- (int)selectedSegmentIndex;
- (unsigned int)numberOfSegments;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (int)segmentedControlStyle;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)removeAllSegments;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)sizeToFit;

@end

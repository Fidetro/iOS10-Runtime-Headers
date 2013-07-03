/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIGridComponent : SKUIPageComponent  {
    NSArray *_children;
    struct SKUIEditorialStyle { 
        int alignment; 
        int bodyFontWeight; 
        float bodyFontSize; 
        float linkSpacing; 
        int titleFontWeight; 
        float titleFontSize; 
        float titleSpacing; 
    } _editorialStyle;
    int _gridType;
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    } _lockupStyle;
    int _missingItemCount;
    BOOL _showsIndexNumbers;
}

@property(readonly) int gridType;
@property(readonly) NSArray * children;
@property(readonly) struct SKUIEditorialStyle { int x1; int x2; float x3; float x4; int x5; float x6; float x7; } editorialStyle;
@property(readonly) struct SKUILockupStyle { int x1; int x2; unsigned int x3; } lockupStyle;
@property(readonly) BOOL showsIndexNumbers;


- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (struct SKUIEditorialStyle { int x1; int x2; float x3; float x4; int x5; float x6; float x7; })editorialStyle;
- (BOOL)showsIndexNumbers;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })lockupStyle;
- (id)initWithGridItems:(id)arg1;
- (id)initWithLockups:(id)arg1;
- (void)_reloadMissingItemCount;
- (id)initWithBrickItems:(id)arg1;
- (int)gridType;
- (id)_updateWithMissingItems:(id)arg1;
- (id)metricsElementName;
- (BOOL)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (int)componentType;
- (void).cxx_destruct;
- (id)description;
- (id)children;

@end

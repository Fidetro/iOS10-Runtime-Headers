/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UICollectionViewLayoutAttributes, NSDictionary;

@interface GKMultiplayerCollectionLayout : UICollectionViewLayout  {
    float _headerGap;
    float _footerGap;
    int _numberOfColumnsInPortrait;
    NSDictionary *_cellLayoutInfo;
    NSDictionary *_separatorLayoutInfo;
    UICollectionViewLayoutAttributes *_headerAttributes;
    UICollectionViewLayoutAttributes *_footerAttributes;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    struct CGSize { 
        float width; 
        float height; 
    } _separatorSize;
    struct CGSize { 
        float width; 
        float height; 
    } _headerSize;
    struct CGSize { 
        float width; 
        float height; 
    } _footerSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _itemMargin;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property struct CGSize { float x1; float x2; } itemSize;
@property struct CGSize { float x1; float x2; } separatorSize;
@property struct CGSize { float x1; float x2; } headerSize;
@property struct CGSize { float x1; float x2; } footerSize;
@property struct CGPoint { float x1; float x2; } itemMargin;
@property float headerGap;
@property float footerGap;
@property int numberOfColumnsInPortrait;
@property(retain) NSDictionary * cellLayoutInfo;
@property(retain) NSDictionary * separatorLayoutInfo;
@property(retain) UICollectionViewLayoutAttributes * headerAttributes;
@property(retain) UICollectionViewLayoutAttributes * footerAttributes;


- (id)footerAttributes;
- (id)headerAttributes;
- (id)separatorLayoutInfo;
- (id)cellLayoutInfo;
- (void)setNumberOfColumnsInPortrait:(int)arg1;
- (int)numberOfColumnsInPortrait;
- (void)setFooterGap:(float)arg1;
- (float)footerGap;
- (void)setHeaderGap:(float)arg1;
- (float)headerGap;
- (void)setItemMargin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })itemMargin;
- (void)setFooterSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })footerSize;
- (void)setHeaderSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })headerSize;
- (void)setSeparatorSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })separatorSize;
- (BOOL)isPortrait;
- (void)setFooterAttributes:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setSeparatorLayoutInfo:(id)arg1;
- (void)setCellLayoutInfo:(id)arg1;
- (struct CGSize { float x1; float x2; })totalCellSize;
- (id)init;
- (void)dealloc;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UICollectionView, UIControl, UILabel, UIButton, UIView, NSString, UIColor;

@interface SKUISwooshView : UIView  {
    UIView *_borderView;
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _collectionViewInsets;
    UIButton *_seeAllButton;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(retain) UICollectionView * collectionView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } collectionViewInsets;
@property(readonly) UIControl * seeAllControl;
@property(copy) NSString * seeAllTitle;
@property(copy) NSString * title;
@property(copy) UIColor * titleColor;


- (id)seeAllColorForControlState:(unsigned int)arg1;
- (void)setSeeAllColor:(id)arg1 forControlState:(unsigned int)arg2;
- (id)_arrowImage;
- (void)setSeeAllTitle:(id)arg1;
- (id)seeAllControl;
- (id)seeAllTitle;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionViewInsets;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setCollectionView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (id)collectionView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end

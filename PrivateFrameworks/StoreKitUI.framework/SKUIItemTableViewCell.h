/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property(readonly) SKUIItemCellLayout * layout;


- (void)configureForItem:(id)arg1 rowIndex:(int)arg2;
- (void)setCellLayoutNeedsLayout;
- (void)setBackgroundColor:(id)arg1;
- (id)layout;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end

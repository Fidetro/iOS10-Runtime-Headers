/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIProductPageTableHeaderOnlySection, SKUIClientContext, SKUIProductPageTableTextBoxSection, NSMutableArray, <SKUIProductPageChildViewControllerDelegate>, SKUIProductPageItem, SKUIProductPageTableViewController, SKUILayoutCache, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUIProductPageChildViewController> {
    SKUIClientContext *_clientContext;
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    SKUIProductPageItem *_item;
    NSOperationQueue *_operationQueue;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property(readonly) SKUIProductPageItem * item;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIScrollView * scrollView;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;

+ (float)defaultPageWidthForUserInterfaceIdiom:(int)arg1;

- (void)screenshotsWillBeginDragging:(id)arg1;
- (id)_copyrightSection;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (void)_expandSection:(id)arg1;
- (id)_infoSection;
- (id)_featuresSection;
- (id)_whatsNewSection;
- (id)_descriptionSection;
- (id)_screenshotsSection;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(float)arg2;
- (id)_storeNotesSection;
- (void)setHeaderViewController:(id)arg1;
- (id)headerViewController;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)initWithItem:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)scrollView;
- (id)_tableViewController;
- (void)loadView;
- (id)item;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end

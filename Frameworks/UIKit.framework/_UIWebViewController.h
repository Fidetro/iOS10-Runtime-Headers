/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _UIQueueingServiceWebViewControllerProxy, _UIAsyncInvocation, <_UIWebViewControllerDelegate>, UIBarButtonItem, _UIRemoteWebViewController;

@interface _UIWebViewController : UIViewController  {
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _UIRemoteWebViewController *_remoteViewController;
    _UIQueueingServiceWebViewControllerProxy *_serviceProxy;
    BOOL _hasCalledBeginAppearanceTransition;
    BOOL _hasCalledEndAppearanceTransition;
    BOOL _canGoBack;
    BOOL _canGoForward;
    BOOL _loading;
    <_UIWebViewControllerDelegate> *_delegate;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    float _estimatedProgress;
    NSString *_pageTitle;
    NSString *_URLString;
}

@property <_UIWebViewControllerDelegate> * delegate;
@property(readonly) UIBarButtonItem * backBarButtonItem;
@property(readonly) UIBarButtonItem * forwardBarButtonItem;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
@property(getter=isLoading,readonly) BOOL loading;
@property(readonly) float estimatedProgress;
@property(readonly) NSString * pageTitle;
@property(copy) NSString * URLString;


- (void)setURLString:(id)arg1;
- (id)URLString;
- (float)estimatedProgress;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (id)pageTitle;
- (BOOL)isLoading;
- (void)goForward;
- (void)goBack;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)forwardBarButtonItem;
- (void)_connectToService;
- (void)_updateBarButtonItems;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_addRemoteView;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1;
- (void)_dispatchDidDismissViewController;
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 replyHandler:(id)arg4;
- (void)_setURLString:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setLoading:(BOOL)arg1 error:(id)arg2;
- (void)_setEstimatedProgress:(float)arg1;
- (void)_setCanGoBack:(BOOL)arg1 canGoForward:(BOOL)arg2;
- (void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)configureWithSettings:(id)arg1;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)backBarButtonItem;
- (void)stopLoading;

@end

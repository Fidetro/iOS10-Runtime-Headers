/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, SUObjectPool, SUDelayedNavigationItem, SSAuthenticationContext, SUShowcaseViewController, SUWebViewManager, SUStorePageProtocol, SUWebView, SSMutableAuthenticationContext, ISURLRequestPerformance, SUMescalSession;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate> {
    SUWebView *_webView;
    SSMutableAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    int _lastKnownOrientation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    SUMescalSession *_mescalSession;
    SUObjectPool *_objectPool;
    ISURLRequestPerformance *_performanceMetrics;
    int _scheduledOrientation;
    SUShowcaseViewController *_showcaseViewController;
    SUStorePageProtocol *_storePageProtocol;
    int _style;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebViewManager *_webViewManager;
}

@property int style;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL viewIsReady;
@property(readonly) SUWebView * webView;
@property(getter=_mescalSession,setter=_setMescalSession:,retain) SUMescalSession * _mescalSession;
@property(getter=_performanceMetrics,setter=_setPerformanceMetrics:,retain) ISURLRequestPerformance * _performanceMetrics;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)_setMescalSession:(id)arg1;
- (id)_mescalSession;
- (void)_setLastKnownOrientation:(int)arg1;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webViewManagerDidStartLoad:(id)arg1;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (id)viewControllerForWebViewManager:(id)arg1;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (void)_reloadObjectPool;
- (void)_addPlaceholderBackgroundView;
- (id)_newURLRequestWithOperation:(id)arg1 bagContext:(id)arg2;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1;
- (void)_getURLRequestForOperation:(id)arg1 block:(id)arg2;
- (void)_loadURLRequest:(id)arg1;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_removePlaceholderBackgroundView;
- (void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)setViewIsReady:(BOOL)arg1;
- (void)_reloadUI;
- (void)_prepareToLoadURL:(id)arg1;
- (void)_reloadPlaceholderBackgroundView;
- (id)_placeholderBackgroundView;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (void)_applyScriptProperties:(id)arg1;
- (id)_defaultBackgroundColor;
- (id)newScriptInterface;
- (void)setStorePageProtocol:(id)arg1;
- (id)_performanceMetrics;
- (void)storePageCleanupBeforeTearDown;
- (void)_showNativeShowcaseWithDictionary:(id)arg1;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)viewIsReady;
- (void)_setPerformanceMetrics:(id)arg1;
- (void)_loadWithURLOperation:(id)arg1 completionBlock:(id)arg2;
- (id)navigationItemForScriptInterface;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)applicationDidEnterBackground;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (void)parentViewControllerHierarchyDidChange;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (int)ITunesStoreUIBarStyle;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)applicationWillEnterForeground;
- (void)setStyle:(int)arg1;
- (id)webView;
- (int)style;
- (void)invalidate;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;

@end

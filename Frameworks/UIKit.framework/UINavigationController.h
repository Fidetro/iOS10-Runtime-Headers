/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UINavigationInteractiveTransition, UIGestureRecognizer, UIToolbar, <UINavigationControllerDelegate>, UIView, _UINavigationParallaxTransition, UIViewController, NSArray, UINavigationBar, _UINavigationControllerPalette, <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, NSUUID, UITapGestureRecognizer, UINavigationTransitionView;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegate, GKContentRefresh, GKURLHandling> {
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_rightAuxiliaryContentView;
    UIView *_navigationTransitionView;
    float _bottomInsetDelta;
    UIViewController *_disappearingViewController;
    <UINavigationControllerDelegate> *_delegate;
    int _savedNavBarStyleBeforeSheet;
    int _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_freePalette;
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int paletteTransitionPending : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
        unsigned int isBuiltinTransition : 1; 
        unsigned int displaysStaticScrollBars : 1; 
        unsigned int navigationTransitionViewAccountsForRightAuxView : 1; 
        unsigned int resetDidHideOnCancel : 1; 
        unsigned int delegateWillShowViewController : 1; 
        unsigned int delegateDidShowViewController : 1; 
        unsigned int delegateTransitionController : 1; 
        unsigned int delegateTransitionControllerEx : 1; 
        unsigned int delegateInteractionController : 1; 
        unsigned int delegateInteractionControllerEx : 1; 
        unsigned int delegateShouldCrossFadeNavigationBar : 1; 
        unsigned int delegateShouldCrossFadeBottomBars : 1; 
        unsigned int delegateShouldUseBuiltinInteractionController : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int navigationBarHidesCompletelyOffscreen : 1; 
        unsigned int clipUnderlapWhileTransitioning; 
        unsigned int isCrossfadingOutTabBar : 1; 
        unsigned int isCrossfadingInTabBar : 1; 
    } _navigationControllerFlags;
    BOOL _interactiveTransition;
    BOOL __usingBuiltinAnimator;
    BOOL __barAnimationWasCancelled;
    Class _toolbarClass;
    float _customNavigationTransitionDuration;
    <UIViewControllerAnimatedTransitioning> *__transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    <UIViewControllerInteractiveTransitioning> *__interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __updateNavigationBarHandler;

    int _builtinTransitionStyle;
    float _builtinTransitionGap;
}

@property(retain) UIViewController * detailViewController;
@property BOOL isExpanded;
@property(readonly) UIViewController * topViewController;
@property(readonly) UIViewController * visibleViewController;
@property(copy) NSArray * viewControllers;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property(readonly) UINavigationBar * navigationBar;
@property(getter=isToolbarHidden) BOOL toolbarHidden;
@property(readonly) UIToolbar * toolbar;
@property <UINavigationControllerDelegate> * delegate;
@property(readonly) UIGestureRecognizer * interactivePopGestureRecognizer;
@property BOOL needsDeferredTransition;
@property(readonly) UINavigationTransitionView * navigationTransitionView;
@property BOOL pretendNavBarHidden;
@property BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property float customNavigationTransitionDuration;
@property(setter=_setTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * _transitionController;
@property(setter=_setCachedTransitionController:,retain) _UINavigationParallaxTransition * _cachedTransitionController;
@property(setter=_setInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * _interactionController;
@property(setter=_setCachedInteractionController:,retain) _UINavigationInteractiveTransition * _cachedInteractionController;
@property(getter=_isUsingBuiltinAnimator,setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator;
@property(setter=_setToolbarAnimationId:,retain) NSUUID * _toolbarAnimationId;
@property(setter=_setNavbarAnimationId:,retain) NSUUID * _navbarAnimationId;
@property(setter=_setBarAnimationWasCancelled:) BOOL _barAnimationWasCancelled;
@property(setter=_setUpdateNavigationBarHandler:,copy) id _updateNavigationBarHandler;
@property(retain) UIViewController * disappearingViewController;
@property(readonly) UIViewController * previousViewController;
@property(readonly) UIViewController * bottomViewController;
@property(setter=_setToolbarClass:) Class _toolbarClass;
@property(getter=_builtinTransitionStyle,setter=_setBuiltinTransitionStyle:) int builtinTransitionStyle;
@property(getter=_builtinTransitionGap,setter=_setBuiltinTransitionGap:) float builtinTransitionGap;
@property(getter=isInteractiveTransition) BOOL interactiveTransition;

+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_accessibilityPerformValidations:(id)arg1;

- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (BOOL)becomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)detachPalette:(id)arg1;
- (id)existingPaletteForEdge:(unsigned int)arg1;
- (void)attachPalette:(id)arg1 isPinned:(BOOL)arg2;
- (id)paletteForEdge:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(BOOL)arg2;
- (void)_detachPalette:(id)arg1;
- (id)_pinningBarForPalette:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPalette:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isExpanded;
- (id)detailViewController;
- (void)setDetailViewController:(id)arg1;
- (id)_topPalette;
- (float)_builtinTransitionGap;
- (int)_builtinTransitionStyle;
- (BOOL)_barAnimationWasCancelled;
- (id)_cachedInteractionController;
- (id)_cachedTransitionController;
- (Class)_toolbarClass;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (BOOL)isAlreadyPoppingNavItem;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(BOOL)arg2;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)__viewWillLayoutSubviews;
- (id)_builtinTransitionController;
- (void)_setCustomTransition:(BOOL)arg1;
- (BOOL)isBuiltinTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (id)_screenEdgePanGestureRecognizer;
- (BOOL)isShown;
- (id)interactivePopGestureRecognizer;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (id)_existingNavigationBar;
- (void)_sendNavigationBarToBack;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)arg1;
- (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)setPretendNavBarHidden:(BOOL)arg1;
- (void)_setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (Class)navigationBarClass;
- (void)_setBuiltinTransitionGap:(float)arg1;
- (void)_setBuiltinTransitionStyle:(int)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)setViewControllers:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (struct CGSize { float x1; float x2; })_adjustedContentSizeForPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)pretendNavBarHidden;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (id)bottomViewController;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (void)makeModalViewControllerTopViewController;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_snapshotView;
- (BOOL)_shouldBottomBarBeHidden;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (void)_executeNavigationHandler:(id)arg1 deferred:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_setUsingBuiltinAnimator:(BOOL)arg1;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_setUpdateNavigationBarHandler:(id)arg1;
- (id)_updateNavigationBarHandler;
- (void)_startCustomTransition:(id)arg1;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_resizeNavigationTransitionViewForTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (float)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (float)_scrollViewTopContentInsetForViewController:(id)arg1;
- (void)_layoutViewController:(id)arg1;
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (BOOL)_shouldStatusBarInsetViewController:(id)arg1;
- (void)_forceTabBarOpacityIfNeeded;
- (void)_forceToolbarOpacityIfNeeded;
- (void)_forceNavBarOpacityIfNeeded;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(BOOL*)arg2;
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (BOOL)_isNavigationBarVisible;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_clearLastOperation;
- (void)_forceOpaqueBarOpacitiesIfNeeded;
- (id)_transitionAnimationContext;
- (void)_performBackGesture:(id)arg1;
- (void)_setDisplaysStaticScrollBars:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllers;
- (id)_viewControllerForDisappearCallback;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_placeScrollBarInRightAuxView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleFrameForRightAuxViewWithStaticScrollBar:(id)arg1;
- (void)_didAddStaticScrollBar:(id)arg1;
- (id)_visibleStaticScrollBar;
- (BOOL)_displaysStaticScrollBars;
- (id)_lazyRightAuxiliaryContentView;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(int)arg2 crossFade:(id)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(int)arg2;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_configureToolbar;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (BOOL)isToolbarHidden;
- (void)_layoutTopViewControllerInSheet;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_startInteractiveNavbarTransition;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(int)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(int)arg2;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(int*)arg3 duration:(double*)arg4;
- (int)lastOperation;
- (BOOL)wasLastOperationAnimated;
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg1 duration:(double)arg2;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (void)_layoutTopViewController;
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)arg1;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(int)arg2 initialOffset:(float)arg3;
- (struct CGPoint { float x1; float x2; })_computeTopBarCenter:(id)arg1 hidden:(BOOL)arg2 edge:(int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForPalette:(id)arg1;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(int)arg2 initialOffset:(float)arg3;
- (void)_positionTopBar:(id)arg1 hidden:(BOOL)arg2 edge:(int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(int)arg2 duration:(double)arg3;
- (BOOL)_isTransitioning;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_cancelInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (void)_finishInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
- (id)navigationTransitionView;
- (int)_keyboardDirectionForTransition:(int)arg1 orderingIn:(BOOL)arg2;
- (int)_deferredTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)_startInteractiveToolbarTransition;
- (BOOL)isInteractiveTransition;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_isUsingBuiltinAnimator;
- (BOOL)isCustomTransition;
- (BOOL)_toolbarIsAnimatingInteractively;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(float)arg3 isFinished:(BOOL)arg4 didComplete:(BOOL)arg5 completionSpeed:(float)arg6 completionCurve:(int)arg7;
- (BOOL)_navbarIsAppearingInteractively;
- (float)customNavigationTransitionDuration;
- (void)_setNavbarAnimationId:(id)arg1;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_setBarAnimationWasCancelled:(BOOL)arg1;
- (id)_navbarAnimationId;
- (id)_toolbarAnimationId;
- (void)_hideOrShowRightAuxViewIfNeededWithTransition:(int)arg1;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_startDeferredTransitionIfNeeded;
- (id)_customInteractionController:(id)arg1;
- (void)setCustomNavigationTransitionDuration:(float)arg1;
- (id)_customTransitionController:(BOOL)arg1;
- (BOOL)_usesTransitionController;
- (void)setNeedsDeferredTransition;
- (id)_navigationItems;
- (BOOL)needsDeferredTransition;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)visibleViewController;
- (void)_setToolbarAnimationId:(id)arg1;
- (void)_setCachedInteractionController:(id)arg1;
- (void)_setCachedTransitionController:(id)arg1;
- (void)_releaseContainerViews;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (void)_confirmBarAccessMethods;
- (id)toolbar;
- (void)_setToolbarClass:(Class)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setDisappearingViewController:(id)arg1;
- (id)disappearingViewController;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (float)_topBarHeight;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (id)tabBarItem;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)defaultPNGName;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (BOOL)searchBarHidNavBar;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_allowsAutorotation;
- (void)_setInteractionController:(id)arg1;
- (void)_setTransitionController:(id)arg1;
- (int)modalTransitionStyle;
- (id)transitionCoordinator;
- (id)_transitionController;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewDidUnload;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)loadView;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_isPresentationContextByDefault;
- (id)_viewForContentInPopover;
- (BOOL)isModalInPopover;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (double)durationForTransition:(int)arg1;
- (id)_builtinInteractionController;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)editing;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (int)positionForBar:(id)arg1;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (float)_customNavigationTransitionDuration;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (void)_updatePaletteBackground;
- (void)setNavigationBar:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)_deepestUnambiguousResponder;
- (int)preferredStatusBarStyle;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)setInteractiveTransition:(BOOL)arg1;
- (id)previousViewController;
- (id)topViewController;
- (BOOL)isNavigationBarHidden;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldUseBuiltinInteractionController;
- (id)_existingToolbar;
- (id)navigationBar;
- (id)_interactionController;
- (BOOL)_clipUnderlapWhileTransitioning;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_axPostMoveTo:(id)arg1;
- (id)_gkAlertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 dismissHandler:(id)arg4;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkResetContents;
- (void)_gkForceNextContentUpdate;
- (void)_gkReplaceTopViewControllerWithViewController:(id)arg1 transition:(id)arg2;
- (void)_gkSetViewControllers:(id)arg1 transition:(id)arg2;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2;
- (id)firstViewController;
- (void)invalidate;
- (unsigned int)indexOfViewController:(id)arg1;
- (id)mf_keyPathsMapForUICustomization;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationItem, UIColor, <UISearchDisplayDelegate>, UILabel, UIScrollView, UITableView, UIButton, UISearchDisplayControllerContainerView, UIView, UIViewController, NSArray, <UITableViewDelegate>, UIPopoverController, _UINavigationControllerPalette, NSString, <UITableViewDataSource>, UISearchBar;

@interface UISearchDisplayController : NSObject <_UIScrollNotification> {
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    NSString *_resultsTitle;
    <UISearchDisplayDelegate> *_delegate;
    <UITableViewDataSource> *_tableViewDataSource;
    <UITableViewDelegate> *_tableViewDelegate;
    struct __CFArray { } *_containingScrollViews;
    float _lastKeyboardAdjustment;
    float _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    int _searchResultsTableViewStyle;
    id _navigationControllerBookkeeper;
    NSArray *_savedSelectedCellsWhenViewWillAppear;
    UIScrollView *_savedContainingScrollView;
    UISearchDisplayControllerContainerView *_containerView;
    unsigned int _savedSearchBarResizingMask;
    UINavigationItem *_navigationItem;
    struct CGPoint { 
        float x; 
        float y; 
    } _containingScrollViewContentOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _searchFieldInNavigationBarFrame;
    _UINavigationControllerPalette *_attachedNavigationPalette;
    UIButton *_animatingAppearanceNavigationButton;
    float _animatingAppearanceNavigationSearchBarWidth;
    UIColor *_dimmingOverlayColor;
    UIView *_tableViewBackgroundHeaderView;
    struct { 
        unsigned int visible : 1; 
        unsigned int animating : 1; 
        unsigned int hidIndexBar : 1; 
        unsigned int hidNavigationBar : 1; 
        unsigned int noResultsMessageVisible : 1; 
        unsigned int noResultsMessageAutoDisplay : 1; 
        unsigned int navigationBarHidingEnabled : 1; 
        unsigned int dimTableViewOnEmptySearchString : 1; 
        unsigned int isRotatingWithPopover : 1; 
        unsigned int cancelButtonManagementDisabled : 1; 
        unsigned int allowDisablingNavigationBarHiding : 1; 
        unsigned int adjustsSearchBarContentInsetForIndexBar : 1; 
        unsigned int showsResultsForEmptyField : 1; 
        unsigned int searchBarCanBeHoisted : 1; 
        unsigned int animatingSearchResultsDisappearance : 1; 
        unsigned int navigationBarShadowWasHidden : 1; 
    } _searchDisplayControllerFlags;
    BOOL _displaysSearchBarInNavigationBar;
    unsigned int _navigationBarSearchFieldSizing;
    float __activationGapHeight;
    float __additionalNonCollapsingHeightAboveSearchBar;
}

@property <UISearchDisplayDelegate> * delegate;
@property(getter=isActive) BOOL active;
@property(readonly) UISearchBar * searchBar;
@property(readonly) UIViewController * searchContentsController;
@property(readonly) UITableView * searchResultsTableView;
@property <UITableViewDataSource> * searchResultsDataSource;
@property <UITableViewDelegate> * searchResultsDelegate;
@property(copy) NSString * searchResultsTitle;
@property BOOL displaysSearchBarInNavigationBar;
@property(readonly) UINavigationItem * navigationItem;
@property BOOL noResultsMessageVisible;
@property BOOL automaticallyShowsNoResultsMessage;
@property(copy) NSString * noResultsMessage;
@property(getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
@property BOOL dimTableViewOnEmptySearchString;
@property(getter=_isCancelButtonManagementDisabled,setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;
@property unsigned int navigationBarSearchFieldSizing;
@property float _activationGapHeight;
@property float _additionalNonCollapsingHeightAboveSearchBar;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (BOOL)isActive;
- (void)windowDidRotate:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)set_activationGapHeight:(float)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1;
- (void)setSearchResultsTitle:(id)arg1;
- (id)searchResultsDelegate;
- (id)searchResultsDataSource;
- (void)_setDimmingOverlayColor:(id)arg1;
- (void)setNavigationBarSearchFieldSizing:(unsigned int)arg1;
- (void)_setShowsResultsForEmptyField:(BOOL)arg1;
- (id)_noResultsMessageLabel;
- (void)_setCancelButtonManagementDisabled:(BOOL)arg1;
- (BOOL)_isCancelButtonManagementDisabled;
- (void)setDimTableViewOnEmptySearchString:(BOOL)arg1;
- (BOOL)_adjustsSearchBarContentInsetForIndexBar;
- (void)_setAdjustsSearchBarContentInsetForIndexBar:(BOOL)arg1;
- (BOOL)_allowDisablingNavigationBarHiding;
- (void)_setAllowDisablingNavigationBarHiding:(BOOL)arg1;
- (void)setNavigationBarHidingEnabled:(BOOL)arg1;
- (void)setNoResultsMessage:(id)arg1;
- (BOOL)automaticallyShowsNoResultsMessage;
- (void)setAutomaticallyShowsNoResultsMessage:(BOOL)arg1;
- (BOOL)noResultsMessageVisible;
- (void)setNoResultsMessageVisible:(BOOL)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setSearchResultsDataSource:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)setSearchContentsController:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)_configureContainerView;
- (void)_setupNoResultsLabelIfNecessary;
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
- (float)_updateNavigationPalette;
- (BOOL)_searchBarInNavigationControllerComponent;
- (void)_updatePinnedSearchBar;
- (void)showHideAnimationDidFinish;
- (float)_activationGapHeight;
- (void)set_additionalNonCollapsingHeightAboveSearchBar:(float)arg1;
- (float)_dimmingViewAlpha;
- (void)_enableParentScrollViews;
- (void)_disableParentScrollViews;
- (void)_hideVisibleRefreshControl;
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (void)_sendDelegateDidBeginDidEndSearch;
- (void)_setTableViewVisible:(BOOL)arg1 inView:(id)arg2;
- (void)_hoistSearchBar;
- (BOOL)_showsResultsForEmptyField;
- (id)_dimmingOverlayColor;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (void)_cleanUpSearchBar;
- (BOOL)dimTableViewOnEmptySearchString;
- (id)_createPopoverController;
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(BOOL)arg1;
- (BOOL)_isSearchBarInBar;
- (float)_additionalNonCollapsingHeightAboveSearchBar;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_tableViewContentInsets;
- (BOOL)_shouldAccountForStatusBarHeight;
- (void)_popoverClearButtonPressed:(id)arg1;
- (id)searchResultsTitle;
- (id)searchResultsTableView;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_containingViewOfClass:(Class)arg1;
- (BOOL)isNavigationBarHidingEnabled;
- (id)noResultsMessage;
- (void)_configureSearchBarForTableView;
- (void)windowWillAnimateRotation:(id)arg1;
- (BOOL)_areSearchContentsSplitViewMaster;
- (void)_watchContainingTableViewForScrolling:(BOOL)arg1;
- (void)_indexBarFrameChanged:(id)arg1;
- (void)_updateSearchBarForTableViewIndexBar:(id)arg1;
- (id)_containingTableView;
- (void)_destroyManagedTableView;
- (void)_configureNewSearchBar;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(int)arg3;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)_managedTableViewDidScroll;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)_searchBarShouldScrollToVisible:(id)arg1;
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;
- (id)searchContentsController;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (unsigned int)navigationBarSearchFieldSizing;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarSuperviewWillChange;
- (void)_updateSearchBarMaskIfNecessary;
- (id)_topShadowView;
- (id)_dimmingViewColor;
- (void)setActive:(BOOL)arg1;
- (id)_containerView;
- (id)searchBar;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)displaysSearchBarInNavigationBar;
- (BOOL)hidNavigationBar;
- (void)_clearViewController;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (id)navigationItem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

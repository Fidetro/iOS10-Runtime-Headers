/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIActivityIndicatorView, GKColorPalette, UISearchBar, GKSwipeToEditStateMachine, UICollectionViewLayout, NSString, <UICollectionViewDataSource>, GKLoadableContentStateMachine;

@interface GKCollectionViewController : UICollectionViewController <GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler> {
    BOOL _shouldSlideInContents;
    BOOL _readyToDisplayData;
    BOOL _active;
    BOOL _hasViewFactories;
    BOOL _didSlideIn;
    GKColorPalette *_colorPalette;
    <UICollectionViewDataSource> *_dataSource;
    GKLoadableContentStateMachine *_loadingMachine;
    UICollectionViewLayout *_defaultLayout;
    UISearchBar *_activeSearchBar;
    NSString *_currentSearchText;
    UIActivityIndicatorView *_loadingIndicatorView;
    int _gkFocusBubbleType;
    int _previousOrientation;
    int _appearCount;
    GKSwipeToEditStateMachine *_swipeStateMachine;
}

@property(retain) <UICollectionViewDataSource> * dataSource;
@property(retain) GKColorPalette * colorPalette;
@property BOOL shouldSlideInContents;
@property(readonly) NSString * loadingState;
@property(readonly) BOOL readyToDisplayData;
@property(retain) GKLoadableContentStateMachine * loadingMachine;
@property(retain) UICollectionViewLayout * defaultLayout;
@property(retain) UISearchBar * activeSearchBar;
@property(retain) NSString * currentSearchText;
@property(retain) UIActivityIndicatorView * loadingIndicatorView;
@property int gkFocusBubbleType;
@property int previousOrientation;
@property BOOL active;
@property BOOL hasViewFactories;
@property BOOL didSlideIn;
@property int appearCount;
@property(retain) GKSwipeToEditStateMachine * swipeStateMachine;


- (id)currentSearchText;
- (void)setNeedsReload;
- (void)shutActionPaneAnimated:(BOOL)arg1;
- (void)setSwipeStateMachine:(id)arg1;
- (id)swipeStateMachine;
- (void)setAppearCount:(int)arg1;
- (int)appearCount;
- (void)setDidSlideIn:(BOOL)arg1;
- (BOOL)didSlideIn;
- (void)setHasViewFactories:(BOOL)arg1;
- (BOOL)hasViewFactories;
- (void)setGkFocusBubbleType:(int)arg1;
- (int)gkFocusBubbleType;
- (id)loadingIndicatorView;
- (id)activeSearchBar;
- (void)setDefaultLayout:(id)arg1;
- (id)defaultLayout;
- (void)setLoadingMachine:(id)arg1;
- (id)loadingMachine;
- (BOOL)readyToDisplayData;
- (void)setShouldSlideInContents:(BOOL)arg1;
- (double)bubbleFlowAnimateOutDuration;
- (void)completeWhenReadyToDisplayData:(id)arg1;
- (void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didEnterLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (id)loadingState;
- (void)didTouchShowMore:(id)arg1;
- (void)setColorPalette:(id)arg1;
- (id)defaultBubbleSpec;
- (void)updateMetrics;
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(id)arg2;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 didMoveSection:(int)arg2 toSection:(int)arg3;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned int)arg2 didSelectDataSourceWithIndex:(int)arg3;
- (void)didBecomeReadyToDisplayData;
- (void)setIsReadyToDisplayData:(BOOL)arg1;
- (void)_reallyStartLoadingIndicator;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)slideInContents;
- (void)stopLoadingIndicator;
- (void)_loadDataWithCompletionHandlerAndError:(id)arg1;
- (void)_applyUpdates:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(id)arg2;
- (id)currentSearchTerms;
- (void)setCurrentSearchText:(id)arg1;
- (void)clearButtonPressed:(id)arg1;
- (void)setActiveSearchBar:(id)arg1;
- (id)defaultColorPalette;
- (void)stopLoadingIndicatorWithoutAnimation;
- (id)gkDataSource;
- (void)invalidateSearch;
- (void)startLoadingIndicator;
- (int)previousOrientation;
- (BOOL)hasLoaded;
- (BOOL)shouldSlideInContents;
- (void)setPreviousOrientation:(int)arg1;
- (id)colorPalette;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)configureViewFactories;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)willDismissActionSheetFromCell:(id)arg1;
- (void)swipeToDeleteCell:(id)arg1;
- (void)configureDataSource;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)stateDidChange;
- (void)stateWillChange;
- (id)_gkRecursiveDescription;
- (BOOL)active;
- (void)setDataSource:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setActive:(BOOL)arg1;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

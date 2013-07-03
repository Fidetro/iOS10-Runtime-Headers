/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSNumber, UIKeyboard, UITableView, NSMutableArray, UIActionSheet, UIView, UIAlertView, NSString, UIPopoverController, NSMutableDictionary, NSArray;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol> {
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _reusesCells;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    UIView *_containerView;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _showingSetupController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    BOOL _swapAlertButtons;
    BOOL _keyboardWasVisible;
    UIKeyboard *_keyboard;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    BOOL _popupIsModal;
    BOOL _popupIsDismissing;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetWithKeyboard;
    NSNumber *_marginWidth;
    BOOL _edgeToEdgeCells;
}

@property BOOL forceSynchronousIconLoadForCreatedCells;
@property BOOL edgeToEdgeCells;

+ (BOOL)displaysButtonBar;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (id)popupStylePopoverController;
- (void)showPINSheet:(id)arg1;
- (void)setEdgeToEdgeCells:(BOOL)arg1;
- (BOOL)forceSynchronousIconLoadForCreatedCells;
- (void)_setNotShowingSetupController;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)selectRowForSpecifier:(id)arg1;
- (void)dismissPopover;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)createPrequeuedPSTableCells:(unsigned int)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)specifierID;
- (void)loseFocus;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeLastSpecifier;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3;
- (int)numberOfGroups;
- (BOOL)containsSpecifier:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (float)verticalContentOffset;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (void)pushController:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (BOOL)performLoadActionForSpecifier:(id)arg1;
- (BOOL)performButtonActionForSpecifier:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationActionForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (void)returnPressedAtEnd;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (float)_getKeyboardIntersectionHeight;
- (void)_loadBundleControllers;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (id)findFirstVisibleResponder;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (id)cachedCellForSpecifier:(id)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (id)specifierAtIndex:(int)arg1;
- (id)_createGroupIndices:(id)arg1;
- (BOOL)edgeToEdgeCells;
- (Class)tableViewClass;
- (void)_returnKeyPressed:(id)arg1;
- (void)_unloadBundleControllers;
- (void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(BOOL)arg2;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (int)rowsForGroup:(int)arg1;
- (BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (id)specifierForID:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (id)specifiersInGroup:(int)arg1;
- (int)indexOfGroup:(int)arg1;
- (void)createGroupIndices;
- (id)indexPathForIndex:(int)arg1;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3;
- (void)prepareSpecifiersMetadata;
- (int)indexOfSpecifier:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)setSpecifierID:(id)arg1;
- (void)readPSListControllerPropertiesWithDictionary:(id)arg1;
- (void)setReusesCells:(BOOL)arg1;
- (void)clearCache;
- (void)setCachesCells:(BOOL)arg1;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)reloadSpecifier:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)setTitle:(id)arg1;
- (void)handleURL:(id)arg1;
- (id)bundle;
- (void)reload;
- (void)setMarginWidth:(id)arg1;
- (id)table;
- (id)init;
- (void)dealloc;
- (id)description;
- (int)indexForIndexPath:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)_keyboardDidHide:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)endUpdates;
- (void)beginUpdates;

@end

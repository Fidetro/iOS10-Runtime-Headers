/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABModel, <ABStyleProvider>, <ABPeoplePickerNavigationControllerDelegate>;

@interface ABPeoplePickerNavigationController : UINavigationController  {
    void *_addressBook;
    id _peoplePickerDelegate;
    ABModel *_model;
    int _behavior;
    struct __CFArray { } *_displayedProperties;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    NSArray *_defaultToolbarItems;
    id _insertionValue;
    int _insertionProperty;
    struct { 
        unsigned int allowsEditing : 1; 
        unsigned int allowsCancel : 1; 
        unsigned int allowsActions : 1; 
        unsigned int allowsConferencing : 1; 
        unsigned int allowsSounds : 1; 
        unsigned int allowsVibrations : 1; 
        unsigned int hidesSearchableSources : 1; 
        unsigned int hidesPromptInLandscape : 1; 
    } _flags;
    BOOL _navigationBarIsAnimating;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
}

@property <ABPeoplePickerNavigationControllerDelegate> * peoplePickerDelegate;
@property(copy) NSArray * displayedProperties;
@property void* addressBook;
@property BOOL hidesSearchableSources;
@property BOOL hidesPromptInLandscape;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsOnlyFaceTimeActions;
@property(setter=ab_setDefaultToolbarItems:,retain) NSArray * ab_defaultToolbarItems;
@property(retain) <ABStyleProvider> * styleProvider;

+ (void)notifyPreferencesChanged;

- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setHidesPromptInLandscape:(BOOL)arg1;
- (void)__loadDatabaseAtDirectory:(id)arg1;
- (void)safePopToRootViewControllerAnimated:(BOOL)arg1;
- (void)searchCurrentContactsGroupUsingQuery:(id)arg1 animated:(BOOL)arg2;
- (id)ab_defaultToolbarItems;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (void)ab_setDefaultToolbarItems:(id)arg1;
- (void)personViewController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (void)setupAsMePicker;
- (BOOL)hidesPromptInLandscape;
- (BOOL)isDefaultViewControllerVisible;
- (void)popToDefaultViewController:(BOOL)arg1;
- (void)setInsertionValue:(id)arg1 property:(int)arg2;
- (void)notePreferencesChanged;
- (void)finishNavigationBarAnimation;
- (void)showUnifiedCardForPerson:(void*)arg1;
- (void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_setDefaultToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)arg1;
- (void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(BOOL)arg2;
- (BOOL)ab_ownsViewControllerToolbarItems:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (BOOL)shouldPerformDefaultActionForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 withMemberCell:(id)arg4;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (BOOL)shouldContinueAfterSelectingPerson:(void*)arg1 cell:(id)arg2;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (BOOL)_shouldPreventCancelButtonsFromShowing;
- (void)saveState;
- (void)_updateViewControllerNavigationButtons;
- (void)showCardForPerson:(void*)arg1;
- (id)membersViewController;
- (void)showMembersOfContactsFilter:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (void)setupAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (id)initWithoutSetup;
- (void)setupInitialStackAndLoadState:(BOOL)arg1;
- (id)_setupAccountsAndGroupsController;
- (void)loadState;
- (BOOL)navigationBarIsAnimating;
- (int)insertionProperty;
- (id)insertionValue;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;
- (void)_performCancel:(id)arg1;
- (void)presentGroupsViewController;
- (BOOL)allowsCardEditing;
- (BOOL)allowsCancel;
- (id)bannerValue;
- (id)bannerTitle;
- (void)_applicationEnteringForeground;
- (void)setSearchCompletionDelegate:(id)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (BOOL)allowsShowingPersonsCards;
- (void*)displayedPerson;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsActions;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)showMembersOfContactsFilter:(id)arg1;
- (void)groupsViewControllerDidFinish:(id)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (BOOL)hidesSearchableSources;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)displayedProperties;
- (id)initAsAddressBook:(BOOL)arg1;
- (id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2;
- (id)peoplePickerDelegate;
- (void)setDisplayedProperties:(id)arg1;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (id)model;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (void)setBehavior:(int)arg1;
- (int)behavior;
- (id)init;
- (void)dealloc;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2;
- (void)setParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_setPopoverController:(id)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (void)setPrompt:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end

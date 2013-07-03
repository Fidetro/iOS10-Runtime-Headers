/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITableView, <ABContactGroupPickerDelegate>, NSArray;

@interface ABContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_pickableGroups;
    UITableView *_tableView;
    <ABContactGroupPickerDelegate> *_groupPickerDelegate;
}

@property <ABContactGroupPickerDelegate> * groupPickerDelegate;

+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1;
+ (id)propertySections;
+ (id)pickableGroupsWithPickedGroups:(id)arg1;

- (id)initWithGroups:(id)arg1;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;
- (id)groupPickerDelegate;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

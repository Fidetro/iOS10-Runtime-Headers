/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UISearchDisplayController, NSBundle, SLPlace, UITableView, UISearchBar, SLSheetPlaceSearchController, MKMapView, NSObject<SLSheetPlaceViewControllerDelegate>, ACAccount, NSObject<SLPlaceDataSource>, NSArray;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate> {
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    BOOL _searchPresented;
    BOOL _searchAnimationComplete;
    float _mapHeight;
    BOOL _searchEnabled;
    NSObject<SLSheetPlaceViewControllerDelegate> *_selectionDelegate;
    ACAccount *_account;
    NSObject<SLPlaceDataSource> *_placeDataSource;
}

@property NSObject<SLSheetPlaceViewControllerDelegate> * selectionDelegate;
@property BOOL searchEnabled;
@property(retain) ACAccount * account;
@property(retain) NSObject<SLPlaceDataSource> * placeDataSource;
@property(retain) NSArray * places;


- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)setPlaceDataSource:(id)arg1;
- (void)setSearchEnabled:(BOOL)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)setSelectedPlace:(id)arg1;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;
- (id)_placeForRow:(int)arg1;
- (void)setPlaces:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionForPlaces:(id)arg1;
- (id)places;
- (void)_centerMapForPlaces;
- (BOOL)_forceSelectPlace:(id)arg1 setMapAnnotation:(BOOL)arg2;
- (BOOL)searchEnabled;
- (void)_restoreFromSearch;
- (id)placeDataSource;
- (void)_presentSearch;
- (void)_layoutForSearch;
- (void)_layoutNormal;
- (float)_mapHeightForInterfaceOrientation:(int)arg1;
- (float)_preferredViewHeight;
- (id)selectionDelegate;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

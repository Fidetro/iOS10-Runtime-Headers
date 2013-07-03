/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, PKPrinter, NSString, UIPrinterSetupConnectingView;

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {
    BOOL _addToNetwork;
    BOOL _directPrinting;
    PKPrinter *_printer;
    NSString *_directPasscode;
    UIButton *_finishButton;
    UIPrinterSetupConnectingView *_connectingView;
}

@property(retain) PKPrinter * printer;
@property BOOL addToNetwork;
@property BOOL directPrinting;
@property(copy) NSString * directPasscode;
@property(retain) UIButton * finishButton;
@property(retain) UIPrinterSetupConnectingView * connectingView;


- (void)dealloc;
- (id)finishButton;
- (id)directPasscode;
- (BOOL)directPrinting;
- (BOOL)addToNetwork;
- (void)toggleDirectPrinting:(id)arg1;
- (void)toggleAddToNetwork:(id)arg1;
- (void)finished:(BOOL)arg1;
- (void)finish;
- (void)setFinishButton:(id)arg1;
- (void)setDirectPasscode:(id)arg1;
- (void)setDirectPrinting:(BOOL)arg1;
- (void)setAddToNetwork:(BOOL)arg1;
- (id)connectingView;
- (void)setConnectingView:(id)arg1;
- (id)initWithPrinter:(id)arg1;
- (id)printer;
- (void)setPrinter:(id)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textDidChange:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPaper, UIWindow, UIPrintPanelTableViewController, UIPrintInteractionController, PKPrinter, UIViewController, UIPopoverController, UINavigationController, NSArray;

@interface UIPrintPanelViewController : NSObject  {
    UIPrintInteractionController *_printInteractionController;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
}

@property(retain) PKPrinter * printer;
@property(readonly) int pageCount;
@property struct _NSRange { unsigned int x1; unsigned int x2; } pageRange;
@property BOOL duplex;
@property(readonly) NSArray * paperList;
@property(retain) UIPrintPaper * paper;
@property int copies;
@property(readonly) BOOL showDuplex;
@property(readonly) BOOL showPageRange;
@property(readonly) BOOL showCopies;
@property(readonly) BOOL showPaper;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (BOOL)duplex;
- (void)setPaper:(id)arg1;
- (id)paper;
- (void)dealloc;
- (id)printer;
- (BOOL)showPaper;
- (BOOL)showCopies;
- (BOOL)showDuplex;
- (void)cancelPrinting;
- (void)startPrinting;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPrintPanelAnimated:(BOOL)arg1;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (id)paperList;
- (void)setPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRange;
- (BOOL)showPageRange;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (void)controllerDidDisappear;
- (void)setPrinter:(id)arg1;
- (void)setCopies:(int)arg1;
- (int)copies;
- (void)setDuplex:(BOOL)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (int)pageCount;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end

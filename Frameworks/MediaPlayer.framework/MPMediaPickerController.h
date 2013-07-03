/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, <MPMediaPickerControllerDelegate>;

@interface MPMediaPickerController : UIViewController  {
    id _modalContext;
    int _prevStatusBarStyle;
    unsigned int _allowsPickingMultipleItems : 1;
    unsigned int _showsCloudItems : 1;
    unsigned int _mediaTypes;
    <MPMediaPickerControllerDelegate> *_delegate;
    NSString *_prompt;
}

@property(readonly) unsigned int mediaTypes;
@property <MPMediaPickerControllerDelegate> * delegate;
@property BOOL allowsPickingMultipleItems;
@property BOOL showsCloudItems;
@property(copy) NSString * prompt;

+ (void)preheatMediaPicker;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)_pickerDidPickItems:(id)arg1;
- (void)setShowsCloudItems:(BOOL)arg1;
- (BOOL)showsCloudItems;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (BOOL)allowsPickingMultipleItems;
- (void)_pickerDidCancel;
- (id)initWithMediaTypes:(unsigned int)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (unsigned int)mediaTypes;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (id)prompt;

@end

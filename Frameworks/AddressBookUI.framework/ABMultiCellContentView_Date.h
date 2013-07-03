/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDate, ABDateField;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {
    ABDateField *_dateField;
}

@property(readonly) NSDate * date;

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (BOOL)dateFieldShouldReturn:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (id)viewForFirstResponder;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (void)dateFieldDidEndEditing:(id)arg1;
- (BOOL)dateFieldShouldEndEditing:(id)arg1;
- (void)dateFieldDidBeginEditing:(id)arg1;
- (BOOL)dateFieldShouldBeginEditing:(id)arg1;
- (void)dateFieldDateDidChange:(id)arg1;
- (BOOL)dateFieldShouldClear:(id)arg1;
- (void)setAbCellStyle:(int)arg1;
- (void)reloadFromModel;
- (void)reload;
- (id)date;
- (void)dealloc;

@end
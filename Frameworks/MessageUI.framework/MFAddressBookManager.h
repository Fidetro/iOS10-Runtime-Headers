/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject  {
    struct __CFArray { } *_clients;
    void *_addressBook;
}

+ (BOOL)isAuthorizedToUseAddressBook;
+ (id)sharedManager;

- (void)_handleAddressBookPrefsChangeNotification;
- (void)_handleAddressBookChangeNotification;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void*)addressBook;
- (id)init;
- (void)dealloc;

@end

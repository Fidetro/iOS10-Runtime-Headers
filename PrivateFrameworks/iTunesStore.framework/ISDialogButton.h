/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogButton : NSObject  {
    int _actionType;
    id _parameter;
    NSString *_title;
    int _urlType;
    NSString *_subtarget;
}

@property int actionType;
@property(retain) id parameter;
@property(retain) NSString * title;
@property(copy) NSString * subtarget;
@property int urlType;

+ (id)buttonWithTitle:(id)arg1;

- (id)subtarget;
- (void)_openURLWithRequest:(id)arg1;
- (id)_accountURLForURL:(id)arg1 authenticationContext:(id)arg2;
- (void)setUrlType:(int)arg1;
- (int)_urlTypeForString:(id)arg1;
- (void)setSubtarget:(id)arg1;
- (int)_actionTypeForString:(id)arg1;
- (id)parameter;
- (int)urlType;
- (BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2;
- (void)setParameter:(id)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;

@end

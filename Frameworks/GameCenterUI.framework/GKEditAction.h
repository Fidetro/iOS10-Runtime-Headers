/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@interface GKEditAction : NSObject  {
    BOOL _destructive;
    NSString *_name;
    SEL _selector;
}

@property(copy) NSString * name;
@property SEL selector;
@property BOOL destructive;

+ (id)deleteActionWithName:(id)arg1;
+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;

- (void)setDestructive:(BOOL)arg1;
- (BOOL)destructive;
- (id)name;
- (void)dealloc;
- (SEL)selector;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CADisplayLink, NSInvocationOperation, UITextRange;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    UITextRange *_range;
    id _placeholder;
    BOOL _didHaveText;
    BOOL _willInsertResult;
    float _angle;
    float _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    BOOL _shrinking;
    NSInvocationOperation *_afterShrinkCompletionInvocation;
}

@property BOOL willInsertResult;

+ (float)diameterForLineHeight:(float)arg1;
+ (float)widthForLineHeight:(float)arg1;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)willInsertResult;
- (void)errorShakeDidFinish;
- (void)errorShrinkDidFinish;
- (void)showCursor;
- (void)hideCursor;
- (void)startDisplayLinkIfNecessary;
- (void)advanceLanding:(id)arg1;
- (void)rotateBy:(float)arg1;
- (void)clearRotation;
- (void)shrinkWithCompletionInvocation:(id)arg1;
- (void)setWillInsertResult:(BOOL)arg1;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)startLandingIfNecessary;
- (void)updatePosition;
- (float)fadeOutDuration;
- (BOOL)delegateWasEmpty;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end

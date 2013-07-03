/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScreen, _UIReplicantContentView, _SlotIdWrapper, NSMutableArray;

@interface _UIReplicantView : UIView  {
    _SlotIdWrapper *_slotIdWrapper;
    BOOL _deferred;
    NSMutableArray *_dependantSnapshots;
    UIScreen *_screen;
    struct CGSize { 
        float width; 
        float height; 
    } _snapshotSize;
    _UIReplicantContentView *_contentView;
}

+ (id)snapshotWithScreen:(id)arg1;
+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)snapshotContext;
+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)updateDependantSnapshots;
- (id)resizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)layoutSubviews;

@end

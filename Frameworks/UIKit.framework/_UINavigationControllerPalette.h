/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSArray, UIViewController, UINavigationController;

@interface _UINavigationControllerPalette : UIView  {
    struct { 
        unsigned int isAttached : 1; 
        unsigned int attachmentIsChanging : 1; 
        unsigned int restartPaletteTransitionIfNecessary : 1; 
        unsigned int pinned : 1; 
        unsigned int pinningBarShadowIsHidden : 1; 
        unsigned int paletteShadowIsHidden : 1; 
    } _paletteFlags;
    BOOL __paletteOverridesPinningBar;
    BOOL _visibleWhenPinningBarIsHidden;
    BOOL __palettePinningBarHidden;
    UIView *__backgroundView;
    UINavigationController *_navController;
    unsigned int _boundaryEdge;
    UIViewController *__unpinnedController;
    id __pinningBar;
    NSArray *__constraints;
    NSArray *__backgroundConstraints;
    struct CGSize { 
        float width; 
        float height; 
    } __size;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _preferredContentInsets;
}

@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property(setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property(readonly) UINavigationController * navController;
@property(readonly) unsigned int boundaryEdge;
@property(getter=isPinned) BOOL pinned;
@property BOOL pinningBarShadowIsHidden;
@property BOOL paletteShadowIsHidden;
@property(getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } preferredContentInsets;
@property UIViewController * _unpinnedController;
@property(setter=_setPinningBar:) id _pinningBar;
@property(getter=_attachmentIsChanging,readonly) BOOL _attachmentIsChanging;
@property(setter=_setRestartPaletteTransitionIfNecessary:) BOOL _restartPaletteTransitionIfNecessary;
@property(setter=_setConstraints:,retain) NSArray * _constraints;
@property(setter=_setSize:) struct CGSize { float x1; float x2; } _size;
@property(setter=_setBackgroundConstraints:,retain) NSArray * _backgroundConstraints;
@property(getter=_isPalettePinningBarHidden,setter=_setPalettePinningBarHidden:) BOOL _palettePinningBarHidden;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_backgroundConstraints;
- (id)_constraints;
- (void)set_unpinnedController:(id)arg1;
- (id)_unpinnedController;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)navController;
- (void)_setPaletteOverridesPinningBar:(BOOL)arg1;
- (void)setPaletteShadowIsHidden:(BOOL)arg1;
- (void)setPinningBarShadowIsHidden:(BOOL)arg1;
- (void)_setAttachmentIsChanging:(BOOL)arg1;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_setupBackgroundViewIfNecessary;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_resetHeightConstraintConstant;
- (void)_enableConstraints;
- (void)_disableConstraints;
- (void)_setConstraints:(id)arg1;
- (void)_setBackgroundConstraints:(id)arg1;
- (void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1;
- (BOOL)_attachmentIsChanging;
- (void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1;
- (id)_pinningBar;
- (BOOL)pinningBarShadowIsHidden;
- (void)setPinned:(BOOL)arg1;
- (void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)_setPinningBar:(id)arg1;
- (void)_setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned int)arg2;
- (unsigned int)boundaryEdge;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })preferredContentInsets;
- (BOOL)_restartPaletteTransitionIfNecessary;
- (void)_resetConstraintConstants:(float)arg1;
- (BOOL)isPinned;
- (void)_setPalettePinningBarHidden:(BOOL)arg1;
- (void)_setLeftConstraintConstant:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isAnimating:(BOOL)arg2;
- (void)_setTopConstraintConstant:(float)arg1;
- (BOOL)paletteIsHidden;
- (BOOL)_isPalettePinningBarHidden;
- (BOOL)isVisibleWhenPinningBarIsHidden;
- (BOOL)isAttached;
- (void)_updateBackgroundView;
- (BOOL)paletteShadowIsHidden;
- (BOOL)_paletteOverridesPinningBar;
- (struct CGSize { float x1; float x2; })_size;
- (void)_setBackgroundView:(id)arg1;
- (void)didMoveToSuperview;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (void)_setVisualAltitude:(float)arg1;
- (id)_backgroundView;
- (BOOL)shouldGroupAccessibilityChildren;

@end

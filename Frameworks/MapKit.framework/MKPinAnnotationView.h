/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImageView, MKPinAnnotationViewInternal;

@interface MKPinAnnotationView : MKAnnotationView  {
    MKPinAnnotationViewInternal *_pinInternal;
    UIImageView *_shadowView;
    id _delegate;
    int _pinType;
    int _state;
    BOOL _animatesDrop;
}

@property unsigned int pinColor;
@property BOOL animatesDrop;

+ (struct CGPoint { float x1; float x2; })_shadowAnchorPoint;
+ (struct CGPoint { float x1; float x2; })_perceivedAnchorPoint;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_shadowDropAnimation;
+ (id)_dropAnimation;
+ (id)_dropBounceAnimation;
+ (id)_bounceAnimation;
+ (struct CGPoint { float x1; float x2; })_calloutOffset;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_desiredBounds;
+ (id)_pinsWithType:(int)arg1 mapDisplayStyle:(int)arg2;
+ (struct CGSize { float x1; float x2; })_perceivedSize;
+ (id)_reuseIdentifier;
+ (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)_shadowImage;
+ (Class)layerClass;

- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)_highlightedImage;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_dropFromPoint:(struct CGPoint { float x1; float x2; })arg1 shadowStartPoint:(struct CGPoint { float x1; float x2; })arg2 distance:(float)arg3 maxDistance:(float)arg4 withDelay:(double)arg5;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_stopDrop;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (BOOL)animatesDrop;
- (void)setAnimatesDrop:(BOOL)arg1;
- (void)setPinColor:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })_draggingDropOffset;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (void)setDragState:(unsigned int)arg1;
- (id)_bounceAnimation:(BOOL)arg1 withBeginTime:(double)arg2 addToLayer:(BOOL)arg3;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)_floatingImage;
- (id)_pinJumpImages;
- (id)_pinBounceImages;
- (void)_cleanupAfterPinDropAnimation;
- (void)_updateShadowLayer;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (unsigned int)pinColor;
- (void)_removeAllAnimations;
- (id)_pins;
- (void)_invalidateImage;
- (void)_setMapDisplayStyle:(int)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_updatePinType;
- (int)_pinType;
- (void)_setPinType:(int)arg1;
- (BOOL)_isAnimatingDrop;
- (id)_internal;
- (int)_state;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)_image;
- (void)dealloc;
- (id)description;
- (void)setAnnotation:(id)arg1;
- (void)_reset;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;

@end

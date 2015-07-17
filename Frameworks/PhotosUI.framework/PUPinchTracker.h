/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPinchTracker : NSObject {
    BOOL  _allowTrackingOutside;
    BOOL  _didSetInitialPinchValues;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialCenter;
    float  _initialPinchAngle;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialPinchCenter;
    float  _initialPinchDistance;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialPinchOrigin;
    struct CGSize { 
        float width; 
        float height; 
    }  _initialSize;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _initialTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _initialTransformInverse;
    PUValueFilter * _pinchRotationValueFilter;
    float  _rotationHysteresisDegrees;
    id /* block */  _updateHandler;
}

@property (nonatomic) BOOL allowTrackingOutside;
@property (nonatomic) float rotationHysteresisDegrees;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_transformPinchLocation1:(struct CGPoint { float x1; float x2; })arg1 location2:(struct CGPoint { float x1; float x2; })arg2 intoCenter:(struct CGPoint { float x1; float x2; }*)arg3 distance:(float*)arg4 angle:(float*)arg5;
- (BOOL)allowTrackingOutside;
- (id)init;
- (id)initWithInitialCenter:(struct CGPoint { float x1; float x2; })arg1 initialSize:(struct CGSize { float x1; float x2; })arg2 initialTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (float)rotationHysteresisDegrees;
- (void)setAllowTrackingOutside:(BOOL)arg1;
- (void)setPinchLocation1:(struct CGPoint { float x1; float x2; })arg1 location2:(struct CGPoint { float x1; float x2; })arg2;
- (void)setRotationHysteresisDegrees:(float)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
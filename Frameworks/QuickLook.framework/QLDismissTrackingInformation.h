/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDismissTrackingInformation : NSObject <NSSecureCoding> {
    float  _animationDuration;
    float  _animationSpringDamping;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  _center;
    float  _progress;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transform;
    struct PHDisplayVelocity { 
        float x; 
        float y; 
        float scale; 
        float rotation; 
    }  _velocity;
}

@property float animationDuration;
@property float animationSpringDamping;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property struct CGPoint { float x1; float x2; } center;
@property float progress;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property struct PHDisplayVelocity { float x1; float x2; float x3; float x4; } velocity;

+ (id)dismissTrackingInformationFromTracker:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (float)animationDuration;
- (float)animationSpringDamping;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGPoint { float x1; float x2; })center;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)progress;
- (void)setAnimationDuration:(float)arg1;
- (void)setAnimationSpringDamping:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setProgress:(float)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setVelocity:(struct PHDisplayVelocity { float x1; float x2; float x3; float x4; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (struct PHDisplayVelocity { float x1; float x2; float x3; float x4; })velocity;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCGestureFactory, SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject  {
    float _stallDistance;
    float _maxDimension;
    float _thumbRegion;
    int _orientation;
    int _directions[7];
    struct { 
        float horizontal; 
        float vertical; 
    } _axisFlipper;
    float _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    float _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    float _lastDegrees;
    float _startDegrees;
    float _startDistance;
    BOOL _startedInGutter;
    double _requireDelayBeforeTracking;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    float _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    float _directionalSlope;
    struct SCRCFingerState { 
        unsigned int identifier; 
        int xDirection; 
        int yDirection; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            float fifo[50]; 
            int fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } velocity; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            float fifo[50]; 
            int fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } slopeRise; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            float fifo[50]; 
            int fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } slopeRun; 
        struct SCRCMathAverageValue { 
            unsigned int samples; 
            float fifo[50]; 
            int fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } distance; 
        float velocityDistance; 
        BOOL dragStalled; 
        struct CGPoint { 
            float x; 
            float y; 
        } startPoint; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastPoint; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastDownPoint; 
    } _finger[2];
    unsigned int _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    float _distance;
    unsigned int _tapCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tapFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tapMultiFrame;
    struct { 
        id track; 
        id tap; 
        id gutterUp; 
        id splitTap; 
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct { 
        BOOL down; 
        BOOL dead; 
        BOOL gutter; 
        unsigned int current; 
        unsigned int digits; 
        unsigned int count; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } frame; 
        struct CGPoint { 
            float x; 
            float y; 
        } location[5]; 
        struct CGPoint { 
            float x; 
            float y; 
        } locationPerTap[5]; 
        unsigned int digitsPerTap; 
        double thisTime; 
        double lastTime; 
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct { 
        SCRCGestureFactory *factory; 
        BOOL isSplitting; 
        BOOL isTapping; 
        BOOL fastTrack; 
        BOOL tapDead; 
        BOOL timedOut; 
        BOOL active; 
        unsigned int fingerIdentifier; 
        double fingerDownTime; 
        struct CGPoint { 
            float x; 
            float y; 
        } startTapLocation; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastTapLocation; 
        struct CGPoint { 
            float x; 
            float y; 
        } primaryFingerLocation; 
        float tapDistance; 
        int state; 
    } _split;
}

@property BOOL thumbRejectionEnabled;


- (void)setThumbRejectionEnabled:(BOOL)arg1;
- (BOOL)thumbRejectionEnabled;
- (id)gestureStateString;
- (double)tapInterval;
- (struct CGPoint { float x1; float x2; })tapPointWeightedToSides;
- (struct CGPoint { float x1; float x2; })tapPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })multiTapFrame;
- (BOOL)tapIsDown;
- (unsigned int)absoluteFingerCount;
- (float)directionalSlope;
- (float)tapSpeed;
- (void)setTapSpeed:(float)arg1;
- (float)flickSpeed;
- (void)setFlickSpeed:(float)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 delegate:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tapFrame;
- (struct CGPoint { float x1; float x2; })rawLocation;
- (float)distance;
- (struct CGPoint { float x1; float x2; })endLocation;
- (struct CGPoint { float x1; float x2; })startLocation;
- (float)vector;
- (void)_updateStartWithPoint:(struct CGPoint { float x1; float x2; })arg1 time:(double)arg2;
- (void)_down:(id)arg1;
- (void)_drag:(id)arg1;
- (BOOL)_handleSplitEvent:(id)arg1;
- (void)handleGestureEvent:(id)arg1;
- (BOOL)_handleSplitTap;
- (int)gestureState;
- (void)_updateTapState;
- (void)_up;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_updateMultiTapFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_currentTapRect;
- (void)_handleGutterUp;
- (void)_handleTap;
- (void)_enterTrackingMode:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (unsigned int)fingerCount;
- (float)velocity;
- (void)reset;
- (void)setOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mainFrame;
- (void)dealloc;
- (unsigned int)tapCount;
- (int)direction;
- (int)orientation;

@end

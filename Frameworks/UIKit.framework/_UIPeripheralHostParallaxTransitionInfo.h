/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPeripheralHostParallaxTransitionInfo : NSObject <_UIPeripheralHostCustomTransition> {
    float _parallaxOffset;
    float _gapBetweenViews;
    int _style;
    int _operation;
}

@property float parallaxOffset;
@property float gapBetweenViews;
@property int style;
@property int operation;


- (void)setStyle:(int)arg1;
- (int)style;
- (float)parallaxOffset;
- (float)gapBetweenViews;
- (void)computeTransition:(id)arg1 forHost:(id)arg2;
- (void)setOperation:(int)arg1;
- (int)operation;
- (void)setParallaxOffset:(float)arg1;
- (void)setGapBetweenViews:(float)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken  {
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 16; 
        } styling; 
        int intValue; 
    } _style;
    NSString *_geometrySetName;
    NSString *_keySetName;
}

+ (id)tokenForKeyplane:(id)arg1;

- (void)dealloc;
- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;
- (id)stringForSplitState:(BOOL)arg1;

@end

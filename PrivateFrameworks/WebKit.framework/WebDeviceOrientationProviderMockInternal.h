/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebDeviceOrientationProviderMockInternal : NSObject  {
    struct OwnPtr<WebCore::DeviceOrientationClientMock> { 
        struct DeviceOrientationClientMock {} *m_ptr; 
    } m_core;
}


- (void)setOrientation:(id)arg1;
- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

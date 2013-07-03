/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class <RadioPushNotificationControllerDelegate>, APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {
    APSConnection *_connection;
    <RadioPushNotificationControllerDelegate> *_delegate;
    NSString *_environment;
    BOOL _notificationsEnabled;
    BOOL _pushEnabled;
}

@property <RadioPushNotificationControllerDelegate> * delegate;
@property BOOL notificationsEnabled;


- (void)_loadURLBagWithCompletionHandler:(id)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (BOOL)notificationsEnabled;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSData, NSObject<OS_xpc_object>;

@interface XPCConnection : NSObject  {
    NSObject<OS_xpc_object> *connection;
    int pid;
    id context;
    NSData *tokenData;
}

@property NSObject<OS_xpc_object> * connection;
@property int pid;
@property(retain) id context;
@property(retain) NSData * tokenData;


- (id)tokenData;
- (void)setTokenData:(id)arg1;
- (void)setPid:(int)arg1;
- (id)context;
- (int)pid;
- (void)setContext:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setConnection:(id)arg1;
- (id)connection;

@end

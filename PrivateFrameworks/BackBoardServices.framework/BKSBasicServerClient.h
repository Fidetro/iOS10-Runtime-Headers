/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSObject<OS_xpc_object>;

@interface BKSBasicServerClient : NSObject <BKSXPCServerClient> {
    NSObject<OS_xpc_object> *_connection;
}

@property(retain) NSObject<OS_xpc_object> * connection;

+ (id)wrapperWithConnection:(id)arg1;

- (void)invalidate;
- (void)dealloc;
- (void)setConnection:(id)arg1;
- (id)connection;

@end

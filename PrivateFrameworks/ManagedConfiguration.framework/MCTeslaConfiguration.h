/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject  {
    BOOL _fetching;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    NSXPCConnection *_connection;
}

@property(copy) id callback;
@property(retain) NSXPCConnection * connection;
@property(getter=isFetching) BOOL fetching;


- (void)setCallback:(id)arg1;
- (id)callback;
- (void)setFetching:(BOOL)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)connectionError;
- (BOOL)isFetching;
- (void)fetchConfigurationWithCompletionBlock:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setConnection:(id)arg1;
- (id)connection;

@end

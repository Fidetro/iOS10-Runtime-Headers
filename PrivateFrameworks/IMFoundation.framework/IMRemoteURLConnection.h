/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLRequest, NSString, NSObject<OS_xpc_object>;

@interface IMRemoteURLConnection : NSObject  {
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSObject<OS_xpc_object> *_connection;
    BOOL _loading;
    BOOL _forceCellularIfPossible;
    int _retries;
}

@property BOOL forceCellularIfPossible;
@property(retain) NSString * bundleIdentifierForDataUsage;


- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setForceCellularIfPossible:(BOOL)arg1;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (BOOL)forceCellularIfPossible;
- (id)bundleIdentifierForDataUsage;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)dealloc;
- (void)load;
- (void)cancel;

@end

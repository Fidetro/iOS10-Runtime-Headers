/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSObject<OS_dispatch_queue>, NSURLRequest, SSVURLDataConsumer, NSHTTPURLResponse, NSCachedURLResponse, NSRunLoop, NSURL, SSMetricsPageEvent;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate> {
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _expiredOutputBlock;

    BOOL _iTunesStoreRequest;
    SSMetricsPageEvent *_metricsPageEvent;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    BOOL _recordsMetrics;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    BOOL _stopped;
    NSURLRequest *_urlRequest;
}

@property(readonly) NSURL * URL;
@property(readonly) NSURLRequest * URLRequest;
@property(readonly) NSCachedURLResponse * cachedURLResponse;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property(getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property(readonly) SSMetricsPageEvent * metricsPageEvent;
@property BOOL recordsMetrics;
@property(copy) id expiredOutputBlock;
@property(copy) id outputBlock;


- (id)cachedURLResponse;
- (id)URLRequest;
- (void)setRecordsMetrics:(BOOL)arg1;
- (void)setOutputBlock:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (BOOL)recordsMetrics;
- (id)metricsPageEvent;
- (void)dispatchSync:(id)arg1;
- (void)dispatchAsync:(id)arg1;
- (void)_keepAliveTimer:(id)arg1;
- (id)dataConsumer;
- (void)_releaseOutputBlocks;
- (id)outputBlock;
- (long)_runRunLoopUntilStopped;
- (void)_stopIfCancelled;
- (void)setExpiredOutputBlock:(id)arg1;
- (id)_outputForData:(id)arg1 error:(id*)arg2;
- (void)_finishWithData:(id)arg1;
- (void)_applyResponseToMetrics:(id)arg1;
- (id)expiredOutputBlock;
- (void)_stopRunLoop;
- (id)_newURLRequest;
- (BOOL)isITunesStoreRequest;
- (id)_initSSVLoadURLOperation;
- (id)initWithURLRequestProperties:(id)arg1;
- (void)setITunesStoreRequest:(BOOL)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)URL;
- (id)initWithURLRequest:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)main;

@end

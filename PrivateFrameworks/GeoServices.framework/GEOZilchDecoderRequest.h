/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSObject<OS_dispatch_semaphore>, GEOZilchDecoder;

@interface GEOZilchDecoderRequest : GEOMapRequest  {
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> > { 
        struct __compressed_pair<geo::ZilchMapModel *, std::__1::default_delete<geo::ZilchMapModel> > { 
            struct ZilchMapModel {} *__first_; 
        } __ptr_; 
    } _mapModel;
    GEOZilchDecoder *_decoder;
    struct shared_ptr<zilch::Message> { 
        struct Message {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _message;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pathHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property(copy) id pathHandler;
@property(copy) id errorHandler;


- (id)pathHandler;
- (void)setPathHandler:(id)arg1;
- (void)decodeWithPathHandler:(id)arg1 errorHandler:(id)arg2;
- (id)initWithDecoder:(id)arg1 message:(struct shared_ptr<zilch::Message> { struct Message {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)errorHandler;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)setErrorHandler:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMapTable, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSString *_rerouteService;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}


- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (int)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (BOOL)_hasCacheForService:(id)arg1;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (id)initWithDelegateContext:(id)arg1 queue:(id)arg2;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 queue:(id)arg5 completionBlock:(id)arg6;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 completionBlock:(id)arg5;
- (BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)_callDelegatesWithBlock:(id)arg1 delegateMap:(id)arg2;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (id)_reroutedPrototypeService:(id)arg1;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (void)_requestCacheForService:(id)arg1 completionBlock:(id)arg2;
- (void)_disconnectFromQueryService;
- (void)_connectToQueryService;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(id)arg3 failBlock:(id)arg4 waitForReply:(BOOL)arg5;
- (void)_disconnectedFromQueryService;
- (void)___oldDealloc;
- (void)_purgeIDStatusCache;
- (void)_callDelegatesWithBlock:(id)arg1;
- (id)_cacheForService:(id)arg1;
- (id)_squishFromURIFromIDStatusCache:(id)arg1 service:(id)arg2;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)daemonDisconnected;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)_connect;
- (id)init;
- (void)dealloc;

@end

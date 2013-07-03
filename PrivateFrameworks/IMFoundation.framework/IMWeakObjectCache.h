/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject  {
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _tableLock;
}

+ (id)sharedInstance;

- (void)removeObject:(id)arg1 key:(id)arg2;
- (id)copyObjectForKey:(id)arg1;
- (id)copyOrSetObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)dealloc;

@end

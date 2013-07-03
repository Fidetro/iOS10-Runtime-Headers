/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSInvocation : NSObject  {
    void *_frame;
    void *_retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    unsigned char _reserved[15];
}

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)_gkInvocationWithBlock:(id)arg1;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(char *)arg3;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)invocationWithBlock:(id)arg1;
+ (void)executeBlock:(id)arg1;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;

- (void)invokeUsingIMP:(int (*)())arg1;
- (void)setReturnValue:(void*)arg1;
- (id)init;
- (void)invokeSuper;
- (BOOL)argumentsRetained;
- (void)invoke;
- (void)setArgument:(void*)arg1 atIndex:(int)arg2;
- (void)getArgument:(void*)arg1 atIndex:(int)arg2;
- (void)retainArguments;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_addAttachedObject:(id)arg1;
- (void)invokeWithTarget:(id)arg1;
- (id)target;
- (id)methodSignature;
- (void)getReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (id)debugDescription;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)wantsReturnValue;
- (void)_webkit_invokeAndHandleException:(id)arg1;
- (int)_firstXPCProxyReplyHandlerArgumentIndex;
- (BOOL)_gkHasReplyBlock;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkClearArgumentAtIndex:(unsigned int)arg1;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (id)_gkReplyHandlerInvocation;
- (void)_gkClearCopiedArguments;
- (void)_gkCopyArguments;
- (void)_gkPrintBlockSignature;
- (void)_gkClearTarget;
- (void)_gkInvokeOnce;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (BOOL)mf_shouldLogInvocation;

@end

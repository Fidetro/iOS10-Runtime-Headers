/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLWindowObject { int (*x_1_1_1)(); int (*x_1_1_2)(); int (*x_1_1_3)(); } x1; struct CAEAGLBuffer {} *x2; struct Atomic { struct { int x_1_2_1; } x_3_1_1; } x3; struct Atomic { struct { int x_1_2_1; } x_4_1_1; } x4; struct SpinLock { struct { int x_1_2_1; } x_5_1_1; } x5; struct _CAImageQueue {} *x6; id x7; struct x_list_struct {} *x8; unsigned int x9; struct CAEAGLBuffer {} *x10; struct CAEAGLBuffer {} *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct CAEAGLBuffer {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; } *_win;
}

@property(readonly) struct _EAGLWindowObject { int (*x1)(); int (*x2)(); int (*x3)(); }* nativeWindow;
@property(getter=isAsynchronous) BOOL asynchronous;
@property(copy) NSDictionary * drawableProperties;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setAsynchronous:(BOOL)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)drawableProperties;
- (struct _EAGLWindowObject { int (*x1)(); int (*x2)(); int (*x3)(); }*)nativeWindow;
- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (BOOL)isAsynchronous;

@end

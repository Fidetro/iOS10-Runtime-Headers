/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKGlobeLineContainerDelegate>, VKGlobeViewWrapper, VKPolylineOverlay, NSMutableSet, NSMutableArray, <VKRouteMatchedAnnotationPresentation>;

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {
    BOOL _trafficEnabled;
    <VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    <VKGlobeLineContainerDelegate> *_delegate;
    NSMutableArray *_overlays;
    VKGlobeViewWrapper *_wrapper;
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, vk_allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
        struct __tree<std::__1::pair<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, true>, vk_allocator<std::__1::pair<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
            struct __tree_node<std::__1::pair<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::pair<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _polylinesToRoutes;
    VKPolylineOverlay *_selectedPolyline;
    NSMutableSet *_persistentOverlays;
    struct VKGlobeRouteSplit { int (**x1)(); id x2; } *_routeSplit;
    struct VKGlobeRouteStyle { float x1; float x2; float x3; struct Color { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct Color { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; } x5; struct Color { unsigned char x_6_1_1; unsigned char x_6_1_2; unsigned char x_6_1_3; unsigned char x_6_1_4; } x6; struct Color { unsigned char x_7_1_1; unsigned char x_7_1_2; unsigned char x_7_1_3; unsigned char x_7_1_4; } x7; struct Color { unsigned char x_8_1_1; unsigned char x_8_1_2; unsigned char x_8_1_3; unsigned char x_8_1_4; } x8; float x9; float x10; float x11; float x12; float x13; } *_routeStyle;
}

@property(retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property <VKGlobeLineContainerDelegate> * delegate;


- (void)clearLineSelection;
- (void)_updateRouteSplit;
- (void)_recreateLinesIfNeeded;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)removeLine:(id)arg1;
- (id)initWithGlobeViewWrapper:(id)arg1 stylesheet:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (id)overlays;
- (void)addPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)addLine:(id)arg1;
- (void)update;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end

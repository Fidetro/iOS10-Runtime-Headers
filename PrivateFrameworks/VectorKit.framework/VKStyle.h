/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKRoadDrawStyle, VKPolygonDrawStyle, NSString, VKStyle, VKStylesheet, VKSkyDrawStyle, NSData, VKPuckDrawStyle, VKPinDrawStyle, VKRouteDrawStyle, VKGridDrawStyle, VKPGlobalProperties, VKTrafficDrawStyle, VKVegetationDrawStyle, VKLabelDrawStyle, VKGenericShieldDrawStyle, VKPStyleContents, VKLineDrawStyle, NSArray, VKBuildingDrawStyle;

@interface VKStyle : NSObject  {
    struct { unsigned int x1; int x2; int *x3; unsigned int x4; } *_attributes;
    unsigned int _attributesCount;
    VKPStyleContents *_contents;
    unsigned int _stylesPopulated;
    VKRoadDrawStyle *_roadDrawStyle;
    VKTrafficDrawStyle *_trafficDrawStyle;
    VKLabelDrawStyle *_labelStyle;
    VKPolygonDrawStyle *_polygonStyle;
    VKLineDrawStyle *_lineStyle;
    VKBuildingDrawStyle *_buildingStyle;
    VKGenericShieldDrawStyle *_genericShieldStyle;
    VKSkyDrawStyle *_skyStyle;
    VKGridDrawStyle *_gridStyle;
    VKRouteDrawStyle *_routeStyle;
    VKVegetationDrawStyle *_vegetationStyle;
    VKPinDrawStyle *_pinStyle;
    VKPuckDrawStyle *_puckStyle;
    VKStyle *_variant;
    VKStylesheet *_stylesheet;
    unsigned int _mapDisplayStyles;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSData *_contentsData;
    VKPGlobalProperties *_globalProperties;
    NSArray *_inheritance;
    NSString *_name;
    unsigned int *_inheritanceIndices;
    unsigned int _inheritanceIndexCount;
}

@property(retain) VKStyle * variant;
@property VKStylesheet * stylesheet;
@property(readonly) float blendingFactor;
@property(retain) NSString * name;


- (void)setVariant:(id)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })basicRoadColor;
- (unsigned int*)inheritanceIndices;
- (id)globals;
- (id)inheritance;
- (id)contentsData;
- (void)_populateStyles:(unsigned int)arg1;
- (void)_setupPropertiesForStyleMask:(unsigned int)arg1;
- (void)applyStyle:(id)arg1 to:(id)arg2 inheritance:(id)arg3 zoom:(float)arg4;
- (id)vegetationStyle;
- (BOOL)isDrawStyleVisibleAtLOD:(unsigned int)arg1;
- (id)gridDrawStyle;
- (id)routeStyle;
- (id)pinStyle;
- (id)puckStyle;
- (id)skyDrawStyle;
- (id)buildingStyle;
- (id)trafficStyle;
- (unsigned int)scoreForAttributes:(id)arg1 vectorType:(int)arg2 mapDisplayStyle:(int)arg3 iconTappable:(BOOL)arg4 locale:(id)arg5 targetDisplay:(int)arg6;
- (unsigned int)scoreForStyleAttributes:(struct { unsigned int x1; int x2; int *x3; unsigned int x4; }*)arg1 count:(int)arg2;
- (BOOL)isForMapDisplayStyle:(int)arg1 exclusively:(BOOL)arg2;
- (id)initWithStyle:(id)arg1 inheritance:(id)arg2 globals:(id)arg3 stylesheet:(id)arg4;
- (id)genericShieldStyle;
- (unsigned int)attributesCount;
- (unsigned int)inheritsCount;
- (id)polygonStyle;
- (float)blendingFactor;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (id)labelStyle;
- (id)lineStyle;
- (id)roadStyle;
- (id)contents;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (struct { unsigned int x1; int x2; int *x3; unsigned int x4; }*)attributes;
- (id)variant;
- (void)setName:(id)arg1;

@end

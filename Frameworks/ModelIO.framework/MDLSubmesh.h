/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSubmesh : NSObject <MDLNamed> {
    int  _geometryType;
    <MDLMeshBuffer> * _indexBuffer;
    unsigned int  _indexCount;
    unsigned int  _indexType;
    MDLMaterial * _material;
    NSString * _name;
}

@property (nonatomic, readonly) int geometryType;
@property (nonatomic, readonly, retain) <MDLMeshBuffer> *indexBuffer;
@property (nonatomic, readonly) unsigned int indexCount;
@property (nonatomic, readonly) unsigned int indexType;
@property (nonatomic, retain) MDLMaterial *material;
@property (nonatomic, copy) NSString *name;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (struct MDLAABB { })boundingBoxForMesh:(id)arg1;
- (void)dealloc;
- (int)geometryType;
- (id)indexBuffer;
- (unsigned int)indexCount;
- (unsigned int)indexType;
- (id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 geometryType:(int)arg4 material:(id)arg5;
- (id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned int)arg2 geometryType:(int)arg3;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned int)arg3 indexType:(unsigned int)arg4 geometryType:(int)arg5 material:(id)arg6;
- (id)material;
- (id)name;
- (void)setMaterial:(id)arg1;
- (void)setName:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)newSubmeshWithSCNGeometryElement:(id)arg1;
+ (id)submeshWithSCNGeometryElement:(id)arg1;

@end
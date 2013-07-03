/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableData, NSMutableSet;

@interface UINibEncoder : NSCoder  {
    struct __CFDictionary { } *objectsToObjectIDs;
    struct __CFDictionary { } *objectIDsToObjects;
    struct __CFArray { } *values;
    struct __CFSet { } *encodedObjects;
    NSMutableData *data;
    struct __CFDictionary { } *replacements;
    unsigned int nextObjectID;
    struct { 
        unsigned int currentObjectID; 
        unsigned int nextAnonymousKey; 
    } recursiveState;
    NSMutableSet *objectsUniquedByValue;
    struct __CFSet { } *objectsReplacedWithNil;
    id delegate;
}

@property id delegate;

+ (id)archivedDataWithRootObject:(id)arg1;
+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;

- (void)encodeCGPoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (void)dealloc;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (id)delegate;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeArrayOfDoubles:(double*)arg1 count:(int)arg2 forKey:(id)arg3;
- (id)encodedClassNameForObject:(id)arg1;
- (BOOL)previouslyCodedObject:(id)arg1;
- (void)encodeArrayOfCGFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)encodeArrayOfFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)appendValue:(id)arg1;
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;
- (void)serializeSet:(id)arg1;
- (void)serializeDictionary:(id)arg1;
- (void)serializeArray:(id)arg1;
- (BOOL)shouldUniqueObjectByValue:(id)arg1;
- (BOOL)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;
- (BOOL)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;
- (id)encodedClassNameForClass:(Class)arg1;
- (Class)encodedClassForObject:(id)arg1;
- (id)objectIDForObject:(id)arg1;
- (id)assignObjectIDForObject:(id)arg1;
- (id)nextGenericKey;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 forKey:(id)arg2;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (unsigned int)systemVersion;
- (void)serializeObject:(id)arg1;
- (void)finishEncoding;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (int)versionForClassName:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void*)arg3;

@end

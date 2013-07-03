/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSMutableArray : NSArray  {
}

+ (id)arrayWithCapacity:(unsigned int)arg1;
+ (id)nonRetainingArray;
+ (id)copyNonRetainingArray;
+ (id)nonRetainingArray;

- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)rollObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 by:(int)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsPassingTest:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArray:(id)arg2;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (void)removeObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 atIndex:(unsigned int)arg3;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 atIndex:(unsigned int)arg3;
- (void)insertObjects:(const id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)removeObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjects:(const id*)arg2 count:(unsigned int)arg3;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)setArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectsFromIndices:(unsigned int*)arg1 numIndices:(unsigned int)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)sortUsingDescriptors:(id)arg1;
- (void)filterUsingPredicate:(id)arg1;
- (void)removeFirstObject;
- (void)__imRandomizeArray;
- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_kb_reverse;
- (void)removeViewsFromSuperview;
- (id)_ui_dequeue;
- (id)_ui_peek;
- (void)_ui_enqueue:(id)arg1;
- (id)ax_nextDequeuedObject;
- (id)ax_lastEnqueuedObject;
- (id)ax_dequeueObject;
- (void)ax_enqueueObject:(id)arg1;
- (void)axSafelyAddObject:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_gkMutableOrderedSet;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)removeItemAtIndex:(unsigned int)arg1;
- (void)MSRemoveOneObject:(id)arg1;
- (void)MSRemoveOneObjectByPointerComparison:(id)arg1;
- (void)_mapkit_makeObjectsPerformSelector:(SEL)arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLatitude;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1 ascending:(BOOL)arg2;
- (void)_mapkit_sortUsingLongitudeAscending:(BOOL)arg1;
- (void)_mapkit_sortUsingLatitudeAscending:(BOOL)arg1;
- (unsigned int)_mapkit_insertSortedAnnotationView:(id)arg1;
- (unsigned int)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(BOOL)arg2;
- (void)removeAllObjectsWithClass:(Class)arg1;
- (void)mf_moveObjectAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (BOOL)mf_addObjectIfAbsent:(id)arg1;
- (unsigned int)mf_removeObject:(id)arg1 usingComparator:(id)arg2;
- (unsigned int)mf_insertObject:(id)arg1 usingComparator:(id)arg2 allowDuplicates:(BOOL)arg3;
- (unsigned int)mf_removeObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (unsigned int)mf_insertObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3 allowDuplicates:(BOOL)arg4;
- (void)trimObjectsFromIndex:(unsigned int)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (void)cr_addNonNilObject:(id)arg1;
- (void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)cr_insertObject:(id)arg1 usingComparator:(id)arg2;
- (void)cr_removeObjectsStartingAtIndex:(unsigned int)arg1;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)WF_pop;
- (void)WF_push:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;

@end

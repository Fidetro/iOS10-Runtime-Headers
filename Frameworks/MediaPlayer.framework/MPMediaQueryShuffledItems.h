/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPReshuffledArrayIndexMap, MPMediaQuery, NSMutableArray;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _activeShuffleType;
    BOOL _dirty;
    NSMutableArray *_orderedArray;
    MPReshuffledArrayIndexMap *_indexMap;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
    BOOL _autoReshufflingDisabled;
}

@property(readonly) MPMediaQuery * sourceMediaQuery;
@property struct _NSRange { unsigned int x1; unsigned int x2; } focusedRange;
@property(readonly) NSArray * items;
@property(readonly) unsigned int realShuffleType;
@property BOOL autoReshufflingDisabled;

+ (BOOL)supportsSecureCoding;

- (id)sourceMediaQuery;
- (void)unshuffle;
- (void)shuffleItemsWithInitialIndex:(unsigned int)arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned int)arg1;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (id)initWithSourceMediaQuery:(id)arg1;
- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned int)arg1;
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned int)arg1;
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned int)arg1;
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned int)arg2;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned int)arg2;
- (unsigned int)nonGrowingCount;
- (unsigned int)nonRepeatingCount;
- (BOOL)_getFixedItemCount:(unsigned int*)arg1;
- (void)_rebuildCaches;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 indexMap:(id)arg3 shuffleType:(unsigned int)arg4;
- (void)setFocusedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })focusedRange;
- (void)setAutoReshufflingDisabled:(BOOL)arg1;
- (BOOL)autoReshufflingDisabled;
- (unsigned int)realShuffleType;
- (void)_resetCaches;
- (id)items;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

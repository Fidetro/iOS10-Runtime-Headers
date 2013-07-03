/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying> {
    NSString *_markerFormat;
    unsigned int _listFlags;
    int _startIndex;
    void *_listSecondary;
}

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;

- (id)_markerSuffix;
- (id)_unaffixedMarkerTitle;
- (id)_unaffixedMarkerFormat;
- (id)_markerSpecifier;
- (id)_markerPrefix;
- (id)_markerTitle;
- (BOOL)_isOrdered;
- (id)_markerAtIndex:(unsigned int)arg1 inText:(id)arg2;
- (id)_unaffixedMarkerForItemNumber:(int)arg1;
- (id)markerForItemNumber:(int)arg1;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(int)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(unsigned int*)arg4 end:(unsigned int*)arg5 specifierStart:(unsigned int*)arg6 end:(unsigned int*)arg7;
- (int)startingItemNumber;
- (id)markerFormat;
- (void)setStartingItemNumber:(int)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)listOptions;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

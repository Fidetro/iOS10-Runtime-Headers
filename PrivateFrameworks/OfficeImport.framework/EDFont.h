/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColorReference, NSString, EDResources;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    boolmBold;
    boolmItalic;
    boolmShadow;
    boolmStrike;
    boolmOutline;
    boolmUnderlineOverridden;
    boolmStrikeOverridden;
    boolmBoldOverridden;
    boolmWeightOverridden;
    boolmItalicOverridden;
    boolmHeightOverridden;
    boolmDoNotModify;
}

+ (id)fontNameWithFamilyName:(id)arg1 bold:(bool)arg2 italic:(bool)arg3;
+ (id)lassoNameForFontName:(id)arg1 bold:(bool)arg2 italic:(bool)arg3;
+ (id)filterFontName:(id)arg1;
+ (id)fontWithResources:(id)arg1;

- (bool)isWeightOverridden;
- (int)family;
- (int)charSet;
- (bool)isOutline;
- (bool)isShadow;
- (int)script;
- (id)lassoName;
- (id)filteredName;
- (BOOL)isEqualToFont:(id)arg1;
- (id)colorReference;
- (void)setDoNotModify:(bool)arg1;
- (void)setScript:(int)arg1;
- (void)setColorReference:(id)arg1;
- (void)setFamily:(int)arg1;
- (void)setCharSet:(int)arg1;
- (void)setStrike:(bool)arg1;
- (void)setUnderline:(int)arg1;
- (id)initWithResources:(id)arg1;
- (bool)isStrike;
- (bool)isStrikeOverridden;
- (bool)isItalic;
- (bool)isBold;
- (bool)isHeightOverridden;
- (int)underline;
- (bool)isUnderlineOverridden;
- (bool)isItalicOverridden;
- (bool)isBoldOverridden;
- (void)setBold:(bool)arg1;
- (void)setItalic:(bool)arg1;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setOutline:(bool)arg1;
- (id)color;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;
- (void)setShadow:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setName:(id)arg1;

@end

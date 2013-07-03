/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSCharacterSet, NSArray, NSLocale, AXDialectMap, NSString;

@interface AXLanguageManager : NSObject  {
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    NSArray *_langMaps;
    NSCharacterSet *_commonCharacters;
    NSLocale *_userLocale;
}

@property(retain) NSArray * langMaps;
@property(readonly) NSString * systemLanguageID;
@property(copy) NSLocale * userLocale;
@property(retain) NSCharacterSet * commonCharacters;
@property AXDialectMap * dialectForSystemLanguage;
@property AXDialectMap * dialectForCurrentLocale;

+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;
+ (id)commonPunctuationCharacters;
+ (id)nonlocalizedNameForLanguage:(id)arg1;
+ (id)sharedInstance;

- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)characterSetForRanges:(id)arg1;
- (id)systemLanguageID;
- (id)commonCharacters;
- (id)dialectForLanguageID:(id)arg1;
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (void)updateCachedDialects;
- (id)dialectForCurrentLocale;
- (id)dialectForSystemLanguage;
- (id)langMaps;
- (void)setDialectForCurrentLocale:(id)arg1;
- (void)setDialectForSystemLanguage:(id)arg1;
- (void)setLangMaps:(id)arg1;
- (id)_loadLangMaps;
- (void)setCommonCharacters:(id)arg1;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (void)setUserLocale:(id)arg1;
- (BOOL)isCharacterCommon:(unsigned short)arg1;
- (id)userLocale;
- (id)basicDescription;
- (id)init;
- (id)debugDescription;
- (void)dealloc;
- (id)description;

@end

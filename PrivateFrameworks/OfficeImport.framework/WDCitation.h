/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, WDDocument;

@interface WDCitation : NSObject  {
    WDDocument *mDocument;
    NSString *mSourceType;
    NSMutableArray *mAuthors;
    NSString *mYear;
    NSMutableArray *mTitles;
    NSMutableArray *mUrls;
    NSString *mPeriodicalTitle;
    NSString *mVolume;
    NSString *mNumber;
    NSString *mSection;
    NSString *mPubDate;
    NSString *mPages;
}

@property(retain) NSString * year;
@property(retain) NSMutableArray * authors;
@property(retain) NSString * sourceType;
@property(retain) NSMutableArray * titles;
@property(retain) NSString * periodicalTitle;
@property(retain) NSString * volume;
@property(retain) NSString * number;
@property(retain) NSString * section;
@property(retain) NSString * pubDate;
@property(retain) NSMutableArray * urls;
@property(retain) NSString * pages;


- (void)setPubDate:(id)arg1;
- (id)pubDate;
- (void)setPeriodicalTitle:(id)arg1;
- (id)periodicalTitle;
- (void)setAuthors:(id)arg1;
- (id)authors;
- (void)setUrls:(id)arg1;
- (id)urls;
- (void)setPages:(id)arg1;
- (id)pages;
- (id)volume;
- (id)sourceType;
- (id)number;
- (void)setNumber:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)document;
- (id)year;
- (void)setYear:(id)arg1;
- (void)dealloc;
- (void)setSection:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)setSourceType:(id)arg1;
- (id)titles;
- (id)section;
- (void)setTitles:(id)arg1;

@end

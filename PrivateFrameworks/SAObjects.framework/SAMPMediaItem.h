/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMPReleaseInfo, NSString, SAMPPlaybackInfo, SACalendar;

@interface SAMPMediaItem : SAMPMediaEntity  {
}

@property(copy) NSString * album;
@property(copy) NSString * composer;
@property(copy) NSString * artist;
@property(retain) SACalendar * dateAdded;
@property int playCount;
@property(retain) SACalendar * datePurchased;
@property int rating;
@property(copy) NSString * genre;
@property(retain) SAMPPlaybackInfo * playbackInfo;
@property(retain) SAMPReleaseInfo * releaseInfo;
@property int trackNumber;
@property(copy) NSString * sortAlbum;
@property(copy) NSString * sortArtist;

+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaItem;

- (id)artist;
- (id)album;
- (id)dateAdded;
- (void)setArtist:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (id)sortAlbum;
- (id)sortArtist;
- (void)setTrackNumber:(int)arg1;
- (int)trackNumber;
- (void)setSortAlbum:(id)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (id)playbackInfo;
- (void)setDatePurchased:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setRating:(int)arg1;
- (void)setPlayCount:(int)arg1;
- (int)playCount;
- (id)composer;
- (int)rating;
- (id)datePurchased;
- (id)genre;
- (void)setGenre:(id)arg1;
- (id)releaseInfo;
- (void)setReleaseInfo:(id)arg1;
- (id)groupIdentifier;

@end

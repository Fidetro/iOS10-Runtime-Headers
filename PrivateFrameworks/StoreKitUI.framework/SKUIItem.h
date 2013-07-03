/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIArtworkList, SKUIUber, SKUIItemOffer, NSString, NSURL, NSMutableDictionary, NSArray;

@interface SKUIItem : NSObject <SKUICacheCoding> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _ageBandRange;
    NSString *_artistName;
    SKUIArtworkList *_artworks;
    NSString *_bundleID;
    NSString *_categoryName;
    unsigned int _deviceFamilies;
    long long _itemIdentifier;
    int _itemKind;
    NSString *_itemKindString;
    SKUIItemOffer *_itemOffer;
    BOOL _newsstandApp;
    int _newsstandBindingEdge;
    int _newsstandBindingType;
    SKUIArtworkList *_newsstandArtworks;
    int _numberOfUserRatings;
    int _parentalControlsRank;
    BOOL _prerenderedArtwork;
    NSString *_productPageURLString;
    NSArray *_requiredCapabilities;
    NSString *_title;
    SKUIUber *_uber;
    float _userRating;
    long long _versionIdentifier;
    NSString *_versionString;
}

@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } ageBandRange;
@property(readonly) NSString * artistName;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSURL * largestArtworkURL;
@property(readonly) SKUIArtworkList * artworks;
@property(readonly) unsigned int deviceFamilies;
@property(getter=hasPrerenderedArtwork,readonly) BOOL prerenderedArtwork;
@property(readonly) NSString * categoryName;
@property(readonly) long long itemIdentifier;
@property(readonly) int itemKind;
@property(readonly) NSString * itemKindString;
@property(readonly) int numberOfUserRatings;
@property(readonly) int parentalControlsRank;
@property(readonly) SKUIItemOffer * primaryItemOffer;
@property(readonly) NSString * productPageURLString;
@property(readonly) NSArray * requiredCapabilities;
@property(readonly) float userRating;
@property(readonly) NSString * title;
@property(readonly) SKUIUber * uber;
@property(readonly) long long versionIdentifier;
@property(readonly) NSString * versionString;
@property(getter=isNewsstandApp,readonly) BOOL newsstandApp;
@property(readonly) int newsstandBindingEdge;
@property(readonly) int newsstandBindingType;
@property(readonly) SKUIArtworkList * newsstandArtworks;
@property(readonly) NSMutableDictionary * cacheRepresentation;


- (id)productPageURLString;
- (int)numberOfUserRatings;
- (id)itemKindString;
- (id)uber;
- (int)newsstandBindingType;
- (int)newsstandBindingEdge;
- (id)newsstandArtworks;
- (unsigned int)deviceFamilies;
- (id)categoryName;
- (id)artworks;
- (struct _NSRange { unsigned int x1; unsigned int x2; })ageBandRange;
- (id)largestArtworkURL;
- (BOOL)hasPrerenderedArtwork;
- (id)primaryItemOffer;
- (int)parentalControlsRank;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (float)userRating;
- (id)requiredCapabilities;
- (long long)versionIdentifier;
- (id)artworkURLForSize:(int)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (long long)itemIdentifier;
- (int)itemKind;
- (id)artistName;
- (id)title;
- (id)versionString;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isNewsstandApp;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end

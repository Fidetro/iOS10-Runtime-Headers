/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIColor, NSString, UIFont;

@interface ABMonogrammer : NSObject  {
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    float _innerBorderWidth;
    NSString *_silhouetteImageName;
    int _monogrammerStyle;
    BOOL _textKnockout;
    float _diameter;
    UIColor *_backgroundColor;
    UIFont *_font;
    UIColor *_textColor;
}

@property float diameter;
@property(retain) UIColor * backgroundColor;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property BOOL textKnockout;


- (BOOL)textKnockout;
- (float)diameter;
- (id)defaultMonogram;
- (id)maskForMonogram;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)monogramForPerson:(void*)arg1;
- (BOOL)hasMonogramForPerson:(void*)arg1;
- (id)silhouetteImageName;
- (float)innerBorderWidth;
- (void)setTextKnockout:(BOOL)arg1;
- (void)setDiameter:(float)arg1;
- (void)monogramsAsFlatImages;
- (id)initWithStyle:(int)arg1 diameter:(float)arg2;
- (id)questionMarkMonogram;
- (id)knockoutMaskMonogram;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)monogramForPerson:(void*)arg1 isPersonImage:(BOOL*)arg2;
- (id)silhouetteMonogram;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithImageData:(struct __CFData { }*)arg1;
- (BOOL)hasImageOrInitialsForPerson:(void*)arg1;
- (id)_initialsForPerson:(void*)arg1;
- (void)_clearMonogramCache;
- (void)setBackgroundColor:(id)arg1;
- (id)font;
- (id)backgroundColor;
- (id)init;
- (void)dealloc;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;

@end

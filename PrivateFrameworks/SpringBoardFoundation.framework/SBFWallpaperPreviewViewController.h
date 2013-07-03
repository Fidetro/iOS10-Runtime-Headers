/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class UIImage, NSTimer, <SBFLegibilitySettingsProviderDelegate>, NSDictionary, _UILegibilitySettings;

@interface SBFWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLockScreenDateFormatter, SBFLegibilitySettingsProvider> {
    NSTimer *_dateTimer;
    <SBFLegibilitySettingsProviderDelegate> *_delegate;
    UIImage *_wallpaperImage;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    BOOL _colorSamplingEnabled;
}

@property BOOL colorSamplingEnabled;
@property <SBFLegibilitySettingsProviderDelegate> * delegate;
@property(readonly) _UILegibilitySettings * legibilitySettings;


- (id)initWithMagicWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithColorSamplingEnabled:(BOOL)arg1;
- (void)resetFormattersIfNecessary;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (void)_startDateTimer;
- (id)_previewView;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (BOOL)colorSamplingEnabled;
- (id)_backdropWallpaperView;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (id)_wallpaperView;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;
- (id)legibilitySettings;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

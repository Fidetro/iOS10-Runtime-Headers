/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDatePickerView, UIColor, NSLocale, NSDate, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
    _UIDatePickerView *_pickerView;
    BOOL _useCurrentDateDuringDecoding;
}

@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) BOOL usesBlackChrome;
@property(getter=_drawsBackground,setter=_setDrawsBackground:) BOOL drawsBackground;
@property(getter=_allowsZeroCountDownDuration,setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property(getter=_allowsZeroTimeInterval,setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property(getter=_dateUnderSelectionBar,readonly) NSDate * dateUnderSelectionBar;
@property(getter=_contentWidth,readonly) float contentWidth;
@property(getter=_isTimeIntervalMode,readonly) BOOL isTimeIntervalMode;
@property(getter=_useCurrentDateDuringDecoding,setter=_setUseCurrentDateDuringDecoding:) BOOL useCurrentDateDuringDecoding;
@property(getter=_usesModernStyle,setter=_setUsesModernStyle:) BOOL _usesModernStyle;
@property(getter=_highlightColor,setter=_setHighlightColor:,retain) UIColor * highlightColor;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * textColor;
@property(getter=_textShadowColor,setter=_setTextShadowColor:,retain) UIColor * textShadowColor;
@property double timeInterval;
@property int datePickerMode;
@property(retain) NSLocale * locale;
@property(copy) NSCalendar * calendar;
@property(retain) NSTimeZone * timeZone;
@property(retain) NSDate * date;
@property(retain) NSDate * minimumDate;
@property(retain) NSDate * maximumDate;
@property double countDownDuration;
@property int minuteInterval;

+ (Class)_pickerViewClass;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (int)second;
- (int)minute;
- (int)hour;
- (id)timeZone;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)date;
- (void)setTimeZone:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)timeInterval;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
- (id)_dateUnderSelectionBar;
- (void)_setHighlightsToday:(BOOL)arg1;
- (void)_setAllowsZeroTimeInterval:(BOOL)arg1;
- (BOOL)_allowsZeroTimeInterval;
- (void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
- (BOOL)_allowsZeroCountDownDuration;
- (BOOL)_usesBlackChrome;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setCountDownDuration:(double)arg1;
- (double)countDownDuration;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (int)minuteInterval;
- (id)maximumDate;
- (id)minimumDate;
- (id)_locale;
- (int)datePickerMode;
- (BOOL)_useCurrentDateDuringDecoding;
- (void)_setUseCurrentDateDuringDecoding:(BOOL)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (BOOL)_isTimeIntervalMode;
- (void)setMinuteInterval:(int)arg1;
- (void)_setLocale:(id)arg1;
- (void)_insertPickerView;
- (void)setDatePickerMode:(int)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setDate:(id)arg1;
- (float)_contentWidth;
- (void)invalidateIntrinsicContentSize;
- (void)awakeFromNib;
- (void)_setTextShadowColor:(id)arg1;
- (id)_textShadowColor;
- (void)_setHighlightColor:(id)arg1;
- (id)_highlightColor;
- (void)_setUsesModernStyle:(BOOL)arg1;
- (void)_setDrawsBackground:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_textColor;
- (BOOL)_usesModernStyle;
- (BOOL)_drawsBackground;
- (void)_setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsScannerGroup;

@end

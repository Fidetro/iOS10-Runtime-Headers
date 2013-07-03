/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIButton, UILabel, NSArray, NSString, NSSet, UIFont;

@interface MFCaptionLabel : UIView  {
    BOOL _needsLabelUpdate;
    void *_addressBook;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSSet *_receivingEmailAddresses;
    UILabel *_recipientLabel;
    UIButton *_moreButton;
}

@property void* addressBook;
@property(retain) NSArray * toRecipients;
@property(retain) NSArray * ccRecipients;
@property(retain) NSArray * bccRecipients;
@property(retain) NSSet * receivingEmailAddresses;
@property(readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property(retain) NSString * text;
@property(retain) UIFont * font;
@property(readonly) UILabel * recipientLabel;
@property(readonly) UIButton * moreButton;

+ (id)_propertiesThatNeedLabelUpdates;
+ (id)defaultFont;

- (id)moreButton;
- (id)recipientLabel;
- (void)setReceivingEmailAddresses:(id)arg1;
- (id)receivingEmailAddresses;
- (id)_arrangedRecipients:(id)arg1;
- (void)_setNeedsLabelUpdate;
- (id)bccRecipients;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)ccRecipients;
- (id)toRecipients;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (id)font;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (id)viewForBaselineLayout;
- (void)_updateLabel;
- (void)setFont:(id)arg1;
- (void)sizeToFit;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end

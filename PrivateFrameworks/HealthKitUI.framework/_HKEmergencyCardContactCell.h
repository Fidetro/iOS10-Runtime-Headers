/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKEmergencyCardContactCell : UITableViewCell {
    _HKEmergencyContact * _contact;
    UILabel * _nameLabel;
    UILabel * _phoneNumberLabel;
    UILabel * _relationshipLabel;
}

@property (nonatomic, retain) _HKEmergencyContact *contact;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)contact;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
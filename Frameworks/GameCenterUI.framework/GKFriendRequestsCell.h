/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImageView, NSArray, GKPlayerMultiPhotoView, NSDictionary, GKLabel;

@interface GKFriendRequestsCell : GKCollectionViewCell  {
    BOOL _didSetupLineLayoutConstraints;
    NSArray *_friendRequests;
    GKLabel *_titleLabel;
    GKLabel *_subtitleLabel;
    UIImageView *_caretView;
    GKPlayerMultiPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

@property(retain) NSArray * friendRequests;
@property(retain) GKLabel * titleLabel;
@property(retain) GKLabel * subtitleLabel;
@property(retain) UIImageView * caretView;
@property(retain) GKPlayerMultiPhotoView * iconView;
@property(retain) NSDictionary * metricsOverrides;
@property BOOL didSetupLineLayoutConstraints;

+ (void)registerCellClassesWithCollectionView:(id)arg1;
+ (id)padMetrics;
+ (id)phoneMetrics;

- (void)setIconView:(id)arg1;
- (void)setCaretView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setFriendRequests:(id)arg1;
- (id)friendRequests;
- (void)setPlayers:(id)arg1;
- (id)players;
- (void)setDidSetupLineLayoutConstraints:(BOOL)arg1;
- (BOOL)didSetupLineLayoutConstraints;
- (id)metricsOverrides;
- (BOOL)canRemoveItem;
- (void)didUpdateModel;
- (void)updateLineLayoutConstraints;
- (id)iconView;
- (void)setMetricsOverrides:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setTitleLabel:(id)arg1;
- (id)caretView;
- (void)updateConstraints;
- (id)subtitleLabel;
- (void)prepareForReuse;
- (id)titleLabel;

@end

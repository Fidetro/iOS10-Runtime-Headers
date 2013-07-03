/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImageView, UILabel, GKGameRecord, GKGame;

@interface GKBaseGameCell : GKCollectionViewCell  {
    UIImageView *_iconView;
    UILabel *_nameLabel;
}

@property(retain) UIImageView * iconView;
@property(retain) UILabel * nameLabel;
@property(retain) GKGame * game;
@property(retain) GKGameRecord * gameRecord;

+ (float)defaultRowHeight;

- (void)setIconView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (id)nameLabel;
- (void)setGameRecord:(id)arg1;
- (id)gameRecord;
- (void)didUpdateModel;
- (id)iconView;
- (void)setRepresentedItem:(id)arg1;
- (void)setGame:(id)arg1;
- (id)game;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)prepareForReuse;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage, NSCache, GKGameListIconBrush, GKComposedImageBrush, GKNetworkImageSource;

@interface GKUITheme : NSObject  {
    NSCache *_resourceCache;
    GKNetworkImageSource *_leaderboardCategoryIconSourceSmall;
}

@property(readonly) GKNetworkImageSource * macGameIconSource;
@property(readonly) GKNetworkImageSource * gameListIconSource;
@property(readonly) GKNetworkImageSource * achievementIconSource;
@property(readonly) GKNetworkImageSource * achievementIconSourcePad;
@property(readonly) GKNetworkImageSource * photoListSource;
@property(readonly) GKNetworkImageSource * photoDetailSource;
@property(readonly) GKNetworkImageSource * photoLeaderboardSource;
@property(readonly) GKNetworkImageSource * iconLeaderboardListSource;
@property(readonly) GKNetworkImageSource * iconLeaderboardSetListSource;
@property(readonly) GKNetworkImageSource * leaderboardCategoryIconSourceSmall;
@property(readonly) GKNetworkImageSource * untreatedAchievementImageSource;
@property(readonly) GKGameListIconBrush * gameListIconBrush;
@property(readonly) GKComposedImageBrush * achievementIconBrush;
@property(readonly) GKComposedImageBrush * achievementIconBrushPad;
@property(readonly) UIImage * ratingStarsBackgroundImage;
@property(readonly) UIImage * ratingStarsForegroundImage;
@property(readonly) UIImage * interactiveRatingStarsForeground;
@property(readonly) UIImage * interactiveRatingStarsBackground;
@property(readonly) struct CGSize { float x1; float x2; } formSheetSize;
@property(readonly) float formSheetCornerRadius;
@property(retain) NSCache * resourceCache;

+ (id)sharedTheme;

- (id)leaderboardCategoryIconSourceSmall;
- (id)navbarActionButtonIcon;
- (id)bubbleHighlight;
- (id)bubbleTurns;
- (id)bubbleSignin;
- (id)bubbleShare;
- (id)bubbleRequests;
- (id)bubblePoints;
- (id)bubblePlay;
- (id)bubbleInvite;
- (id)bubbleGames;
- (id)bubbleFriends;
- (id)bubbleDecline;
- (id)bubbleChallenges;
- (id)bubbleAccept;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)removePlayerButtonImage;
- (id)addPlayerButtonImage;
- (id)photoLeaderboardSource;
- (id)iconLeaderboardSetListSource;
- (id)iconLeaderboardListSource;
- (id)achievementIconSourcePad;
- (id)achievementIconSource;
- (id)gameListIconSource;
- (id)macGameIconSource;
- (id)tabbarIconTurnsSelected:(BOOL)arg1;
- (id)tabbarIconChallengesSelected:(BOOL)arg1;
- (id)tabbarIconMeSelected:(BOOL)arg1;
- (id)tabbarIconGamesSelected:(BOOL)arg1;
- (id)tabbarIconFriendsSelected:(BOOL)arg1;
- (id)achievementsDefaultIcon;
- (id)automatchPlayerPlaceholder;
- (id)achievementsNotStartedIcon;
- (id)eventIconImage;
- (id)interactiveRatingStarsBackground;
- (id)interactiveRatingStarsForeground;
- (id)ratingStarsForegroundImage;
- (id)ratingStarsBackgroundImage;
- (id)defaultLeaderboardIcon;
- (id)defaultPlayerPhoto;
- (id)achievementIconBrushPad;
- (id)achievementIconBrush;
- (id)gameListIconBrush;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(id)arg2;
- (id)resourceWithName:(id)arg1 missingHandler:(id)arg2;
- (id)_tabBarIconImageNamed:(id)arg1 selectedName:(id)arg2 selected:(BOOL)arg3;
- (void)setResourceCache:(id)arg1;
- (id)resourceCache;
- (void)clearResourceCache;
- (id)untreatedAchievementImageSource;
- (float)formSheetCornerRadius;
- (id)photoDetailSource;
- (id)photoListSource;
- (id)statusDotImage;
- (id)init;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (id)imageNamed:(id)arg1;

@end

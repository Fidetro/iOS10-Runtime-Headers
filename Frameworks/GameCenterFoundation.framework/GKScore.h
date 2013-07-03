/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKScoreInternal, NSString, GKPlayer, GKGame, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    BOOL _shouldSetDefaultLeaderboard;
    GKScoreInternal *_internal;
    GKGame *_game;
}

@property long long value;
@property(copy) NSString * formattedValue;
@property(copy) NSString * leaderboardIdentifier;
@property unsigned long long context;
@property(readonly) NSDate * date;
@property(retain) NSString * playerID;
@property int rank;
@property BOOL shouldSetDefaultLeaderboard;
@property(copy) NSString * category;
@property(retain) GKScoreInternal * internal;
@property(retain) NSString * groupLeaderboardIdentifier;
@property BOOL valueSet;
@property(retain) GKGame * game;
@property(readonly) GKPlayer * player;

+ (void)reportScores:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3;

- (void)setShouldSetDefaultLeaderboard:(BOOL)arg1;
- (void)reportScoreWithCompletionHandler:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (BOOL)shouldSetDefaultLeaderboard;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (void)setGame:(id)arg1;
- (id)game;
- (void)setInternal:(id)arg1;
- (id)internal;
- (id)player;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)canBeShared;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, NSArray, NSData, NSString, NSDate, GKTurnBasedParticipant;

@interface GKTurnBasedExchange : NSObject  {
    BOOL _status;
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

@property(retain) NSString * exchangeID;
@property(retain) GKTurnBasedParticipant * sender;
@property(retain) NSArray * recipients;
@property BOOL status;
@property(readonly) NSString * message;
@property(retain) NSData * data;
@property(readonly) NSDate * sendDate;
@property(retain) NSDate * timeoutDate;
@property(retain) NSDate * completionDate;
@property(retain) NSArray * replies;
@property(retain) GKTurnBasedExchangeInternal * internal;
@property GKTurnBasedMatch * match;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(id)arg4;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(id)arg3;
- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)setReplies:(id)arg1;
- (id)replies;
- (void)setMatch:(id)arg1;
- (id)match;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)setSender:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)status;
- (void)setStatus:(BOOL)arg1;
- (id)message;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)sender;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

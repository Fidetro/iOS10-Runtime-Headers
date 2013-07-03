/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSArray, GKConnection, NSMutableArray, NSDictionary, GKSession, <GKMatchDelegate>, NSMutableDictionary, NSData;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate> {
    unsigned char _version;
    BOOL _needHostScore;
    BOOL _hostScoreForQuery;
    <GKMatchDelegate> *_delegateWeak;
    GKSession *_session;
    GKConnection *_connection;
    unsigned int _expectedPlayerCount;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    <GKMatchDelegate> *_inviteDelegateWeak;
    unsigned int _packetSequenceNumber;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
    NSString *_rematchID;
    int _rematchCount;
    NSDictionary *_networkStatistics;
    NSMutableDictionary *_hostScores;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _chooseHostCompletion;

}

@property(readonly) NSArray * playerIDs;
@property <GKMatchDelegate> * delegate;
@property(readonly) unsigned int expectedPlayerCount;
@property(retain) GKSession * session;
@property(retain) GKConnection * connection;
@property(retain) NSMutableDictionary * playerEventQueues;
@property(retain) NSMutableArray * reinvitedPlayers;
@property(retain) NSData * selfBlob;
@property unsigned char version;
@property <GKMatchDelegate> * inviteDelegate;
@property unsigned int packetSequenceNumber;
@property(retain) NSMutableDictionary * playerPushTokens;
@property(retain) NSMutableArray * opponentIDs;
@property(retain) NSString * rematchID;
@property int rematchCount;
@property(retain) NSDictionary * networkStatistics;
@property(retain) NSMutableDictionary * hostScores;
@property BOOL needHostScore;
@property BOOL hostScoreForQuery;
@property(copy) id chooseHostCompletion;


- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (id)networkStatistics;
- (void)setInviteDelegate:(id)arg1;
- (id)chooseHostCompletion;
- (BOOL)hostScoreForQuery;
- (BOOL)needHostScore;
- (id)hostScores;
- (int)rematchCount;
- (id)rematchID;
- (id)opponentIDs;
- (id)playerPushTokens;
- (void)setReinvitedPlayers:(id)arg1;
- (void)setPlayerEventQueues:(id)arg1;
- (id)playerEventQueues;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (void)preemptRelay:(id)arg1;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)chooseBestHostPlayerWithCompletionHandler:(id)arg1;
- (void)rematchWithCompletionHandler:(id)arg1;
- (id)voiceChatWithName:(id)arg1;
- (BOOL)sendDataToAllPlayers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (void)inviteeComboMatched:(int)arg1;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (BOOL)shouldStartRelay:(id)arg1;
- (id)dataFromBase64String:(id)arg1;
- (void)setNetworkStatistics:(id)arg1;
- (void)queueData:(id)arg1 forPlayer:(id)arg2;
- (void)sendData:(id)arg1 fromPlayer:(id)arg2;
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(int)arg2;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (id)allIDs;
- (id)inviteDelegate;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (id)playerFromPeer:(id)arg1;
- (void)setNeedHostScore:(BOOL)arg1;
- (BOOL)haveAllHostScores;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (void)sendHostScoreAsQuery:(BOOL)arg1;
- (void)setHostScoreForQuery:(BOOL)arg1;
- (BOOL)selectHostIfRequestedAndAllScored;
- (void)calculateHostScore;
- (void)setChooseHostCompletion:(id)arg1;
- (void)setHostScores:(id)arg1;
- (BOOL)sendInviteData:(id)arg1 error:(id*)arg2;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)relayPush:(id)arg1;
- (void)connectToPeersWithDictionaries:(id)arg1 version:(unsigned char)arg2 sessionToken:(id)arg3 cdxTicket:(id)arg4;
- (void)updateStateForPlayer:(id)arg1 state:(int)arg2;
- (void)updateRematchID;
- (id)peerFromPlayer:(id)arg1;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (void)setPacketSequenceNumber:(unsigned int)arg1;
- (id)nearbyConnectionData;
- (id)selfBlob;
- (void)sendVersionData:(unsigned char)arg1;
- (void)setRematchCount:(int)arg1;
- (void)setRematchID:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)setSelfBlob:(id)arg1;
- (void)localPlayerDidChange:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)setOpponentIDs:(id)arg1;
- (void)setPlayerPushTokens:(id)arg1;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(int)arg2;
- (id)reinvitedPlayers;
- (unsigned int)packetSequenceNumber;
- (unsigned int)expectedPlayerCount;
- (id)playerIDs;
- (void)disconnect;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)setSession:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)session;
- (BOOL)connected:(id)arg1;
- (id)connection;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end

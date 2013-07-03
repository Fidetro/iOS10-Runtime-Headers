/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFSpeechRecorder, NSString, NSXPCConnection, <AFAssistantUIService>, <AFSpeechDelegate>, NSMutableDictionary;

@interface AFConnection : NSObject  {
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    unsigned int _stateInSync : 1;
    unsigned int _shouldSpeak : 1;
    unsigned int _isCapturingSpeech : 1;
    unsigned int _hasOutstandingRequest : 1;
    BOOL _hasActiveRequest;
    NSMutableDictionary *_replyHandlerForAceId;
    AFSpeechRecorder *_speechRecorder;
    BOOL _clientStateIsInSync;
    BOOL _voiceOverIsActive;
    <AFAssistantUIService> *_delegate;
    <AFSpeechDelegate> *_speechDelegate;
}

@property <AFAssistantUIService> * delegate;
@property <AFSpeechDelegate> * speechDelegate;
@property(readonly) BOOL isRecording;

+ (void)defrost;
+ (BOOL)isReadyForLanguageCode:(id)arg1;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (id)outputVoice;
+ (void)beginMonitoringAvailability;
+ (id)_sharedSpeechRecorder;
+ (BOOL)isAvailable;
+ (id)currentLanguageCode;
+ (void)initialize;

- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;
- (id)_clientServiceWithErrorHandler:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)redoRequest;
- (void)undoRequest;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)setSpeechDelegate:(id)arg1;
- (id)speechDelegate;
- (void)clearAndSetApplicationContext;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)stopSpeech;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellDelegateRequestFinished;
- (void)_doCommand:(id)arg1 reply:(id)arg2;
- (void)setApplicationContextFromFrontmostAppIncludingBulletins:(id)arg1;
- (void)clearAndSetApplicationContextWithBulletins:(id)arg1;
- (void)clearContext;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (float)peakPower;
- (void)updatePower;
- (void)rollbackRequest;
- (void)updateSpeechOptions:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_extendRequestTimeout;
- (void)_startRecordingWithRecorder:(id)arg1 options:(id)arg2;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)setIsStark:(BOOL)arg1;
- (id)_speechRecorder;
- (void)_willCancelRequest;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (id)_clientService;
- (void)_invokeRequestTimeout;
- (void)_connectionInterrupted;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_requestDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCompleteRequest;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (BOOL)shouldSpeak;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout;
- (void)_tellDelegateRequestWillStart;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_clearConnection;
- (void)_updateClientState;
- (void)cancelRequest;
- (unsigned int)audioSessionID;
- (BOOL)isRecording;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)preheat;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (void)endSession;
- (float)averagePower;
- (void)_updateState;
- (id)_connection;

@end

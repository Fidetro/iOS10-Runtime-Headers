/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class <AFSpeechCapturingDelegate>, NSObject<OS_dispatch_queue>, AVVoiceController, NSObject<OS_dispatch_source>, <AFSpeechCapturingPowerDelegate>;

@interface AFSpeechRecorder : NSObject <AVVoiceControllerRecordDelegate, AFSpeechCapturing> {
    <AFSpeechCapturingDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    AVVoiceController *_voiceController;
    NSObject<OS_dispatch_source> *_powerUpdateTimer;
    int _packetCount;
    int _mode;
    int _speechEvent;
    id _deviceIdentifier;
    BOOL _needsAlertsSet;
    BOOL _didDetectStartpoint;
    BOOL _didDetectEndpoint;
    BOOL _didTimeout;
    BOOL _wasCanceled;
    BOOL _suppressRecordingStoppedAlert;
    <AFSpeechCapturingPowerDelegate> *_powerDelegate;
}

@property <AFSpeechCapturingPowerDelegate> * powerDelegate;


- (void)setPowerDelegate:(id)arg1;
- (id)powerDelegate;
- (void)startUpdatingPower;
- (void)prepareSpeechCapture;
- (void)stopUpdatingPower;
- (void)_setAlertsIfNeeded;
- (BOOL)_prepareVoiceController;
- (int)_voiceActivationMode;
- (id)_currentDeviceContext;
- (id)_voiceController;
- (float)peakPower;
- (void)updatePower;
- (void)stopSpeechCapture;
- (void)cancelSpeechCaptureSuppressingAlert:(BOOL)arg1;
- (void)startSpeechCaptureForMode:(int)arg1 useAutomaticEndpointing:(BOOL)arg2;
- (void)setSpeechEvent:(int)arg1 deviceIdentifier:(id)arg2;
- (void)releaseAudioSession;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerDidDetectEndpoint:(id)arg1;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_setMode:(int)arg1;
- (void)preheat;
- (float)averagePower;

@end

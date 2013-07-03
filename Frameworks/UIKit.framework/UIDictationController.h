/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDictationTestOps, AFDictationConnection, AFDictationOptions, UIAlertView, NSTimer, AFPreferences, NSString, NSArray;

@interface UIDictationController : NSObject  {
    AFDictationConnection *_connection;
    AFDictationOptions *_options;
    AFPreferences *_preferences;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _wasDisabledDueToTelephonyActivity;
    UIAlertView *_dictationAvailableSoonAlert;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationTestOps *_dictationDebuggingOperations;
    BOOL cancelledByWaitingForLocalResults;
    BOOL dictationStartedFromGesture;
    BOOL _performTestOperationForEditing;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    NSString *_previousHypothesis;
    NSString *_language;
    NSString *_inputModeThatInvokedDictation;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _insertionRange;
}

@property BOOL performTestOperationForEditing;
@property(copy) NSString * previousHypothesis;
@property BOOL discardNextHypothesis;
@property struct _NSRange { unsigned int x1; unsigned int x2; } insertionRange;
@property(retain) NSString * language;
@property BOOL hasPreheated;
@property BOOL dictationStartedFromGesture;
@property(retain) NSString * inputModeThatInvokedDictation;

+ (id)stringForViewMode:(int)arg1;
+ (void)logDictationString:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (BOOL)takesPhysicalButtonsEnded:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPhysicalButtonsBegan:(id)arg1 forTextView:(id)arg2;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (BOOL)starkScreenExists;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned int)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(int)arg4;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3;
+ (BOOL)usingTypeAndTalk;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)enableGestureHandlerIfNecessary;
+ (void)logCorrectionStatistics;
+ (void)disableGestureHandler;
+ (BOOL)shouldEnableGestureHandler;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (void)keyboardDidHide;
+ (void)siriPreferencesChanged;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (BOOL)setupForPhraseSerialization;
+ (BOOL)setupForOpeningConnections;
+ (BOOL)openAssistantFrameworkIfNecessary;
+ (void)poppedLastDebuggingOp;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (void)updateLandingView;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (int)viewMode;
+ (BOOL)isRunning;
+ (BOOL)dictationIsFunctional;
+ (id)stringForState:(int)arg1;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)singleLineResultForResult:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (id)inputModeNameForDictation;
+ (void)keyboardDidSetDelegate;
+ (void)keyboardDidSetInputMode;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (void)willEndEditingInTextView:(id)arg1;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (id)language;
- (id)init;
- (void)dealloc;
- (void)setState:(int)arg1;
- (int)state;
- (void)preheatIfNecessary;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)restartDictationForTypeAndTalk;
- (void)dismissDictationView:(id)arg1;
- (void)releaseConnection;
- (void)errorAnimationDidFinish;
- (float)audioLevel;
- (void)setHasPreheated:(BOOL)arg1;
- (BOOL)hasPreheated;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (BOOL)discardNextHypothesis;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertionRange;
- (id)previousHypothesis;
- (void)finishDictationRecognition:(id)arg1;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)resultWithTrailingSpace:(id)arg1;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (BOOL)needsLeadingSpaceForPhrases:(id)arg1;
- (BOOL)needsTrailingSpaceForPhrases:(id)arg1;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)startConnectionForReason:(int)arg1;
- (void)setupForStreamingDictationStart;
- (void)startRecordingLimitTimer;
- (void)setLanguage:(id)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (BOOL)isInDebuggingMode;
- (void)releaseConnectionAfterDictationRequest;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setupForDictationStart;
- (void)setupConnectionOptions;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (id)supportedDictationLanguages:(id)arg1;
- (BOOL)wasDisabledDueToTelephonyActivity;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (void)setDiscardNextHypothesis:(BOOL)arg1;
- (void)_restartDictation;
- (BOOL)performTestOperationForEditing;
- (void)startDictationForStark;
- (id)debuggingDictationOperations;
- (void)enableProximity;
- (void)setDictationInputmode;
- (void)setDictationStartedFromGesture:(BOOL)arg1;
- (void)startDictationForReason:(int)arg1;
- (BOOL)dictationStartedFromGesture;
- (void)reenableAutorotation;
- (void)setInputModeThatInvokedDictation:(id)arg1;
- (void)disableAutorotation;
- (void)releaseConnectionAfterStatisticsLogging;
- (id)connectionForStatisticsLogging;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (BOOL)dictationEnabled;
- (BOOL)disabledDueToTelephonyActivity;
- (void)delayedTelephonyCheckingSetup;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (void)setPerformTestOperationForEditing:(BOOL)arg1;
- (id)inputModeThatInvokedDictation;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (BOOL)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)switchToDictationInputMode;
- (void)startDictation;
- (void)stopDictation;
- (void)cancelDictation;
- (void)proximityStateChanged:(id)arg1;
- (id)connection;

@end

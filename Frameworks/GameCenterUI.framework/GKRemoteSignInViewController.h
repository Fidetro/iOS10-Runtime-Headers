/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate> {
}

@property(retain) GKGame * game;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)populateInitialStateForRemoteView:(id)arg1;
- (BOOL)serviceNeedsLocalPlayer;
- (void)remoteViewControllerIsCanceling;

@end

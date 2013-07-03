/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate> {
}

+ (id)sharedAnimator;

- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(id)arg3;
- (void)_setupBubblePathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2 usingFromBubbles:(BOOL)arg3 usingToBubbles:(BOOL)arg4;
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (id)_savvyViewControllerForViewController:(id)arg1;
- (id)_transitionInfoForBubbleFlowRotationOfViewController:(id)arg1;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(id)arg2;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (void)_finishTransitionWithInfo:(id)arg1;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewController:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;

@end

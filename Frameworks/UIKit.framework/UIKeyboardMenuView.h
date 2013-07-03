/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputSwitcherSelectionExtraView, UIKeyboardLayoutStar, NSTimer, UIKBTree, UIInputSwitcherShadowView, UIDimmingView, UIInputSwitcherTableView;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_referenceRect;
    float m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_startAutoscroll;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    struct CGPoint { 
        float x; 
        float y; 
    } m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    UIDimmingView *m_dimmingView;
    BOOL _usesStraightLeftEdge;
    BOOL _usesDarkTheme;
    UIKBTree *_referenceKey;
    UIKeyboardLayoutStar *_layout;
}

@property int mode;
@property(readonly) BOOL usesTable;
@property BOOL usesStraightLeftEdge;
@property BOOL usesDarkTheme;
@property UIKBTree * referenceKey;
@property UIKeyboardLayoutStar * layout;

+ (id)viewThatContainsBaseKey;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVisible;
- (id)font;
- (void)setNeedsDisplay;
- (void)setLayout:(id)arg1;
- (id)layout;
- (id)table;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popupRect;
- (float)minYOfLastTableCellForSelectionExtraView;
- (BOOL)centerPopUpOverKey;
- (void)setUsesDarkTheme:(BOOL)arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(BOOL)arg2;
- (id)subtitleFont;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (int)indexForIndexPath:(id)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)_delayedFade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)referenceKey;
- (void)setReferenceKey:(id)arg1;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (void)performShowAnimation;
- (void)insertSelExtraView;
- (void)highlightRow:(int)arg1;
- (int)defaultSelectedIndex;
- (void)setupShadowViewWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUsesStraightLeftEdge:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })preferredSize;
- (BOOL)usesShadowView;
- (BOOL)usesTable;
- (id)maskForShadowViewBlurredBackground;
- (BOOL)usesDarkTheme;
- (BOOL)usesStraightLeftEdge;
- (BOOL)usesDimmingView;
- (id)dimmingView;
- (void)showAsHUD;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)selectItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (int)numberOfItems;
- (void)hide;
- (void)setRenderConfig:(id)arg1;
- (int)mode;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)show;
- (void)applicationWillSuspend:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

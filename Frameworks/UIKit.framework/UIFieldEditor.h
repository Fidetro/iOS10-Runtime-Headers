/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition, UIAutoscroll, UITextInputController, NSTimer, _UICascadingTextStorage, UITextField, UITextRange, <UITextInputTokenizer>, <UITextInputDelegate>, UIView, _UIFieldEditorContentView, NSDictionary, NSLayoutManager, NSTextContainer;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput> {
    UITextInputController *_inputController;
    UITextField *_proxiedView;
    UIAutoscroll *_autoscroll;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UICascadingTextStorage *_textStorage;
    struct { 
        unsigned int delegateRespondsToFieldEditorDidChange : 1; 
        unsigned int delegateRespondsToShouldInsertText : 1; 
        unsigned int delegateRespondsToShouldReplaceWithText : 1; 
        unsigned int suppressScrollToSelection : 1; 
        unsigned int clearOnNextEdit : 1; 
    } _feFlags;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _padding;
    _UIFieldEditorContentView *_contentView;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _unobscuredSecureRange;
    NSTimer *_obscureLastCharacterTimer;
    struct CGPoint { 
        float x; 
        float y; 
    } _textContainerOrigin;
    float _contentWidth;
    _UIFieldEditorContentView *_passcodeStyleCutoutView;
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollContentOffset;
}

@property struct CGPoint { float x1; float x2; } autoscrollContentOffset;
@property(copy) NSDictionary * typingAttributes;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property int layoutOrientation;
@property NSTextContainer * textContainer;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;

+ (id)excludedElementsForHTML;
+ (id)sharedFieldEditor;
+ (id)activeFieldEditor;
+ (void)releaseSharedInstance;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (BOOL)isEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(id)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)undoManager;
- (id)text;
- (id)font;
- (id)style;
- (id)typingAttributes;
- (void)setTextContainer:(id)arg1;
- (void)setConstrainedFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })textContainerInset;
- (id)linkTextAttributes;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (void)invalidateTextContainerOrigin;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })textContainerOrigin;
- (unsigned int)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned int*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (int)layoutOrientation;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (id)_inputController;
- (BOOL)notificationsDisabled;
- (BOOL)hasMarkedText;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)revealSelection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (id)attributedText;
- (void)updateAutoscroll:(id)arg1;
- (id)textColorForCaretSelection;
- (id)_textSelectingContainer;
- (void)selectAll;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLayoutOrientation:(int)arg1;
- (BOOL)isHorizontallyResizable;
- (struct CGSize { float x1; float x2; })minSize;
- (void)textInputDidChangeSelection:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)_hasDictationPlaceholder;
- (void)setSecureTextEntry:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_textContainerOrigin;
- (id)_textStorage;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (void)unmarkText;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (BOOL)_clearOnEditIfNeeded;
- (BOOL)hasText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_unobscuredSecureRange;
- (id)_textContainer;
- (id)_layoutManager;
- (void)clearText;
- (int)atomStyle;
- (BOOL)drawsAsAtom;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)inputDelegate;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (void)_obscureLastCharacter;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_textInputTraits;
- (void)setTypingAttributes:(id)arg1;
- (void)_cancelObscureLastCharacterTimer;
- (id)textInputView;
- (int)scrollYOffset;
- (void)cancelAutoscroll;
- (int)scrollXOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (id)textColor;
- (id)textInputTraits;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (id)interactionAssistant;
- (BOOL)_isPasscodeStyle;
- (BOOL)_shouldObscureInput;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)becomeFieldEditorForView:(id)arg1;
- (void)setNotificationsDisabled:(BOOL)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forContentView:(id)arg2;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)isFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (id)proxiedView;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;

@end

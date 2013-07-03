/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class DOMHTMLElement, MFGenericAttachmentStore, DOMHTMLDocument, <MFMailComposeViewDelegate>;

@interface MFComposeBodyField : UIWebDocumentView  {
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize { 
        float width; 
        float height; 
    } _originalSize;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    BOOL _shouldShowStandardButtons;
    unsigned int _isDirty : 1;
    unsigned int _forwardingNotification : 1;
    unsigned int _replaceAttachments : 1;
    unsigned int _isLoading : 1;
    unsigned int _needsReplaceImages : 1;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _rangeToSelect;
    MFGenericAttachmentStore *_attachmentStore;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    int _preventLayout;
    BOOL _prefersFirstLineSelection;
}

@property BOOL shouldShowStandardButtons;

+ (void)addAdditionalItemsToCalloutBar;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfElementWithID:(id)arg1;
- (id)htmlString;
- (void)htmlString:(id*)arg1 otherHtmlStringsAndAttachments:(id*)arg2 charsets:(id*)arg3 withAttachmentSource:(id)arg4;
- (id)plainTextContentWithAttachmentSource:(id)arg1;
- (id)plainTextAlternative;
- (BOOL)containsRichText;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependString:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)addDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (BOOL)isForwardingNotification;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)setReplaceAttachmentsWithFilename:(BOOL)arg1;
- (void)setAttachmentStore:(id)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned int)arg1 withAttachmentStore:(id)arg2;
- (void)setLayoutInterval:(int)arg1;
- (id)_addInlineAttachmentWithData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)restoreSelectionFromTemporaryMarkers;
- (id)temporaryEndingSelectionMarker;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)saveSelectionForUndo;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)deleteRange:(id)arg1;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)deleteNode:(id)arg1;
- (void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4;
- (void)addMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(BOOL)arg3;
- (void)setMarkupString:(id)arg1;
- (void)webViewDidDraw:(id)arg1;
- (void)replaceImagesIfNecessary;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(BOOL)arg2;
- (void)replaceImages;
- (void)didUndoOrRedo:(id)arg1;
- (void)updateQuoteLevelMenu;
- (void)layoutWithMinimumSize;
- (void)setPinHeight:(float)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
- (BOOL)shouldShowStandardButtons;
- (void)changeQuoteLevel:(int)arg1;
- (void)setShouldShowStandardButtons:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setDirty:(BOOL)arg1;
- (BOOL)isDirty;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidChange:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (float)contentWidth;
- (void)invalidate;
- (void)dealloc;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)ensureSelection;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)deferredBecomeFirstResponder;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end

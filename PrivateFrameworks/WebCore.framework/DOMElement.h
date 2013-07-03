/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMElement, NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode  {
}

@property(readonly) BOOL mf_isContainedInTable;
@property(readonly) BOOL mf_isContainedInQuoteBlock;
@property(readonly) DOMElement * mf_containingQuoteBlockElement;
@property(readonly) NSString * tagName;
@property(readonly) DOMCSSStyleDeclaration * style;
@property(readonly) int offsetLeft;
@property(readonly) int offsetTop;
@property(readonly) int offsetWidth;
@property(readonly) int offsetHeight;
@property(readonly) DOMElement * offsetParent;
@property(readonly) int clientLeft;
@property(readonly) int clientTop;
@property(readonly) int clientWidth;
@property(readonly) int clientHeight;
@property int scrollLeft;
@property int scrollTop;
@property(readonly) int scrollWidth;
@property(readonly) int scrollHeight;
@property(copy) NSString * className;
@property(readonly) DOMElement * firstElementChild;
@property(readonly) DOMElement * lastElementChild;
@property(readonly) DOMElement * previousElementSibling;
@property(readonly) DOMElement * nextElementSibling;
@property(readonly) unsigned int childElementCount;
@property(readonly) NSString * innerText;

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext { }*)arg1 value:(struct OpaqueJSValue { }*)arg2;
+ (BOOL)isRichTextStyle:(id)arg1;

- (BOOL)hasAttribute:(id)arg1;
- (BOOL)webkitMatchesSelector:(id)arg1;
- (void)scrollByPages:(int)arg1;
- (void)scrollByLines:(int)arg1;
- (void)scrollIntoViewIfNeeded:(BOOL)arg1;
- (void)scrollIntoView:(BOOL)arg1;
- (BOOL)hasAttributeNS:(id)arg1 :(id)arg2;
- (BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (id)getAttributeNodeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1 :(id)arg2;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (id)getAttributeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)removeAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)getAttributeNode:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (id)webkitRegionOverset;
- (unsigned int)childElementCount;
- (id)previousElementSibling;
- (id)lastElementChild;
- (id)classList;
- (int)clientHeight;
- (int)clientWidth;
- (int)clientTop;
- (int)clientLeft;
- (id)offsetParent;
- (int)offsetTop;
- (int)offsetLeft;
- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)getElementsByClassName:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)_getURLAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (struct __CTFont { }*)_font;
- (id)getAttribute:(id)arg1;
- (id)tagName;
- (id)style;
- (void)focus;
- (void)blur;
- (void)remove;
- (id)nextElementSibling;
- (id)firstElementChild;
- (int)structuralComplexityContribution;
- (int)offsetHeight;
- (int)offsetWidth;
- (id)getElementsByTagName:(id)arg1;
- (id)className;
- (BOOL)isFocused;
- (void)setScrollTop:(int)arg1;
- (void)setScrollLeft:(int)arg1;
- (int)scrollHeight;
- (int)scrollWidth;
- (int)scrollTop;
- (int)scrollLeft;
- (id)innerText;
- (void)setClassName:(id)arg1;
- (void)getTextWritingDirection:(int*)arg1 override:(BOOL*)arg2;
- (id)tapHighlightColor;
- (BOOL)touchCalloutEnabled;
- (BOOL)isHidden;
- (BOOL)inDocument;
- (BOOL)exceedsStructuralComplexity:(int)arg1;
- (BOOL)hasCustomLineHeight;
- (BOOL)selectable;
- (BOOL)mf_hasBackgroundColorOrImage;
- (BOOL)mf_isContainedInAnyElementInSet:(id)arg1;
- (BOOL)mf_isContainedInQuoteBlock;
- (BOOL)mf_isContainedInTable;
- (int)mf_quoteLevelDelta;
- (BOOL)isRichTextElement;
- (id)mf_computedBackgroundColor;
- (id)mf_containingQuoteBlockElement;
- (void)recursivelyRemoveMailAttributes;
- (BOOL)hasMarginsOfZero;
- (BOOL)isRichTextElementType;
- (void)mf_stripCSSStyle;

@end

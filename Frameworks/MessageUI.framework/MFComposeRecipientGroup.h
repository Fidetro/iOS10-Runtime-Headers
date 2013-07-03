/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient  {
    NSArray *_children;
    NSString *_displayString;
}


- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (void)_populateSortedChildren;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (int)recordID;
- (int)property;
- (void*)record;
- (id)label;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)displayString;
- (BOOL)isGroup;
- (id)address;
- (id)children;

@end

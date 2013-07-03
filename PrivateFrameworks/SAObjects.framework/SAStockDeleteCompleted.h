/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(copy) NSArray * stocks;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)deleteCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deleteCompleted;

- (void)setStocks:(id)arg1;
- (id)stocks;
- (id)encodedClassName;
- (void)setResults:(id)arg1;
- (id)results;
- (id)groupIdentifier;

@end

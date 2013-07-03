/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * assistantId;
@property(copy) NSString * connectionType;
@property(copy) NSString * language;
@property(copy) NSData * sessionValidationData;
@property(copy) NSString * speechId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)loadAssistant;

- (void)setSessionValidationData:(id)arg1;
- (id)sessionValidationData;
- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (void)setActivationToken:(id)arg1;
- (id)activationToken;
- (id)encodedClassName;
- (void)setConnectionType:(id)arg1;
- (id)connectionType;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)groupIdentifier;

@end

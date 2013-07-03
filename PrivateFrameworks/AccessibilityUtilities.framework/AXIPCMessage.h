/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString, NSDictionary;

@interface AXIPCMessage : NSObject <NSSecureCoding> {
    int _key;
    NSDictionary *_payload;
    unsigned int _clientPort;
    struct { 
        unsigned int val[8]; 
    } _auditToken;
}

@property int key;
@property(retain) NSDictionary * payload;
@property unsigned int clientPort;
@property struct { unsigned int x1[8]; } auditToken;
@property(readonly) NSString * senderBundleId;

+ (id)archivedMessageFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)senderBundleId;
- (id)initWithKey:(int)arg1;
- (unsigned int)clientPort;
- (void)setPayload:(id)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)payload;
- (void)dealloc;
- (id)description;
- (void)setClientPort:(unsigned int)arg1;
- (struct { unsigned int x1[8]; })auditToken;
- (void)setKey:(int)arg1;
- (int)key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

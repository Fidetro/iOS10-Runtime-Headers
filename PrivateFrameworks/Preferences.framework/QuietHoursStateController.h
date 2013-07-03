/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSDateComponents, BBSettingsGateway, NSArray;

@interface QuietHoursStateController : NSObject  {
    BOOL _valid;
    BOOL _enabled;
    unsigned int _mode;
    NSArray *_overrides;
    unsigned int _privilegeTypes;
    int _recordID;
    NSDateComponents *_fromComponents;
    NSDateComponents *_toComponents;
    BBSettingsGateway *_bbGateway;
    unsigned int _overrideType;
    BOOL _isEffectiveWhileUnlocked;
    int _overrideStatus;
}

@property BOOL valid;
@property unsigned int mode;
@property BOOL enabled;
@property(copy) NSArray * overrides;
@property BOOL isEffectiveWhileUnlocked;
@property unsigned int privilegeTypes;
@property int recordID;
@property(retain) NSDateComponents * fromComponents;
@property(retain) NSDateComponents * toComponents;
@property(readonly) BBSettingsGateway * bbGateway;
@property unsigned int overrideType;
@property int overrideStatus;

+ (void)setScheduledRangeFrom:(id)arg1 to:(id)arg2;
+ (void)setScheduledEnabled:(BOOL)arg1;
+ (void)setManualEnabled:(BOOL)arg1;
+ (BOOL)isDNDScheduled;
+ (id)sharedController;

- (void)setOverrideType:(unsigned int)arg1;
- (void)setIsEffectiveWhileUnlocked:(BOOL)arg1;
- (BOOL)isEffectiveWhileUnlocked;
- (void)synchronizeOverrides:(id)arg1 mode:(unsigned int)arg2 gateway:(id)arg3;
- (void)setAllowedGroup:(id)arg1 recordID:(int)arg2 groupName:(id)arg3;
- (int)userSelectedGroupID;
- (unsigned int)allowedGroupType;
- (void)setRepeatedCalls:(BOOL)arg1;
- (BOOL)manualModeEnabled;
- (BOOL)repeatedCalls;
- (void)synchronizeEnabledState;
- (void)resetToFallbackRange;
- (void)setRecordID:(int)arg1;
- (void)setPrivilegeTypes:(unsigned int)arg1;
- (unsigned int)privilegeTypes;
- (void)setToComponents:(id)arg1;
- (void)setFromComponents:(id)arg1;
- (id)overrides;
- (void)setOverrideStatus:(int)arg1;
- (unsigned int)overrideType;
- (int)overrideStatus;
- (id)bbGateway;
- (id)toComponents;
- (id)fromComponents;
- (void)setOverrides:(id)arg1;
- (int)recordID;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setValid:(BOOL)arg1;
- (id)init;
- (void)setMode:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)valid;
- (unsigned int)mode;

@end

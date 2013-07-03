/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSString, NSDate, NSURL;

@interface EKPersistentEvent : EKPersistentCalendarItem  {
    struct { 
        int years; 
        int months; 
        int days; 
        int hours; 
        int minutes; 
        double seconds; 
    } _cachedDurationUnits;
}

@property(readonly) NSString * eventIdentifier;
@property(copy) NSDate * endDate;
@property(readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } durationUnits;
@property(readonly) double duration;
@property(readonly) int birthdayID;
@property(copy) NSURL * URL;
@property(copy) NSString * responseComment;
@property unsigned int invitationStatus;
@property(readonly) unsigned int invitationChangedProperties;
@property int status;
@property int availability;
@property unsigned int privacyLevel;
@property(getter=isFloating,readonly) BOOL floating;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isMeeting,readonly) BOOL meeting;
@property(getter=isInvitation,readonly) BOOL invitation;
@property unsigned int modifiedProperties;
@property BOOL needsOccurrenceCacheUpdate;
@property int participationStatus;
@property(readonly) int pendingParticipationStatus;
@property(copy) NSDate * originalStartDate;
@property(copy) NSArray * actions;
@property(readonly) BOOL allowsParticipationStatusModifications;

+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (id)organizer;
- (BOOL)validate:(id*)arg1;
- (int)birthdayId;
- (BOOL)isMeeting;
- (id)committedStartDate;
- (void)setPrivacyLevel:(unsigned int)arg1;
- (unsigned int)privacyLevel;
- (void)_adjustForNewCalendar;
- (BOOL)_hasExternalIDOrDeliverySource;
- (BOOL)isInvitation;
- (BOOL)hasValidEventAction;
- (BOOL)_areDurationUnitsCached;
- (void)_invalidateCachedDurationUnits;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (id)responseComment;
- (int)availability;
- (BOOL)needsOccurrenceCacheUpdate;
- (void)setOriginalStartDate:(id)arg1;
- (id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (void)deleteFromOccurrenceDateOnward:(id)arg1;
- (id)originalStartDate;
- (void)filterExceptionDates;
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;
- (void)setParticipationStatus:(int)arg1;
- (int)pendingParticipationStatus;
- (BOOL)responseMustApplyToAll;
- (unsigned int)invitationChangedProperties;
- (int)birthdayID;
- (int)participationStatus;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setAvailability:(int)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (unsigned int)modifiedProperties;
- (BOOL)allowsParticipationStatusModifications;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })durationUnits;
- (void)setEndDate:(id)arg1;
- (id)exportToICS;
- (id)eventIdentifier;
- (BOOL)isFloating;
- (id)endDate;
- (void)setInvitationStatus:(unsigned int)arg1;
- (unsigned int)invitationStatus;
- (int)entityType;
- (BOOL)isEditable;
- (BOOL)refresh;
- (void)setActions:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (id)actions;
- (id)initCommon;
- (double)duration;
- (void)setURL:(id)arg1;

@end

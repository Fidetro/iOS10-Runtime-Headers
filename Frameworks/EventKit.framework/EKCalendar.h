/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKSource, NSString, NSArray, NSURL;

@interface EKCalendar : EKObject  {
    struct CGColor { } *_color;
    BOOL _isMain;
    unsigned long _loadFlags;
}

@property(retain) EKSource * source;
@property(readonly) NSString * calendarIdentifier;
@property(copy) NSString * title;
@property(readonly) int type;
@property(readonly) BOOL allowsContentModifications;
@property(getter=isSubscribed,readonly) BOOL subscribed;
@property(getter=isImmutable,readonly) BOOL immutable;
@property struct CGColor { }* CGColor;
@property(readonly) unsigned int supportedEventAvailabilities;
@property(readonly) unsigned int allowedEntityTypes;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property(readonly) NSURL * externalURI;
@property int displayOrder;
@property(copy) NSString * colorString;
@property(readonly) BOOL allowsEvents;
@property(readonly) BOOL allowsTasks;
@property(readonly) BOOL isDefaultCalendarForSource;
@property(readonly) BOOL isHidden;
@property(readonly) BOOL prohibitsScheduling;
@property(readonly) BOOL hasEvents;
@property(readonly) BOOL hasTasks;
@property int sharingStatus;
@property unsigned int invitationStatus;
@property(copy) NSString * sharedOwnerName;
@property(copy) NSURL * sharedOwnerAddress;
@property(readonly) NSString * sharedOwnerEmail;
@property(readonly) BOOL isSharingInvitation;
@property int sharingInvitationResponse;
@property(readonly) BOOL canBePublished;
@property(readonly) BOOL canBeShared;
@property(readonly) BOOL schedulingProhibited;
@property(readonly) NSString * publishedURL;
@property BOOL isPublished;
@property(readonly) BOOL isFacebookBirthdayCalendar;
@property(copy) NSArray * sharees;
@property(copy) NSString * selfIdentityDisplayName;
@property(copy) NSString * selfIdentityEmail;
@property(copy) NSURL * selfIdentityAddress;
@property(copy) NSString * selfIdentityFirstName;
@property(copy) NSString * selfIdentityLastName;
@property(copy) NSString * ownerIdentityDisplayName;
@property(copy) NSString * ownerIdentityEmail;
@property(copy) NSURL * ownerIdentityAddress;
@property(copy) NSString * ownerIdentityFirstName;
@property(copy) NSString * ownerIdentityLastName;
@property unsigned long loadFlags;
@property BOOL isMainCalendarForSource;

+ (id)calendarWithEventStore:(id)arg1;
+ (id)typeDescription:(int)arg1;
+ (id)calendarForEntityType:(unsigned int)arg1 eventStore:(id)arg2;

- (void)setIsPublished:(BOOL)arg1;
- (int)sharingStatus;
- (void)setSharingStatus:(int)arg1;
- (BOOL)isPublished;
- (BOOL)canBeShared;
- (BOOL)canBePublished;
- (void)setSharees:(id)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setPushKey:(id)arg1;
- (id)bulkRequests;
- (id)pushKey;
- (BOOL)validate:(id*)arg1;
- (void)setIsMainCalendarForSource:(BOOL)arg1;
- (BOOL)isMainCalendarForSource;
- (void)setLoadFlags:(unsigned long)arg1;
- (unsigned long)loadFlags;
- (void)setSubcalAccountID:(id)arg1;
- (id)subcalAccountID;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (id)ownerIdentityAddress;
- (void)setOwnerIdentityEmail:(id)arg1;
- (id)ownerIdentityEmail;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (id)ownerIdentityDisplayName;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (id)selfIdentityAddress;
- (void)setSelfIdentityEmail:(id)arg1;
- (id)selfIdentityEmail;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (id)selfIdentityDisplayName;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
- (id)sharees;
- (unsigned int)supportedEventAvailabilities;
- (BOOL)hasTasks;
- (BOOL)hasEvents;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)externalURI;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)schedulingProhibited;
- (id)publishedURL;
- (id)sharedOwnerEmail;
- (void)setSharedOwnerAddress:(id)arg1;
- (id)sharedOwnerName;
- (void)setSharedOwnerName:(id)arg1;
- (int)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(int)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (unsigned int)invitationStatus;
- (BOOL)isSharingInvitation;
- (BOOL)prohibitsScheduling;
- (BOOL)isDefaultCalendarForSource;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (void)setCGColor:(struct CGColor { }*)arg1;
- (void)setColorString:(id)arg1;
- (BOOL)isImmutable;
- (id)ownerIdentityLastName;
- (id)ownerIdentityFirstName;
- (id)selfIdentityLastName;
- (id)selfIdentityFirstName;
- (id)_shareesRelation;
- (void)_setSource:(id)arg1;
- (id)_sourceRelation;
- (id)sharedOwnerAddress;
- (BOOL)isSubscribed;
- (BOOL)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3;
- (id)colorString;
- (BOOL)allowsContentModifications;
- (unsigned int)allowedEntityTypes;
- (BOOL)commit:(id*)arg1;
- (BOOL)allowsEvents;
- (BOOL)allowsTasks;
- (int)entityType;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)source;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)reset;
- (BOOL)refresh;
- (BOOL)isHidden;
- (void)setSource:(id)arg1;
- (struct CGColor { }*)CGColor;
- (id)init;
- (id)calendarIdentifier;
- (void)dealloc;
- (id)description;
- (int)type;
- (BOOL)remove:(id*)arg1;

@end

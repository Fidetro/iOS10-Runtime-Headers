/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDuration, ICSUserAddress, ICSStructuredLocation, NSString, ICSDate, NSURL, NSArray;

@interface ICSEvent : ICSComponent  {
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property int classification;
@property(retain) ICSDate * created;
@property(retain) NSString * description;
@property(retain) ICSDate * dtend;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(readonly) BOOL isAllDay;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * exdate;
@property(retain) NSArray * exrule;
@property(retain) ICSDate * last_modified;
@property(retain) NSString * location;
@property(retain) ICSUserAddress * organizer;
@property unsigned int sequence;
@property(retain) NSArray * rdate;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rrule;
@property int status;
@property(retain) NSString * summary;
@property int transp;
@property(retain) NSString * uid;
@property(retain) NSURL * url;
@property(retain) NSString * x_apple_dropbox;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_permission;
@property int x_apple_ews_busystatus;
@property BOOL x_apple_dontschedule;
@property BOOL x_apple_ignore_on_restore;
@property BOOL x_apple_needs_reply;
@property BOOL x_wr_itipalreadysent;
@property BOOL x_wr_itipstatusattendeeml;
@property BOOL x_wr_itipstatusml;
@property BOOL x_wr_rsvpneeded;
@property(retain) NSArray * x_calendarserver_attendee_comment;
@property(retain) NSString * x_calendarserver_private_comment;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property(retain) NSArray * conferences;
@property(retain) ICSStructuredLocation * x_apple_travel_start;
@property(retain) ICSDuration * x_apple_travel_duration;
@property BOOL forcedAllDay;

+ (id)name;

- (BOOL)isDefaultAlarmDeleted;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (int)x_apple_ews_busystatus;
- (BOOL)x_wr_rsvpneeded;
- (void)setX_wr_rsvpneeded:(BOOL)arg1;
- (BOOL)x_wr_itipstatusml;
- (void)setX_wr_itipstatusml:(BOOL)arg1;
- (BOOL)x_wr_itipstatusattendeeml;
- (void)setX_wr_itipstatusattendeeml:(BOOL)arg1;
- (BOOL)x_wr_itipalreadysent;
- (void)setX_wr_itipalreadysent:(BOOL)arg1;
- (BOOL)x_apple_needs_reply;
- (BOOL)x_apple_dontschedule;
- (void)setX_apple_dontschedule:(BOOL)arg1;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (id)x_calendarserver_attendee_comment;
- (void)fixComponent;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (BOOL)validate:(id*)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_apple_needs_reply:(BOOL)arg1;
- (id)x_calendarserver_private_comment;
- (int)transp;

@end

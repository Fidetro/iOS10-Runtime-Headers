/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSDictionary;

@interface SSMetricsMutableEvent : SSMetricsEvent  {
    NSMutableDictionary *_mutableBody;
}

@property(readonly) NSDictionary * bodyDictionary;


- (id)bodyDictionary;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (id)propertyForBodyKey:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (id)initWithBodyDictionary:(id)arg1;
- (id)init;
- (id)debugDescription;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupportStubs.framework/ProactiveSupportStubs
 */

@interface _PASDeviceStateStub : NSObject <_PASDeviceStateProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (bool)isClassCLocked;
+ (bool)isConstrainedDevice;
+ (bool)isDeviceFormattedForProtection;
+ (bool)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)arg1;
+ (void)runLockStateChangeBlocks;
+ (void)setClassCLocked:(bool)arg1;
+ (void)setCurrentOsBuild:(id)arg1;
+ (void)setDeviceFormattedForProtection:(bool)arg1;
+ (void)setIsConstrainedDevice:(bool)arg1;
+ (void)setLockState:(int)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeychain : NSObject  {
}

+ (BOOL)itemExistsInKeychain:(void*)arg1;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (void*)copyItemWithPersistentID:(id)arg1;
+ (struct __CFDictionary { }*)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 outError:(id*)arg7;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id*)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6;


@end

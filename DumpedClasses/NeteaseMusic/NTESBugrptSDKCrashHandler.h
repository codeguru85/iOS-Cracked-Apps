//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSString;

@interface NTESBugrptSDKCrashHandler : NSObject <NSURLSessionDelegate>
{
}

+ (id)sharedInstance;
- (void)deleteCrashFile:(id)arg1;
- (id)getAllSDKCrash;
- (void)checkAndUpload;
- (id)getUrl;
- (id)logDirectoryPath;
- (id)logFilePath;
- (id)persistReport:(id)arg1;
- (id)getCurrentTime;
- (void)safeAddDictionary:(id)arg1 string:(id)arg2 forKey:(id)arg3;
- (id)getMachineInfo;
- (id)getData:(id)arg1 reason:(id)arg2 callstack:(id)arg3;
- (id)getSdkVersion;
- (id)getHeader;
- (void)sendReport:(id)arg1 path:(id)arg2;
- (void)genReprtAndSend:(id)arg1 reason:(id)arg2 callstack:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


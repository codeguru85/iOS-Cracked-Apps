//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NTESCrashReporter : NSObject
{
    NSString *_applicationGroupIdentifier;
    _Bool _installed;
    _Bool _enableSyslog;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setUseTestAddr:(_Bool)arg1;
- (void)triggerSignalError;
- (void)triggerNSException;
- (void)clearCaches;
- (void)stop;
- (void)setBlockMonitorStatus:(_Bool)arg1 limitCount:(int)arg2 timeout:(double)arg3 count:(long long)arg4;
- (void)setBlockMonitorStatus:(_Bool)arg1 limitCount:(int)arg2 timeout:(double)arg3;
- (void)setBlockMonitorStatus:(_Bool)arg1 limitCount:(int)arg2;
- (void)setBlockMonitorStatus:(_Bool)arg1;
- (void)enableLog:(_Bool)arg1;
- (void)reportError:(id)arg1;
- (void)uploadCaughtError:(id)arg1;
- (void)reportException:(id)arg1;
- (void)uploadCaughtException:(id)arg1;
- (void)uploadCustomizedException:(id)arg1 value:(id)arg2;
- (_Bool)expExist;
- (void)setChannel:(id)arg1;
- (void)setUserParams:(id)arg1 value:(id)arg2;
- (void)setBugrptDelegate:(id)arg1;
- (void)setUserTag:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)checkWatchExceptions;
- (void)checkExtensionExceptions;
- (_Bool)initWithAppId:(id)arg1 applicationGroupIdentifier:(id)arg2;
- (_Bool)initWithAppId:(id)arg1;
- (_Bool)iosCrashInitWithAppId:(id)arg1 customParams:(id)arg2;
- (_Bool)isDebugAttached;

@end


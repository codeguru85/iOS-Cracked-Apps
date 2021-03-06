//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSDictionary, NSString;

@protocol NXAppMonitorServiceProtocol <JSExport>
- (void)commitAppMonitor:(NSDictionary *)arg1;
- (void)appMonitorEnd:(NSString *)arg1;
- (void)appMonitorStart:(NSString *)arg1;
- (void)commitAppMonitorAlarm:(NSString *)arg1 monitorPoint:(NSString *)arg2 errorCode:(NSString *)arg3 errorMsg:(NSString *)arg4 arg:(NSString *)arg5;
- (void)commitAppMonitorSuccess:(NSString *)arg1 monitorPoint:(NSString *)arg2 arg:(NSString *)arg3;

@optional
- (void)appMonitorEnd:(NSString *)arg1 __JS_EXPORT_AS__appMonitorEnd:(id)arg2;
- (void)appMonitorStart:(NSString *)arg1 __JS_EXPORT_AS__appMonitorStart:(id)arg2;
- (void)commitAppMonitorAlarm:(NSString *)arg1 monitorPoint:(NSString *)arg2 errorCode:(NSString *)arg3 errorMsg:(NSString *)arg4 arg:(NSString *)arg5 __JS_EXPORT_AS__commitAppMonitorAlarm:(id)arg6;
- (void)commitAppMonitorSuccess:(NSString *)arg1 monitorPoint:(NSString *)arg2 arg:(NSString *)arg3 __JS_EXPORT_AS__commitAppMonitorSuccess:(id)arg4;
@end


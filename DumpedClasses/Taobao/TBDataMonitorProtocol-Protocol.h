//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBBizDownloadTask, TBDownloadResult;

@protocol TBDataMonitorProtocol <NSObject>
- (void)logException:(NSString *)arg1 info:(NSString *)arg2;
- (void)monitorTaskDestinationInvalid:(NSString *)arg1 destination:(NSString *)arg2;
- (void)monitorTask:(TBBizDownloadTask *)arg1 result:(TBDownloadResult *)arg2;
@end


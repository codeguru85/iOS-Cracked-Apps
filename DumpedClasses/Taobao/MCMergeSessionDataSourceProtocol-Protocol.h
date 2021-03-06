//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCDataSourceProtocol.h"

@class NSArray, NSDate, NSString;

@protocol MCMergeSessionDataSourceProtocol <MCDataSourceProtocol>
- (void)deletedWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (_Bool)isLogicDeletedWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (void)clearUnreadCountWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (_Bool)isMarkUnreadCountWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (id <TBIMSessionAdapter>)mergeSessionWithSessions:(NSArray *)arg1;
- (void)removeDataSourceDelegate:(id <MCMergeSessionDataSourceDelegate>)arg1;
- (void)addDataSourceDelegate:(id <MCMergeSessionDataSourceDelegate>)arg1;
@end


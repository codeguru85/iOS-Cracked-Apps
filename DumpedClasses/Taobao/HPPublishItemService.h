//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HPPublishItemService : NSObject
{
}

+ (void)publishMessageWithappInfo:(id)arg1 contentInfo:(id)arg2 optionInfo:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)requestSyncInfoWithBizId:(id)arg1 userId:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)requestPrepareRightForChaoWanWithUserId:(long long)arg1 bizId:(id)arg2 eventId:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)requestPrepareRightWithUserId:(long long)arg1 bizId:(id)arg2 channelId:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)requestSelectGoodsWithType:(long long)arg1 page:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)checkSkill:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)skillSetService:(CDUnknownBlockType)arg1;

@end


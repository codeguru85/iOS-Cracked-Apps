//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKTMultiDictionary;

@interface PowerMsg : NSObject
{
    MKTMultiDictionary *_subTopic;
}

+ (void)requestTopicStatus:(long long)arg1 withTopic:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)requestTopicUserList:(long long)arg1 withTopic:(id)arg2 withIndex:(long long)arg3 pageSize:(long long)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
+ (void)requestHisMsgList:(long long)arg1 withTopic:(id)arg2 withCount:(long long)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)requestMsgList:(long long)arg1 withTopic:(id)arg2 withTime:(long long)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)bizSuccessCallback:(id)arg1 callback:(CDUnknownBlockType)arg2 resultDict:(id)arg3;
+ (void)bizCallback:(id)arg1 callback:(CDUnknownBlockType)arg2 result:(id)arg3;
+ (void)bizCallback:(id)arg1 callback:(CDUnknownBlockType)arg2 code:(long long)arg3;
+ (id)bizSessionInvalidResult:(long long)arg1;
+ (void)sendMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)sendTextMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)count:(long long)arg1 withTopic:(id)arg2 withAck:(_Bool)arg3 withParam:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
+ (void)unSubscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
+ (void)unSubscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 bizKey:(id)arg4 bizTag:(id)arg5 context:(id)arg6 withCallback:(CDUnknownBlockType)arg7;
+ (void)unSubscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)subscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 bizKey:(id)arg4 bizTag:(id)arg5 context:(id)arg6 withCallback:(CDUnknownBlockType)arg7;
+ (void)forceSubscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
+ (void)subscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
+ (void)subscribe:(long long)arg1 withTopic:(id)arg2 from:(id)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)report:(long long)arg1 code:(long long)arg2 msg:(id)arg3;
+ (void)setMsgFetchMode:(long long)arg1 mode:(long long)arg2;
+ (void)registeBiz:(long long)arg1 bizKey:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)registeBiz:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)registeBizImpl:(Class)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) MKTMultiDictionary *subTopic; // @synthesize subTopic=_subTopic;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KQRadioLiveBLL : NSObject
{
}

+ (id)convertToSongInfoWithMessage:(id)arg1;
+ (id)convertToJsonStringWithSong:(id)arg1;
+ (void)requestStopStreamWithGroupId:(long long)arg1 andSuccessBlock:(CDUnknownBlockType)arg2 andErrorBlock:(CDUnknownBlockType)arg3;
+ (void)requestStartStreamWithGroupId:(long long)arg1 andSuccessBlock:(CDUnknownBlockType)arg2 andErrorBlock:(CDUnknownBlockType)arg3;
+ (void)requestPullStreamUrlWithGroupId:(long long)arg1 andSuccessBlock:(CDUnknownBlockType)arg2 andErrorBlock:(CDUnknownBlockType)arg3;
+ (void)requestPushStreamUrlWithGroupId:(long long)arg1 andSuccessBlock:(CDUnknownBlockType)arg2 andErrorBlock:(CDUnknownBlockType)arg3;

@end


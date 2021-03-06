//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBStoryCommentHeightManager : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)sharedInstance;
- (id)md5:(id)arg1;
- (id)md5CommentContent:(id)arg1;
- (id)md5LikeContent:(id)arg1 showType:(long long)arg2;
- (double)getHeightWithKey:(id)arg1;
- (void)saveHeight:(double)arg1 forKey:(id)arg2;
- (void)saveHeight:(double)arg1 commentInfo:(id)arg2;
- (double)getHeightWithCommentInfo:(id)arg1;
- (void)saveHeight:(double)arg1 likeInfo:(id)arg2 showType:(long long)arg3;
- (double)getHeightWithLikeInfo:(id)arg1 showType:(long long)arg2;
- (void)clearCache;
- (void)dealloc;
- (id)init;

@end


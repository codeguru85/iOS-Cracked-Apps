//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALiveTimeCommentModel : FAModel
{
    NSString *_commentId;
    NSString *_content;
    NSString *_userId;
    NSString *_nickName;
    NSString *_userLogo;
    NSString *_playTime;
}

@property(copy, nonatomic) NSString *playTime; // @synthesize playTime=_playTime;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end


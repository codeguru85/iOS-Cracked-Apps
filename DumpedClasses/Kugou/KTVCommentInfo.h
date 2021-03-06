//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSAttributedString, NSString;

@interface KTVCommentInfo : KTVObjectModel
{
    int playerId;
    int _airTime;
    int _isStar;
    int _isFx;
    int _showFxIcon;
    long long commentId;
    NSString *playerHeadimg;
    NSString *playerNick;
    NSString *content;
    long long time;
    KTVPlayerBaseInfo *_replyPlayer;
    NSAttributedString *_attributeDes;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSAttributedString *attributeDes; // @synthesize attributeDes=_attributeDes;
@property(nonatomic) int showFxIcon; // @synthesize showFxIcon=_showFxIcon;
@property(nonatomic) int isFx; // @synthesize isFx=_isFx;
@property(nonatomic) int isStar; // @synthesize isStar=_isStar;
@property(nonatomic) int airTime; // @synthesize airTime=_airTime;
@property(retain, nonatomic) KTVPlayerBaseInfo *replyPlayer; // @synthesize replyPlayer=_replyPlayer;
@property(nonatomic) long long time; // @synthesize time;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *playerNick; // @synthesize playerNick;
@property(nonatomic) int playerId; // @synthesize playerId;
@property(retain, nonatomic) NSString *playerHeadimg; // @synthesize playerHeadimg;
@property(nonatomic) long long commentId; // @synthesize commentId;
- (void).cxx_destruct;
- (int)userAuthCategory;

@end


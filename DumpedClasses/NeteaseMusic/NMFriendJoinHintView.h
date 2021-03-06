//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NMSNSUser, UIImageView, UILabel;

@interface NMFriendJoinHintView : UIButton
{
    UIImageView *_avatar;
    UILabel *_contentLabel;
    UILabel *_joinLabel;
    UILabel *_focusTipLabel;
    int _count;
    NMSNSUser *_user;
    UIImageView *_musicTatsujinIcon;
    UILabel *_musicTatsujinLabel;
    _Bool _isInMusicTatsujinMode;
}

+ (id)stringForContentLabel:(id)arg1;
@property(readonly, nonatomic) _Bool isInMusicTatsujinMode; // @synthesize isInMusicTatsujinMode=_isInMusicTatsujinMode;
- (void).cxx_destruct;
- (void)setUser:(id)arg1 count:(int)arg2 text:(id)arg3;
- (void)setUser:(id)arg1 count:(int)arg2;
- (void)setNeedNotInMusicTatsujinMode;
- (void)setupContentForMusicTatsujin;
@property(readonly, nonatomic) int count;
- (id)user;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAUserUserInfo, NSDictionary, NSString;

@protocol FALCPublicRoomChatViewDelegate <NSObject>

@optional
- (void)faLiveChatViewBoundTransform:(struct CGPoint)arg1 state:(long long)arg2;
- (void)faLiveChatViewTouchRichCellWithCmd:(long long)arg1 content:(NSDictionary *)arg2;
- (void)faLiveChatViewTouchActivityNotice:(NSString *)arg1;
- (void)faLiveChatViewShowCrazyCatchDollView:(int)arg1 withGameUrl:(NSString *)arg2;
- (long long)faLiveGetCurrentContributionRankWithUserId:(long long)arg1;
- (void)faLiveChatViewShowGiftView;
- (void)faLiveChatViewDealShare;
- (void)faLiveUserFollowStar;
- (_Bool)faLiveChatViewGetIsFollow;
- (void)faLiveChatViewSelectedUserId:(NSString *)arg1;
- (void)faLiveChatViewSelectedUserInfo:(FAUserUserInfo *)arg1;
@end


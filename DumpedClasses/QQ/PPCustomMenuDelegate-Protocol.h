//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QQPublicPlatformCustomMenu, QQPublicPlatformPopMenu;

@protocol PPCustomMenuDelegate <NSObject>

@optional
- (void)QQPPPopMenuClick:(QQPublicPlatformPopMenu *)arg1 param:(NSDictionary *)arg2;
- (void)QQPPPopBtnClick:(QQPublicPlatformPopMenu *)arg1 param:(NSDictionary *)arg2;
- (void)QQPPBarBtnClick:(QQPublicPlatformCustomMenu *)arg1 param:(NSDictionary *)arg2;
- (void)QQPPBarBtnChangeBtnClick:(QQPublicPlatformCustomMenu *)arg1;
@end


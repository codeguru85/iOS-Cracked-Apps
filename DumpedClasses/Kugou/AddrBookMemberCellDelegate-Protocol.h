//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddrBookMemberCell, KTVContactOpusInfo;

@protocol AddrBookMemberCellDelegate <NSObject>
- (void)addrBookMemberCell:(AddrBookMemberCell *)arg1 willGoToKTVListenWorkWithOpusInfo:(KTVContactOpusInfo *)arg2;
- (void)addrBookMemberCell:(AddrBookMemberCell *)arg1 onRelationButtonClickWithActionType:(long long)arg2;
@end


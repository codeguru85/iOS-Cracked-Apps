//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QZJNsQqradioProtocolCommonInfo, QZJNsQqradioProtocolLiveShowRoomInfo;

@interface QZJNsQqradioProtocolGetLiveShowRoomInfoRsp : JceObjectV2
{
}

+ (id)jceType;
+ (void)initialize;

// Remaining properties
@property(retain, nonatomic, getter=jce_commonInfo, setter=setJce_commonInfo:) QZJNsQqradioProtocolCommonInfo *jcev2_p_0_o_commonInfo; // @dynamic jcev2_p_0_o_commonInfo;
@property(retain, nonatomic, getter=jce_liveShowRoomInfo, setter=setJce_liveShowRoomInfo:) QZJNsQqradioProtocolLiveShowRoomInfo *jcev2_p_1_o_liveShowRoomInfo; // @dynamic jcev2_p_1_o_liveShowRoomInfo;
@property(nonatomic, getter=jce_nextRequestTimeInterval, setter=setJce_nextRequestTimeInterval:) int jcev2_p_2_o_nextRequestTimeInterval; // @dynamic jcev2_p_2_o_nextRequestTimeInterval;

@end


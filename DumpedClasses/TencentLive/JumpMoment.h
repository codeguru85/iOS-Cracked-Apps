//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface JumpMoment : JceObjectV2
{
    NSString *jcev2_p_0_o_publish_id;
    NSString *jcev2_p_1_o_msg_id;
    NSString *jcev2_p_2_o_comment_id;
    NSString *jcev2_p_3_o_dataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_3_o_dataKey; // @synthesize jcev2_p_3_o_dataKey;
@property(retain, nonatomic, getter=jce_comment_id, setter=setJce_comment_id:) NSString *jcev2_p_2_o_comment_id; // @synthesize jcev2_p_2_o_comment_id;
@property(retain, nonatomic, getter=jce_msg_id, setter=setJce_msg_id:) NSString *jcev2_p_1_o_msg_id; // @synthesize jcev2_p_1_o_msg_id;
@property(retain, nonatomic, getter=jce_publish_id, setter=setJce_publish_id:) NSString *jcev2_p_0_o_publish_id; // @synthesize jcev2_p_0_o_publish_id;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


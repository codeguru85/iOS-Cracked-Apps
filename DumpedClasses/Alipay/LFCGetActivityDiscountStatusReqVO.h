//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFCBaseReqVO.h"

@class NSString;

@interface LFCGetActivityDiscountStatusReqVO : LFCBaseReqVO
{
    NSString *_activityId;
    NSString *_discountId;
}

@property(retain, nonatomic) NSString *discountId; // @synthesize discountId=_discountId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end


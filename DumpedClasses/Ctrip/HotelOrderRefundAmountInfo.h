//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelTinyPriceModel, NSString;

@interface HotelOrderRefundAmountInfo : CTBusinessBean
{
    NSString *_refundContent;
    HotelTinyPriceModel *_refundPrice;
    NSString *_separator;
}

@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) HotelTinyPriceModel *refundPrice; // @synthesize refundPrice=_refundPrice;
@property(copy, nonatomic) NSString *refundContent; // @synthesize refundContent=_refundContent;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TrainGrabTicketSpeedUpDetailResponse : CTBusinessBean
{
    NSString *message;
    int retCode;
    _Bool isFastPay;
    long long passageCount;
    NSMutableArray *trainChangeGrabAppendProductList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *trainChangeGrabAppendProductList; // @synthesize trainChangeGrabAppendProductList;
@property(nonatomic) long long passageCount; // @synthesize passageCount;
@property(nonatomic) _Bool isFastPay; // @synthesize isFastPay;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(copy, nonatomic) NSString *message; // @synthesize message;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

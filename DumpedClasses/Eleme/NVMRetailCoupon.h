//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMRetailCoupon : NVMModel
{
    unsigned long long _status;
    NSString *_name;
    NSString *_couponDescription;
    NSString *_maxAmount;
    NSString *_minAmount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *minAmount; // @synthesize minAmount=_minAmount;
@property(copy, nonatomic) NSString *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(copy, nonatomic) NSString *couponDescription; // @synthesize couponDescription=_couponDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class ONEConfigBizModel;

@interface TaxiDiscoveryService : TaxiBaseModel
{
    ONEConfigBizModel *_discoverEnterance;
}

+ (id)getBussinessUrlWithUrl:(id)arg1 orderData:(id)arg2;
+ (id)getParamsStringWithOrderData:(id)arg1;
@property(retain, nonatomic) ONEConfigBizModel *discoverEnterance; // @synthesize discoverEnterance=_discoverEnterance;
- (void).cxx_destruct;

@end


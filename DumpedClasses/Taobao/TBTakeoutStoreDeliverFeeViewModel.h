//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSString, TBTakeoutStoreDeliverFeeModel;

@interface TBTakeoutStoreDeliverFeeViewModel : TBTakeoutNewViewModel
{
    NSArray *_priceViewModels;
    TBTakeoutStoreDeliverFeeModel *_model;
}

@property(retain, nonatomic) TBTakeoutStoreDeliverFeeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSArray *priceViewModels; // @synthesize priceViewModels=_priceViewModels;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *feeRange;
- (void)parseResult:(id)arg1;

@end


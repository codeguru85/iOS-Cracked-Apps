//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSArray, NSString, UIColor;

@interface FFTradeSendTimeModel : TBTradeComponentModel
{
    _Bool _mutiOrder;
    NSArray *_availableDates;
    NSString *_lmtDesc;
    NSString *_lmtCode;
    long long _sortNum;
    UIColor *_tipsColor;
}

@property(nonatomic) _Bool mutiOrder; // @synthesize mutiOrder=_mutiOrder;
@property(retain, nonatomic) UIColor *tipsColor; // @synthesize tipsColor=_tipsColor;
@property(nonatomic) long long sortNum; // @synthesize sortNum=_sortNum;
@property(copy, nonatomic) NSString *lmtCode; // @synthesize lmtCode=_lmtCode;
@property(copy, nonatomic) NSString *lmtDesc; // @synthesize lmtDesc=_lmtDesc;
@property(readonly, nonatomic) NSArray *availableDates; // @synthesize availableDates=_availableDates;
- (void).cxx_destruct;
- (void)_setupAvailableDates;
@property(readonly, nonatomic) NSString *postFee;
@property(readonly, nonatomic) NSArray *selectIndex;
@property(copy, nonatomic) NSString *selectId;
@property(readonly, nonatomic) NSString *selectedSendTime;
- (id)validate;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, TBTradeBuyEngine;

@interface TBTradeOrderInstallmentPicker : NSObject
{
    NSMutableArray *_options;
    TBTradeBuyEngine *_engine;
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) __weak TBTradeBuyEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)loadOptionArray:(id)arg1;
- (id)optionBySelectedNum:(id)arg1;
- (void)setSelectedNum:(id)arg1;
- (id)selectedNum;
- (id)currencySymbol;
- (double)orderPrice;
- (id)shopName;
- (id)shopIcon;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end


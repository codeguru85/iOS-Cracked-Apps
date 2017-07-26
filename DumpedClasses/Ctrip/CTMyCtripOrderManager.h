//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTMyCtripGetOrdersTipResponse, CTMyCtripOrderTipModel, CTMyCtripServiceManager, NSArray, NSTimer;

@interface CTMyCtripOrderManager : NSObject
{
    _Bool _showToPayRedDot;
    _Bool _showToCommentRedDot;
    _Bool _showToGoOrderRedDot;
    NSArray *_tipOrders;
    CTMyCtripOrderTipModel *_tipOrderModel_A;
    NSArray *_tipOrdersNew;
    CTMyCtripServiceManager *_sender;
    CDUnknownBlockType _afterGetOrderData;
    CDUnknownBlockType _afterGetOrderReminder;
    NSTimer *_orderReminderTimer;
    CTMyCtripGetOrdersTipResponse *_preResponse;
}

@property(retain, nonatomic) CTMyCtripGetOrdersTipResponse *preResponse; // @synthesize preResponse=_preResponse;
@property(retain, nonatomic) NSTimer *orderReminderTimer; // @synthesize orderReminderTimer=_orderReminderTimer;
@property(copy, nonatomic) CDUnknownBlockType afterGetOrderReminder; // @synthesize afterGetOrderReminder=_afterGetOrderReminder;
@property(copy, nonatomic) CDUnknownBlockType afterGetOrderData; // @synthesize afterGetOrderData=_afterGetOrderData;
@property(retain, nonatomic) CTMyCtripServiceManager *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool showToGoOrderRedDot; // @synthesize showToGoOrderRedDot=_showToGoOrderRedDot;
@property(nonatomic) _Bool showToCommentRedDot; // @synthesize showToCommentRedDot=_showToCommentRedDot;
@property(nonatomic) _Bool showToPayRedDot; // @synthesize showToPayRedDot=_showToPayRedDot;
@property(retain, nonatomic) NSArray *tipOrdersNew; // @synthesize tipOrdersNew=_tipOrdersNew;
@property(retain, nonatomic) CTMyCtripOrderTipModel *tipOrderModel_A; // @synthesize tipOrderModel_A=_tipOrderModel_A;
@property(retain, nonatomic) NSArray *tipOrders; // @synthesize tipOrders=_tipOrders;
- (void).cxx_destruct;
- (void)pauseRefreshOrderReminder;
- (void)clearData;
- (void)refreshOrderRedDot;
- (void)refreshOrderReminder;
- (void)refreshData;
- (void)clearToGoRedDot;
- (void)clearToCommentRedDot;
- (void)clearToPayRedDot;
- (id)initWithDoBlock:(CDUnknownBlockType)arg1 doBlock:(CDUnknownBlockType)arg2;

@end

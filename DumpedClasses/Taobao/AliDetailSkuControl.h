//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliDetailSkuInnerProtocol.h"
#import "AliDetailSkuProtocol.h"
#import "AliTradeSKUViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AliDetailActionSheetController, AliDetailDataEngine, AliDetailModel, AliDetailServiceContext, AliTradeSKUView, NSString, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer, UIView, UIViewController;

@interface AliDetailSkuControl : NSObject <AliTradeSKUViewDelegate, UIGestureRecognizerDelegate, AliDetailSkuProtocol, AliDetailSkuInnerProtocol>
{
    _Bool _isDetailCalled;
    CDUnknownBlockType UPDATEBLOCK;
    _Bool willShowTopCartAnimation;
    CDUnknownBlockType TradeCallBack;
    CDUnknownBlockType CARTBLOCK;
    CDUnknownBlockType COMBITEMBLOCK;
    CDUnknownBlockType buyBlock;
    UIActivityIndicatorView *_loading;
    _Bool _isCombinationItemCall;
    _Bool _needReleaseJS;
    AliDetailModel *_detailModel;
    AliDetailDataEngine *_dataEngine;
    AliTradeSKUView *_skuView;
    unsigned long long _sourceType;
    NSString *_areaId;
    UIViewController *_contentViewController;
    CDUnknownBlockType _quitBlock;
    AliDetailServiceContext *_detailContext;
    NSString *_itemId;
    NSString *_selectSkuId;
    UIView *_maskView;
    UITapGestureRecognizer *_defaultTapGesture;
    NSTimer *_timer;
    unsigned long long _requestSeconds;
    AliDetailActionSheetController *_sheetController;
}

@property(retain, nonatomic) AliDetailActionSheetController *sheetController; // @synthesize sheetController=_sheetController;
@property(nonatomic) _Bool needReleaseJS; // @synthesize needReleaseJS=_needReleaseJS;
@property(nonatomic) unsigned long long requestSeconds; // @synthesize requestSeconds=_requestSeconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UITapGestureRecognizer *defaultTapGesture; // @synthesize defaultTapGesture=_defaultTapGesture;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSString *selectSkuId; // @synthesize selectSkuId=_selectSkuId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailServiceContext *detailContext; // @synthesize detailContext=_detailContext;
@property(nonatomic) _Bool isCombinationItemCall; // @synthesize isCombinationItemCall=_isCombinationItemCall;
@property(copy, nonatomic) CDUnknownBlockType quitBlock; // @synthesize quitBlock=_quitBlock;
@property(nonatomic) __weak UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) AliTradeSKUView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) AliDetailDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)dismissSkuViewHandleBlock:(CDUnknownBlockType)arg1;
- (void)showSkuViewWhenSuccess;
- (void)setSkuComponentValue:(id)arg1 components:(id)arg2;
- (_Bool)isSKUSelected;
- (void)buyNow;
- (void)addCart;
- (void)tradeSkuAddCartButtonClicked:(id)arg1;
- (void)tradeSkuBuyButtonClicked:(id)arg1;
- (void)tradeSkuDidFinishChooseSku:(id)arg1 selectedSkuId:(id)arg2;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)skuComplete;
- (void)isSkuClosed:(id)arg1;
- (void)areaChanged:(id)arg1;
- (id)viewForAnimationInSkuView:(id)arg1;
- (void)addCartFailed:(id)arg1;
- (void)registCartEngine;
- (void)cleanLoading;
- (void)postLoading;
- (void)dismissWithCallBack;
- (void)dismissSkuView:(_Bool)arg1;
- (void)dismissSkuView;
- (void)presentSKUView;
- (void)loadDetailExistDetailData:(unsigned long long)arg1;
- (void)loadDetailSuccesWithSourceType:(unsigned long long)arg1 originSku:(id)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)timerLoop;
- (void)overTimeOrError;
- (void)presentSKUViewWithItemId:(id)arg1 data:(id)arg2 sourceType:(unsigned long long)arg3 areaId:(id)arg4 selectedSKU:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)presentCombinationItemsSKUViewWithItemId:(id)arg1 data:(id)arg2 areaId:(id)arg3 selectedSKU:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)presentSKUViewWithItemId:(id)arg1 containerVC:(id)arg2 data:(id)arg3 sourceType:(unsigned long long)arg4 areaId:(id)arg5 updateCallBack:(CDUnknownBlockType)arg6;
- (void)presentSKUViewWithItemId:(id)arg1 areaId:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)changeSKUWithItemId:(id)arg1 areaId:(id)arg2 selectedSKU:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)presentSKUViewWithItemId:(id)arg1 containerVC:(id)arg2 needShowTopCartAnimation:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)presentSKUWithItemId:(id)arg1 containerVC:(id)arg2 selectedSKU:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)presentSKUViewWithItemId:(id)arg1 containerVC:(id)arg2 sourceType:(unsigned long long)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)ensureLoginedWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)cartIsOnTop:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)loading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTradeLinkageProtocol.h"

@class NSString, TBSDKMTOPServer, TBTradeBuyEngine, TBVRBuyModel;

@interface TBVRBuyService : NSObject <TBTradeLinkageProtocol>
{
    CDUnknownBlockType _startRequestBlock;
    CDUnknownBlockType _buildOrderSuccessBlock;
    CDUnknownBlockType _buildOrderFailureBlock;
    CDUnknownBlockType _adjustOrderSuccessBlock;
    CDUnknownBlockType _adjustOrderFailureBlock;
    CDUnknownBlockType _createOrderSuccessBlock;
    CDUnknownBlockType _createOrderFailureBlock;
    TBTradeBuyEngine *_buyEngine;
    TBVRBuyModel *_model;
    TBSDKMTOPServer *_server;
    NSString *_params;
}

@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) TBVRBuyModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBTradeBuyEngine *buyEngine; // @synthesize buyEngine=_buyEngine;
@property(copy, nonatomic) CDUnknownBlockType createOrderFailureBlock; // @synthesize createOrderFailureBlock=_createOrderFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType createOrderSuccessBlock; // @synthesize createOrderSuccessBlock=_createOrderSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType adjustOrderFailureBlock; // @synthesize adjustOrderFailureBlock=_adjustOrderFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType adjustOrderSuccessBlock; // @synthesize adjustOrderSuccessBlock=_adjustOrderSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType buildOrderFailureBlock; // @synthesize buildOrderFailureBlock=_buildOrderFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType buildOrderSuccessBlock; // @synthesize buildOrderSuccessBlock=_buildOrderSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType startRequestBlock; // @synthesize startRequestBlock=_startRequestBlock;
- (void).cxx_destruct;
- (void)startCreateOrder;
- (void)startBuildOrderWithParams:(id)arg1;
- (void)queryAdjustOrderDataWithModel:(id)arg1;
- (void)respondsToLinkage:(id)arg1 withAction:(unsigned long long)arg2;
- (id)init;
- (void)createOrderFailure:(id)arg1;
- (void)createOrderSuccess:(id)arg1;
- (void)adjustBuildOrderFailure:(id)arg1;
- (void)adjustBuildOrderSuccess:(id)arg1;
- (void)buildOrderFailure:(id)arg1;
- (void)buildOrderSuccess:(id)arg1;
- (id)mutableObjectFromJSONString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

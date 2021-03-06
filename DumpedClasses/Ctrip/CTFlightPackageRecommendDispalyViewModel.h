//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CTFlightPackageRecommendDispalyViewModel : CTViewModel
{
    NSMutableDictionary *traceDictionary;
    long long infoCount;
    long long switchOperateCount;
    _Bool isSelectXproduct;
    _Bool _packageSwitchOpen;
    _Bool _packageDefaultSwithOpen;
    _Bool _isForce;
    _Bool _hasOptimalXCoupon;
    NSString *_packageIconUrl;
    NSString *_packageName;
    NSString *_packagePriceTitle;
    NSString *_packagePriceContent;
    NSString *_packageRecommendTipInfo;
    NSString *_packageProductDesc;
    NSString *_packageThreeChooseOneTips;
    NSString *_packageAbandonThreeChooseOneTips;
    NSMutableArray *_subPackageList;
    NSString *_xCouponURL;
    long long _packageFlagMap;
    NSString *_freeRestRoomUrl;
}

@property(copy, nonatomic) NSString *freeRestRoomUrl; // @synthesize freeRestRoomUrl=_freeRestRoomUrl;
@property(nonatomic) long long packageFlagMap; // @synthesize packageFlagMap=_packageFlagMap;
@property(copy, nonatomic) NSString *xCouponURL; // @synthesize xCouponURL=_xCouponURL;
@property(nonatomic) _Bool hasOptimalXCoupon; // @synthesize hasOptimalXCoupon=_hasOptimalXCoupon;
@property(retain, nonatomic) NSMutableArray *subPackageList; // @synthesize subPackageList=_subPackageList;
@property(copy, nonatomic) NSString *packageAbandonThreeChooseOneTips; // @synthesize packageAbandonThreeChooseOneTips=_packageAbandonThreeChooseOneTips;
@property(copy, nonatomic) NSString *packageThreeChooseOneTips; // @synthesize packageThreeChooseOneTips=_packageThreeChooseOneTips;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(nonatomic) _Bool packageDefaultSwithOpen; // @synthesize packageDefaultSwithOpen=_packageDefaultSwithOpen;
@property(nonatomic) _Bool packageSwitchOpen; // @synthesize packageSwitchOpen=_packageSwitchOpen;
@property(copy, nonatomic) NSString *packageProductDesc; // @synthesize packageProductDesc=_packageProductDesc;
@property(copy, nonatomic) NSString *packageRecommendTipInfo; // @synthesize packageRecommendTipInfo=_packageRecommendTipInfo;
@property(copy, nonatomic) NSString *packagePriceContent; // @synthesize packagePriceContent=_packagePriceContent;
@property(copy, nonatomic) NSString *packagePriceTitle; // @synthesize packagePriceTitle=_packagePriceTitle;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *packageIconUrl; // @synthesize packageIconUrl=_packageIconUrl;
- (void).cxx_destruct;
- (id)logHybridOperations:(id)arg1;
- (void)logFinishSelectStatus:(_Bool)arg1;
- (void)logSwitchOperationCount;
- (void)logInfoCount;
- (void)updateXProductWithCouponInfo:(id)arg1;
- (id)init;

@end


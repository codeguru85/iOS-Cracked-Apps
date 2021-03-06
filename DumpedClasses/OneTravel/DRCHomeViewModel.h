//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArray<DRCBannerData><Optional>, NSArray<DRCOrderDetailModel><Optional>;

@interface DRCHomeViewModel : NSObject
{
    _Bool _needFetchRecommend;
    NSArray<DRCOrderDetailModel><Optional> *_orderData;
    NSArray<DRCBannerData><Optional> *_bannerData;
    NSArray *_functionItemModels;
    NSArray *_subTabItems;
    unsigned long long _homeType;
}

@property(nonatomic) _Bool needFetchRecommend; // @synthesize needFetchRecommend=_needFetchRecommend;
@property(nonatomic) unsigned long long homeType; // @synthesize homeType=_homeType;
@property(retain, nonatomic) NSArray *subTabItems; // @synthesize subTabItems=_subTabItems;
@property(retain, nonatomic) NSArray *functionItemModels; // @synthesize functionItemModels=_functionItemModels;
@property(retain, nonatomic) NSArray<DRCBannerData><Optional> *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) NSArray<DRCOrderDetailModel><Optional> *orderData; // @synthesize orderData=_orderData;
- (void).cxx_destruct;
- (void)pushCommentViewController:(unsigned long long)arg1;
- (void)requestCoupon;
- (void)fetchFunctionItems;
- (void)fetchRecommendInfo;
- (void)fetchSubTabs;
- (void)getUnevaluationOrder;
- (void)fetchConstants;
- (void)getADsInfo;
- (_Bool)checkOrdersShowing:(id)arg1;
- (void)getTodoOrdersInfo:(id)arg1;
- (void)requestDataWhenLogin;
- (void)requestDataWhenEnterForeground;
- (void)requestDataWhenEveryTime;
- (void)requestDataWhenPOIFirstUpdate;
- (void)requestDataWhenOnPositonChanged;
- (void)requestDataWhenCityIdChanged;
- (void)requestDataWhenSwitchBussiness;
- (void)requestDataWhenFirstEnter;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHotelRequestUtil, CTHotelTonightSpecialModel, HotelUserCouponEquityResponse;

@interface CTHotelUserCouponManager : NSObject
{
    int _type;
    HotelUserCouponEquityResponse *_response;
    CTHotelRequestUtil *_requestUtil;
    CTHotelTonightSpecialModel *_specialModel;
}

+ (_Bool)shouldDisplayCouponModule;
+ (id)sharedInstance;
@property(retain, nonatomic) CTHotelTonightSpecialModel *specialModel; // @synthesize specialModel=_specialModel;
@property(retain, nonatomic) CTHotelRequestUtil *requestUtil; // @synthesize requestUtil=_requestUtil;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) HotelUserCouponEquityResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)applyPersonaliseCoupon:(id)arg1 cityID:(id)arg2 hotelID:(id)arg3 abVersion:(int)arg4 pageCode:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (void)applyPersonaliseCoupon:(id)arg1 cityModel:(id)arg2 abVersion:(int)arg3 pageCode:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)applyPersonaliseCoupon:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)startRequestWithAction:(int)arg1 withCompletion:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)applyCouponWithCompletion:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)checkStatusWithCompletion:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)setWolvesRequestType:(_Bool)arg1;
- (id)init;

@end


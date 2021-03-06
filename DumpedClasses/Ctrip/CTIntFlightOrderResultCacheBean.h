//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTFlightOrderPaymentInfoViewModel, CTFlightOrderResultInfoViewModel, FlightCityModel, FlightOtherBusinessInformationModel, FlightToH5ParamModel, NSArray, NSMutableArray, NSString;

@interface CTIntFlightOrderResultCacheBean : CTCacheBean
{
    _Bool _hasNoMoreADs;
    _Bool _enableFioH5;
    int _tripType;
    int _urlType;
    int _presentFlag;
    NSMutableArray *_flightJourneyList;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    FlightCityModel *_chechInCityModel;
    FlightToH5ParamModel *_flightToH5ParamModel;
    CTFlightOrderResultInfoViewModel *_flightOrderResultInfoModel;
    CTFlightOrderPaymentInfoViewModel *_flightOrderPaymentInfoModel;
    NSString *_myTravelUrl;
    NSMutableArray *_fioExtensions;
    NSMutableArray *_fioPolicyList;
    NSArray *_passengerList;
    long long _adultsCount;
    long long _childrenCount;
    long long _babyCount;
    long long _passengerPolicyType;
    NSString *_traceId;
    NSMutableArray *_carTitleContentList;
    NSMutableArray *_carDescriptionContentList;
    NSString *_carButtonText;
    NSString *_linkedUrl;
    NSMutableArray *_orderNoteList;
    NSArray *_notices;
    NSString *_ticketTimeInfo;
    NSString *_fioData;
    NSString *_hotelCouponParam;
    FlightOtherBusinessInformationModel *_hotelBusinessModel;
}

@property(retain, nonatomic) FlightOtherBusinessInformationModel *hotelBusinessModel; // @synthesize hotelBusinessModel=_hotelBusinessModel;
@property(copy, nonatomic) NSString *hotelCouponParam; // @synthesize hotelCouponParam=_hotelCouponParam;
@property(nonatomic) int presentFlag; // @synthesize presentFlag=_presentFlag;
@property(retain, nonatomic) NSString *fioData; // @synthesize fioData=_fioData;
@property(copy, nonatomic) NSString *ticketTimeInfo; // @synthesize ticketTimeInfo=_ticketTimeInfo;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(nonatomic) _Bool enableFioH5; // @synthesize enableFioH5=_enableFioH5;
@property(retain, nonatomic) NSMutableArray *orderNoteList; // @synthesize orderNoteList=_orderNoteList;
@property(nonatomic) int urlType; // @synthesize urlType=_urlType;
@property(copy, nonatomic) NSString *linkedUrl; // @synthesize linkedUrl=_linkedUrl;
@property(retain, nonatomic) NSString *carButtonText; // @synthesize carButtonText=_carButtonText;
@property(retain, nonatomic) NSMutableArray *carDescriptionContentList; // @synthesize carDescriptionContentList=_carDescriptionContentList;
@property(retain, nonatomic) NSMutableArray *carTitleContentList; // @synthesize carTitleContentList=_carTitleContentList;
@property(nonatomic) _Bool hasNoMoreADs; // @synthesize hasNoMoreADs=_hasNoMoreADs;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) long long passengerPolicyType; // @synthesize passengerPolicyType=_passengerPolicyType;
@property(nonatomic) long long babyCount; // @synthesize babyCount=_babyCount;
@property(nonatomic) long long childrenCount; // @synthesize childrenCount=_childrenCount;
@property(nonatomic) long long adultsCount; // @synthesize adultsCount=_adultsCount;
@property(retain, nonatomic) NSArray *passengerList; // @synthesize passengerList=_passengerList;
@property(retain, nonatomic) NSMutableArray *fioPolicyList; // @synthesize fioPolicyList=_fioPolicyList;
@property(retain, nonatomic) NSMutableArray *fioExtensions; // @synthesize fioExtensions=_fioExtensions;
@property(copy, nonatomic) NSString *myTravelUrl; // @synthesize myTravelUrl=_myTravelUrl;
@property(retain, nonatomic) CTFlightOrderPaymentInfoViewModel *flightOrderPaymentInfoModel; // @synthesize flightOrderPaymentInfoModel=_flightOrderPaymentInfoModel;
@property(retain, nonatomic) CTFlightOrderResultInfoViewModel *flightOrderResultInfoModel; // @synthesize flightOrderResultInfoModel=_flightOrderResultInfoModel;
@property(retain, nonatomic) FlightToH5ParamModel *flightToH5ParamModel; // @synthesize flightToH5ParamModel=_flightToH5ParamModel;
@property(retain, nonatomic) FlightCityModel *chechInCityModel; // @synthesize chechInCityModel=_chechInCityModel;
@property(retain, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(retain, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(retain, nonatomic) NSMutableArray *flightJourneyList; // @synthesize flightJourneyList=_flightJourneyList;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
- (void).cxx_destruct;
- (void)initCache;

@end


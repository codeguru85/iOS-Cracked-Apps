//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTFlightFilterModel, CTFlightFilterWidgetDataModel, CTFlightInlandListItemViewModel, CTFlightListDataViewModel, FlightCityModel, FlightInlandPolicyMutilsectionV3InformationModel, FlightListSearchV3Request, NSArray, NSDictionary, NSMutableArray, NSString;

@interface CTFlightListBaseCacheBean : CTCacheBean
{
    _Bool _isFollowed;
    _Bool _isFromVoice;
    _Bool _isNotSplitUserHighFlight;
    _Bool _isApply;
    _Bool _isXHanTeHui;
    _Bool _isNeedRecommendSort;
    _Bool _isSingleRecommendRound;
    _Bool _hasShowChildrenBabyAlert;
    _Bool _isListCombineStype;
    _Bool _isNeedRoundSort;
    _Bool _isFlightNewRoundClassChangeTempListSuccess;
    _Bool _isNotNeedSendOtherClassService;
    _Bool _isShowAirTrainRecommendFlight;
    _Bool _isShowTransferSelectCell;
    _Bool _isSelectTransferFlight;
    int _tripType;
    int _flightTotal;
    int _flightSortType;
    int _sort;
    int _originSort;
    int _isFullOfStoreHouse;
    int _nearbyFlag;
    FlightListSearchV3Request *_lastRequest;
    FlightCityModel *_departCity;
    FlightCityModel *_arriveCity;
    NSString *_departDate;
    NSString *_returnDate;
    CTFlightFilterModel *_flightFilterModel;
    CTFlightFilterWidgetDataModel *_flightFilterWidgetDataModel;
    FlightCityModel *_locallCity;
    NSArray *_arrayFlightList;
    CTFlightInlandListItemViewModel *_selectListItemModel;
    FlightInlandPolicyMutilsectionV3InformationModel *_selectPolicyModel;
    NSArray *_lowestPriceList;
    NSString *_attentionDiscountPrice;
    NSString *_attentionDiscountRate;
    NSString *_textFromVoice;
    NSString *_voiceInfo;
    NSArray *_tagStyleList;
    NSString *_messageToken;
    NSString *_departNearbyCityCode;
    NSString *_arriveNearbyCityCode;
    long long _listCellIndex;
    NSDictionary *_listTraceDictionary;
    NSString *_listPrice;
    NSString *_resultMessage;
    NSString *_xHangTeHuiTopInfo;
    NSString *_transactionNo;
    NSMutableArray *_flightSingleRecommendRoundTripList;
    NSString *_flightSingleRecommendMesg;
    NSString *_flightSingeleRecommendRoundExtendStr;
    NSArray *_notices;
    NSString *_filterFlightNo;
    NSString *_filterReturnFlightNo;
    long long _childrenBabyType;
    NSString *_roundTripText;
    NSString *_childBabyText;
    long long _resultStatus;
    NSString *_trainHybrindContent;
    NSString *_travelOptionTip;
    NSString *_flightBusLink;
    NSArray *_flightNewRoundClassChangeTempList;
    CTFlightFilterWidgetDataModel *_tempflightFilterWidgetDataModel;
    NSString *_lijianCouponInfo;
    NSString *_userHighText;
    NSString *_airTrainText;
    NSString *_airTrainStrUrl;
    CTFlightListDataViewModel *_listDataViewModel;
    NSMutableArray *_transferCitySelectModelArray;
    long long _selectTransferCityIndex;
}

@property(nonatomic) _Bool isSelectTransferFlight; // @synthesize isSelectTransferFlight=_isSelectTransferFlight;
@property(nonatomic) _Bool isShowTransferSelectCell; // @synthesize isShowTransferSelectCell=_isShowTransferSelectCell;
@property(nonatomic) long long selectTransferCityIndex; // @synthesize selectTransferCityIndex=_selectTransferCityIndex;
@property(retain, nonatomic) NSMutableArray *transferCitySelectModelArray; // @synthesize transferCitySelectModelArray=_transferCitySelectModelArray;
@property(retain, nonatomic) CTFlightListDataViewModel *listDataViewModel; // @synthesize listDataViewModel=_listDataViewModel;
@property(nonatomic) _Bool isShowAirTrainRecommendFlight; // @synthesize isShowAirTrainRecommendFlight=_isShowAirTrainRecommendFlight;
@property(copy, nonatomic) NSString *airTrainStrUrl; // @synthesize airTrainStrUrl=_airTrainStrUrl;
@property(copy, nonatomic) NSString *airTrainText; // @synthesize airTrainText=_airTrainText;
@property(copy, nonatomic) NSString *userHighText; // @synthesize userHighText=_userHighText;
@property(copy, nonatomic) NSString *lijianCouponInfo; // @synthesize lijianCouponInfo=_lijianCouponInfo;
@property(nonatomic) _Bool isNotNeedSendOtherClassService; // @synthesize isNotNeedSendOtherClassService=_isNotNeedSendOtherClassService;
@property(retain, nonatomic) CTFlightFilterWidgetDataModel *tempflightFilterWidgetDataModel; // @synthesize tempflightFilterWidgetDataModel=_tempflightFilterWidgetDataModel;
@property(nonatomic) _Bool isFlightNewRoundClassChangeTempListSuccess; // @synthesize isFlightNewRoundClassChangeTempListSuccess=_isFlightNewRoundClassChangeTempListSuccess;
@property(retain, nonatomic) NSArray *flightNewRoundClassChangeTempList; // @synthesize flightNewRoundClassChangeTempList=_flightNewRoundClassChangeTempList;
@property(copy, nonatomic) NSString *flightBusLink; // @synthesize flightBusLink=_flightBusLink;
@property(copy, nonatomic) NSString *travelOptionTip; // @synthesize travelOptionTip=_travelOptionTip;
@property(copy, nonatomic) NSString *trainHybrindContent; // @synthesize trainHybrindContent=_trainHybrindContent;
@property(nonatomic) _Bool isNeedRoundSort; // @synthesize isNeedRoundSort=_isNeedRoundSort;
@property(nonatomic) _Bool isListCombineStype; // @synthesize isListCombineStype=_isListCombineStype;
@property(nonatomic) long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) NSString *childBabyText; // @synthesize childBabyText=_childBabyText;
@property(copy, nonatomic) NSString *roundTripText; // @synthesize roundTripText=_roundTripText;
@property(nonatomic) _Bool hasShowChildrenBabyAlert; // @synthesize hasShowChildrenBabyAlert=_hasShowChildrenBabyAlert;
@property(nonatomic) long long childrenBabyType; // @synthesize childrenBabyType=_childrenBabyType;
@property(copy, nonatomic) NSString *filterReturnFlightNo; // @synthesize filterReturnFlightNo=_filterReturnFlightNo;
@property(copy, nonatomic) NSString *filterFlightNo; // @synthesize filterFlightNo=_filterFlightNo;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(copy, nonatomic) NSString *flightSingeleRecommendRoundExtendStr; // @synthesize flightSingeleRecommendRoundExtendStr=_flightSingeleRecommendRoundExtendStr;
@property(nonatomic) _Bool isSingleRecommendRound; // @synthesize isSingleRecommendRound=_isSingleRecommendRound;
@property(copy, nonatomic) NSString *flightSingleRecommendMesg; // @synthesize flightSingleRecommendMesg=_flightSingleRecommendMesg;
@property(retain, nonatomic) NSMutableArray *flightSingleRecommendRoundTripList; // @synthesize flightSingleRecommendRoundTripList=_flightSingleRecommendRoundTripList;
@property(nonatomic) _Bool isNeedRecommendSort; // @synthesize isNeedRecommendSort=_isNeedRecommendSort;
@property(copy, nonatomic) NSString *transactionNo; // @synthesize transactionNo=_transactionNo;
@property(copy, nonatomic) NSString *xHangTeHuiTopInfo; // @synthesize xHangTeHuiTopInfo=_xHangTeHuiTopInfo;
@property(nonatomic) _Bool isXHanTeHui; // @synthesize isXHanTeHui=_isXHanTeHui;
@property(nonatomic) _Bool isApply; // @synthesize isApply=_isApply;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(retain, nonatomic) NSString *listPrice; // @synthesize listPrice=_listPrice;
@property(copy, nonatomic) NSDictionary *listTraceDictionary; // @synthesize listTraceDictionary=_listTraceDictionary;
@property(nonatomic) long long listCellIndex; // @synthesize listCellIndex=_listCellIndex;
@property(nonatomic) _Bool isNotSplitUserHighFlight; // @synthesize isNotSplitUserHighFlight=_isNotSplitUserHighFlight;
@property(nonatomic) int nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(copy, nonatomic) NSString *arriveNearbyCityCode; // @synthesize arriveNearbyCityCode=_arriveNearbyCityCode;
@property(copy, nonatomic) NSString *departNearbyCityCode; // @synthesize departNearbyCityCode=_departNearbyCityCode;
@property(nonatomic) int isFullOfStoreHouse; // @synthesize isFullOfStoreHouse=_isFullOfStoreHouse;
@property(nonatomic) int originSort; // @synthesize originSort=_originSort;
@property(nonatomic) int sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken=_messageToken;
@property(retain, nonatomic) NSArray *tagStyleList; // @synthesize tagStyleList=_tagStyleList;
@property(copy, nonatomic) NSString *voiceInfo; // @synthesize voiceInfo=_voiceInfo;
@property(nonatomic) _Bool isFromVoice; // @synthesize isFromVoice=_isFromVoice;
@property(retain, nonatomic) NSString *textFromVoice; // @synthesize textFromVoice=_textFromVoice;
@property(retain, nonatomic) NSString *attentionDiscountRate; // @synthesize attentionDiscountRate=_attentionDiscountRate;
@property(retain, nonatomic) NSString *attentionDiscountPrice; // @synthesize attentionDiscountPrice=_attentionDiscountPrice;
@property(retain, nonatomic) NSArray *lowestPriceList; // @synthesize lowestPriceList=_lowestPriceList;
@property(nonatomic) int flightSortType; // @synthesize flightSortType=_flightSortType;
@property(retain, nonatomic) FlightInlandPolicyMutilsectionV3InformationModel *selectPolicyModel; // @synthesize selectPolicyModel=_selectPolicyModel;
@property(retain, nonatomic) CTFlightInlandListItemViewModel *selectListItemModel; // @synthesize selectListItemModel=_selectListItemModel;
@property(retain, nonatomic) NSArray *arrayFlightList; // @synthesize arrayFlightList=_arrayFlightList;
@property(nonatomic) int flightTotal; // @synthesize flightTotal=_flightTotal;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) FlightCityModel *locallCity; // @synthesize locallCity=_locallCity;
@property(retain, nonatomic) CTFlightFilterWidgetDataModel *flightFilterWidgetDataModel; // @synthesize flightFilterWidgetDataModel=_flightFilterWidgetDataModel;
@property(retain, nonatomic) CTFlightFilterModel *flightFilterModel; // @synthesize flightFilterModel=_flightFilterModel;
@property(copy, nonatomic) NSString *returnDate; // @synthesize returnDate=_returnDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(retain, nonatomic) FlightCityModel *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(retain, nonatomic) FlightCityModel *departCity; // @synthesize departCity=_departCity;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(retain, nonatomic) FlightListSearchV3Request *lastRequest; // @synthesize lastRequest=_lastRequest;
- (void).cxx_destruct;
- (void)processTransferList:(id)arg1 transflightList:(id)arg2 flag:(long long)arg3;
- (id)getListDataModel;
- (void)startFilter;
- (void)cleanVaildFlightFilterModel;
- (id)getRecommendRoundTripDefaultDateModel;
- (_Bool)getLastOnlyDirectFlightSwitch;
- (void)saveLastOnlyDirectFlightSwitchToRecord;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (void)initCache;

@end


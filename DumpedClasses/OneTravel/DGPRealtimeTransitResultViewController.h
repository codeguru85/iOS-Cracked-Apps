//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DGCSplitSlideAnimationProtocol.h"
#import "DGPTransitLocationChooseViewDelegate.h"
#import "ONEGestureBackInteractionDelegate.h"

@class DGPRefreshEtaTask, DGPRefreshTrafficTask, DGPTransferSolutionListModel, DGPTransferSolutionListRequest, DGPTransitErrorView, DGPTransitLocationChooseView, DGPTransitPullView, DGPTransitResultContentView, DGPTransitResultHeadView, DiDiPOIEntityModel, MJRefreshNormalHeader, NSDate, NSString, ONEPopupDatePickerView, UIView;

@interface DGPRealtimeTransitResultViewController : UIViewController <DGPTransitLocationChooseViewDelegate, DGCSplitSlideAnimationProtocol, ONEGestureBackInteractionDelegate>
{
    _Bool _onPositionUseForTransit;
    _Bool _isFromIndex;
    _Bool _dateIsExpiration;
    _Bool _isOnMyPoision;
    _Bool _isDestMyPoision;
    _Bool _isPullRefresh;
    _Bool _isEtaRefresh;
    _Bool _isBuriedPointMissTip;
    _Bool _isBuriedPointCurrentHaveEta;
    _Bool _isBuriedPointHaveArrive;
    _Bool _isBuriedPointHaveSchedule;
    _Bool _isDataExpirationEffect;
    _Bool _isHaveBurnied;
    _Bool _shouldDisableBackGesture;
    DiDiPOIEntityModel *_originPOIEntityModel;
    DiDiPOIEntityModel *_destPOIEntityModel;
    NSString *_callBackId;
    DGPTransferSolutionListModel *_indexListModel;
    NSDate *_appoimentDate;
    NSDate *_home_currentShowDate;
    CDUnknownBlockType _backBtnClickBlock;
    DGPTransferSolutionListModel *_transferSolutionListModel;
    UIView *_topContainerView;
    DGPTransitLocationChooseView *_locationChooseView;
    DGPTransitPullView *_pullView;
    UIView *_bottomContainerView;
    DGPTransitResultContentView *_resultContentView;
    ONEPopupDatePickerView *_pickView;
    NSDate *_selectedDate;
    unsigned long long _selectTransferSearchOptions;
    UIView *_errorBacView;
    DGPTransitErrorView *_errorView;
    NSDate *_currentShowDate;
    DGPRefreshEtaTask *_etaRefreshTask;
    DGPRefreshTrafficTask *_trafficRefreshTask;
    DGPTransferSolutionListRequest *_currentListRequest;
    DGPTransitResultHeadView *_tableHeadView;
    MJRefreshNormalHeader *_header;
}

@property(nonatomic) _Bool shouldDisableBackGesture; // @synthesize shouldDisableBackGesture=_shouldDisableBackGesture;
@property(nonatomic) _Bool isHaveBurnied; // @synthesize isHaveBurnied=_isHaveBurnied;
@property(nonatomic) _Bool isDataExpirationEffect; // @synthesize isDataExpirationEffect=_isDataExpirationEffect;
@property(retain, nonatomic) MJRefreshNormalHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) DGPTransitResultHeadView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(nonatomic) _Bool isBuriedPointHaveSchedule; // @synthesize isBuriedPointHaveSchedule=_isBuriedPointHaveSchedule;
@property(nonatomic) _Bool isBuriedPointHaveArrive; // @synthesize isBuriedPointHaveArrive=_isBuriedPointHaveArrive;
@property(nonatomic) _Bool isBuriedPointCurrentHaveEta; // @synthesize isBuriedPointCurrentHaveEta=_isBuriedPointCurrentHaveEta;
@property(nonatomic) _Bool isBuriedPointMissTip; // @synthesize isBuriedPointMissTip=_isBuriedPointMissTip;
@property(retain, nonatomic) DGPTransferSolutionListRequest *currentListRequest; // @synthesize currentListRequest=_currentListRequest;
@property(nonatomic) _Bool isEtaRefresh; // @synthesize isEtaRefresh=_isEtaRefresh;
@property(nonatomic) _Bool isPullRefresh; // @synthesize isPullRefresh=_isPullRefresh;
@property(nonatomic) _Bool isDestMyPoision; // @synthesize isDestMyPoision=_isDestMyPoision;
@property(nonatomic) _Bool isOnMyPoision; // @synthesize isOnMyPoision=_isOnMyPoision;
@property(retain, nonatomic) DGPRefreshTrafficTask *trafficRefreshTask; // @synthesize trafficRefreshTask=_trafficRefreshTask;
@property(retain, nonatomic) DGPRefreshEtaTask *etaRefreshTask; // @synthesize etaRefreshTask=_etaRefreshTask;
@property(retain, nonatomic) NSDate *currentShowDate; // @synthesize currentShowDate=_currentShowDate;
@property(retain, nonatomic) DGPTransitErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *errorBacView; // @synthesize errorBacView=_errorBacView;
@property(nonatomic) _Bool dateIsExpiration; // @synthesize dateIsExpiration=_dateIsExpiration;
@property(nonatomic) unsigned long long selectTransferSearchOptions; // @synthesize selectTransferSearchOptions=_selectTransferSearchOptions;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) ONEPopupDatePickerView *pickView; // @synthesize pickView=_pickView;
@property(retain, nonatomic) DGPTransitResultContentView *resultContentView; // @synthesize resultContentView=_resultContentView;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) DGPTransitPullView *pullView; // @synthesize pullView=_pullView;
@property(retain, nonatomic) DGPTransitLocationChooseView *locationChooseView; // @synthesize locationChooseView=_locationChooseView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) DGPTransferSolutionListModel *transferSolutionListModel; // @synthesize transferSolutionListModel=_transferSolutionListModel;
@property(copy, nonatomic) CDUnknownBlockType backBtnClickBlock; // @synthesize backBtnClickBlock=_backBtnClickBlock;
@property(retain, nonatomic) NSDate *home_currentShowDate; // @synthesize home_currentShowDate=_home_currentShowDate;
@property(retain, nonatomic) NSDate *appoimentDate; // @synthesize appoimentDate=_appoimentDate;
@property(retain, nonatomic) DGPTransferSolutionListModel *indexListModel; // @synthesize indexListModel=_indexListModel;
@property(nonatomic) _Bool isFromIndex; // @synthesize isFromIndex=_isFromIndex;
@property(retain, nonatomic) NSString *callBackId; // @synthesize callBackId=_callBackId;
@property(nonatomic) _Bool onPositionUseForTransit; // @synthesize onPositionUseForTransit=_onPositionUseForTransit;
@property(retain, nonatomic) DiDiPOIEntityModel *destPOIEntityModel; // @synthesize destPOIEntityModel=_destPOIEntityModel;
@property(copy, nonatomic) DiDiPOIEntityModel *originPOIEntityModel; // @synthesize originPOIEntityModel=_originPOIEntityModel;
- (void).cxx_destruct;
- (_Bool)disableGuesture;
- (void)slideInWithDuration:(double)arg1;
- (void)slideOutWithDuration:(double)arg1;
- (id)constructTransitPlanRecoveryModel:(long long)arg1;
- (void)pointWithSegmet:(id)arg1 solutionModel:(id)arg2;
- (void)etaBuriedPoint;
- (void)etaPointWithMissTips;
- (void)etaBuriedPointWithEtaViewModelShowType:(long long)arg1;
- (void)applicationDidBecomeActive;
- (void)removeHeadView;
- (void)endDrag;
- (void)tableViewOffSetY:(id)arg1;
- (_Bool)isCurrentResultVC;
- (void)refreshSchemeAfterTenMinutes;
- (void)refreshOnOrDeskPoision;
- (void)burnPointOfoShow;
- (void)fetchTransitSoutionList;
- (void)forceUpdateETAList;
- (void)handleBusDidSwitchNotification:(id)arg1;
- (void)handleBusWillSwitchNotification:(id)arg1;
- (void)restartTrafficRefreshLoop;
- (void)handleETARefreshNotification:(id)arg1;
- (void)restartETARefreshLoopAndRefreshImmediately:(_Bool)arg1;
- (void)restartETARefreshLoop;
- (void)switchFastCarWithData:(id)arg1;
- (void)cleanTransferSolutionList;
- (void)unPullRefreshScheme;
- (void)pullRefreshScheme;
- (void)addRefreshPullView;
- (id)getReservationTimeString:(id)arg1;
- (void)pickViewConfirmWithDate:(id)arg1;
- (void)chooseBtnClick;
- (void)startBtnClick;
- (void)switchBtnClick;
- (void)didSelectWithStartModel:(id)arg1 endModel:(id)arg2 locationChaged:(long long)arg3;
- (id)constMoney:(long long)arg1;
- (id)fastCarArriveTimeWithSoulutModel:(id)arg1;
- (id)arriveTimeWithSoulutModel:(id)arg1;
- (id)noRealTimeSchemeDataWithSolutionModel:(id)arg1;
- (id)allTime_busSchemeDataWithSegment:(id)arg1 solutionModel:(id)arg2;
- (id)abnormalSchemeDataWithsolutionModel:(id)arg1;
- (id)fastCarSchemeDataWithSolutionModel:(id)arg1;
- (id)walkSchemeDataWithSolutionModel:(id)arg1;
- (id)tableHeadViewWithText:(id)arg1;
- (id)transitResultTipsDataWithTips:(id)arg1;
- (void)reloadVisiAbleCellWithArray:(id)arg1;
- (void)reloadDataWithArray:(id)arg1;
- (id)schemeDataForSegment:(id)arg1 andSolutionModel:(id)arg2 andIndex:(long long)arg3;
- (id)constructSourceArray;
- (void)goToDetailVcWithIndex:(long long)arg1 animated:(_Bool)arg2 isManualSelect:(_Bool)arg3;
- (void)schemeDidSelectedWithIndex:(long long)arg1;
- (void)disMissErrorView;
- (void)showErrorView:(unsigned long long)arg1;
- (void)setUpErroriew;
- (void)setUpShadowView;
- (void)setUpContentView;
- (void)setUpPullView;
- (void)setUpNavigationBar;
- (void)setUpLocationChooseView;
- (void)setUpContainerView;
- (void)recoveryTimeLabel;
- (void)refreshTimeLabel;
- (void)refreshCurrentShowTime;
- (void)checkMoreLine;
- (void)recoveryTransitPlan;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


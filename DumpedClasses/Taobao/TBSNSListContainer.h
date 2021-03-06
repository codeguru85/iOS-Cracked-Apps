//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSCardListDelegate.h"
#import "TBSNSListContainerWebViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WindVaneUIWbeViewDelegate.h"

@class HUDActivityView, NSDictionary, NSString, NSTimer, TBModelStatusInfo, TBSNSListContainerHeaderItem, TBSNSListContainerWebViewController, TBSNSTNodeListView, UIImageView, UILabel, UIView, UIViewController;

@interface TBSNSListContainer : NSObject <TBSNSListContainerWebViewDelegate, WindVaneUIWbeViewDelegate, TBSNSCardListDelegate, TBSNSBasicServiceDelegate, UIScrollViewDelegate>
{
    _Bool _isSupportSecondFloor;
    _Bool _needLogin;
    _Bool _isSetuped;
    _Bool _isScrolled;
    _Bool _didWeexRetry;
    _Bool _asyncSetupHeader;
    _Bool _pullActionTypeChanged;
    _Bool _isSecondFloorSetuped;
    _Bool _isSecondFloorConfigUpdate;
    _Bool _isPullImgSetuped;
    int _cacheMode;
    CDUnknownBlockType _listDataFinishedBlock;
    CDUnknownBlockType _listOnScrollBlock;
    UIView *_view;
    NSString *_spm;
    NSString *_dropdownImageUrl;
    id <TBSNSSecondFloorDelegate> _delegate;
    long long _curContainerType;
    TBModelStatusInfo *_emptyStatusInfo;
    CDUnknownBlockType _checkEmptyBlock;
    TBSNSTNodeListView *_listView;
    TBSNSListContainerWebViewController *_webVC;
    NSDictionary *_query;
    UIViewController *_vc;
    NSString *_pageUrl;
    NSDictionary *_queryDic;
    NSString *_queryStr;
    NSString *_pageId;
    NSString *_cacheKey;
    NSString *_pageName;
    TBSNSListContainerHeaderItem *_headerItemCache;
    TBSNSListContainerHeaderItem *_headerItemData;
    HUDActivityView *_loadingView;
    long long _refreshCount;
    NSTimer *_reloadTimer;
    unsigned long long _state;
    unsigned long long _pullActionType;
    UIImageView *_pullBgImgView;
    UIImageView *_pullFgImgView;
    double _pullBgImgY;
    UILabel *_pullTipLabel;
    UIView *_naviBgImg;
    unsigned long long _pullImgState;
    struct CGRect _frame;
}

@property(nonatomic) unsigned long long pullImgState; // @synthesize pullImgState=_pullImgState;
@property(nonatomic) _Bool isPullImgSetuped; // @synthesize isPullImgSetuped=_isPullImgSetuped;
@property(nonatomic) _Bool isSecondFloorConfigUpdate; // @synthesize isSecondFloorConfigUpdate=_isSecondFloorConfigUpdate;
@property(nonatomic) _Bool isSecondFloorSetuped; // @synthesize isSecondFloorSetuped=_isSecondFloorSetuped;
@property(nonatomic) _Bool pullActionTypeChanged; // @synthesize pullActionTypeChanged=_pullActionTypeChanged;
@property(retain, nonatomic) UIView *naviBgImg; // @synthesize naviBgImg=_naviBgImg;
@property(retain, nonatomic) UILabel *pullTipLabel; // @synthesize pullTipLabel=_pullTipLabel;
@property(nonatomic) double pullBgImgY; // @synthesize pullBgImgY=_pullBgImgY;
@property(retain, nonatomic) UIImageView *pullFgImgView; // @synthesize pullFgImgView=_pullFgImgView;
@property(retain, nonatomic) UIImageView *pullBgImgView; // @synthesize pullBgImgView=_pullBgImgView;
@property(nonatomic) unsigned long long pullActionType; // @synthesize pullActionType=_pullActionType;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool asyncSetupHeader; // @synthesize asyncSetupHeader=_asyncSetupHeader;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(nonatomic) _Bool didWeexRetry; // @synthesize didWeexRetry=_didWeexRetry;
@property(nonatomic) _Bool isScrolled; // @synthesize isScrolled=_isScrolled;
@property(nonatomic) _Bool isSetuped; // @synthesize isSetuped=_isSetuped;
@property(retain, nonatomic) HUDActivityView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBSNSListContainerHeaderItem *headerItemData; // @synthesize headerItemData=_headerItemData;
@property(retain, nonatomic) TBSNSListContainerHeaderItem *headerItemCache; // @synthesize headerItemCache=_headerItemCache;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(nonatomic) int cacheMode; // @synthesize cacheMode=_cacheMode;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(retain, nonatomic) NSDictionary *queryDic; // @synthesize queryDic=_queryDic;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) TBSNSListContainerWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) TBSNSTNodeListView *listView; // @synthesize listView=_listView;
@property(copy, nonatomic) CDUnknownBlockType checkEmptyBlock; // @synthesize checkEmptyBlock=_checkEmptyBlock;
@property(retain, nonatomic) TBModelStatusInfo *emptyStatusInfo; // @synthesize emptyStatusInfo=_emptyStatusInfo;
@property(nonatomic) long long curContainerType; // @synthesize curContainerType=_curContainerType;
@property(nonatomic) __weak id <TBSNSSecondFloorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSupportSecondFloor; // @synthesize isSupportSecondFloor=_isSupportSecondFloor;
@property(retain, nonatomic) NSString *dropdownImageUrl; // @synthesize dropdownImageUrl=_dropdownImageUrl;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType listOnScrollBlock; // @synthesize listOnScrollBlock=_listOnScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType listDataFinishedBlock; // @synthesize listDataFinishedBlock=_listDataFinishedBlock;
- (void).cxx_destruct;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)setupPullImage;
- (void)setupSecondFloor;
- (_Bool)isSecondFloorFeatureEnable;
- (void)jumpToSecondFloor;
- (id)targetVCForUrl:(id)arg1;
- (void)resetViews;
- (void)expandViews;
- (void)setPullToRefreshVisable:(_Bool)arg1;
- (void)checkPullActionTypeByOffset:(struct CGPoint)arg1;
- (void)onScrollWithOffset:(struct CGPoint)arg1;
- (void)onScrollViewWillEndDraggingWithOffset:(struct CGPoint)arg1;
- (void)onDisappear;
- (void)onAppear;
- (void)closeLoadingView;
- (id)headerCacheKey;
- (void)setupViewWithIsCache:(_Bool)arg1;
- (void)handleErrorCase;
- (void)onHeaderDataFinish:(id)arg1;
- (void)childWebViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)childWebViewControllerDidFinishLoad:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setMixHeaderHeight:(double)arg1;
- (void)setupWebViewWithHeight:(double)arg1 needErrorView:(_Bool)arg2 bizData:(id)arg3 url:(id)arg4 containerType:(long long)arg5;
- (void)reloadTimerHandler:(id)arg1;
- (void)stopReloadTimer;
- (void)startReloadTimer;
- (void)handleCacheLogic;
- (void)setTransparent:(_Bool)arg1;
- (void)setupListView;
- (id)getParams;
- (void)setupList;
- (void)dealloc;
- (void)scrollToTop;
- (void)pullRefresh;
- (void)reloadNetData;
- (void)loadData;
- (_Bool)isReloading;
- (id)getWebView;
- (id)getListView;
- (_Bool)isRefreshing;
- (_Bool)isPullRefresh;
- (id)getTableView;
- (id)getCurScrollView;
- (id)initWithPageUrl:(id)arg1 query:(id)arg2 viewController:(id)arg3 frame:(struct CGRect)arg4 cacheMode:(int)arg5 cacheKey:(id)arg6 pageName:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


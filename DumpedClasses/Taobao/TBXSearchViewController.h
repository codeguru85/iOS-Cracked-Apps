//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "DWPlayerLifecycleProtocol.h"
#import "NXActionProtocol.h"
#import "TBSearchExpandOrContractScrollViewDelegate.h"
#import "TBSearchInputDelegate.h"
#import "TBXSearchBaseViewControllerDelegate.h"
#import "TBXSearchHeaderViewDelegate.h"
#import "TBXSearchTabControlDelegate.h"
#import "TBXSearchViewModelDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class DWInstance, NSDate, NSDictionary, NSMutableDictionary, NSString, TBBarButtonItem, TBModelStatusHandler, TBScrollViewCompensator, TBSearchInput, TBXSearchBaseViewController, TBXSearchFullOnesearchViewComponent, TBXSearchHeaderView, TBXSearchLoadingView, TBXSearchScrollViewContainer, TBXSearchUserGuideComponent, TBXSearchViewModel;

@interface TBXSearchViewController : TBViewController <TBSearchInputDelegate, UITextFieldDelegate, TBXSearchViewModelDelegate, TBXSearchBaseViewControllerDelegate, TBXSearchTabControlDelegate, NXActionProtocol, TBXSearchHeaderViewDelegate, UIScrollViewDelegate, TBSearchExpandOrContractScrollViewDelegate, DWPlayerLifecycleProtocol>
{
    _Bool _hasDoneJustOnce;
    _Bool _appMonitorStatus;
    _Bool _navibarHasDone;
    _Bool _webviewScrollViewAnimate;
    _Bool _h5NaviBarControlEnabled;
    _Bool _isShownDouble11View;
    _Bool _searchBarAnimationEnabled;
    TBXSearchViewModel *_viewModel;
    TBSearchInput *_searchBar;
    TBBarButtonItem *_sBar;
    NSMutableDictionary *_tabVCDic;
    TBXSearchHeaderView *_headerView;
    TBXSearchBaseViewController *_currentVC;
    TBXSearchLoadingView *_loadingView;
    TBXSearchFullOnesearchViewComponent *_fullOnesearchViewComponent;
    TBXSearchScrollViewContainer *_scrollViewContainer;
    TBScrollViewCompensator *_scrollViewCompensator;
    NSDate *_beginTime;
    double _navibarOrigTop;
    double _scrollViewAnimate;
    DWInstance *_dwInstance;
    NSDictionary *_currentVideoInfo;
    TBModelStatusHandler *_double11FailStatusHandler;
    TBXSearchUserGuideComponent *_userGuideComponent;
}

@property(nonatomic) _Bool searchBarAnimationEnabled; // @synthesize searchBarAnimationEnabled=_searchBarAnimationEnabled;
@property(retain, nonatomic) TBXSearchUserGuideComponent *userGuideComponent; // @synthesize userGuideComponent=_userGuideComponent;
@property(retain, nonatomic) TBModelStatusHandler *double11FailStatusHandler; // @synthesize double11FailStatusHandler=_double11FailStatusHandler;
@property(nonatomic) _Bool isShownDouble11View; // @synthesize isShownDouble11View=_isShownDouble11View;
@property(nonatomic) _Bool h5NaviBarControlEnabled; // @synthesize h5NaviBarControlEnabled=_h5NaviBarControlEnabled;
@property(retain, nonatomic) NSDictionary *currentVideoInfo; // @synthesize currentVideoInfo=_currentVideoInfo;
@property(retain, nonatomic) DWInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
@property(nonatomic) _Bool webviewScrollViewAnimate; // @synthesize webviewScrollViewAnimate=_webviewScrollViewAnimate;
@property(nonatomic) double scrollViewAnimate; // @synthesize scrollViewAnimate=_scrollViewAnimate;
@property(nonatomic) _Bool navibarHasDone; // @synthesize navibarHasDone=_navibarHasDone;
@property(nonatomic) double navibarOrigTop; // @synthesize navibarOrigTop=_navibarOrigTop;
@property(nonatomic) _Bool appMonitorStatus; // @synthesize appMonitorStatus=_appMonitorStatus;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) TBScrollViewCompensator *scrollViewCompensator; // @synthesize scrollViewCompensator=_scrollViewCompensator;
@property(retain, nonatomic) TBXSearchScrollViewContainer *scrollViewContainer; // @synthesize scrollViewContainer=_scrollViewContainer;
@property(retain, nonatomic) TBXSearchFullOnesearchViewComponent *fullOnesearchViewComponent; // @synthesize fullOnesearchViewComponent=_fullOnesearchViewComponent;
@property(nonatomic) _Bool hasDoneJustOnce; // @synthesize hasDoneJustOnce=_hasDoneJustOnce;
@property(retain, nonatomic) TBXSearchLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBXSearchBaseViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) TBXSearchHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableDictionary *tabVCDic; // @synthesize tabVCDic=_tabVCDic;
@property(retain, nonatomic) TBBarButtonItem *sBar; // @synthesize sBar=_sBar;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) TBXSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setFestivalNavibar;
- (_Bool)tbfestival_isFestivalEnable;
- (void)changeStatusBarWithStyle:(long long)arg1;
- (long long)getSearchCurrentStatusBarStyle;
- (void)gv;
- (_Bool)hasDouble11View;
- (_Bool)showDouble11ErrorView:(id)arg1 InView:(id)arg2 Frame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)removeVideo;
- (void)onVideoClose;
- (_Bool)videoIsPlaying:(id)arg1;
- (id)getDWInteractiveInfoWithDict:(id)arg1;
- (id)getDWVideoInfoWithDict:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)webViewDidScroll:(id)arg1 andScrollViewCompensator:(id)arg2;
- (void)webViewContact;
- (void)webViewExpand;
- (void)scrollToTop;
- (void)showTbNavibar:(_Bool)arg1;
- (void)scrollViewShouldContact:(id)arg1;
- (void)scrollViewShouldExpand:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetScrollViewContainerStatus;
- (void)setContainerScrollViewContentSize:(struct CGSize)arg1 andCurrentVc:(id)arg2;
- (void)searchAgaignForH5Jsbridge;
- (void)reloadForH5jSbridge;
- (void)commitAppMonitorLog;
- (void)registryAppMonitor;
- (void)initAppMonitor;
- (id)pageUserInfo;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showChiTuLogoWhenReady;
- (void)chiTuRun;
- (void)searchFailed:(id)arg1 Error:(id)arg2;
- (void)searchSuccess:(id)arg1;
- (void)searchStart:(id)arg1;
- (void)searchWithKeyword:(id)arg1 Params:(id)arg2;
- (void)layoutWithHeaderViewHeightWhenCompleted:(double)arg1;
- (void)layoutWithHeaderViewHeightWhenAnimating:(double)arg1;
- (void)layoutWithHeaderViewHeightBeforeAnimating:(double)arg1 andHeight:(double)arg2;
- (void)onesearchChangeHeight:(double)arg1 enableAnchor:(_Bool)arg2;
- (void)showPhotoSearch;
- (_Bool)navBarHidden;
- (void)hideHeader:(_Bool)arg1;
- (void)searchWithKeyWord:(id)arg1 AndType:(id)arg2 AndSearchParams:(id)arg3;
- (void)showDouble11View:(id)arg1 InViewController:(id)arg2;
- (void)showChildVC:(id)arg1;
- (void)loadDataFailed:(id)arg1;
- (void)dataLoaded;
- (void)startLoading;
- (void)stopLoading;
- (void)removeDouble11View;
- (id)generateChildVC:(id)arg1;
- (void)startScrollTab:(id)arg1;
- (void)clickTabItem:(id)arg1;
- (void)updateH5TabAndSwitch:(id)arg1 appendParams:(id)arg2;
- (void)doSearchBarAnimation;
- (void)addSearchBusinessViewToNav;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)layoutBottomLine;
- (void)shareAction;
- (void)configNavBar;
- (id)getH5UtPageName;
- (void)updatePageNameAndArgs;
- (void)didReceiveMemoryWarning;
- (void)layoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)checkMemoryStatus;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


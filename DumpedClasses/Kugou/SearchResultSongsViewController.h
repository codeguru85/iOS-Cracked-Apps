//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchResultPageViewController.h"

#import "FeedbackViewDelegate.h"
#import "KGMusicControlViewControllerDelegate.h"
#import "KGMusicTableCellPlayStateDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "SearchResultSongsCellDelegate.h"
#import "SearchResultSongsSubViewControllerDelegate.h"
#import "SearchSmallTipsViewDelegate.h"
#import "ValidSearchingStatisticsDelegate.h"

@class FeedbackView, KGDefaultNetErrorView, KGMusicControlViewController, KGMusicTableViewAdapter, KGThemeButton, KGThemeImageView, KGThemeLabel, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, RadioTipsView, RoomSongInfo, SearchBLL, SearchResultSongsSubViewController, SearchSmallTipsView, UIImage, UIImageView, UIView;

@interface SearchResultSongsViewController : SearchResultPageViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, ValidSearchingStatisticsDelegate, KGMusicTableCellPlayStateDelegate, SearchResultSongsCellDelegate, SearchSmallTipsViewDelegate, KGMusicControlViewControllerDelegate, SearchResultSongsSubViewControllerDelegate, FeedbackViewDelegate>
{
    _Bool _isShowSubTabView;
    _Bool _isLoading;
    _Bool _didFXRoomInfoLoadTimerStarted;
    _Bool _needTagResult;
    _Bool _needCorrectionResult;
    _Bool _isShowingSearchTip;
    _Bool _isShowingRecommendBanner;
    _Bool _allowToRefresh;
    _Bool _needNewSearching;
    _Bool _hasVaildSubTab;
    _Bool _isSearchPageDidCovered;
    _Bool _isPresentedOtherController;
    _Bool _onGetKeywordMatchRecommendInfo;
    _Bool _finishGetBannerData;
    int _statistics_inputType;
    NSString *_searchKeyword;
    id <SearchResultSongsViewControllerDelegate> _subTabDelegate;
    long long _searchType;
    long long _inputType;
    NSDate *_keySearchStartTime;
    SearchSmallTipsView *_tipBar;
    KGMusicControlViewController *_musicControl;
    UIView *_topView;
    UIView *_allPlayTipView;
    KGMusicTableViewAdapter *_tableViewAdapter;
    RadioTipsView *_emptyResultView;
    KGThemeButton *_noResultFeedbackButton;
    KGDefaultNetErrorView *_netErrorView;
    long long _pageIndex;
    NSMutableArray *_netSongs;
    NSMutableDictionary *_relatedMusics;
    long long _totalResult;
    NSMutableArray *_musicArray;
    RoomSongInfo *_roomSongInfo;
    NSString *_correctionTip;
    double _statistics_Id;
    NSMutableArray *_validatedNetMusicArr;
    FeedbackView *_feedbackView;
    NSString *_correctTypeString;
    UIView *_songsHeadView;
    NSArray *_subTabInfoArr;
    NSArray *_subTabNameArr;
    NSString *_currentSubTabName;
    NSString *_tempSubTabName;
    NSMutableArray *_tempSubTabArr;
    long long _tempSubTabNameIndex;
    NSMutableDictionary *_subTabPageIndexDic;
    NSMutableDictionary *_subTabTotalResultNumDic;
    NSMutableDictionary *_subTabIsLoadingDic;
    NSMutableDictionary *_subTabOffsetDic;
    NSMutableDictionary *_subTabRelatedMusicsDic;
    NSMutableDictionary *_subTabMusicArrDic;
    NSMutableDictionary *_subTabNetSongsDic;
    long long _islyric;
    SearchResultSongsSubViewController *_subTabVc;
    KGThemeButton *_playBtn;
    UIImage *_currentPlayImg;
    KGThemeButton *_allPlayBtn;
    UIImageView *_singerImgView;
    KGThemeLabel *_keywordTipsLabel;
    SearchBLL *_searchBll;
    NSString *_fxSongName;
    KGThemeImageView *_fanxingIcon;
    NSArray *_recommendResponses;
    UIView *_bannerView;
    struct CGRect _visiableRect;
}

@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSArray *recommendResponses; // @synthesize recommendResponses=_recommendResponses;
@property(nonatomic) _Bool finishGetBannerData; // @synthesize finishGetBannerData=_finishGetBannerData;
@property(nonatomic) _Bool onGetKeywordMatchRecommendInfo; // @synthesize onGetKeywordMatchRecommendInfo=_onGetKeywordMatchRecommendInfo;
@property(retain, nonatomic) KGThemeImageView *fanxingIcon; // @synthesize fanxingIcon=_fanxingIcon;
@property(retain, nonatomic) NSString *fxSongName; // @synthesize fxSongName=_fxSongName;
@property(nonatomic) _Bool isPresentedOtherController; // @synthesize isPresentedOtherController=_isPresentedOtherController;
@property(nonatomic) _Bool isSearchPageDidCovered; // @synthesize isSearchPageDidCovered=_isSearchPageDidCovered;
@property(retain, nonatomic) SearchBLL *searchBll; // @synthesize searchBll=_searchBll;
@property(retain, nonatomic) KGThemeLabel *keywordTipsLabel; // @synthesize keywordTipsLabel=_keywordTipsLabel;
@property(retain, nonatomic) UIImageView *singerImgView; // @synthesize singerImgView=_singerImgView;
@property(retain, nonatomic) KGThemeButton *allPlayBtn; // @synthesize allPlayBtn=_allPlayBtn;
@property(retain, nonatomic) UIImage *currentPlayImg; // @synthesize currentPlayImg=_currentPlayImg;
@property(retain, nonatomic) KGThemeButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) __weak SearchResultSongsSubViewController *subTabVc; // @synthesize subTabVc=_subTabVc;
@property(nonatomic) long long islyric; // @synthesize islyric=_islyric;
@property(retain, nonatomic) NSMutableDictionary *subTabNetSongsDic; // @synthesize subTabNetSongsDic=_subTabNetSongsDic;
@property(retain, nonatomic) NSMutableDictionary *subTabMusicArrDic; // @synthesize subTabMusicArrDic=_subTabMusicArrDic;
@property(retain, nonatomic) NSMutableDictionary *subTabRelatedMusicsDic; // @synthesize subTabRelatedMusicsDic=_subTabRelatedMusicsDic;
@property(retain, nonatomic) NSMutableDictionary *subTabOffsetDic; // @synthesize subTabOffsetDic=_subTabOffsetDic;
@property(retain, nonatomic) NSMutableDictionary *subTabIsLoadingDic; // @synthesize subTabIsLoadingDic=_subTabIsLoadingDic;
@property(retain, nonatomic) NSMutableDictionary *subTabTotalResultNumDic; // @synthesize subTabTotalResultNumDic=_subTabTotalResultNumDic;
@property(retain, nonatomic) NSMutableDictionary *subTabPageIndexDic; // @synthesize subTabPageIndexDic=_subTabPageIndexDic;
@property(nonatomic) long long tempSubTabNameIndex; // @synthesize tempSubTabNameIndex=_tempSubTabNameIndex;
@property(nonatomic) _Bool hasVaildSubTab; // @synthesize hasVaildSubTab=_hasVaildSubTab;
@property(retain, nonatomic) NSMutableArray *tempSubTabArr; // @synthesize tempSubTabArr=_tempSubTabArr;
@property(retain, nonatomic) NSString *tempSubTabName; // @synthesize tempSubTabName=_tempSubTabName;
@property(retain, nonatomic) NSString *currentSubTabName; // @synthesize currentSubTabName=_currentSubTabName;
@property(retain, nonatomic) NSArray *subTabNameArr; // @synthesize subTabNameArr=_subTabNameArr;
@property(retain, nonatomic) NSArray *subTabInfoArr; // @synthesize subTabInfoArr=_subTabInfoArr;
@property(retain, nonatomic) UIView *songsHeadView; // @synthesize songsHeadView=_songsHeadView;
@property(retain, nonatomic) NSString *correctTypeString; // @synthesize correctTypeString=_correctTypeString;
@property(retain, nonatomic) FeedbackView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic) _Bool needNewSearching; // @synthesize needNewSearching=_needNewSearching;
@property(nonatomic) _Bool allowToRefresh; // @synthesize allowToRefresh=_allowToRefresh;
@property(retain, nonatomic) NSMutableArray *validatedNetMusicArr; // @synthesize validatedNetMusicArr=_validatedNetMusicArr;
@property(nonatomic) double statistics_Id; // @synthesize statistics_Id=_statistics_Id;
@property(nonatomic) int statistics_inputType; // @synthesize statistics_inputType=_statistics_inputType;
@property(nonatomic) _Bool isShowingRecommendBanner; // @synthesize isShowingRecommendBanner=_isShowingRecommendBanner;
@property(nonatomic) _Bool isShowingSearchTip; // @synthesize isShowingSearchTip=_isShowingSearchTip;
@property(nonatomic) _Bool needCorrectionResult; // @synthesize needCorrectionResult=_needCorrectionResult;
@property(nonatomic) _Bool needTagResult; // @synthesize needTagResult=_needTagResult;
@property(retain, nonatomic) NSString *correctionTip; // @synthesize correctionTip=_correctionTip;
@property(retain, nonatomic) RoomSongInfo *roomSongInfo; // @synthesize roomSongInfo=_roomSongInfo;
@property _Bool didFXRoomInfoLoadTimerStarted; // @synthesize didFXRoomInfoLoadTimerStarted=_didFXRoomInfoLoadTimerStarted;
@property(retain, nonatomic) NSMutableArray *musicArray; // @synthesize musicArray=_musicArray;
@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) long long totalResult; // @synthesize totalResult=_totalResult;
@property(retain, nonatomic) NSMutableDictionary *relatedMusics; // @synthesize relatedMusics=_relatedMusics;
@property(retain, nonatomic) NSMutableArray *netSongs; // @synthesize netSongs=_netSongs;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) struct CGRect visiableRect; // @synthesize visiableRect=_visiableRect;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KGThemeButton *noResultFeedbackButton; // @synthesize noResultFeedbackButton=_noResultFeedbackButton;
@property(retain, nonatomic) RadioTipsView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) UIView *allPlayTipView; // @synthesize allPlayTipView=_allPlayTipView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) KGMusicControlViewController *musicControl; // @synthesize musicControl=_musicControl;
@property(retain, nonatomic) SearchSmallTipsView *tipBar; // @synthesize tipBar=_tipBar;
@property(retain, nonatomic) NSDate *keySearchStartTime; // @synthesize keySearchStartTime=_keySearchStartTime;
@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) __weak id <SearchResultSongsViewControllerDelegate> subTabDelegate; // @synthesize subTabDelegate=_subTabDelegate;
@property(nonatomic) _Bool isShowSubTabView; // @synthesize isShowSubTabView=_isShowSubTabView;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;
- (void)playRadioWithRadioInfo:(id)arg1;
- (void)changeFMPlayState:(id)arg1;
- (void)didPressRecommendBtn:(id)arg1;
- (id)getCurrentBannerTypeStrWithBannerType:(long long)arg1;
- (void)refreshRecommendBannerFromRequestResponse:(_Bool)arg1;
- (void)getKeywordMatchRecommendInfo;
- (void)collectRestApartSomeBaseValidUserTapBIInfo;
- (void)collectBaseValidUserTapBIInfoEveryRefresh;
- (void)collectBaseValidUserTapBIInfo;
- (void)sendValidUserTapBI:(id)arg1 andAcitonID:(int)arg2 andReason:(id)arg3 andTapedIndex:(long long)arg4;
- (void)didInsertSongToPlayList:(id)arg1;
- (void)didSelectKTVWithSong:(id)arg1;
- (void)didShareSong:(id)arg1;
- (void)didAddSongToCollection:(id)arg1;
- (void)didPlayMVWithSong:(id)arg1;
- (void)didDownloadSong:(id)arg1;
- (void)didInsertSongToPlayLater:(id)arg1;
- (void)markAllSecondaryTabNamesForValidSearchingStatistics:(id)arg1;
- (_Bool)isString:(id)arg1 containsSubstring:(id)arg2;
- (int)APMType;
- (void)sendInputBISearchedSongs:(id)arg1;
- (void)searchFail:(id)arg1;
- (void)searchSuccess:(id)arg1;
- (void)jumpToWebview;
- (void)feedbackView:(id)arg1 didClickFeedbackButton:(id)arg2;
- (void)clickFeedbackButton:(id)arg1;
- (void)requestAgain;
- (void)showErrorView;
- (void)hideEmptyResultView;
- (void)showEmptyResultView;
- (void)setFunViewShotBack:(_Bool)arg1;
- (void)screenShotImage;
- (void)fixBoundaryInScrollView:(id)arg1 withMaxContentOffsetY:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (void)didPressHighlightedBtn;
- (void)didPressHintKeyword:(id)arg1;
- (void)didPressOriginKeyword:(id)arg1;
- (void)didPressLiveWithGesture:(id)arg1;
- (void)changeTipThemeColorWithSongName:(id)arg1;
- (void)hideFXRoomResult;
- (double)strRectWidth:(id)arg1;
- (id)newStr:(id)arg1 withMaxWidth:(double)arg2;
- (void)showFXRoomSearchResult:(id)arg1 songName:(id)arg2;
- (void)showSearchCorrection:(id)arg1 forceToCorrect:(_Bool)arg2;
- (void)showSearchTag:(id)arg1 count:(unsigned long long)arg2;
- (void)resizeTopView;
- (void)hideFeedbackView;
- (void)showFeedbackView;
- (void)hideTableview;
- (void)showTableview;
- (void)hideTopView;
- (void)showTopView;
- (void)hideLoadingViewWithSuccess;
- (void)showLoadingView;
- (void)changeSubTab:(id)arg1;
- (void)subTabViewDidSelectedSubTab:(id)arg1 isValidClick:(_Bool)arg2;
- (void)resizeSongsHeadView;
- (void)hideMusicControlView;
- (void)showMusicControlView;
- (void)didFinishMusicControlCancelAction;
- (void)didFinishTableViewLongPress;
- (id)songInfoStringUniqueTag:(id)arg1;
- (void)shouldHideSubView;
- (void)hideSubTabView;
- (void)showSubTabview;
- (id)refreshSelectItem:(id)arg1 buttonTagType:(int)arg2;
- (long long)findTopestIndexOfSong:(id)arg1;
- (void)removeSongsFromTableViewStartAtIndex:(long long)arg1 length:(unsigned long long)arg2;
- (void)insertSongs:(id)arg1 toTableViewAtIndex:(long long)arg2;
- (void)collapseMultiVersionForSongInfo:(id)arg1 atIndexPath:(id)arg2;
- (void)expandMultiVersionForSongInfo:(id)arg1 atIndexPath:(id)arg2;
- (id)arrayToInsertBySong:(id)arg1;
- (id)getMultiVersionsForSong:(id)arg1;
- (id)getMultiVersions:(id)arg1;
- (_Bool)hasMultiVersions:(id)arg1;
- (void)tapOnMultiVersionCell:(id)arg1;
- (long long)findDatasourceIndex:(id)arg1 menuIndexPath:(id)arg2;
- (void)removeSongsFromMusicArray:(id)arg1 fromIndex:(long long)arg2;
- (void)insertSongsToMusicArray:(id)arg1 fromIndex:(long long)arg2;
- (void)searchResultSongsCell:(id)arg1 handleMultiVersionEventInState:(long long)arg2;
- (void)removeMusicMenuCell;
- (long long)sectionForMusic;
- (long long)sectionForMusicControl;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (void)tableViewShowPlayAnimation:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)createMultiVersionMoreCellForTableView:(id)arg1 atIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (id)createMusicCellForTableView:(id)arg1 withSongInfo:(id)arg2 atIndexPath:(id)arg3 isCheckBoxStyle:(_Bool)arg4;
- (void)menuActionWithSongInfo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (void)addMoreDataActionWithTabelView:(id)arg1;
- (void)sendAPMFanXingRoomWithError:(id)arg1;
- (void)getFanXingRoomSongWithSongName:(id)arg1;
- (void)searchLiveRoomByKeyword:(id)arg1;
- (id)attributesWithFont:(id)arg1 textColor:(id)arg2 underlineColor:(id)arg3 underlineStyle:(long long)arg4;
- (void)handleSearchResult:(id)arg1 keyword:(id)arg2;
- (void)userBICorrectType:(id)arg1;
- (void)getMusicByKeyword:(id)arg1 needTagResult:(_Bool)arg2 andForceToCorrect:(_Bool)arg3 atPageIndex:(long long)arg4;
@property(readonly, copy) NSString *debugDescription;
- (void)getNextPage;
- (void)stopLoadFXRoomInfoTimer;
- (void)searchKeywordWithoutCorrectWithTag:(id)arg1;
- (void)searchKeywordWithoutChecking:(id)arg1;
- (void)searchSongsWithoutCleanResult:(id)arg1;
- (void)searchSongsByKeyword:(id)arg1;
- (void)appDidEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)setViewWillHide:(id)arg1;
- (void)setViewWillShow:(id)arg1;
- (void)changeTheme:(id)arg1;
- (void)removeNotification;
- (void)registerApplicationStateNotifications;
- (void)registerSettingPushNotifications;
- (void)registNotification;
- (void)playModeSelect:(id)arg1;
- (void)setPlayBtnImg:(id)arg1;
- (void)refreshPlayModeIcon;
- (void)playModeChanged:(id)arg1;
- (void)saveFirstAllPlayBtnAction;
- (_Bool)checkIsFirstAllPlayBtnAction;
- (void)didClickAllPlayBtn;
- (void)fitErrorViewFrame;
- (void)initViews;
- (void)cleanSubTabData;
- (void)cleanAllSearchResult;
- (double)getTabViewBottom;
- (double)getContentViewHeight;
- (id)tabTitle;
- (void)changeShotBgColor:(id)arg1 isShow:(_Bool)arg2;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewManagerRefreshContentView;
- (void)musicControlCancelAction;
- (void)pageWillExit;
- (void)viewDidInitialize;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithKeyWord:(id)arg1 andSearchType:(long long)arg2 andInputType:(long long)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


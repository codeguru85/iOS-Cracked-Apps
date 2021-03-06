//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDPluginBaseController.h"

#import "SSImpressionProtocol.h"
#import "TTShareManagerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerErrorHandler.h"
#import "WDListRecommendCellDelegate.h"
#import "WDWendaFirstWritterPopupViewDelegate.h"
#import "WDWendaListCellDelegate.h"

@class DetailActionRequestManager, NSString, SSThemedButton, SSThemedTableView, SSThemedView, TTActionSheetController, TTBubbleView, TTViewWrapper, WDListViewModel, WDWendaListFooterView, WDWendaListQuestionHeader, WDWendaListQuestionNewHeader, WDWendaListTabView;

@interface WDWendaListViewController : WDPluginBaseController <UITableViewDataSource, UITableViewDelegate, SSImpressionProtocol, WDWendaListCellDelegate, WDListRecommendCellDelegate, UIViewControllerErrorHandler, WDWendaFirstWritterPopupViewDelegate, UIActionSheetDelegate, TTShareManagerDelegate>
{
    _Bool _needShowEmptyFooter;
    _Bool _needShowFooterView;
    _Bool _adjustPosition;
    _Bool _isViewAppear;
    _Bool _hasAddsubviews;
    _Bool _notFirstShow;
    SSThemedTableView *_answerListView;
    WDListViewModel *_viewModel;
    WDWendaListQuestionHeader *_questionHeader;
    WDWendaListQuestionNewHeader *_newquestionHeader;
    TTViewWrapper *_wrapperView;
    SSThemedButton *_sendAnswerButton;
    WDWendaListFooterView *_listFooterView;
    WDWendaListTabView *_bottomTabView;
    SSThemedView *_topBgView;
    SSThemedView *_bottomBgView;
    TTActionSheetController *_actionSheetController;
    DetailActionRequestManager *_actionManager;
    TTBubbleView *_bubbleView;
    struct CGRect _videoCoverPicFrame;
}

@property(retain, nonatomic) TTBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool notFirstShow; // @synthesize notFirstShow=_notFirstShow;
@property(nonatomic) _Bool hasAddsubviews; // @synthesize hasAddsubviews=_hasAddsubviews;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) DetailActionRequestManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(retain, nonatomic) SSThemedView *bottomBgView; // @synthesize bottomBgView=_bottomBgView;
@property(retain, nonatomic) SSThemedView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) WDWendaListTabView *bottomTabView; // @synthesize bottomTabView=_bottomTabView;
@property(retain, nonatomic) WDWendaListFooterView *listFooterView; // @synthesize listFooterView=_listFooterView;
@property(retain, nonatomic) SSThemedButton *sendAnswerButton; // @synthesize sendAnswerButton=_sendAnswerButton;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) struct CGRect videoCoverPicFrame; // @synthesize videoCoverPicFrame=_videoCoverPicFrame;
@property(nonatomic) _Bool adjustPosition; // @synthesize adjustPosition=_adjustPosition;
@property(retain, nonatomic) WDWendaListQuestionNewHeader *newquestionHeader; // @synthesize newquestionHeader=_newquestionHeader;
@property(retain, nonatomic) WDWendaListQuestionHeader *questionHeader; // @synthesize questionHeader=_questionHeader;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SSThemedTableView *answerListView; // @synthesize answerListView=_answerListView;
@property(nonatomic) _Bool needShowFooterView; // @synthesize needShowFooterView=_needShowFooterView;
@property(nonatomic) _Bool needShowEmptyFooter; // @synthesize needShowEmptyFooter=_needShowEmptyFooter;
- (void).cxx_destruct;
- (id)centerBgView;
- (id)moreButton;
- (_Bool)_isListShowing;
- (void)_sendCurrentPageStayTime:(double)arg1;
- (void)sendTrackWithDict:(id)arg1;
- (void)sendTrackWithLabel:(id)arg1;
- (id)enterFrom;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 error:(id)arg3 desc:(id)arg4;
- (void)shareManager:(id)arg1 clickedWith:(id)arg2;
- (void)titleViewTaped:(id)arg1;
- (void)sendAnswer:(id)arg1;
- (void)moreButtonPressed;
- (void)buildTitleView;
- (void)handleError:(id)arg1;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)themeChanged:(id)arg1;
- (void)fontChanged;
- (struct CGRect)p_frameForListView;
- (void)adjustVideoCellPosition;
- (void)showWukongTipsIfNeeded;
- (void)layoutTabFrame;
- (_Bool)_needShowEmptyTipView;
- (_Bool)isEmptyTipViewDataAvailable;
- (void)refreshFooterView;
- (void)reloadListView;
- (void)reloadListViewNeedRefreshHeader:(_Bool)arg1;
- (void)deleteQuestion;
- (void)enterModifyPage;
- (void)_enterMoreListController;
- (void)_loadMore;
- (void)_rerequestQuestion;
- (void)firstLoadContent;
- (void)addSubviewsIfNot;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithQuestionID:(id)arg1 baseCondition:(id)arg2 apiParameter:(id)arg3;
- (id)initWithBaseCondition:(id)arg1;
- (void)dealloc;
- (void)needRerecordImpressions;
- (unsigned long long)impressionType;
- (id)impressionKeyName;
- (void)_willDisappear;
- (void)_willAppear;
- (void)_regist;
- (void)_unrigist;
- (void)enterRecommentPage;
- (void)enterDetailPageWith:(id)arg1;
- (void)recommendCell:(id)arg1 didButtonClicked:(id)arg2;
- (void)listCell:(id)arg1 didShowMoreButtonClicked:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


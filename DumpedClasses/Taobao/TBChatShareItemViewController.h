//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "AvatarViewBarDelegate.h"
#import "TBChatShareItemSearchDelegate.h"
#import "TBIMShareCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HUDActivityView, NSMutableArray, NSMutableDictionary, NSString, TBIMShareAvatarViewBar, TBIMShareTabBar, TBNavigationParams, UIScrollView;

@interface TBChatShareItemViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, TBIMShareCellDelegate, UIScrollViewDelegate, AvatarViewBarDelegate, TBChatShareItemSearchDelegate>
{
    int shareCount;
    int tabCount;
    NSString *_boughtTimeStamp;
    HUDActivityView *hudLoadingView;
    _Bool bSingleSelect;
    _Bool _bShowUsePresent;
    _Bool _isShowShareBar;
    id <ShareItemDelegate> _delegate;
    TBIMShareTabBar *_tabBar;
    long long _tabIndex;
    UIScrollView *_scrollView;
    NSMutableArray *_tabTexts;
    NSMutableArray *_userNeedIndexList;
    NSMutableArray *_emptyPromptList;
    NSMutableArray *_timeStampList;
    NSMutableArray *_isEndedList;
    NSMutableArray *_otherDataList;
    NSMutableArray *_handlerList;
    NSMutableArray *_tableViewList;
    NSMutableArray *_itemDataList;
    NSMutableArray *_shareItemList;
    TBIMShareAvatarViewBar *_avatarBar;
    id <ShareItemDelegate> _defaultDataSource;
    id _questionInfo;
    NSMutableDictionary *_params;
    NSMutableArray *_tabArgs;
    TBNavigationParams *_navParams;
    struct CGPoint _lastOffset;
}

@property(retain, nonatomic) TBNavigationParams *navParams; // @synthesize navParams=_navParams;
@property(retain, nonatomic) NSMutableArray *tabArgs; // @synthesize tabArgs=_tabArgs;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) id questionInfo; // @synthesize questionInfo=_questionInfo;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
@property(nonatomic) _Bool isShowShareBar; // @synthesize isShowShareBar=_isShowShareBar;
@property(retain, nonatomic) id <ShareItemDelegate> defaultDataSource; // @synthesize defaultDataSource=_defaultDataSource;
@property(retain, nonatomic) TBIMShareAvatarViewBar *avatarBar; // @synthesize avatarBar=_avatarBar;
@property(retain, nonatomic) NSMutableArray *shareItemList; // @synthesize shareItemList=_shareItemList;
@property(retain, nonatomic) NSMutableArray *itemDataList; // @synthesize itemDataList=_itemDataList;
@property(retain, nonatomic) NSMutableArray *tableViewList; // @synthesize tableViewList=_tableViewList;
@property(retain, nonatomic) NSMutableArray *handlerList; // @synthesize handlerList=_handlerList;
@property(retain, nonatomic) NSMutableArray *otherDataList; // @synthesize otherDataList=_otherDataList;
@property(retain, nonatomic) NSMutableArray *isEndedList; // @synthesize isEndedList=_isEndedList;
@property(retain, nonatomic) NSMutableArray *timeStampList; // @synthesize timeStampList=_timeStampList;
@property(retain, nonatomic) NSMutableArray *emptyPromptList; // @synthesize emptyPromptList=_emptyPromptList;
@property(retain, nonatomic) NSMutableArray *userNeedIndexList; // @synthesize userNeedIndexList=_userNeedIndexList;
@property(retain, nonatomic) NSMutableArray *tabTexts; // @synthesize tabTexts=_tabTexts;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) TBIMShareTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) _Bool bShowUsePresent; // @synthesize bShowUsePresent=_bShowUsePresent;
@property(nonatomic) __weak id <ShareItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)maxCountForShow;
- (void)tapAvatarToDelete:(id)arg1 WithObject:(id)arg2;
- (void)tableView:(id)arg1 checkButtonTappedForRowWithIndexPath:(id)arg2;
- (int)maxCountForShare;
- (_Bool)didselectedItem:(id)arg1;
- (id)currentSelectedItems;
- (void)sendShare:(id)arg1 WithObjects:(id)arg2;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)loadMoreDataWithError:(id)arg1 data:(id)arg2 endMark:(id)arg3 otherData:(id)arg4 isDataEnd:(_Bool)arg5 atIndex:(int)arg6;
- (void)loadMoreAtIndex:(int)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onItemSelected:(unsigned long long)arg1 needUserTracek:(_Bool)arg2;
- (void)tapToSearch:(id)arg1;
- (void)setupTitleBar;
- (void)setDelegateParams:(id)arg1 defaultDic:(id)arg2;
- (void)setDelegateParams;
- (void)backItemClicked:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)getDataWithError:(id)arg1 data:(id)arg2 endMark:(id)arg3 otherData:(id)arg4 idDataEnd:(_Bool)arg5 atIndex:(int)arg6;
- (void)getDataAtIndex:(int)arg1;
- (void)getDataAtIndex:(int)arg1 withComplete:(CDUnknownBlockType)arg2;
- (void)getDataAtCurrentPage;
- (id)handlerAtIndex:(int)arg1;
- (void)initLists;
- (void)setTables;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "GroupVerifyMsgListCellDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GroupNotificationViewController, GroupVerifyMsgStructMsgModel, NSIndexPath, NSMutableArray, NSString, QQGroupSettingModel, QQRecentMessageModel, QQWaitingView, UIImageView, UILabel;

@interface GroupVerifyMsgListView : UITableView <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, GroupVerifyMsgListCellDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_groupDataSource;
    QQRecentMessageModel *_recentMsgModel;
    QQWaitingView *_waitView;
    _Bool _isFetchingData;
    _Bool _takeOverHistoryData;
    GroupNotificationViewController *_parentsViewController;
    UIImageView *_noGroupVerifyMsgImageView;
    UILabel *_noGroupVerifyMsgWarn;
    unsigned long long _unreadCount;
    QQGroupSettingModel *_groupModel;
    NSIndexPath *_deleteIndex;
    GroupVerifyMsgStructMsgModel *_currentChoosedGroupVerifyMsgModel;
}

@property(nonatomic) GroupNotificationViewController *parentsViewController; // @synthesize parentsViewController=_parentsViewController;
@property(retain, nonatomic) NSMutableArray *groupDataSource; // @synthesize groupDataSource=_groupDataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)checkMsgTypeForStyle:(id)arg1;
- (void)groupIconClicked:(id)arg1;
- (void)personalIconClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onGroopTroopInfoUpdated:(id)arg1;
- (void)actionBtnClicked:(id)arg1;
- (void)buttonBehaviorAboutGroupMsg:(id)arg1;
- (void)didGroupVerifyMsgRequestCell:(id)arg1;
- (void)setNoGroupVerifyMsgWarn;
- (void)checkShowNoGroupVerifyMsgWarn;
- (void)reloadData;
- (void)reloadData:(id)arg1 removePreData:(_Bool)arg2;
- (void)reloadHistoryData;
- (void)reloadNewData;
- (void)refreshMsgList;
- (void)ActionRequestAgreeSomebodyJoinToGroup:(id)arg1;
- (void)ActionRequestAgreeJoinToGroup:(id)arg1;
- (void)haveHistorySysMsg:(id)arg1;
- (void)onBackgroundReload:(id)arg1;
- (void)haveNewSysMsg:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)uploadEnterDetailLog:(id)arg1;
- (void)jumpToReAddGroupView:(id)arg1 showRefusedStr:(_Bool)arg2;
- (void)jumpToGroupSettingViewController:(id)arg1;
- (id)getActionTextByModel:(id)arg1;
- (void)getNextGroupItems;
- (void)setFootViewState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


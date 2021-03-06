//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FALiveSongSheetListModel, NSString, UILabel, UITableView, UIView, YYLabel;

@interface FALiveDidSingingView : FAPanGesView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showUpcoming;
    id <FALiveDidSingingViewDelegate> _delegate;
    UIView *_headView;
    UITableView *_tableView;
    UILabel *_titleLabel;
    YYLabel *_attractLabel;
    UIView *_statusView;
    FALiveSongSheetListModel *_songSheetList;
}

@property(retain, nonatomic) FALiveSongSheetListModel *songSheetList; // @synthesize songSheetList=_songSheetList;
@property(nonatomic) _Bool showUpcoming; // @synthesize showUpcoming=_showUpcoming;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) YYLabel *attractLabel; // @synthesize attractLabel=_attractLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak id <FALiveDidSingingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)userSupportSongWithInfo:(id)arg1;
- (void)refreshListData;
- (void)moreButtonClick:(id)arg1;
- (void)resetSubViewStatus;
- (void)resetStatusView:(id)arg1 showImg:(_Bool)arg2;
- (void)reloadAttractUserInfo;
- (void)reloadTipsTitleInfo;
- (void)startRefreshListData;
- (void)reloadSongSheetListModel:(id)arg1 error:(id)arg2;
- (void)layoutSubviews;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KMSingerSongsPageVC.h"

#import "RefreshControlDelegate.h"
#import "SingerAlbumCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGDefaultNetErrorView, KGRefreshController, KGTableView, NSString;

@interface KMSingerSongsAlbumVC : KMSingerSongsPageVC <UITableViewDataSource, UITableViewDelegate, SingerAlbumCellDelegate, RefreshControlDelegate>
{
    long long _enterType;
    KGTableView *_tableView;
    KGRefreshController *_refreshControl;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long enterType; // @synthesize enterType=_enterType;
- (void).cxx_destruct;
- (void)reloadDataNow;
- (void)selectSingerAlbumCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadingFinish;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)refreshAlbumContent;
- (void)getAlbumNextPage;
- (void)requestPageVCData;
- (void)requestAgain;
- (void)hideErrorView;
- (void)showErrorView;
- (void)addTableView;
- (void)viewDidEnter;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KKFileInfo, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface QLProjectClarityView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    id <QLMPClarityListViewDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_clarities;
    long long _selectedIndex;
    NSIndexPath *_selectedIndexPath;
    KKFileInfo *_selectedfileInfo;
}

@property(retain, nonatomic) KKFileInfo *selectedfileInfo; // @synthesize selectedfileInfo=_selectedfileInfo;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain) NSMutableArray *clarities; // @synthesize clarities=_clarities;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <QLMPClarityListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeVipClarity:(id)arg1;
- (void)scrollToCurrentItem;
- (void)loadClarities:(id)arg1;
- (long long)claritySize;
- (double)heightForCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dismissView:(id)arg1;
- (void)tableViewSelectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

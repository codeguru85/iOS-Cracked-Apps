//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ExploreChannelListViewDelegate.h"

@class ExploreChannelListView, NSDictionary, NSString, TTAlphaThemedButton;

@interface ExploreChannelListViewController : SSViewControllerBase <ExploreChannelListViewDelegate>
{
    NSDictionary *_params;
    NSDictionary *_baseCondition;
    ExploreChannelListView *_listView;
    TTAlphaThemedButton *_addFirstButton;
}

@property(retain, nonatomic) TTAlphaThemedButton *addFirstButton; // @synthesize addFirstButton=_addFirstButton;
@property(retain, nonatomic) ExploreChannelListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) NSDictionary *baseCondition; // @synthesize baseCondition=_baseCondition;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)titleForRightBarButtonItem;
- (void)addFirstPageButtonFired:(id)arg1;
- (void)listViewFinishRequest:(id)arg1 error:(id)arg2;
- (void)configAddFirstBarButton;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBaseCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


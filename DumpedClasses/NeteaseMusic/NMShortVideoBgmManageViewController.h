//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMScrollTableControllerDelegate.h"
#import "NMScrollableTabViewDelegate.h"
#import "NMShortVideoBgmListDelegate.h"
#import "NMShortVideoBgmTagListDelegate.h"

@class NMScrollTableController, NMShortVideoBgm, NMShortVideoBgmRequest, NSString;

@interface NMShortVideoBgmManageViewController : UIViewController <NMScrollableTabViewDelegate, NMScrollTableControllerDelegate, NMShortVideoBgmListDelegate, NMShortVideoBgmTagListDelegate, NMHttpRequestDelegate>
{
    unsigned long long _selectedIndex;
    double _preferredDuration;
    id <NMShortVideoBgmManageDelegate> _delegate;
    NMScrollTableController *_scrollTableController;
    NMShortVideoBgm *_selectedBgm;
    NMShortVideoBgmRequest *_bgmRequest;
}

@property(retain, nonatomic) NMShortVideoBgmRequest *bgmRequest; // @synthesize bgmRequest=_bgmRequest;
@property(retain, nonatomic) NMShortVideoBgm *selectedBgm; // @synthesize selectedBgm=_selectedBgm;
@property(retain, nonatomic) NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(nonatomic) __weak id <NMShortVideoBgmManageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredDuration; // @synthesize preferredDuration=_preferredDuration;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)requestCancelled:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)bgmTagListViewController:(id)arg1 didSelectBgmTag:(id)arg2;
- (void)bgmListViewController:(id)arg1 didPlayBgm:(id)arg2;
- (void)bgmListViewController:(id)arg1 didSelectBgm:(id)arg2;
- (void)scrollTableControllerSelectedControllerChanged:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)cancelAction:(id)arg1;
- (id)currentPage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


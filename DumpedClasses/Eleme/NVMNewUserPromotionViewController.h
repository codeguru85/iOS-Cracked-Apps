//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EMKNewUserGift, NSArray, NSString, NSURL, NVMPopUpTask, NVMTableView, UIImage, UIView;

@interface NVMNewUserPromotionViewController : NVMViewController <UITableViewDelegate, UITableViewDataSource>
{
    NVMPopUpTask *_popTask;
    NSURL *_promotionURL;
    UIImage *_backgroundImage;
    EMKNewUserGift *_userGifts;
    UIView *_backgroundView;
    UIView *_contentView;
    NVMTableView *_giftTableView;
    NSArray *_giftTableData;
}

+ (void)setNewUserClickedTakenButton:(_Bool)arg1;
+ (_Bool)newUserClickedTakenButton;
@property(retain, nonatomic) NSArray *giftTableData; // @synthesize giftTableData=_giftTableData;
@property(retain, nonatomic) NVMTableView *giftTableView; // @synthesize giftTableView=_giftTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) EMKNewUserGift *userGifts; // @synthesize userGifts=_userGifts;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSURL *promotionURL; // @synthesize promotionURL=_promotionURL;
@property(nonatomic) __weak NVMPopUpTask *popTask; // @synthesize popTask=_popTask;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)takeButtonDidPressed:(id)arg1;
- (void)closeButtonDidPressed:(id)arg1;
- (void)hideAnimation;
- (void)showAnimation;
@property(readonly, copy, nonatomic) NSString *oldUserHintText;
@property(readonly, nonatomic) unsigned long long giftStatus;
- (void)loadTableData;
- (id)preferredBackgroundImage;
- (void)loadContentView;
- (void)loadBackgroundView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


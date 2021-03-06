//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMBreakfastHomeTileViewDelegate.h"

@class NSDictionary, NVMBreakfastBuildingHistoryBean, NVMBreakfastCityBean, NVMBreakfastHomeTitleView, NVMBreakfastHomeViewController, NVMBreakfastHomeViewController1;

@interface NVMBreakfastContainViewController : NVMViewController <NVMBreakfastHomeTileViewDelegate>
{
    _Bool _isScroll;
    NSDictionary *_params;
    NVMBreakfastHomeTitleView *_titleView;
    NVMBreakfastHomeViewController *_oldHome;
    NVMBreakfastHomeViewController1 *_nowHome;
    NVMBreakfastCityBean *_cityBean;
    NVMBreakfastBuildingHistoryBean *_buildBean;
}

@property(retain, nonatomic) NVMBreakfastBuildingHistoryBean *buildBean; // @synthesize buildBean=_buildBean;
@property(retain, nonatomic) NVMBreakfastCityBean *cityBean; // @synthesize cityBean=_cityBean;
@property(retain, nonatomic) NVMBreakfastHomeViewController1 *nowHome; // @synthesize nowHome=_nowHome;
@property(retain, nonatomic) NVMBreakfastHomeViewController *oldHome; // @synthesize oldHome=_oldHome;
@property(retain, nonatomic) NVMBreakfastHomeTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool isScroll; // @synthesize isScroll=_isScroll;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)pushPostionChooseViewContrller;
- (void)pushPostionViewController;
- (void)NVMBreakfastHomeTitleViewDidTap:(id)arg1;
- (void)homeItemDidTap:(id)arg1;
- (void)customNavigationBar;
- (void)updateTitleView;
- (void)updateTitleLabel;
- (void)updateRecommendProducter:(id)arg1 isScrollToMenuDate:(_Bool)arg2;
- (void)loadDegrade:(id)arg1;
- (void)checkDegrade:(id)arg1;
- (void)createHomeViewController:(id)arg1;
- (void)loadCity:(id)arg1;
- (void)loadBuildingInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


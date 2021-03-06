//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class ESPQualityContainerViewController, ESPQualityRestaurantStoryView, ESPQualityRestaurantUXController, MASConstraint, NSString, NVMFoodIdentity, UIImageView, UIView;

@interface ESPQualityClipContainerViewController : NVMViewController
{
    MASConstraint *_containerTopConstraint;
    CDUnknownBlockType _clickButtonAction;
    ESPQualityRestaurantUXController *_uxController;
    ESPQualityContainerViewController *_containerController;
    ESPQualityRestaurantStoryView *_storyView;
    UIImageView *_backImageView;
    UIView *_bottomContainerView;
    MASConstraint *_storyTopConstraint;
    MASConstraint *_storyWidthConstraint;
    MASConstraint *_containerHeightConstraint;
    NSString *_restaurantID;
    NVMFoodIdentity *_targetFoodIdentity;
}

@property(retain, nonatomic) NVMFoodIdentity *targetFoodIdentity; // @synthesize targetFoodIdentity=_targetFoodIdentity;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(retain, nonatomic) MASConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
@property(retain, nonatomic) MASConstraint *storyWidthConstraint; // @synthesize storyWidthConstraint=_storyWidthConstraint;
@property(retain, nonatomic) MASConstraint *storyTopConstraint; // @synthesize storyTopConstraint=_storyTopConstraint;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) ESPQualityRestaurantStoryView *storyView; // @synthesize storyView=_storyView;
@property(retain, nonatomic) ESPQualityContainerViewController *containerController; // @synthesize containerController=_containerController;
@property(nonatomic) __weak ESPQualityRestaurantUXController *uxController; // @synthesize uxController=_uxController;
@property(copy, nonatomic) CDUnknownBlockType clickButtonAction; // @synthesize clickButtonAction=_clickButtonAction;
@property(retain, nonatomic) MASConstraint *containerTopConstraint; // @synthesize containerTopConstraint=_containerTopConstraint;
- (void).cxx_destruct;
- (id)backImages;
- (void)updateWithOffset:(double)arg1;
- (void)resetView;
- (void)updateWithCartContext:(id)arg1 coupon:(id)arg2 rebuyDescription:(id)arg3 boughtFoods:(id)arg4;
- (void)tapBackView;
- (void)viewDidLoad;
- (id)initWithRestaurantID:(id)arg1 targetFoodIdentity:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPRestaurant, ESPVirtualFood, ESPVirtualFoodToolBarController, NVMSeparatorView, UIButton, UIImageView, UITextView;

@interface ESPSimpleFoodPurchaseView : UIView
{
    ESPRestaurant *_restaurant;
    ESPVirtualFood *_food;
    CDUnknownBlockType _increaseFoodNumberAction;
    CDUnknownBlockType _decreaseFoodNumberAction;
    ESPVirtualFoodToolBarController *_foodToolBarController;
    UITextView *_priceTextView;
    NVMSeparatorView *_separatorView;
    UIButton *_displayTimeButton;
    UIImageView *_stockImageView;
}

@property(retain, nonatomic) UIImageView *stockImageView; // @synthesize stockImageView=_stockImageView;
@property(retain, nonatomic) UIButton *displayTimeButton; // @synthesize displayTimeButton=_displayTimeButton;
@property(retain, nonatomic) NVMSeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UITextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) ESPVirtualFoodToolBarController *foodToolBarController; // @synthesize foodToolBarController=_foodToolBarController;
@property(copy, nonatomic) CDUnknownBlockType decreaseFoodNumberAction; // @synthesize decreaseFoodNumberAction=_decreaseFoodNumberAction;
@property(copy, nonatomic) CDUnknownBlockType increaseFoodNumberAction; // @synthesize increaseFoodNumberAction=_increaseFoodNumberAction;
@property(retain, nonatomic) ESPVirtualFood *food; // @synthesize food=_food;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)priceVoiceOverDescription;
- (id)countVoiceOverDescription;
- (void)updateDisplayTime;
- (void)loadDisplayButton;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


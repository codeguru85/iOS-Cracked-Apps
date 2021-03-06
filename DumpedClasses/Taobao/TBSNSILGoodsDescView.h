//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, TBPriceTextView, TBSNSILModel, TBSNSShopTimeLineItem, UIButton;

@interface TBSNSILGoodsDescView : UIView
{
    TBPriceTextView *_priceView;
    CAGradientLayer *_gradient;
    UIButton *_detailBtn;
    UIButton *_notifyBtn;
    TBSNSILModel *_photoModel;
    TBSNSShopTimeLineItem *_timeLineItem;
}

@property(retain, nonatomic) TBSNSShopTimeLineItem *timeLineItem; // @synthesize timeLineItem=_timeLineItem;
@property(retain, nonatomic) TBSNSILModel *photoModel; // @synthesize photoModel=_photoModel;
@property(retain, nonatomic) UIButton *notifyBtn; // @synthesize notifyBtn=_notifyBtn;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) TBPriceTextView *priceView; // @synthesize priceView=_priceView;
- (void).cxx_destruct;
- (void)onNotifyBtnClicked;
- (void)jumpURL;
- (void)setPrice:(double)arg1;
- (void)updateNextPageUTParam;
- (void)postDismissNotfi;
- (_Bool)isPreNewNotifySet;
- (void)layoutSubviews;
- (void)setUpView;
- (id)initWithModel:(id)arg1 item:(id)arg2;

@end


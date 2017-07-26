//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class CTTrainLabel, TrainSeatInfoV3Model, UIButton, UIImageView, UILabel, UIView;

@interface CTTrainBookSectionHeaderView : UITableViewHeaderFooterView
{
    id <CTTrainBookSectionHeaderViewDelegate> _delegate;
    long long _section;
    UILabel *_seatNameLabel;
    CTTrainLabel *_priceLabel;
    UILabel *_remainingLabel;
    UIButton *_bookBtn;
    UIImageView *_arrowImgView;
    TrainSeatInfoV3Model *_seatInfoModel;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIButton *_fullBookBtn;
}

@property(retain, nonatomic) UIButton *fullBookBtn; // @synthesize fullBookBtn=_fullBookBtn;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) TrainSeatInfoV3Model *seatInfoModel; // @synthesize seatInfoModel=_seatInfoModel;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UIButton *bookBtn; // @synthesize bookBtn=_bookBtn;
@property(retain, nonatomic) UILabel *remainingLabel; // @synthesize remainingLabel=_remainingLabel;
@property(retain, nonatomic) CTTrainLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *seatNameLabel; // @synthesize seatNameLabel=_seatNameLabel;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <CTTrainBookSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateTopOffset:(double)arg1 topLineIsShow:(_Bool)arg2 andBottomOffset:(double)arg3 bottomLineIsShow:(_Bool)arg4;
- (void)bookAction:(id)arg1;
- (void)configHeaderView:(id)arg1 isStudent:(_Bool)arg2;
- (void)configHeaderView:(id)arg1 isForceClose:(_Bool)arg2 vendorTypeModel:(id)arg3;
- (double)priceLabelWidth;
- (id)initWithReuseIdentifier:(id)arg1;

@end

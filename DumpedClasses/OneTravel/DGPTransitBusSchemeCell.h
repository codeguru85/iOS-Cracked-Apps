//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPTransitResultBaseCell.h"

@class UILabel, UIView;

@interface DGPTransitBusSchemeCell : DGPTransitResultBaseCell
{
    UIView *_realTimeView;
    UIView *_lineView;
    UILabel *_tagLabel;
    UILabel *_titleLabel;
    UILabel *_arriveTimeLabel;
    UIView *_firstDotView;
    UILabel *_walkDistanceLabel;
    UIView *_secondDotView;
    UILabel *_costMoenyLabel;
}

@property(retain, nonatomic) UILabel *costMoenyLabel; // @synthesize costMoenyLabel=_costMoenyLabel;
@property(retain, nonatomic) UIView *secondDotView; // @synthesize secondDotView=_secondDotView;
@property(retain, nonatomic) UILabel *walkDistanceLabel; // @synthesize walkDistanceLabel=_walkDistanceLabel;
@property(retain, nonatomic) UIView *firstDotView; // @synthesize firstDotView=_firstDotView;
@property(retain, nonatomic) UILabel *arriveTimeLabel; // @synthesize arriveTimeLabel=_arriveTimeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *realTimeView; // @synthesize realTimeView=_realTimeView;
- (void).cxx_destruct;
- (void)refreshLayOutWithArray:(id)arg1;
- (void)configCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


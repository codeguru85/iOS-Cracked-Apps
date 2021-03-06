//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCOrderDetailModel, UIButton, UIImageView, UILabel;

@interface DRCOrderDetailPublicHorizontalView : UIView
{
    DRCOrderDetailModel *_detailModel;
    UIView *_separateLine;
    UILabel *_leftLbl;
    UILabel *_rightLbl;
    UIButton *_actionBtn;
    UIImageView *_indicatorIv;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *indicatorIv; // @synthesize indicatorIv=_indicatorIv;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *rightLbl; // @synthesize rightLbl=_rightLbl;
@property(retain, nonatomic) UILabel *leftLbl; // @synthesize leftLbl=_leftLbl;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) DRCOrderDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)makeConstrains;
- (id)initWithType:(unsigned long long)arg1;
- (void)queryIllegalinfo;
- (void)HorizontalTouchAction;

@end


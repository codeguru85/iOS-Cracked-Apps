//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCell.h"

@class NSMutableArray, ONEOperationCellFeeModel, UIImageView, UILabel;

@interface ONEOperationCellFee : ONEOperationCell
{
    ONEOperationCellFeeModel *_model;
    UILabel *_customTitleLabel;
    NSMutableArray *_iconArray;
    NSMutableArray *_tipArray;
    UIImageView *_loadingImageView;
}

@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) NSMutableArray *tipArray; // @synthesize tipArray=_tipArray;
@property(retain, nonatomic) NSMutableArray *iconArray; // @synthesize iconArray=_iconArray;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) ONEOperationCellFeeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)totalWidth;
- (id)setCustomTitleWithFee:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


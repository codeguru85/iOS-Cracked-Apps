//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CTTourLabel, CTTourPkgProductModel, NSLayoutConstraint, UIImageView, UILabel;

@interface CTTourPkgProductCell : UICollectionViewCell
{
    CTTourPkgProductModel *_cttourPkgProductModel;
    UIImageView *_themeImageView;
    CTTourLabel *_content;
    UILabel *_price;
    UILabel *_seatLabel;
    UILabel *_RMBLabel;
    NSLayoutConstraint *_lineheadSepate;
    NSLayoutConstraint *_lineBottomSepate;
    NSLayoutConstraint *_sepatorLineHeight;
}

+ (id)nib;
@property(nonatomic) __weak NSLayoutConstraint *sepatorLineHeight; // @synthesize sepatorLineHeight=_sepatorLineHeight;
@property(nonatomic) __weak NSLayoutConstraint *lineBottomSepate; // @synthesize lineBottomSepate=_lineBottomSepate;
@property(nonatomic) __weak NSLayoutConstraint *lineheadSepate; // @synthesize lineheadSepate=_lineheadSepate;
@property(nonatomic) __weak UILabel *RMBLabel; // @synthesize RMBLabel=_RMBLabel;
@property(nonatomic) __weak UILabel *seatLabel; // @synthesize seatLabel=_seatLabel;
@property(nonatomic) __weak UILabel *price; // @synthesize price=_price;
@property(nonatomic) __weak CTTourLabel *content; // @synthesize content=_content;
@property(nonatomic) __weak UIImageView *themeImageView; // @synthesize themeImageView=_themeImageView;
@property(retain, nonatomic) CTTourPkgProductModel *cttourPkgProductModel; // @synthesize cttourPkgProductModel=_cttourPkgProductModel;
- (void).cxx_destruct;
- (void)setSubViews;
- (void)awakeFromNib;

@end


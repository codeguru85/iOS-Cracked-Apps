//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface ALPFundManagerSectionHeaderCell : UITableViewCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_spline;
    UILabel *_subTitleLabel;
    NSString *_url;
    _Bool _hideSpline;
}

@property(nonatomic) _Bool hideSpline; // @synthesize hideSpline=_hideSpline;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateImage:(id)arg1 WithTitle:(id)arg2 withSubTitle:(id)arg3;
- (void)updateImage:(id)arg1 WithTitle:(id)arg2;
- (void)updateSubTitle:(id)arg1;
- (void)updateImageUrl:(id)arg1 WithTitle:(id)arg2 withSubTitle:(id)arg3;
- (void)updateImageUrl:(id)arg1 WithTitle:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

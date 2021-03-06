//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, FAOHAttributedLabel, UIImageView, UILabel;

@interface FAUserAlbumCommentTableViewCell : UITableViewCell
{
    CALayer *bottomLine;
    UIImageView *_avatarView;
    UILabel *_titleLab;
    UILabel *_dateLab;
    FAOHAttributedLabel *_contentLab;
}

+ (double)calculateCellHeightWithContent:(id)arg1;
@property(retain, nonatomic) FAOHAttributedLabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *dateLab; // @synthesize dateLab=_dateLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


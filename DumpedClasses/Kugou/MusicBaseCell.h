//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface MusicBaseCell : UITableViewCell
{
    double _separatorLineWidth;
    double _leftMargin;
    UIView *_bottomLineView;
}

+ (id)reusableIdentifier;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double separatorLineWidth; // @synthesize separatorLineWidth=_separatorLineWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onChangeTheme:(id)arg1;
- (void)setSepartorLineLeftMargin:(double)arg1 lineWidth:(double)arg2;
@property(nonatomic) _Bool hideSeparatorLine;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSelectView;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


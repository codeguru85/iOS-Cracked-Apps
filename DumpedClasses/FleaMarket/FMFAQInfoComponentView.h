//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMImageView, NSString, UILabel;

@interface FMFAQInfoComponentView : UITableViewCell <FMComponentCellProtocol>
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_tipsLabel;
    FMImageView *_tagIcon;
    FMImageView *_rightIcon;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) FMImageView *tagIcon; // @synthesize tagIcon=_tagIcon;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)updateConstraints;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


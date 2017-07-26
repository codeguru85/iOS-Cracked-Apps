//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQAsynUrlImageView, UIImage, UIImageView, UILabel;

@interface ITInterestPickerCell : UITableViewCell
{
    QQAsynUrlImageView *_iconImgView;
    UILabel *_nameLabel;
    UIImageView *_checkBoxView;
    _Bool _isChecked;
    int _xo;
    UIImage *_defaultImage;
    _Bool _bSetIconBorder;
}

- (void).cxx_destruct;
- (void)resetAccessibilityLabelText;
@property(nonatomic) _Bool isChecked; // @dynamic isChecked;
- (void)configCellWithData:(id)arg1 andType:(unsigned int)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImageView *checkBoxView; // @dynamic checkBoxView;
@property(retain, nonatomic) QQAsynUrlImageView *iconImgView; // @dynamic iconImgView;
@property(retain, nonatomic) UILabel *nameLabel; // @dynamic nameLabel;

@end

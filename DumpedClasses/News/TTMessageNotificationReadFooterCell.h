//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel;

@interface TTMessageNotificationReadFooterCell : SSThemedTableViewCell
{
    SSThemedLabel *_readLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) SSThemedLabel *readLabel; // @synthesize readLabel=_readLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


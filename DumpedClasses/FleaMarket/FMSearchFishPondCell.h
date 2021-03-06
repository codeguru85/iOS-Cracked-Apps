//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMImageView, NSString, UILabel, UIView;

@interface FMSearchFishPondCell : UITableViewCell <FMComponentCellProtocol>
{
    FMImageView *_imageView;
    UILabel *_pondName;
    UILabel *_subTitle;
    UILabel *_subTitle2;
    UILabel *_rightTitle;
    UIView *_bottomLine;
}

+ (double)rowHeightForComponent:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


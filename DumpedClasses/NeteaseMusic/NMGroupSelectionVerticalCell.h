//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMArtist, NMAvatarView, UIImageView, UILabel;

@interface NMGroupSelectionVerticalCell : NMCommonCell
{
    NMAvatarView *_avataView;
    UILabel *_nameLabel;
    UIImageView *_chosenLogo;
    NMArtist *_artist;
}

+ (double)height;
@property(retain, nonatomic) NMArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (void)setCurrentCellIsSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface NMDownloadRandomSectionView : UIView
{
    UILabel *_playLabel;
    UIImageView *_icon;
    UILabel *_totalLabel;
    id _delegate;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithSongCount:(long long)arg1;

@end


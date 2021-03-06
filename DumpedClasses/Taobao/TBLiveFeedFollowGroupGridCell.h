//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TBLiveFeedFollowModel, TBLiveLivingStatusView, UIImageView, UILabel, UIView;

@interface TBLiveFeedFollowGroupGridCell : UICollectionViewCell
{
    id <TBLiveFeedFollowGroupGridCellDelegate> _cellDelegate;
    UIImageView *_coverImageView;
    UIView *_blurView;
    UIView *_centerView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    TBLiveLivingStatusView *_statusView;
    UILabel *_emptyLabel;
    TBLiveFeedFollowModel *_followModel;
}

+ (id)reusableIdentify;
@property(retain, nonatomic) TBLiveFeedFollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) TBLiveLivingStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <TBLiveFeedFollowGroupGridCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)clickCell;
- (void)setUIElementsHidden:(_Bool)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


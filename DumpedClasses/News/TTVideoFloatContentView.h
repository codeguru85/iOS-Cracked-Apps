//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTCellView.h"

@class ExploreMovieView, SSThemedLabel, SSThemedView, TTIconLabel, TTImageInfosModel, TTImageView, TTVideoFloatActionButton, TTVideoFloatAvatar, TTVideoFloatCellEntity, TTVideoFloatFollowButton, UIButton, UIImageView, UIView;

@interface TTVideoFloatContentView : TTCellView
{
    TTIconLabel *_userName;
    TTVideoFloatAvatar *_userIcon;
    TTVideoFloatFollowButton *_followButton;
    TTImageView *_videoIcon;
    UIView *_videoIconBg;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_watchCountLabel;
    ExploreMovieView *_movieView;
    UIView *_movieContainer;
    SSThemedView *_line;
    TTImageInfosModel *_imageInfosModel;
    TTVideoFloatActionButton *_digg;
    TTVideoFloatActionButton *_burry;
    TTVideoFloatActionButton *_comment;
    TTVideoFloatActionButton *_share;
    UIView *_immerseMaskViewTop;
    UIView *_immerseMaskViewBottom;
    UIButton *_playButton;
    _Bool _isImmersed;
    UIImageView *_subscribeIndicator;
}

+ (double)cellHeightWithEntity:(id)arg1 indexPath:(id)arg2;
+ (id)imageInfoModelWithArticle:(id)arg1;
@property(retain, nonatomic) ExploreMovieView *movieView; // @synthesize movieView=_movieView;
@property(nonatomic) _Bool isImmersed; // @synthesize isImmersed=_isImmersed;
@property(retain, nonatomic) UIImageView *subscribeIndicator; // @synthesize subscribeIndicator=_subscribeIndicator;
- (void).cxx_destruct;
- (void)addMovieView:(id)arg1;
- (void)showPlayIcon:(_Bool)arg1;
- (void)showBackgroundImage:(_Bool)arg1;
- (void)removeMovieView;
- (void)unImmerseEffect;
- (void)unImmerseAll;
- (void)immerseAll;
- (void)unImmerseHalf;
- (void)immerseHalf;
- (void)layoutSubviews;
- (id)animationToView;
- (void)willBeginReuse;
- (id)contentInfo;
- (void)fillContent;
- (void)updateActionButtonsWithArticle:(id)arg1;
- (void)transformAnimationOnView:(id)arg1;
- (void)subscribe;
- (void)share;
- (void)bury;
- (void)getUserInfo;
- (void)digg;
- (void)comment;
- (void)play;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopIndicatorAnimating;
- (void)startIndicatorAnimating;
- (void)renderView;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TTVideoFloatCellEntity *cellEntity; // @dynamic cellEntity;

@end


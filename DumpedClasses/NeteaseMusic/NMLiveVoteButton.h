//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, OTCircleProgressView, UIButton, UIImageView, UILabel;

@interface NMLiveVoteButton : UIView
{
    UIImageView *_bgView;
    UIButton *_bgButton;
    UIView *_dimmView;
    UILabel *_countLabel;
    UIImageView *_countLabelBgView;
    unsigned long long _propCount;
    CDUnknownBlockType _callBack;
    OTCircleProgressView *_solidCircleProgressView;
    NSTimer *_timer;
    double _progress;
    _Bool _hasBorder;
    id <NMLiveVoteButtonDelegate> _delegate;
    double _freezeDuration;
    double _screenWidth;
}

@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) double freezeDuration; // @synthesize freezeDuration=_freezeDuration;
@property(nonatomic) __weak id <NMLiveVoteButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)_refreshPropCount:(unsigned long long)arg1;
- (void)changeProgress;
- (void)_progressFinished;
- (void)showFreezeAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setVoteCount:(unsigned long long)arg1;
- (void)liveVoteButtonTouchedCancel:(id)arg1;
- (void)liveVoteButtonTouchedUpOutside:(id)arg1;
- (void)liveVoteButtonTouchDown:(id)arg1;
- (void)liveVoteButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)handleNightMode:(id)arg1;
- (id)initWithBorder:(_Bool)arg1;

@end


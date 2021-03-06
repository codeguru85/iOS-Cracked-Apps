//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMDjProgram, UIButton, UIImageView, UILabel;

@interface NMDjRadioDetailTrailInnerView : UIView
{
    UIView *_topLine;
    UIView *_bottomLine;
    UILabel *_nameLabel;
    UIImageView *_praiseIconView;
    UILabel *_praiseLabel;
    UIImageView *_commentCntView;
    UILabel *_commentCntLabel;
    UIImageView *_playIconView;
    UILabel *_playLabel;
    UIButton *_bgButton;
    UIButton *_playBtn;
    UIImageView *_playingImageView;
    NMDjProgram *_program;
    id <NMDjRadioDetailTrailInnerViewDelegate> _delegate;
}

+ (double)heightForData:(id)arg1;
@property(nonatomic) __weak id <NMDjRadioDetailTrailInnerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMDjProgram *program; // @synthesize program=_program;
- (void).cxx_destruct;
- (void)hideTopLine:(_Bool)arg1;
- (void)playBtnClikced:(id)arg1;
- (void)layoutSubviews;
- (void)setNightMode:(id)arg1;
- (id)init;

@end


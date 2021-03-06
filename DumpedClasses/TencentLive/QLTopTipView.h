//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface QLTopTipView : UIView
{
    id <QLTopTipViewClickDelegate> _delegate;
    UIImageView *_topContainer;
    UIImageView *_starImgView;
    UILabel *_tipTextLbl;
    UIButton *_watchBtn;
    UIButton *_closeBtn;
    UIView *_tipView;
    UIView *_maskView;
    UITapGestureRecognizer *_maskViewGesture;
    UITapGestureRecognizer *_contenueGesture;
}

+ (void)updateTopViewCount;
+ (_Bool)isShowTopView;
@property(retain, nonatomic) UITapGestureRecognizer *contenueGesture; // @synthesize contenueGesture=_contenueGesture;
@property(retain, nonatomic) UITapGestureRecognizer *maskViewGesture; // @synthesize maskViewGesture=_maskViewGesture;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *watchBtn; // @synthesize watchBtn=_watchBtn;
@property(retain, nonatomic) UILabel *tipTextLbl; // @synthesize tipTextLbl=_tipTextLbl;
@property(retain, nonatomic) UIImageView *starImgView; // @synthesize starImgView=_starImgView;
@property(retain, nonatomic) UIImageView *topContainer; // @synthesize topContainer=_topContainer;
@property(nonatomic) id <QLTopTipViewClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapMaskView;
- (void)didCloseCurrentView:(id)arg1;
- (void)clickCloseBtn:(id)arg1;
- (void)clickWatchBtn:(id)arg1;
- (id)getMainWindow;
- (void)setShowInfos:(id)arg1 buttonInfo:(id)arg2;
- (void)updateFrames;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


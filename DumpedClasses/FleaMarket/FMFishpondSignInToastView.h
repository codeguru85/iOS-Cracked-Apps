//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FMFishpondSignInToastView : UIView
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_iconImageView;
    UILabel *_scoreLabel;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


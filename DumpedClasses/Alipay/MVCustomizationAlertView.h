//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView;

@interface MVCustomizationAlertView : UIView
{
    CDUnknownBlockType _didClickJumpBtnBlock;
    CDUnknownBlockType _didClickCloseBtnBlock;
    UIImageView *_bgImageView;
    UIButton *_jumpButton;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType didClickCloseBtnBlock; // @synthesize didClickCloseBtnBlock=_didClickCloseBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickJumpBtnBlock; // @synthesize didClickJumpBtnBlock=_didClickJumpBtnBlock;
- (void).cxx_destruct;
- (void)didClickCloseBtn:(id)arg1;
- (void)didClickJumpBtnBlock:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


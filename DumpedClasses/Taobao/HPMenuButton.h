//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HPGlowImageView, HPMenuItem, UILabel;

@interface HPMenuButton : UIView
{
    CDUnknownBlockType _didSelctedItemCompleted;
    HPGlowImageView *_iconImageView;
    UILabel *_titleLabel;
    HPMenuItem *_menuItem;
}

@property(retain, nonatomic) HPMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HPGlowImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType didSelctedItemCompleted; // @synthesize didSelctedItemCompleted=_didSelctedItemCompleted;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)disMissCompleted:(CDUnknownBlockType)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 menuItem:(id)arg2;

@end


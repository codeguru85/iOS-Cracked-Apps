//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface PopUpTipsView : UIView
{
    UIImageView *_popUpBgImgV;
    UILabel *_lblWording;
    NSString *_tipsMessage;
    struct CGPoint _presentPoint;
}

@property(retain, nonatomic) NSString *tipsMessage; // @synthesize tipsMessage=_tipsMessage;
@property(nonatomic) struct CGPoint presentPoint; // @synthesize presentPoint=_presentPoint;
- (void)showPopUpTipsInView:(id)arg1 animated:(_Bool)arg2;
- (void)hidePopUpTips:(_Bool)arg1;
- (void)dealloc;
- (void)p_handleTipsTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


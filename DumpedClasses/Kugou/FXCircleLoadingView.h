//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FXCircleLoadingView : UIView
{
    UIImageView *_processBgView;
    UILabel *_tipLabel;
    CDUnknownBlockType _loadingDoneCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType loadingDoneCallBack; // @synthesize loadingDoneCallBack=_loadingDoneCallBack;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *processBgView; // @synthesize processBgView=_processBgView;
- (void).cxx_destruct;
- (void)setAttributedContent:(id)arg1;
- (void)stopRotateAnimation;
- (void)startRotateAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end


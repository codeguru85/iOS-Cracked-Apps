//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage;

@interface EMJCameraMaskView : UIView
{
    UIImage *_centerImage;
    UIColor *_backgroundFillColor;
    double _centerImageScale;
    struct CGRect _centerImageRect;
}

@property(nonatomic) struct CGRect centerImageRect; // @synthesize centerImageRect=_centerImageRect;
@property(nonatomic) double centerImageScale; // @synthesize centerImageScale=_centerImageScale;
@property(retain, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


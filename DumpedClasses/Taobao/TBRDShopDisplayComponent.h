//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class UIImageView, UILabel;

@interface TBRDShopDisplayComponent : TBCBaseComponent
{
    UIImageView *_ivIcon;
    UIImageView *_ivStar;
    UILabel *_lbTilte;
}

+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) UILabel *lbTilte; // @synthesize lbTilte=_lbTilte;
@property(retain, nonatomic) UIImageView *ivStar; // @synthesize ivStar=_ivStar;
@property(retain, nonatomic) UIImageView *ivIcon; // @synthesize ivIcon=_ivIcon;
- (void).cxx_destruct;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


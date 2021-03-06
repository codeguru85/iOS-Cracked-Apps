//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface H5CoolLoadingView : UIView
{
    NSString *_appName;
    NSString *_appIcon;
    NSString *_bgColor;
    NSString *_themeColor;
    UIImageView *_appIconImage;
    UIView *_dotL;
    UIView *_dotR;
    UILabel *_appNameLabel;
}

@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIView *dotR; // @synthesize dotR=_dotR;
@property(retain, nonatomic) UIView *dotL; // @synthesize dotL=_dotL;
@property(retain, nonatomic) UIImageView *appIconImage; // @synthesize appIconImage=_appIconImage;
@property(copy, nonatomic) NSString *themeColor; // @synthesize themeColor=_themeColor;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DCShareLocationPushMessageView : UIView
{
    UIImageView *_profileImageView;
    UILabel *_textLabel;
    UIImageView *_arrowImage;
}

+ (id)pushIMMessage:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (void)initStyle;
- (void)updateProfileImage:(id)arg1;
- (void)updateIMMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


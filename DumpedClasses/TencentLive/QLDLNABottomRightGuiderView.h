//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLSImageView, UIButton, UILabel;

@interface QLDLNABottomRightGuiderView : UIView
{
    QLSImageView *_quicktodlnaImge;
    UILabel *_textLabel;
    id <QLBottomRightDelegate> _delegate;
    UIButton *_tvButton;
}

@property(retain, nonatomic) UIButton *tvButton; // @synthesize tvButton=_tvButton;
@property(nonatomic) id <QLBottomRightDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)blingblingButton;
- (void)clickTvButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


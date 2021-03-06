//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface _SGFMListRightActionArea : UIView
{
    _Bool _showActionArrow;
    int _status;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
    CDUnknownBlockType _touchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool showActionArrow; // @synthesize showActionArrow=_showActionArrow;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


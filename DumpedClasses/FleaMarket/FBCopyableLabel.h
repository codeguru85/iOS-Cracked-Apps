//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UILongPressGestureRecognizer;

@interface FBCopyableLabel : UILabel
{
    _Bool _copyingEnabled;
    id <FBCopyableLabelDelegate> _copyableLabelDelegate;
    long long _copyMenuArrowDirection;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) long long copyMenuArrowDirection; // @synthesize copyMenuArrowDirection=_copyMenuArrowDirection;
@property(nonatomic) __weak id <FBCopyableLabelDelegate> copyableLabelDelegate; // @synthesize copyableLabelDelegate=_copyableLabelDelegate;
@property(nonatomic) _Bool copyingEnabled; // @synthesize copyingEnabled=_copyingEnabled;
- (void).cxx_destruct;
- (void)ccopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)longPressGestureRecognized:(id)arg1;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

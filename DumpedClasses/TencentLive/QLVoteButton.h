//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface QLVoteButton : UIButton
{
    _Bool _isVote;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool isVote; // @synthesize isVote=_isVote;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


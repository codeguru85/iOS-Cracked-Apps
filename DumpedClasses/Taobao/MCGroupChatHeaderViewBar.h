//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface MCGroupChatHeaderViewBar : UIView
{
    id <MCGroupChatNavigationBarDelegate> _delegate;
    NSArray *_barButtonVOList;
    NSMutableArray *_buttonList;
}

@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(retain, nonatomic) NSArray *barButtonVOList; // @synthesize barButtonVOList=_barButtonVOList;
@property(nonatomic) __weak id <MCGroupChatNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBackgroundColor:(double)arg1;
- (void)midAction:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction;
- (id)initWithBarButtonVOList:(id)arg1 showRightICON:(_Bool)arg2;

@end


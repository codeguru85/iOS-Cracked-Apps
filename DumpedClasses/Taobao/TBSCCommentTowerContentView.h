//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBSCAttributedLabel, TBSCCommentItem, UILabel, UITapGestureRecognizer;

@interface TBSCCommentTowerContentView : UIView
{
    UILabel *nameLabel;
    UILabel *floorLabel;
    TBSCAttributedLabel *aLabel;
    UITapGestureRecognizer *tap;
    id <TBSCCommentTowerContentViewDelegate> _delegate;
    TBSCCommentItem *_item;
}

@property(retain, nonatomic) TBSCCommentItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <TBSCCommentTowerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)setUpView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBHCElevatorHeaderScrollViewDelegate.h"

@class NSString, TBHCElevatorHeaderScrollView, UIImageView;

@interface TBHCElevatorHeaderBar : UIView <TBHCElevatorHeaderScrollViewDelegate>
{
    _Bool _classifyExtend;
    id <TBHCElevatorHeaderBarDelegate> _delegate;
    TBHCElevatorHeaderScrollView *_headerScrollView;
    UIView *_classifyBtnView;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *classifyBtnView; // @synthesize classifyBtnView=_classifyBtnView;
@property(retain, nonatomic) TBHCElevatorHeaderScrollView *headerScrollView; // @synthesize headerScrollView=_headerScrollView;
@property(nonatomic) id <TBHCElevatorHeaderBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeCategoryWithIndex:(unsigned long long)arg1;
- (void)classify:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (void)setPreSelectedIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataArr:(id)arg2 HeaderViewBackgroundColor:(id)arg3 TextColor:(id)arg4 TextHighlightedColor:(id)arg5 SelectItem:(unsigned long long)arg6;
- (struct CGRect)rtclassifyBtnFrame:(struct CGRect)arg1;
- (struct CGRect)headerScrollViewFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


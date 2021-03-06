//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CTMessageCoverView : UIView <UIGestureRecognizerDelegate>
{
    id <CTMessageCoverViewDelegate> _delegate;
    UITapGestureRecognizer *_singleTapGuesture;
    UITapGestureRecognizer *_doubleTapGuesture;
    UILongPressGestureRecognizer *_longPressGuesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGuesture; // @synthesize longPressGuesture=_longPressGuesture;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGuesture; // @synthesize doubleTapGuesture=_doubleTapGuesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGuesture; // @synthesize singleTapGuesture=_singleTapGuesture;
@property(nonatomic) __weak id <CTMessageCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleLongPressEvent:(id)arg1;
- (void)handleDoubleTapEvent:(id)arg1;
- (void)handleSingleTapEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


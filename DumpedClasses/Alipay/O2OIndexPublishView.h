//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "O2OMaskViewCancleDelegate.h"

@class NSString, O2OIndexPublishMaskView, UIImageView, UIViewController;

@interface O2OIndexPublishView : UIView <O2OMaskViewCancleDelegate>
{
    _Bool _isOpening;
    UIViewController *_viewController;
    O2OIndexPublishMaskView *_publishMaskView;
    UIImageView *_ovalView;
}

@property(retain, nonatomic) UIImageView *ovalView; // @synthesize ovalView=_ovalView;
@property(retain, nonatomic) O2OIndexPublishMaskView *publishMaskView; // @synthesize publishMaskView=_publishMaskView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
- (void).cxx_destruct;
- (void)cancelMaskView;
- (void)tap;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SharePlatView;

@interface shareLayoutContainer : UIView
{
    CDUnknownBlockType _shareSelectTypeHandler;
    SharePlatView *_widget;
    UIView *_allback;
}

@property(retain) UIView *allback; // @synthesize allback=_allback;
@property(retain) SharePlatView *widget; // @synthesize widget=_widget;
@property(copy, nonatomic) CDUnknownBlockType shareSelectTypeHandler; // @synthesize shareSelectTypeHandler=_shareSelectTypeHandler;
- (void).cxx_destruct;
- (void)unshow;
- (void)show;
- (void)backGroundClicked:(id)arg1;
- (void)setPlatCollection:(_Bool)arg1;
- (id)init;

@end


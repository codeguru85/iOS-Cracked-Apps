//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OTFrameObservingView.h"

@interface NMMVView : OTFrameObservingView
{
    id <NMMVViewDelegate> _touchDelegate;
}

@property(nonatomic) id <NMMVViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


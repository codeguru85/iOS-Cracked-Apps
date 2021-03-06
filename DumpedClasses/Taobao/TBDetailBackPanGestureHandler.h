//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPanGestureRecognizer, UIView;

@interface TBDetailBackPanGestureHandler : NSObject
{
    double beginPanX;
    double beginPanY;
    double ratio;
    struct CGRect originalFrame;
    int _direction;
    id <TBDetailBackPanGestureDelegate> _delegate;
    UIView *_parentView;
    UIView *_handleView;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) __weak UIView *handleView; // @synthesize handleView=_handleView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) __weak id <TBDetailBackPanGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCoordinatePos:(struct CGPoint)arg1;
- (double)getCoordinatePos;
- (void)leaveFromParentView;
- (void)leaveParentView;
- (void)aboutToLeave:(struct CGPoint)arg1;
- (void)trueAboutToLeave:(double)arg1 ref:(double)arg2;
- (struct CGPoint)distanceFrom:(struct CGPoint)arg1;
- (void)handleDetailPan:(id)arg1;
- (id)initWithView:(id)arg1 parentView:(id)arg2;

@end


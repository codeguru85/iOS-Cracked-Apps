//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

@interface MAPointAnnotation : MAShape
{
    _Bool _lockedToScreen;
    struct CLLocationCoordinate2D _coordinate;
    struct CGPoint _lockedScreenPoint;
}

@property(nonatomic) struct CGPoint lockedScreenPoint; // @synthesize lockedScreenPoint=_lockedScreenPoint;
@property(nonatomic, getter=isLockedToScreen) _Bool lockedToScreen; // @synthesize lockedToScreen=_lockedToScreen;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)updateCoordinateWithMapview:(id)arg1;

@end

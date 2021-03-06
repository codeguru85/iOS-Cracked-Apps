//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAMultiPoint.h"

#import "MAOverlay.h"

@class NSString;

@interface MAPolyline : MAMultiPoint <MAOverlay>
{
}

+ (id)polylineWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
- (id)initWithWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) struct MAMapRect boundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end


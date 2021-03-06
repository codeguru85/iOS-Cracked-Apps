//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface CCLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    id <CCLocationManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <CCLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (id)errorWithCode:(long long)arg1;
- (void)stopLocation;
- (void)startLocation;
- (void)startLocationWithDistance:(double)arg1;
- (void)startLocationWithDistance:(double)arg1 accuracy:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


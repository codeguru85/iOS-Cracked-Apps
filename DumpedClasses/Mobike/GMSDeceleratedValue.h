//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GMSDeceleratedValue : NSObject
{
    float _velocity;
    float _acceleration;
    float _initialValue;
    float _min;
    float _max;
    float _totalTime;
    float _maxTime;
    float _damping;
    float _value;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
- (_Bool)tickWithDelta:(float)arg1;
- (id)initWithValue:(float)arg1 runTime:(float)arg2 velocity:(float)arg3 damping:(float)arg4 absoluteMin:(float)arg5 absoluteMax:(float)arg6;

@end


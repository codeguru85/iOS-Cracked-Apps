//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppMonitorMeasureValueSet, NSMutableArray;

@interface AppMonitorEntity : NSObject
{
    int lock;
    NSMutableArray *_measureValuesArray;
    _Bool _isDetail;
    long long _count;
    long long _noise;
    AppMonitorMeasureValueSet *_measureValues;
}

@property _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;
@property long long noise; // @synthesize noise=_noise;
@property long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)getMeasureValuesArray;
- (void)merge:(id)arg1 metric:(id)arg2;
- (void)incrNoise;
- (void)incrCount;
- (id)init;

@end


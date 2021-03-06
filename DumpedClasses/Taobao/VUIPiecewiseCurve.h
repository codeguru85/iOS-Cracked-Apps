//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIACurve.h"

@class NSMutableArray;

@interface VUIPiecewiseCurve : VUIACurve
{
    float _mLength;
    NSMutableArray *_mCurves;
}

@property(nonatomic) float mLength; // @synthesize mLength=_mLength;
@property(retain, nonatomic) NSMutableArray *mCurves; // @synthesize mCurves=_mCurves;
- (void).cxx_destruct;
- (id)getCurrentPoint:(id)arg1 t:(float)arg2;
- (int)findCurveIndexByLength:(float)arg1;
- (float)getCurveLengthBeforeIndex:(int)arg1;
- (id)initWithCurves:(id)arg1;

@end


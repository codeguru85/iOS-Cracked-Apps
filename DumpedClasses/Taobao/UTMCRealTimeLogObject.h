//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTMCLogObject.h"

@interface UTMCRealTimeLogObject : UTMCLogObject
{
    double _validTimeInterval;
    long long _tp;
}

@property(nonatomic) long long tp; // @synthesize tp=_tp;
@property(nonatomic) double validTimeInterval; // @synthesize validTimeInterval=_validTimeInterval;
- (id)description;
- (id)initWithLog:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTFlightCommonDataCenter : NSObject
{
    NSString *_departCityCode;
    NSString *_arriveCityCode;
}

+ (id)sharedInstrance;
@property(copy, nonatomic) NSString *arriveCityCode; // @synthesize arriveCityCode=_arriveCityCode;
@property(copy, nonatomic) NSString *departCityCode; // @synthesize departCityCode=_departCityCode;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BaseDistrictInfoModel : CTBusinessBean
{
    int districtId;
    int cityId;
    NSString *districtName;
    _Bool isInChina;
    NSString *coverImg;
    _Bool isCountry;
}

@property(nonatomic) _Bool isCountry; // @synthesize isCountry;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg;
@property(nonatomic) _Bool isInChina; // @synthesize isInChina;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName;
@property(nonatomic) int cityId; // @synthesize cityId;
@property(nonatomic) int districtId; // @synthesize districtId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DestinationDBUtil : NSObject
{
}

+ (id)getUserinfoWithUserIDAndCacheAndKey:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3;
+ (_Bool)updateUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3 itemValue:(id)arg4;
+ (_Bool)addUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3 itemValue:(id)arg4;
+ (id)getItemValueWithUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3;
+ (_Bool)cleanCitySearchHistoryForDest:(int)arg1;
+ (void)insertQueryHistoryOfCity:(int)arg1 CTDestCityModel:(id)arg2;
+ (id)getQueryHistoryOfCity:(int)arg1 WithDBType:(int)arg2;
+ (id)getQueryHistoryOfCity:(int)arg1;

@end


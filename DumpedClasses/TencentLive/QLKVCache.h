//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QLKVCache : NSObject
{
    NSMutableDictionary *_cacheDict;
    double _LastSaveTime;
}

+ (id)sharedInstance;
@property(nonatomic) double LastSaveTime; // @synthesize LastSaveTime=_LastSaveTime;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (void).cxx_destruct;
- (void)clearCache;
- (id)getCacheIDWith:(id)arg1 withClientKey:(id)arg2;
- (void)saveString:(id)arg1 withCacheID:(id)arg2;
- (void)saveDouble:(double)arg1 withCacheID:(id)arg2;
- (void)saveInt:(int)arg1 withCacheID:(id)arg2;
- (void)saveValue:(id)arg1 withCacheID:(id)arg2;
- (void)protectClear;
- (id)getStringWithCacheID:(id)arg1;
- (double)getDoubleWithCacheID:(id)arg1;
- (int)getIntWithCacheID:(id)arg1;
- (id)getNumObjWithCacheID:(id)arg1;
- (void)writeToCacheProtect;
- (void)writeToCache;
- (void)readFromCache;
- (void)dealloc;
- (id)init;

@end


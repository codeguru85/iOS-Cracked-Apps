//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSCache, NSDate, NSDictionary, NSFileManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, TBFastImageCache;

@interface SDImageCache : NSObject <NSCacheDelegate>
{
    NSRecursiveLock *_lock;
    int _metadataVersion;
    NSFileManager *_fileManager;
    _Bool _shouldDecompressImages;
    _Bool _cleanDiskShouldStop;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
    NSCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_homePageCachePath;
    NSString *_festivalCachePath;
    NSMutableDictionary *_levelModelDict;
    NSMutableDictionary *_md5ImageKeyDict;
    NSDictionary *_moduleCacheLevelRule;
    unsigned long long _maxHomePageCacheSize;
    unsigned long long _maxFestivalCacheSize;
    unsigned long long _maxWatchCacheSize;
    NSDate *_lastCleanTime;
    TBFastImageCache *_fastCache;
}

+ (id)sharedImageCache;
@property(retain, nonatomic) TBFastImageCache *fastCache; // @synthesize fastCache=_fastCache;
@property(retain, nonatomic) NSDate *lastCleanTime; // @synthesize lastCleanTime=_lastCleanTime;
@property(nonatomic) unsigned long long maxWatchCacheSize; // @synthesize maxWatchCacheSize=_maxWatchCacheSize;
@property(nonatomic) unsigned long long maxFestivalCacheSize; // @synthesize maxFestivalCacheSize=_maxFestivalCacheSize;
@property(nonatomic) unsigned long long maxHomePageCacheSize; // @synthesize maxHomePageCacheSize=_maxHomePageCacheSize;
@property(nonatomic) _Bool cleanDiskShouldStop; // @synthesize cleanDiskShouldStop=_cleanDiskShouldStop;
@property(retain, nonatomic) NSDictionary *moduleCacheLevelRule; // @synthesize moduleCacheLevelRule=_moduleCacheLevelRule;
@property(retain, nonatomic) NSMutableDictionary *md5ImageKeyDict; // @synthesize md5ImageKeyDict=_md5ImageKeyDict;
@property(retain, nonatomic) NSMutableDictionary *levelModelDict; // @synthesize levelModelDict=_levelModelDict;
@property(retain, nonatomic) NSString *festivalCachePath; // @synthesize festivalCachePath=_festivalCachePath;
@property(retain, nonatomic) NSString *homePageCachePath; // @synthesize homePageCachePath=_homePageCachePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;
- (void)flushMetaData;
- (long long)hitCacheTypeWithBaseURL:(id)arg1 requireInfo:(id)arg2 mergedDict:(id)arg3;
- (id)getPlaceHolder:(id)arg1 fullUrl:(id)arg2 baseUrl:(id)arg3 extParam:(id)arg4;
- (id)getScaleToSmallImage:(id)arg1 fullUrl:(id)arg2 baseUrl:(id)arg3 width:(long long)arg4 height:(long long)arg5 extParam:(id)arg6;
- (long long)getDiskCacheLimit:(id)arg1;
- (_Bool)isOfflineCache:(id)arg1;
- (id)getModuleCachePathRule;
- (id)getCachePath:(id)arg1 moduleName:(id)arg2;
- (id)getCachePath:(id)arg1;
- (id)levelModelFilePath;
- (void)saveImageLevelModel;
- (void)cleanLevelModel;
- (void)removeImageLevelModelSizeForMD5:(id)arg1;
- (void)addImageLevelModelSizeForKey:(id)arg1 fileName:(id)arg2 imageInfo:(id)arg3;
- (id)getImageLevelModelSizeForKey:(id)arg1;
- (long long)getImageLevelIndexCount;
- (void)setupLevelModel;
- (unsigned long long)maxCostByPhoneRAM;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)getDiskCount;
- (unsigned long long)getSize;
- (void)backgroundCleanDisk;
- (void)backgroundCleanDiskWithSwitch;
- (void)cleanDiskWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanDisk;
- (void)clearDiskOnCompletion:(CDUnknownBlockType)arg1;
- (void)clearDisk;
- (void)clearMemory;
- (unsigned long long)maxMemoryCost;
- (void)setMaxMemoryCost:(unsigned long long)arg1;
- (void)removeImageForKey:(id)arg1 module:(id)arg2 fromDisk:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeImageForKey:(id)arg1;
- (id)queryDiskCacheForKey:(id)arg1 needPlaceHolder:(_Bool)arg2 options:(unsigned long long)arg3 extParam:(id)arg4 done:(CDUnknownBlockType)arg5;
- (id)queryDiskCacheForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)diskImageForKey:(id)arg1 needSmallCopy:(_Bool)arg2 needPlaceHolder:(_Bool)arg3 extParam:(id)arg4;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1 extParam:(id)arg2;
- (id)diskImageDataBySearchingAllPathsForMD5:(id)arg1 key:(id)arg2 extParam:(id)arg3;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (id)imageFromDiskCacheForKey:(id)arg1 needSmallCopy:(_Bool)arg2 extParam:(id)arg3;
- (id)imageFromDiskCacheForKey:(id)arg1 needSmallCopy:(_Bool)arg2;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (void)putMemCache:(id)arg1 forKey:(id)arg2;
- (id)imageFromMemoryCacheForKey:(id)arg1 cacheType:(int *)arg2;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (void)diskImageExistsWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)diskImageExistsWithKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 options:(long long)arg5 toDisk:(_Bool)arg6 extParam:(id)arg7;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 toDisk:(_Bool)arg5;
- (id)cachedFileNameForKey:(id)arg1;
- (id)defaultCachePathForKey:(id)arg1;
- (void)removeCacheFileWithBaseURL:(id)arg1;
- (id)cachePathForMd5FileName:(id)arg1 inPath:(id)arg2;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)stopCleanDisk;
- (void)addReadOnlyCachePath:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

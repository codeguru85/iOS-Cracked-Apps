//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLCacheFileInfoItem : NSObject
{
    NSString *_uniqueid;
    NSString *_file_path;
    long long _file_type;
    NSString *_file_size;
    double _download_time;
    double _max_cache_duration;
}

@property(nonatomic) double max_cache_duration; // @synthesize max_cache_duration=_max_cache_duration;
@property(nonatomic) double download_time; // @synthesize download_time=_download_time;
@property(retain, nonatomic) NSString *file_size; // @synthesize file_size=_file_size;
@property(nonatomic) long long file_type; // @synthesize file_type=_file_type;
@property(retain, nonatomic) NSString *file_path; // @synthesize file_path=_file_path;
@property(retain, nonatomic) NSString *uniqueid; // @synthesize uniqueid=_uniqueid;
- (void).cxx_destruct;
- (id)initWithUniqueid:(id)arg1 filePath:(id)arg2 fileType:(long long)arg3 fileSize:(id)arg4 downloadTime:(double)arg5 maxCacheDuration:(double)arg6;

@end


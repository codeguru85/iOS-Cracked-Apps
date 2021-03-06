//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSessionDownloadTask;

@interface TTCanvasBundleManager : NSObject
{
    NSURLSessionDownloadTask *_downloadTask;
}

+ (id)RNVersion;
+ (id)localVersion;
+ (id)fallbackSourceURL;
+ (id)bundleURL;
+ (void)downloadIfNeeded:(id)arg1 version:(id)arg2 md5:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
- (void).cxx_destruct;
- (void)monitorTrack:(id)arg1 fileMD5:(id)arg2;
- (id)md5:(id)arg1;
- (_Bool)isZipFileMD5EqualTo:(id)arg1;
- (id)bundleVersion;
- (void)deleteAllBundles;
- (_Bool)isBundleCached;
- (id)bundlePath;
- (id)bundleFolder;
- (void)downloadBundle:(id)arg1 version:(id)arg2 md5:(id)arg3;

@end


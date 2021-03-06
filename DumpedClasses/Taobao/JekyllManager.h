//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JekyllCache, JekyllDownloader, NSMutableArray;

@interface JekyllManager : NSObject
{
    JekyllCache *_jekyllCache;
    JekyllDownloader *_jekyllDownloader;
    NSMutableArray *_runningOperations;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(readonly, nonatomic) JekyllDownloader *jekyllDownloader; // @synthesize jekyllDownloader=_jekyllDownloader;
@property(readonly, nonatomic) JekyllCache *jekyllCache; // @synthesize jekyllCache=_jekyllCache;
- (void).cxx_destruct;
- (void)removeOperationFromRunningOperations:(id)arg1;
- (void)addOperaiton2RunningOperations:(id)arg1;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)init;

@end


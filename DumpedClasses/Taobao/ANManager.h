//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface ANManager : NSObject
{
    long long _networkStatus;
    NSSet *_autoRetryErrorNames;
    NSMutableSet *_validRequests;
    NSMutableDictionary *_pluginDictionary;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *pluginDictionary; // @synthesize pluginDictionary=_pluginDictionary;
@property(retain, nonatomic) NSMutableSet *validRequests; // @synthesize validRequests=_validRequests;
@property(copy, nonatomic) NSSet *autoRetryErrorNames; // @synthesize autoRetryErrorNames=_autoRetryErrorNames;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void).cxx_destruct;
- (_Bool)canHandleRequest:(id)arg1;
- (void)registerPlugin:(id)arg1 forType:(id)arg2;
- (void)handleUnknownRequest:(id)arg1;
- (void)handleUnknownResponseWithRequest:(id)arg1;
- (void)handleNoNetworkWithRequest:(id)arg1;
- (_Bool)shouldRetryRequest:(id)arg1 error:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)cancelAllRequestsWithUnimportance:(_Bool)arg1;
- (void)cancelRequests:(id)arg1;
- (void)retryRequest:(id)arg1;
- (void)enqueueWithRequest:(id)arg1;
- (void)reachabilityDidChanged:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)init;

@end

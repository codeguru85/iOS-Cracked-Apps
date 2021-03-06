//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface XMPPSRVResolver : NSObject
{
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSObject<OS_dispatch_queue> *resolverQueue;
    void *resolverQueueTag;
    NSString *srvName;
    double timeout;
    _Bool resolveInProgress;
    NSMutableArray *results;
    struct _DNSServiceRef_t *sdRef;
    int sdFd;
    NSObject<OS_dispatch_source> *sdReadSource;
    NSObject<OS_dispatch_source> *timeoutTimer;
}

+ (id)srvNameFromXMPPDomain:(id)arg1;
- (void).cxx_destruct;
- (void)stop;
- (void)startWithSRVName:(id)arg1 timeout:(double)arg2;
- (id)processRecord:(const void *)arg1 length:(unsigned short)arg2;
- (void)failWithDNSError:(int)arg1;
- (void)failWithError:(id)arg1;
- (void)succeed;
- (void)sortResults;
@property(readonly) double timeout; // @dynamic timeout;
@property(readonly) NSString *srvName; // @dynamic srvName;
- (void)dealloc;
- (id)initWithdDelegate:(id)arg1 delegateQueue:(id)arg2 resolverQueue:(id)arg3;

@end


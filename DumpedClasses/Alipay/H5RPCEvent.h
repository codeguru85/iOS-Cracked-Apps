//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDEvent.h"

@class NSDictionary;

@interface H5RPCEvent : PSDEvent
{
    NSDictionary *_responseHeader;
}

+ (id)rpcFinishedEvent;
@property(retain, nonatomic) NSDictionary *responseHeader; // @synthesize responseHeader=_responseHeader;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ErrorHandlerManager : NSObject
{
    id <ErrorHandler> _defaultHandler;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_hhandlers;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (unsigned short)handle:(id)arg1;
- (id)registerHttpHandler:(int)arg1 handler:(id)arg2;
- (id)registerHandler:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (id)init;

@end


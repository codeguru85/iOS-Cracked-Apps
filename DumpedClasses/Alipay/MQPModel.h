//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSDictionary, NSMutableDictionary;

@interface MQPModel : NSProxy
{
    NSMutableDictionary *_innerDict;
}

@property(retain, nonatomic) NSMutableDictionary *innerDict; // @synthesize innerDict=_innerDict;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)setterProperty:(SEL)arg1;
- (id)getterProperty:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;

@end


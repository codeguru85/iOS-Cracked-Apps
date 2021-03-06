//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSNumber, NSString;

@interface AMPSessionInfoUpdate : AMPDataUpdate
{
    NSString *_ccode;
    NSNumber *_isRemind;
    NSNumber *_isATRemind;
    NSNumber *_isManagerRemind;
    NSString *_remindType;
}

@property(copy, nonatomic) NSString *remindType; // @synthesize remindType=_remindType;
@property(copy, nonatomic) NSNumber *isManagerRemind; // @synthesize isManagerRemind=_isManagerRemind;
@property(copy, nonatomic) NSNumber *isATRemind; // @synthesize isATRemind=_isATRemind;
@property(copy, nonatomic) NSNumber *isRemind; // @synthesize isRemind=_isRemind;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (void)dbUpdateAfterNet:(id)arg1;
- (void)memoryUpdateAfterNet:(id)arg1;
- (id)generatePacket;
- (id)initWithSessionId:(id)arg1;

@end


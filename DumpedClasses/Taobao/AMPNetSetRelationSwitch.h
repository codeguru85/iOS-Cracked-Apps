//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPNetSetRelationSwitch : AMPNetPacket
{
    _Bool _value;
    NSString *_key;
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithCongif:(id)arg1 value:(_Bool)arg2;

@end


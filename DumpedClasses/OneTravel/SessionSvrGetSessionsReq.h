//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt64Array;

@interface SessionSvrGetSessionsReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt64Array *sidArray; // @dynamic sidArray;
@property(readonly, nonatomic) unsigned long long sidArray_Count; // @dynamic sidArray_Count;

@end


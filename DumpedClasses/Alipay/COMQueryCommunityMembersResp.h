//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface COMQueryCommunityMembersResp : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) int currentPageNum; // @dynamic currentPageNum;
@property(nonatomic) _Bool end; // @dynamic end;
@property(readonly) _Bool hasCurrentPageNum; // @dynamic hasCurrentPageNum;
@property(readonly) _Bool hasEnd; // @dynamic hasEnd;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSArray *members; // @dynamic members;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(retain, nonatomic) NSString *resultStatus; // @dynamic resultStatus;
@property(nonatomic) long long version; // @dynamic version;

@end

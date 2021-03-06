//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMArtistListRequest : NMBaseRequest
{
    unsigned long long _limit;
    unsigned long long _offset;
    long long _categoryCode;
    long long _initial;
}

@property(readonly, nonatomic) long long categoryCode; // @synthesize categoryCode=_categoryCode;
@property(readonly, nonatomic) long long initial; // @synthesize initial=_initial;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)initWithCategoryCode:(long long)arg1 initial:(long long)arg2 Limit:(unsigned long long)arg3 offset:(unsigned long long)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailSellOut : TBJSONModel
{
    _Bool _reserved;
    long long _sellOutStatus;
    long long _activityId;
    long long _reservedModuleId;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long reservedModuleId; // @synthesize reservedModuleId=_reservedModuleId;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(nonatomic) _Bool reserved; // @synthesize reserved=_reserved;
@property(nonatomic) long long sellOutStatus; // @synthesize sellOutStatus=_sellOutStatus;
- (void).cxx_destruct;

@end

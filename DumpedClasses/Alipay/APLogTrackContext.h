//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface APLogTrackContext : NSObject
{
    _Bool _needRpc;
    NSString *_abTestInfo;
    NSString *_entityId;
    NSString *_spmId;
    NSString *_level;
    NSString *_bizType;
    NSString *_xPath;
    NSDictionary *_param;
    NSArray *_params;
}

+ (void)filterContext:(id)arg1;
@property(copy) NSArray *params; // @synthesize params=_params;
@property _Bool needRpc; // @synthesize needRpc=_needRpc;
@property(retain) NSDictionary *param; // @synthesize param=_param;
@property(copy) NSString *xPath; // @synthesize xPath=_xPath;
@property(copy) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy) NSString *level; // @synthesize level=_level;
@property(copy) NSString *spmId; // @synthesize spmId=_spmId;
@property(copy) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy) NSString *abTestInfo; // @synthesize abTestInfo=_abTestInfo;
- (void).cxx_destruct;

@end


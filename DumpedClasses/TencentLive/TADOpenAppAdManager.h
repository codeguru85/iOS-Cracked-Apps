//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TADOpenAppAdManager : NSObject
{
    NSMutableDictionary *_infoMap;
    NSString *_token;
    long long _outdateTimeInterval;
}

+ (id)shareInstance;
@property(nonatomic) long long outdateTimeInterval; // @synthesize outdateTimeInterval=_outdateTimeInterval;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableDictionary *infoMap; // @synthesize infoMap=_infoMap;
- (void).cxx_destruct;
- (void)_appWillResignActiveNotification:(id)arg1;
- (_Bool)_checkShouldOpenAppEnable:(id)arg1 openUrlStr:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updeteOpenSuccessInfoMapWith:(id)arg1;
- (void)_updeteRejectInfoMapWith:(id)arg1;
- (void)openAppURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkShouldOpenAppWithVideoOrderParametersEnable:(id)arg1 openUrlStr:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)checkShouldOpenAppWithNoVideoOrderParametersEnable:(id)arg1 openUrlStr:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

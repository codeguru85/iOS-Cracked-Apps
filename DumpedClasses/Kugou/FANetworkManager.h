//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FANetworkManager : NSObject
{
}

+ (id)shareInstance;
- (id)bytesToKB:(long long)arg1;
- (id)getNetworkFlow;
- (long long)currentStatus;
- (_Bool)isNeedSpeedTest;
- (void)testSpeed:(CDUnknownBlockType)arg1;

@end


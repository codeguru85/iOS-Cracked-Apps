//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseInfo.h"

@class NSString;

@interface aluDeviceTokenSignInfo : aluBaseInfo
{
    NSString *_t;
    NSString *_useDeviceToken;
    NSString *_deviceTokenKey;
    NSString *_deviceTokenSign;
}

@property(copy, nonatomic) NSString *deviceTokenSign; // @synthesize deviceTokenSign=_deviceTokenSign;
@property(copy, nonatomic) NSString *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy, nonatomic) NSString *useDeviceToken; // @synthesize useDeviceToken=_useDeviceToken;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
- (void).cxx_destruct;

@end

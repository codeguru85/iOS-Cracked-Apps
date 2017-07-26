//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLPlayerVideoInfo : NSObject
{
    NSString *_uip;
    long long _testid;
    long long _dltype;
    long long _fmt;
    long long _rate;
    long long _clip;
    long long _status;
    long long _type;
    double _duration;
    NSString *_vid;
    long long _cdnid;
    NSString *_cid;
}

@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long cdnid; // @synthesize cdnid=_cdnid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long clip; // @synthesize clip=_clip;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long fmt; // @synthesize fmt=_fmt;
@property(nonatomic) long long dltype; // @synthesize dltype=_dltype;
@property(nonatomic) long long testid; // @synthesize testid=_testid;
@property(copy, nonatomic) NSString *uip; // @synthesize uip=_uip;
- (void).cxx_destruct;
- (id)playerVideoDictInfo;

@end

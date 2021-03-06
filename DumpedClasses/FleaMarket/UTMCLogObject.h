//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface UTMCLogObject : NSObject
{
    int _rowID;
    NSString *_eventID;
    NSString *_priority;
    NSData *_content;
    long long _time;
    NSString *_arg1MD5;
}

@property(copy, nonatomic) NSString *arg1MD5; // @synthesize arg1MD5=_arg1MD5;
@property(readonly, nonatomic) int rowID; // @synthesize rowID=_rowID;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)description;
- (void)setRowIDValue:(id)arg1;

@end


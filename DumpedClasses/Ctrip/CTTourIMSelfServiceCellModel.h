//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CTTourIMSelfServiceCellModel : NSObject
{
    _Bool _isNeedTimeStamp;
    NSString *_timeStampString;
    NSString *_avatarUrl;
    long long _selfServerType;
    NSString *_serviceCellText;
    NSArray *_questionArray;
}

@property(retain, nonatomic) NSArray *questionArray; // @synthesize questionArray=_questionArray;
@property(copy, nonatomic) NSString *serviceCellText; // @synthesize serviceCellText=_serviceCellText;
@property(nonatomic) long long selfServerType; // @synthesize selfServerType=_selfServerType;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *timeStampString; // @synthesize timeStampString=_timeStampString;
@property(nonatomic) _Bool isNeedTimeStamp; // @synthesize isNeedTimeStamp=_isNeedTimeStamp;
- (void).cxx_destruct;

@end


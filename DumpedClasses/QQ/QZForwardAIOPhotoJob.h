//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseJob.h"

@class NSString, QZJQunQuotePhotoUniversalReq;

@interface QZForwardAIOPhotoJob : QZBaseJob
{
}

+ (id)operationWithJob:(id)arg1;
- (_Bool)persistent;

// Remaining properties
@property(copy, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) QZJQunQuotePhotoUniversalReq *request; // @dynamic request;
@property(copy, nonatomic) NSString *requestCommand; // @dynamic requestCommand;

@end

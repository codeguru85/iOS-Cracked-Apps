//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@interface NVMUGCServiceFoodCamera : NVMHTTPRequestData
{
    long long _imageSize;
    double _startTimeStamp;
}

@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) long long imageSize; // @synthesize imageSize=_imageSize;
- (id)extraParameters;
- (id)init;

@end


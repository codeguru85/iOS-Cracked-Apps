//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTXReachability;

@interface GTXReachabilityManager : NSObject
{
    GTXReachability *_reachability;
}

+ (_Bool)shouldUpload;
+ (id)manager;
@property(retain, nonatomic) GTXReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (id)init;

@end

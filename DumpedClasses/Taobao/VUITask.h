//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBlockOperation;

@interface VUITask : NSObject
{
    double _executeTime;
    NSBlockOperation *_operation;
}

@property(retain, nonatomic) NSBlockOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) double executeTime; // @synthesize executeTime=_executeTime;
- (void).cxx_destruct;
- (void)run;
- (id)initWithOperation:(CDUnknownBlockType)arg1 executeTime:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDynamicActionDO, NSString;

@interface FMCallAPIReturnDO : NSObject
{
    _Bool _result;
    NSString *_msg;
    FMDynamicActionDO *_action;
}

@property(retain, nonatomic) FMDynamicActionDO *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;

@end


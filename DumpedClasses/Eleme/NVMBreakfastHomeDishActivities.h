//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface NVMBreakfastHomeDishActivities : NSObject
{
    _Bool _showLable;
    long long _id;
    long long _type;
    long long _userscope;
    long long _effectiveScope;
    NSMutableArray *_dishes;
    NSMutableArray *_discountDishIds;
    NSString *_ruleLbelcolor;
    long long _priority;
    NSString *_ruleFileUrl;
}

@property(retain, nonatomic) NSString *ruleFileUrl; // @synthesize ruleFileUrl=_ruleFileUrl;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool showLable; // @synthesize showLable=_showLable;
@property(retain, nonatomic) NSString *ruleLbelcolor; // @synthesize ruleLbelcolor=_ruleLbelcolor;
@property(retain, nonatomic) NSMutableArray *discountDishIds; // @synthesize discountDishIds=_discountDishIds;
@property(retain, nonatomic) NSMutableArray *dishes; // @synthesize dishes=_dishes;
@property(nonatomic) long long effectiveScope; // @synthesize effectiveScope=_effectiveScope;
@property(nonatomic) long long userscope; // @synthesize userscope=_userscope;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end


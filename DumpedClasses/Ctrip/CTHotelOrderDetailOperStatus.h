//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelOrderDetailOperStatus : NSObject
{
    _Bool _enable;
    _Bool _isHighLight;
    NSString *_title;
    SEL _clickSel;
    unsigned long long _tag;
}

@property(nonatomic) _Bool isHighLight; // @synthesize isHighLight=_isHighLight;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) SEL clickSel; // @synthesize clickSel=_clickSel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSeckillBusinessModel : NSObject
{
    NSString *_itemId;
    NSString *_seckillStart;
    NSString *_skuId;
    NSString *_quantity;
    NSString *_userId;
    NSString *_eventToken;
}

@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *seckillStart; // @synthesize seckillStart=_seckillStart;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isValidBusinessModel;

@end


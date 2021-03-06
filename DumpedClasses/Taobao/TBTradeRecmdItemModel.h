//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TBTradeRecmdItemModel.h"

@class NSDictionary, NSMutableArray<TBTradeRecmdItemTagModel>, NSString;

@interface TBTradeRecmdItemModel : NSObject <TBTradeRecmdItemModel, NSCopying>
{
    long long _index;
    NSDictionary *_data;
    NSMutableArray<TBTradeRecmdItemTagModel> *_tags;
}

@property(retain, nonatomic) NSMutableArray<TBTradeRecmdItemTagModel> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tpId;
- (_Bool)sku;
- (id)reason;
- (id)labels;
- (id)labelList;
- (id)logFieldMap;
- (id)extMap;
- (id)triggerItem;
- (id)marketPrice;
- (id)normalPrice;
- (id)targetUrl;
- (id)picUrl;
- (id)itemId;
- (id)title;
- (unsigned long long)type;
- (id)initWithData:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


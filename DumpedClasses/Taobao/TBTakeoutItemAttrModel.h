//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutItemAttrModel : TBJSONModel
{
    NSString *_attrType;
    NSString *_desc;
    NSString *_icon;
    NSString *_sortId;
}

@property(retain, nonatomic) NSString *sortId; // @synthesize sortId=_sortId;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *attrType; // @synthesize attrType=_attrType;
- (void).cxx_destruct;

@end


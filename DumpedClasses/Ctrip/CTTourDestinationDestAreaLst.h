//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CTTourDestinationMenuBaseObject, NSArray, NSString;

@interface CTTourDestinationDestAreaLst : NSObject <NSCoding, NSCopying>
{
    CTTourDestinationMenuBaseObject *_areaName;
    NSArray *_destKey;
    NSString *_img;
    NSString *_url;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *img; // @synthesize img=_img;
@property(retain) NSArray *destKey; // @synthesize destKey=_destKey;
@property(retain) CTTourDestinationMenuBaseObject *areaName; // @synthesize areaName=_areaName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


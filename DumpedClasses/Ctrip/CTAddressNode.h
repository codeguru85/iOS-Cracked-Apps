//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CustomerAddressItemModel.h"

#import "NSCopying.h"

@interface CTAddressNode : CustomerAddressItemModel <NSCopying>
{
    _Bool isSelected;
    _Bool _isAvailable;
    _Bool _disavailablePostCode;
}

+ (id)findAddressByID:(int)arg1;
+ (id)nodeWithModel:(id)arg1;
@property(nonatomic) _Bool disavailablePostCode; // @synthesize disavailablePostCode=_disavailablePostCode;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected;
- (id)checkInputInfo:(_Bool)arg1 checkRegionDetail:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setRecipient:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setFlag:(int)arg1;
- (id)init;

@end

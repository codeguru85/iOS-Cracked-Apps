//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NVMCartExtraIcon;

@interface NVMCartExtra : NVMModel
{
    _Bool _isInvalid;
    long long _extraId;
    NSString *_name;
    NSString *_content;
    double _price;
    unsigned long long _quantity;
    NVMCartExtraIcon *_activityIcon;
    unsigned long long _extraType;
    double _orginalPrice;
    long long _type;
    long long _categoryId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double orginalPrice; // @synthesize orginalPrice=_orginalPrice;
@property(nonatomic) unsigned long long extraType; // @synthesize extraType=_extraType;
@property(copy, nonatomic) NVMCartExtraIcon *activityIcon; // @synthesize activityIcon=_activityIcon;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long extraId; // @synthesize extraId=_extraId;
- (void).cxx_destruct;
- (id)quantityString;
- (id)currentTotalPriceString;
- (id)totalString;
- (double)currentTotalPrice;
- (double)originalTotal;
- (double)total;
- (_Bool)hasIcon;
- (_Bool)hasContent;
- (id)nvm_attributedName;
- (id)nvm_attributedGiftName;
- (id)nvm_attributedQuantity;
- (id)nvm_attributedOrginalTotal;
- (id)nvm_attributedcurrentTotal;
- (id)nvm_attributedTotal;
- (id)nvm_attributedContent;

@end

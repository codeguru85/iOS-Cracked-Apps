//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOpRedGiftModel : CTBusinessBean
{
    int _giftAmount;
    long long _giftId;
    NSString *_giftName;
    NSString *_giftImage;
    NSString *_gfitImageLarge;
    double _price;
    NSString *_giftDesc;
}

@property(copy, nonatomic) NSString *giftDesc; // @synthesize giftDesc=_giftDesc;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *gfitImageLarge; // @synthesize gfitImageLarge=_gfitImageLarge;
@property(copy, nonatomic) NSString *giftImage; // @synthesize giftImage=_giftImage;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) int giftAmount; // @synthesize giftAmount=_giftAmount;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


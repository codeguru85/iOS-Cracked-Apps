//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelCurrencyCodeSortModel : CTBusinessBean
{
    int _sort;
    NSString *_currencyCode;
}

@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) int sort; // @synthesize sort=_sort;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


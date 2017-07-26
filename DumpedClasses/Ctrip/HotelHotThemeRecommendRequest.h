//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, RequestHead;

@interface HotelHotThemeRecommendRequest : CTBusinessBean
{
    int _cityID;
    int _countryID;
    RequestHead *_head;
    NSString *_position;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(nonatomic) int countryID; // @synthesize countryID=_countryID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

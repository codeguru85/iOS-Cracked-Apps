//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString<Optional>;

@interface TTUserEditInfoItemResponseModel : TTResponseModel
{
    NSString<Optional> *_province;
    NSString<Optional> *_area;
    NSString<Optional> *_gender;
    NSString<Optional> *_birthday;
}

@property(copy, nonatomic) NSString<Optional> *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString<Optional> *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString<Optional> *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString<Optional> *province; // @synthesize province=_province;
- (void).cxx_destruct;

@end


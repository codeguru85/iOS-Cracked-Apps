//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AllianceEntityModel, HotelFavorSearchSetting, NSString, RequestHead;

@interface HotelFavorListSearchV2Request : CTBusinessBean
{
    int _serviceVersion;
    RequestHead *_head;
    NSString *_clientEnvironmentInfo;
    HotelFavorSearchSetting *_favorSearchSetting;
    AllianceEntityModel *_allianceInfo;
}

@property(retain, nonatomic) AllianceEntityModel *allianceInfo; // @synthesize allianceInfo=_allianceInfo;
@property(retain, nonatomic) HotelFavorSearchSetting *favorSearchSetting; // @synthesize favorSearchSetting=_favorSearchSetting;
@property(copy, nonatomic) NSString *clientEnvironmentInfo; // @synthesize clientEnvironmentInfo=_clientEnvironmentInfo;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainTransferListSearchRequest : CTBusinessBean
{
    int serviceVersion;
    NSString *departStation;
    NSString *arriveStation;
    NSString *departDate;
    int pageId;
    NSString *transferStations;
}

@property(copy, nonatomic) NSString *transferStations; // @synthesize transferStations;
@property(nonatomic) int pageId; // @synthesize pageId;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end


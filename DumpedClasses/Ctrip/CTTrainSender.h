//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTTrainSender : CTSender
{
}

+ (void)getSeatListForTimeSpecialHost:(id)arg1 allDepartStation:(id)arg2 allArriveStation:(id)arg3 timeLine:(id)arg4 trainTypes:(id)arg5 departDate:(id)arg6 reportBlock:(CDUnknownBlockType)arg7;
+ (void)getTrainResultBannerHost:(id)arg1 reportBlock:(CDUnknownBlockType)arg2;
+ (void)getTrainNoticeHost:(id)arg1 reportBlock:(CDUnknownBlockType)arg2;
+ (void)getOtherRecommendLableHost:(id)arg1 enteranceCodes:(id)arg2 reportBlock:(CDUnknownBlockType)arg3;
+ (id)FastDeliverServiceWithHost:(id)arg1 departureDateTime:(id)arg2 departureStationName:(id)arg3 arriveStationName:(id)arg4 deliverJLFlag:(_Bool)arg5 reportBlock:(CDUnknownBlockType)arg6;
+ (id)getPayRequestIDWithHost:(id)arg1 reportBlock:(CDUnknownBlockType)arg2;
+ (void)qiangTicketWithHost:(id)arg1 orderID:(long long)arg2 passengerID:(long long)arg3 reportBlock:(CDUnknownBlockType)arg4;
+ (void)querySchool:(id)arg1 byProvinceCode:(id)arg2 resportBlock:(CDUnknownBlockType)arg3;
+ (void)queryAllCity:(id)arg1 resportBlock:(CDUnknownBlockType)arg2;
+ (void)checkNewGuestHost:(id)arg1 reportBlock:(CDUnknownBlockType)arg2;
+ (void)runCommandWithHost:(id)arg1 command:(id)arg2 requestSerialization:(id)arg3;
+ (void)runJSONCommandWithHost:(id)arg1 command:(id)arg2 requestSerialization:(id)arg3;
+ (void)runJSONCommandWithHost:(id)arg1 command:(id)arg2;
+ (void)runCommandWithHost:(id)arg1 command:(id)arg2;
+ (id)buildSOAHead;
+ (id)buildSOAUrlWithCode:(id)arg1 action:(id)arg2;
+ (id)errorResultWithReportBlock:(CDUnknownBlockType)arg1 message:(id)arg2;
+ (id)getServerUrl;
+ (id)getServerDomainUrl;
+ (void)changeServerTo:(id)arg1;

@end

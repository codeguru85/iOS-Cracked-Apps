//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionRequestMiddleware.h"

@class GDMDarenTaoKeJieSuanRequest, NSMutableDictionary, NSString;

@interface GDMDarenTaoKeJieSuanURLActionRequestMiddleware : NSObject <TBURLActionRequestMiddleware>
{
    GDMDarenTaoKeJieSuanRequest *_request;
    NSString *_apiName;
    NSString *_matchedUrl;
    NSMutableDictionary *_userTrackParamsMuDic;
}

+ (void)delayToOpenUrl:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *userTrackParamsMuDic; // @synthesize userTrackParamsMuDic=_userTrackParamsMuDic;
@property(retain, nonatomic) NSString *matchedUrl; // @synthesize matchedUrl=_matchedUrl;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) GDMDarenTaoKeJieSuanRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cacheParam:(id)arg1 FromDic:(id)arg2;
- (_Bool)isTargetUrl:(id)arg1 MatchedUrl:(id)arg2;
- (void)onRequestDidFailLoadWithError:(id)arg1;
- (id)dealJiesuanUrlWithTarUrlReq:(id)arg1;
- (void)alertShowString:(id)arg1;
- (void)dealAccountHomeUrlWithTarUrlReq:(id)arg1;
- (void)dealfeedDetailUrlWithTarUrlReq:(id)arg1;
- (void)dealYouHaoHuoUrlWithTarUrlReq:(id)arg1;
- (void)taoKeJieSuan:(id)arg1;
- (id)processURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


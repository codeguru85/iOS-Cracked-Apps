//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSString, QLASIHTTPRequest, QLJCEONAPosterTitle, QLJCEShareItem;

@interface QLHollywoodGiftCheckModel : QLRequestModel
{
    _Bool _canGive;
    int _errCode;
    int _leftNum;
    NSString *_cid;
    NSString *_vid;
    NSString *_lid;
    NSString *_pid;
    unsigned long long _type;
    NSString *_errMsg;
    NSString *_dataKey;
    QLJCEShareItem *_shareItem;
    QLJCEONAPosterTitle *_tips;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(nonatomic) _Bool canGive; // @synthesize canGive=_canGive;
@property(retain, nonatomic) QLJCEONAPosterTitle *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) QLJCEShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(nonatomic) int leftNum; // @synthesize leftNum=_leftNum;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUploadPacket.h"

@class QZJFileUploadUploadVideoInfoReq;

@interface QZUploadVideo : QZUploadPacket
{
    long long sourceRefer;
    QZJFileUploadUploadVideoInfoReq *_videoInfoReq;
}

@property(retain, nonatomic) QZJFileUploadUploadVideoInfoReq *videoInfoReq; // @synthesize videoInfoReq=_videoInfoReq;
@property(nonatomic) long long sourceRefer; // @synthesize sourceRefer;
- (void).cxx_destruct;
- (id)ipMgrKey;
- (id)appidName;
- (id)packetRespWithRspData:(id)arg1;
- (_Bool)useSHAForCheckSum;
- (id)sliceUploadAppId;
- (id)getControlDataWithError:(id *)arg1;
- (id)generateDescription;
- (id)init;

@end

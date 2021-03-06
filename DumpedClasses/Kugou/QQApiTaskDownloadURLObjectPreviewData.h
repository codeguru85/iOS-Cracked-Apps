//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiTask.h"

#import "TencentRequestDelegate.h"

@class NSString, QQApiMessage, TencentRequest;

@interface QQApiTaskDownloadURLObjectPreviewData : QQApiTask <TencentRequestDelegate>
{
    TencentRequest *_request;
    QQApiMessage *_urlMsg;
}

@property(retain, nonatomic) TencentRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) QQApiMessage *urlMsg; // @synthesize urlMsg=_urlMsg;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoadRawResponse:(id)arg2;
- (void)resendShareMessage;
- (void)onTimeout;
- (void)main;
- (id)initWithURLMessage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


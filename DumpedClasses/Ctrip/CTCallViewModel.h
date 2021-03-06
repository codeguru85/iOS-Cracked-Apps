//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTCallViewModel : NSObject
{
    _Bool _channel;
    _Bool _isCallOverseas;
    _Bool _needDTMF;
    _Bool _voipFail;
    NSString *_callNumber;
    NSString *_businessDTMFString;
    NSString *_businessCode;
    NSString *_pageID;
    NSString *_channelDTMFString;
}

@property(nonatomic) _Bool voipFail; // @synthesize voipFail=_voipFail;
@property(readonly, nonatomic, getter=isNeedDTMF) _Bool needDTMF; // @synthesize needDTMF=_needDTMF;
@property(nonatomic) _Bool isCallOverseas; // @synthesize isCallOverseas=_isCallOverseas;
@property(readonly, nonatomic, getter=isChannel) _Bool channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) NSString *channelDTMFString; // @synthesize channelDTMFString=_channelDTMFString;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(readonly, copy, nonatomic) NSString *businessCode; // @synthesize businessCode=_businessCode;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *callNumber; // @synthesize callNumber=_callNumber;
@property(readonly, copy, nonatomic) NSString *businessDTMFString; // @synthesize businessDTMFString=_businessDTMFString;
@property(readonly, copy, nonatomic) NSString *dtmfString;
- (id)initWithDirectCallNumber:(id)arg1 businessCode:(id)arg2 pageID:(id)arg3;
- (id)initWithCallNumber:(id)arg1 businessCode:(id)arg2 pageID:(id)arg3;

@end


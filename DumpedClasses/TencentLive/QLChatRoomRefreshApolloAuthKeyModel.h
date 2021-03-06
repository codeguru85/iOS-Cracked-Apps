//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLASIHTTPDelegate.h"

@class NSString, QLASIHTTPRequest;

@interface QLChatRoomRefreshApolloAuthKeyModel : NSObject <QLASIHTTPDelegate>
{
    NSString *_sessionID;
    QLASIHTTPRequest *_dataRequest;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)notifyError:(id)arg1;
- (id)webAppDownloadError:(id)arg1 code:(long long)arg2;
- (void)loadAuthKey:(CDUnknownBlockType)arg1;
- (void)cancelDataRequest;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


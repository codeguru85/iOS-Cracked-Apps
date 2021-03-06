//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBuyQueryProtocol.h"

@class NSString, TBSDKMTOPServer;

@interface FFBuyQueryServices : NSObject <TBBuyQueryProtocol>
{
    TBSDKMTOPServer *server;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)showErrorCode;
- (void)queryWithApiName:(id)arg1 version:(id)arg2 domain:(id)arg3 params:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 extra:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


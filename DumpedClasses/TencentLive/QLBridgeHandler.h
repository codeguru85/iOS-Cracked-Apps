//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QLWebViewJavascriptBridge;

@interface QLBridgeHandler : NSObject
{
    QLWebViewJavascriptBridge *_jsBridge;
    NSMutableArray *_jsHandlerNames;
    id <QLBridgeHandlerDelegate><NSObject> _delegate;
}

+ (_Bool)checkDownloadWhiteBlackList:(id)arg1;
+ (_Bool)checkOpenURLWhiteList:(id)arg1;
+ (void)cleanMapTable;
@property(nonatomic) __weak id <QLBridgeHandlerDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *jsHandlerNames; // @synthesize jsHandlerNames=_jsHandlerNames;
@property(retain, nonatomic) QLWebViewJavascriptBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
- (void).cxx_destruct;
- (_Bool)handlerIsValid:(id)arg1;
- (id)responseObject:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (id)responseObject:(id)arg1 handlerName:(id)arg2;
- (id)requestObject:(id)arg1 handlerName:(id)arg2;
- (_Bool)shouldCallHandler:(id)arg1;
- (_Bool)shouldCallHandler:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)registHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registHandlers;
- (void)removeCommonBridge;
- (id)initWithCommonBridge:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end


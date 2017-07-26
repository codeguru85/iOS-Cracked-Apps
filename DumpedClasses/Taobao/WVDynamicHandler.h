//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeProtocol.h"

@class NSString, UIView<WVWebViewBasicProtocol>, UIViewController;

@interface WVDynamicHandler : NSObject <WVBridgeProtocol>
{
    id <WVBridgeContext> _context;
    UIViewController *_viewController;
    UIView<WVWebViewBasicProtocol> *_webview;
}

+ (void)WVJSBridgeInterface$callback:(CDUnknownBlockType)arg1 withRet:(id)arg2 withResult:(id)arg3;
+ (void)WVJSBridgeInterface$forbiddenThisMethodToJSB:(SEL)arg1;
+ (unsigned long long)instanceScope;
@property(nonatomic) __weak UIView<WVWebViewBasicProtocol> *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WVBridgeContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)WVJSBridgeInterface$release;
- (void)set_runtimeContext:(id)arg1;
- (id)_runtimeContext;
- (void)dealloc;
- (void)releaseInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

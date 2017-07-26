//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DWEventProtocol.h"
#import "WVWebViewDelegate.h"

@class DWInteractiveAddCart, NSMutableArray, NSString;

@interface DWEventAdapter : NSObject <WVWebViewDelegate, DWEventProtocol>
{
    DWInteractiveAddCart *_add2Cart;
    NSMutableArray *_webViewArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *webViewArray; // @synthesize webViewArray=_webViewArray;
@property(retain, nonatomic) DWInteractiveAddCart *add2Cart; // @synthesize add2Cart=_add2Cart;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)closeWebView:(id)arg1;
- (void)openWebView:(id)arg1 VC:(id)arg2 component:(id)arg3;
- (void)pullLoginWithCompletionHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (id)getCurrentSelectedViewController;
- (void)openurl:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)closeAddCartView;
- (void)addCart:(id)arg1 goodsID:(id)arg2 SKUCancleBlock:(CDUnknownBlockType)arg3;
- (_Bool)loginStatus;
- (void)clearAllWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

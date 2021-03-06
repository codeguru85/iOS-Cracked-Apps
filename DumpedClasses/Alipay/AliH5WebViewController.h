//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliBaseViewController.h"

#import "NSURLConnectionDelegate.h"
#import "UIWebViewDelegate.h"

@class NSDictionary, NSString, NSURLConnection, NSURLRequest, UIWebView;

@interface AliH5WebViewController : AliBaseViewController <UIWebViewDelegate, NSURLConnectionDelegate>
{
    NSURLConnection *_urlConnection;
    _Bool _authenticated;
    NSURLRequest *_originalHttpsRequest;
    _Bool _shouldLoadWebViewFirstTime;
    _Bool _webViewloading;
    _Bool _allowHttpsGoDirectly;
    NSString *_openUrl;
    NSString *_callbackUrl;
    NSDictionary *_userInfo;
    id <AliH5Delegate> _delegate;
    UIWebView *_webView;
    id <aluH5WebViewControllerOnBackDelegate> _backDelegate;
    CDUnknownBlockType _backCallback;
    long long _prevStatusBarStyle;
}

@property(nonatomic) long long prevStatusBarStyle; // @synthesize prevStatusBarStyle=_prevStatusBarStyle;
@property(copy, nonatomic) CDUnknownBlockType backCallback; // @synthesize backCallback=_backCallback;
@property(nonatomic) __weak id <aluH5WebViewControllerOnBackDelegate> backDelegate; // @synthesize backDelegate=_backDelegate;
@property(nonatomic) _Bool allowHttpsGoDirectly; // @synthesize allowHttpsGoDirectly=_allowHttpsGoDirectly;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <AliH5Delegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool webViewloading; // @synthesize webViewloading=_webViewloading;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
- (void).cxx_destruct;
- (_Bool)canTrustThisServer:(id)arg1;
- (id)webViewTitle;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onBack;
- (void)startLoad;
- (void)createSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


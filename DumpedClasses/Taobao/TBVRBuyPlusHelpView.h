//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WVWebViewDelegate.h"

@class NSString, UILabel, WVWebView;

@interface TBVRBuyPlusHelpView : UIView <WVWebViewDelegate>
{
    _Bool _webviewLoadSuccess;
    NSString *_helpUrl;
    WVWebView *_webView;
    UIView *_helpMaskView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *helpMaskView; // @synthesize helpMaskView=_helpMaskView;
@property(nonatomic) _Bool webviewLoadSuccess; // @synthesize webviewLoadSuccess=_webviewLoadSuccess;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)dealloc;
- (void)releaseWebView;
- (void)handleCloseButton;
- (void)showInView:(id)arg1;
- (id)initWithHelpUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


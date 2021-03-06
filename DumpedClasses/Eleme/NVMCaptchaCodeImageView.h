//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSURLSessionDataTask, UIActivityIndicatorView, UIImageView;

@interface NVMCaptchaCodeImageView : UIView
{
    _Bool _isLoading;
    UIImageView *_codeImageView;
    UIActivityIndicatorView *_loadingView;
    NSURLSessionDataTask *_dataTask;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)fetchImageWithURL:(id)arg1;
- (void)refreshCaptchaCodeImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end


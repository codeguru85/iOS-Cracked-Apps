//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedImageView, SSThemedLabel, TTPersonalHomeNavView;

@interface TTPersonalHomeErrorView : SSThemedView
{
    int _errorType;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _retryConnectionNetworkBlock;
    TTPersonalHomeNavView *_navView;
    SSThemedImageView *_errorIcon;
    SSThemedLabel *_titleLabel;
}

@property(nonatomic) __weak SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak SSThemedImageView *errorIcon; // @synthesize errorIcon=_errorIcon;
@property(nonatomic) __weak TTPersonalHomeNavView *navView; // @synthesize navView=_navView;
@property(copy, nonatomic) CDUnknownBlockType retryConnectionNetworkBlock; // @synthesize retryConnectionNetworkBlock=_retryConnectionNetworkBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic) int errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapClick;
- (void)back;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end


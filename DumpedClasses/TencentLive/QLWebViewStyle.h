//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface QLWebViewStyle : NSObject
{
    NSDictionary *_styleDict;
}

@property(retain, nonatomic) NSDictionary *styleDict; // @synthesize styleDict=_styleDict;
- (void).cxx_destruct;
- (id)validHexString:(id)arg1;
- (long long)isBackConfirmedStatus;
- (long long)isLandscapeStatus;
- (long long)statusBarHideStatus;
- (long long)titleBarHideStatus;
- (id)contentBKColor;
- (id)topBarColor;
- (id)titleColor;
- (void)addStyleParamsFromDict:(id)arg1;
- (id)initWithStyleDict:(id)arg1;

@end

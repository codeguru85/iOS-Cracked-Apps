//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DWComponent, NSDictionary, NSString, UIView, UIViewController;

@protocol DWEventProtocol <NSObject>
- (void)closeWebView:(UIView *)arg1;
- (void)openWebView:(NSDictionary *)arg1 VC:(UIViewController *)arg2 component:(DWComponent *)arg3;
- (UIViewController *)getCurrentSelectedViewController;
- (void)closeAddCartView;
- (void)addCart:(UIView *)arg1 goodsID:(NSString *)arg2 SKUCancleBlock:(void (^)(void))arg3;
- (void)pullLoginWithCompletionHandler:(void (^)(void))arg1 cancelHandler:(void (^)(void))arg2;
- (void)openUrl:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIScrollView;

@protocol HPFunctionProtocol <NSObject>
- (void)pushUrlFromCurrentNavigationController:(NSString *)arg1;
- (void)addPullToRefresh:(UIScrollView *)arg1 WithActionHandler:(void (^)(void))arg2;
- (void)updateUserAccountWithNick:(NSString *)arg1;
- (void)setupUserTrackAdapter;
- (_Bool)tbAppLinkOpenURL:(NSString *)arg1;
@end


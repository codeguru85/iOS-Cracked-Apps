//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQWalletView, UIView;

@protocol QQWalletViewDataSource <NSObject>
- (struct CGSize)walletView:(QQWalletView *)arg1 cellSizeForIndex:(long long)arg2;
- (UIView *)walletView:(QQWalletView *)arg1 cellForIndex:(long long)arg2;
- (long long)numberOfCellsInWalletView:(QQWalletView *)arg1;
@end


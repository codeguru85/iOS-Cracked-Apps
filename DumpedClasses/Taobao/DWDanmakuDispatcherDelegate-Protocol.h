//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DWDanmaku, DWDanmakuDispatcher;

@protocol DWDanmakuDispatcherDelegate <NSObject>
- (void)willDeactiveDanmaku:(DWDanmaku *)arg1;
- (void)willActiveDanmaku:(DWDanmaku *)arg1;

@optional
- (double)timeForBarrageDispatcher:(DWDanmakuDispatcher *)arg1;
- (_Bool)shouldActiveDanmaku:(DWDanmaku *)arg1;
@end


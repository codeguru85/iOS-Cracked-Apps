//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QRBookInfo, UINavigationController;

@interface NSBookInfo : NSObject
{
    QRBookInfo *_pBookInfo;
    int downloadStatus;
    UINavigationController *_navVC;
}

@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(nonatomic) int downloadStatus; // @synthesize downloadStatus;
@property(retain, nonatomic) QRBookInfo *pBookInfo; // @synthesize pBookInfo=_pBookInfo;
- (void)dealloc;

@end


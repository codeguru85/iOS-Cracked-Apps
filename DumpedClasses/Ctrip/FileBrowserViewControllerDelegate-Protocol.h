//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFileBrowserViewController, CTFileEntry;

@protocol FileBrowserViewControllerDelegate <NSObject>

@optional
- (void)fileBrowserViewController:(CTFileBrowserViewController *)arg1 didLongPressEntry:(CTFileEntry *)arg2;
- (void)fileBrowserViewController:(CTFileBrowserViewController *)arg1 didSelectEntry:(CTFileEntry *)arg2;
@end


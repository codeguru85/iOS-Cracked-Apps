//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMMediaDataObject, FMMediaEditController, NSArray;

@protocol FMMediaEditControllerDelegate <NSObject>
- (void)mediaEditController:(FMMediaEditController *)arg1 didSetMainImage:(long long)arg2;
- (void)mediaEditController:(FMMediaEditController *)arg1 didDeleteImage:(long long)arg2;
- (void)mediaEditControllerDidCancel:(FMMediaEditController *)arg1;
- (void)mediaEditController:(FMMediaEditController *)arg1 didFinishEditingImages:(NSArray *)arg2;
- (void)mediaEditController:(FMMediaEditController *)arg1 didFinishEditingWithMediaInfo:(FMMediaDataObject *)arg2;
@end


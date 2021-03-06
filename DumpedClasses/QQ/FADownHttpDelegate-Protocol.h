//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAModel, NSError;

@protocol FADownHttpDelegate <NSObject>
- (void)OnThumbnailHttpFail:(FAModel *)arg1;
- (void)OnThumbnailDone:(FAModel *)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(NSError *)arg3;
- (void)OnHttpProgress:(FAModel *)arg1;

@optional
- (void)OnThumbnailProgress:(FAModel *)arg1 progress:(double)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface SVGImageCache : NSObject
{
    NSCache *_cachedImages;
}

+ (id)sharedImageCache;
@property(retain, nonatomic) NSCache *cachedImages; // @synthesize cachedImages=_cachedImages;
- (void).cxx_destruct;
- (void)addImageToCache:(id)arg1 forKey:(id)arg2;
- (id)cachedImageWithKey:(id)arg1;
- (void)clearImageCache:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INAlbumPhoto.h"

#import "INAlbumPhoto.h"
#import "NSCoding.h"

@class NSDate, NSDictionary, NSMutableArray, NSString, PHAsset, PHImageRequestOptions;

@interface INAlbumPhotoPHAsset : INAlbumPhoto <INAlbumPhoto, NSCoding>
{
    PHAsset *_phAsset;
    NSDictionary *_internalMetadata;
    PHImageRequestOptions *_requestOption;
    PHImageRequestOptions *_screenImageRequestOption;
    NSMutableArray *_imageRequests;
}

- (void).cxx_destruct;
- (void)requestImageData:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDate *createdDate;
@property(readonly, nonatomic) NSString *photoURL;
@property(readonly, nonatomic) double imageHeight;
@property(readonly, nonatomic) double imageWidth;
- (id)initAssetWithPhotoUrl:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPHAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


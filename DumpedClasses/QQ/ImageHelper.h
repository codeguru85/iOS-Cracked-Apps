//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ImageHelper : NSObject
{
}

+ (double)getImageScaleNeedMemWithUIImage:(struct CGImage *)arg1;
+ (id)loadImageFromData:(id)arg1 withScaleDenom:(int)arg2 orientation:(long long)arg3 scale:(int)arg4;
+ (id)loadImageFromFile:(id)arg1 withScaleDenom:(int)arg2 orientation:(long long)arg3 scale:(int)arg4;
+ (id)loadImageFromData:(id)arg1 withScaleDenom:(int)arg2;
+ (id)loadImageFromFile:(id)arg1 withScaleDenom:(int)arg2;
+ (int)checkScaleDenom:(int)arg1;
+ (id)colored:(id)arg1 image:(id)arg2;
+ (id)addImage:(id)arg1 toImage:(id)arg2;
+ (id)fixOrientation:(long long)arg1 InJpegData:(id)arg2;
+ (int)getCGImageOrientation:(long long)arg1;
+ (id)imageFromFile:(id)arg1 inRect:(struct CGRect)arg2 andOrientation:(long long)arg3;
+ (struct CGSize)getImageSizeInNSData:(id)arg1;
+ (void)getImageSize:(struct CGSize *)arg1 orientation:(long long *)arg2 atPath:(id)arg3;
+ (struct CGSize)getImageSizeAtPath:(id)arg1;
+ (int)getImageType:(id)arg1;
+ (struct CGSize)getPngSizeAtPath:(id)arg1;
+ (int)getAIOThumbRoundCornerType;
+ (struct CGSize)getAIOThumbImageMinSize:(_Bool)arg1;
+ (void)getProgressiveJpegOffsetFromData:(id)arg1 showLen:(unsigned long long *)arg2 downloadLen:(unsigned long long *)arg3;
+ (_Bool)isProgressiveJpegData:(id)arg1;
+ (_Bool)isProgressiveJpegFile:(id)arg1 containXMP:(_Bool *)arg2;
+ (_Bool)isProgressiveJpegFile:(id)arg1;
+ (_Bool)isJpegData:(id)arg1;
+ (_Bool)isJpegFile:(id)arg1;
+ (struct CGSize)jpegSizeInFile:(id)arg1;
+ (id)loadJpegImageFromData:(id)arg1 withScaleDenom:(int)arg2 andOrientation:(long long)arg3;
+ (id)loadJpegImageFromData:(id)arg1 withScaleDenom:(int)arg2;
+ (id)loadJpegImageFromFile:(id)arg1 withScaleDenom:(int)arg2;
+ (int)getJpegDecodeScaleDenomWithScaleMode:(int)arg1 originalSize:(struct CGSize)arg2;
+ (int)getJpegDecodeScaleDenomWithFitSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
+ (int)getJpegDecodeScaleDenomWithMaxShortSide:(double)arg1 originalSize:(struct CGSize)arg2;
+ (int)getJpegDecodeScaleDenomWithMaxLongSide:(double)arg1 originalSize:(struct CGSize)arg2;
+ (id)compressImage:(id)arg1 withMostBytes:(unsigned long long)arg2;
+ (id)compressImage:(id)arg1 withMaxBytes:(unsigned long long)arg2;
+ (id)compressImageToProgressiveJpeg:(id)arg1 inMode:(int)arg2;
+ (id)compressImage:(id)arg1 inMode:(int)arg2;
+ (id)scaleImage:(id)arg1 inMode:(int)arg2 sessionType:(int)arg3;
+ (int)getImageTypeInData:(id)arg1;
+ (_Bool)isGif:(id)arg1;
+ (id)getSelfFaceThumbName:(id)arg1;
+ (id)image:(id)arg1 scaleToFitSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 scaleToFitSizeWithMaxLongSide:(double)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxLongSide:(double)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxShortSide:(double)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxLongSide:(double)arg2 scaleToFill:(_Bool)arg3;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxLongSide:(double)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxShortSide:(double)arg2;
+ (id)imageByRotatingImage:(id)arg1 fromImageOrientation:(long long)arg2;
+ (id)image:(id)arg1 cropSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2;
+ (void)image:(id)arg1 drawInRectWithFitSize:(struct CGRect)arg2;
+ (id)image:(id)arg1 fillSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 withResize:(struct CGSize)arg2 center20PercentOffsetYInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 fitInSize:(struct CGSize)arg2;
+ (struct CGRect)getFillIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)getFitIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 clipToRect:(struct CGRect)arg2 imgScale:(double)arg3;
+ (id)image:(id)arg1 clipToRect:(struct CGRect)arg2;
+ (id)takeSnapshotOf:(id)arg1 clipRect:(struct CGRect)arg2;
+ (id)imageFromView:(id)arg1 withScale:(double)arg2;
+ (id)imageFromView:(id)arg1;
+ (id)imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageFromViewWithRect:(id)arg1 rect:(struct CGRect)arg2 applyScreenScale:(_Bool)arg3;
+ (id)imageFromViewWithRect:(id)arg1 rect:(struct CGRect)arg2;

@end


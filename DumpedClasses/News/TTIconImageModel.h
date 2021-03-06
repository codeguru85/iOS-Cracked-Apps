//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, UIImage;

@interface TTIconImageModel : NSObject <NSCopying>
{
    NSString *_imageName;
    UIImage *_dayIcon;
    UIImage *_nightIcon;
    NSURL *_dayIconURL;
    NSURL *_nightIconURL;
    struct CGSize _size;
}

+ (id)modelWithDayIconURL:(id)arg1 nightIconURL:(id)arg2 size:(struct CGSize)arg3;
+ (id)modelWithDayIcon:(id)arg1 nightIcon:(id)arg2 size:(struct CGSize)arg3;
+ (id)modelWithImageName:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSURL *nightIconURL; // @synthesize nightIconURL=_nightIconURL;
@property(retain, nonatomic) NSURL *dayIconURL; // @synthesize dayIconURL=_dayIconURL;
@property(retain, nonatomic) UIImage *nightIcon; // @synthesize nightIcon=_nightIcon;
@property(retain, nonatomic) UIImage *dayIcon; // @synthesize dayIcon=_dayIcon;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageName:(id)arg1 dayIcon:(id)arg2 nightIcon:(id)arg3 dayIconURL:(id)arg4 nightIconURL:(id)arg5 size:(struct CGSize)arg6;

@end


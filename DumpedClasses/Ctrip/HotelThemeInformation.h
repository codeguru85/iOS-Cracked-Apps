//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelThemeInformation : CTBusinessBean
{
    NSString *_themeName;
    NSString *_imageUrl;
    NSString *_detailPageUrl;
}

@property(copy, nonatomic) NSString *detailPageUrl; // @synthesize detailPageUrl=_detailPageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


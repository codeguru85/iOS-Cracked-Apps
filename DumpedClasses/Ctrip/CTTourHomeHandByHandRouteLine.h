//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CTTourHomeHandByHandRouteLine : NSObject
{
    _Bool _IsRecommend;
    _Bool _isLog;
    NSString *_LineID;
    NSString *_LineName;
    NSString *_LineImgURL;
    NSArray *_LinePOIInfos;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool isLog; // @synthesize isLog=_isLog;
@property(nonatomic) _Bool IsRecommend; // @synthesize IsRecommend=_IsRecommend;
@property(retain, nonatomic) NSArray *LinePOIInfos; // @synthesize LinePOIInfos=_LinePOIInfos;
@property(copy, nonatomic) NSString *LineImgURL; // @synthesize LineImgURL=_LineImgURL;
@property(copy, nonatomic) NSString *LineName; // @synthesize LineName=_LineName;
@property(copy, nonatomic) NSString *LineID; // @synthesize LineID=_LineID;
- (void).cxx_destruct;

@end

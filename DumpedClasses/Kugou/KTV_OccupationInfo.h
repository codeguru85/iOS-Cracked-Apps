//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVPlayerBaseInfo.h"

@class NSString;

@interface KTV_OccupationInfo : KTVPlayerBaseInfo
{
    int _id;
    NSString *_imagename;
    NSString *_industry;
    NSString *_classification;
}

@property(retain, nonatomic) NSString *classification; // @synthesize classification=_classification;
@property(retain, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(retain, nonatomic) NSString *imagename; // @synthesize imagename=_imagename;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)init;

@end


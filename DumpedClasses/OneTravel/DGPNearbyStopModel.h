//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<DGPNearbyLineModel>, NSString;

@interface DGPNearbyStopModel : JSONModel
{
    NSString *_name;
    NSString *_distance;
    NSArray<DGPNearbyLineModel> *_lines;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<DGPNearbyLineModel> *lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end


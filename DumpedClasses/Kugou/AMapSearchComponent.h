//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapComponent.h"
#import "AMapComponentAnalyzable.h"

@class NSString;

@interface AMapSearchComponent : NSObject <AMapComponent, AMapComponentAnalyzable>
{
}

+ (id)sharedInstance;
- (id)crashfilterArray;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *product;
@property(readonly, nonatomic) NSString *name;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


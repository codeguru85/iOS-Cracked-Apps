//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface XRainbowExperimentDebug : NSObject
{
    _Bool _isEnabled;
    NSDictionary *_orangeData;
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSDictionary *orangeData; // @synthesize orangeData=_orangeData;
- (void).cxx_destruct;
- (id)getExperimentForSetting:(id)arg1;
- (void)setDebugSettings:(id)arg1;
- (id)getExperimentForName:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFeedbackParameterDO.h"

@class NSNumber, NSString;

@interface FMFeedbackParameterDO : NSObject <FMFeedbackParameterDO>
{
    NSString *_appType;
    NSString *_appkey;
    NSString *_bizIdentifiers;
    NSString *_browser;
    NSString *_city;
    NSString *_content;
    NSString *_extra;
    NSString *_feedbackTitle;
    NSString *_imageAddrs;
    NSString *_module;
    NSString *_networkString;
    NSNumber *_originRecordId;
    NSString *_resolution;
    NSString *_ttid;
}

@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSNumber *originRecordId; // @synthesize originRecordId=_originRecordId;
@property(copy, nonatomic) NSString *networkString; // @synthesize networkString=_networkString;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *imageAddrs; // @synthesize imageAddrs=_imageAddrs;
@property(copy, nonatomic) NSString *feedbackTitle; // @synthesize feedbackTitle=_feedbackTitle;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *browser; // @synthesize browser=_browser;
@property(copy, nonatomic) NSString *bizIdentifiers; // @synthesize bizIdentifiers=_bizIdentifiers;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *appType; // @synthesize appType=_appType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


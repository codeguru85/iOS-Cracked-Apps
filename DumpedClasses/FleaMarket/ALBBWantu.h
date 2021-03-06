//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALBBWantuConfiguration, ALBBWantuUploadServiceAdapter;

@interface ALBBWantu : NSObject
{
    ALBBWantuConfiguration *_configuration;
    ALBBWantuUploadServiceAdapter *_uploadServiceAdapter;
}

+ (void)removeWantuForKey:(id)arg1;
+ (id)wantuForKey:(id)arg1;
+ (void)registerWantuWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (id)defaultWantu;
@property(retain, nonatomic) ALBBWantuUploadServiceAdapter *uploadServiceAdapter; // @synthesize uploadServiceAdapter=_uploadServiceAdapter;
@property(retain, nonatomic) ALBBWantuConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)cancelMultipartUpload:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)completeMultipartUpload:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)uploadPart:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)initMultipartUpload:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)setDebug:(_Bool)arg1;
- (id)session2WTResponse:(id)arg1;
- (void)upload:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end


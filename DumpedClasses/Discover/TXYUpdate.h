//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYCommandTask.h"

@class NSString, TXYVideoFileInfo;

@interface TXYUpdate : TXYCommandTask
{
    NSString *_attrs;
    long long _objectType;
    TXYVideoFileInfo *_videoFileInfo;
}

@property(retain, nonatomic) TXYVideoFileInfo *videoFileInfo; // @synthesize videoFileInfo=_videoFileInfo;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSString *attrs; // @synthesize attrs=_attrs;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 bucket:(id)arg2 sign:(id)arg3 customAttribute:(id)arg4 videoFileInfo:(id)arg5;
- (id)initWithPath:(id)arg1 bucket:(id)arg2 sign:(id)arg3 objectType:(long long)arg4 customAttribute:(id)arg5;

@end


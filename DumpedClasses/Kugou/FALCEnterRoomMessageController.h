//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALCLiveRoomEnterRoomInfoManager, UIView;

@interface FALCEnterRoomMessageController : NSObject
{
    FALCLiveRoomEnterRoomInfoManager *_enterRoomMessageModel;
    UIView *_enterRoomContainView;
}

@property(retain, nonatomic) UIView *enterRoomContainView; // @synthesize enterRoomContainView=_enterRoomContainView;
@property(retain, nonatomic) FALCLiveRoomEnterRoomInfoManager *enterRoomMessageModel; // @synthesize enterRoomMessageModel=_enterRoomMessageModel;
- (void).cxx_destruct;
- (void)updateEnterRoomViewShowStatus:(_Bool)arg1;
- (void)addEnterRoomInfoViewToView:(id)arg1 contentTop:(double)arg2;
- (void)resetEnterRoomInfoData;
- (void)getEnterRoomMessage:(id)arg1;
- (id)init;

@end


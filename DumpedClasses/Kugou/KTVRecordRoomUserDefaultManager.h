//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVRecordRoomUserDefaultModel;

@interface KTVRecordRoomUserDefaultManager : NSObject
{
    KTVRecordRoomUserDefaultModel *_defaultModel;
}

+ (id)shareInstance;
@property(retain, nonatomic) KTVRecordRoomUserDefaultModel *defaultModel; // @synthesize defaultModel=_defaultModel;
- (void).cxx_destruct;
- (void)setUserDefaultKrcFontSize:(float)arg1;
- (void)setUserDefaultPitchOpen:(_Bool)arg1;
- (void)setUserDefaultKrcStick:(_Bool)arg1;
- (void)setUserDefaultModel:(id)arg1;
- (id)init;

@end


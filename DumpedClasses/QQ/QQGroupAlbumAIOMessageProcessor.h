//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQMessageProcessor.h"

@interface QQGroupAlbumAIOMessageProcessor : NSObject <IQQMessageProcessor>
{
}

+ (long long)getMsgState:(long long)arg1;
+ (id)updateGroupUploadPhotoXML:(id)arg1 state:(long long)arg2 progress:(double)arg3;
+ (id)createGroupUploadPhotoXML:(id)arg1 description:(id)arg2 photoList:(id)arg3 state:(long long)arg4 messageRondom:(long long)arg5;
+ (id)instance;
- (id)processMsgEncapsulation:(id)arg1;

@end


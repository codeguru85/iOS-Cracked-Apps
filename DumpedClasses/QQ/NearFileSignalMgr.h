//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NearFileSignalMgr : NSObject
{
}

+ (id)getInstance;
- (void)onFilePost:(const struct qlEndpoint *)arg1 withData:(const struct stream *)arg2 withContext:(struct qlPostContext *)arg3;
- (void)onData:(const struct qlEndpoint *)arg1 withCmd:(unsigned int)arg2 withData:(const struct stream *)arg3 withCookie:(unsigned long long)arg4;
- (void)onRecvDiscoverCmd:(unsigned int)arg1 fromTarget:(const struct qlEndpoint *)arg2 withData:(const struct stream *)arg3 withCookie:(unsigned long long)arg4;
- (void)onPostFile:(unsigned char)arg1 withContext:(void *)arg2;
- (void)onSendData:(unsigned char)arg1 withContext:(void *)arg2;
- (void)onSendDone:(unsigned char)arg1 withContext:(id)arg2;
- (void)syncFile:(int)arg1 withFrom:(unsigned long long)arg2 withTo:(unsigned long long)arg3 withTarget:(const struct qlEndpoint *)arg4 withSID:(unsigned long long)arg5 withError:(int)arg6 withObject:(id)arg7 withCallback:(SEL)arg8 withContext:(id)arg9;
- (void)sendFiles:(unsigned long long)arg1 withToUin:(unsigned long long)arg2 withTarget:(const struct qlEndpoint *)arg3 withFileList:(vector_e6c42fc3 *)arg4 withObject:(id)arg5 withCallback:(SEL)arg6 withContext:(id)arg7;
- (void)exitNearbyNetwork:(unsigned long long)arg1 withPeer:(unsigned long long)arg2 withTarget:(const struct qlEndpoint *)arg3;
- (void)pairContact:(unsigned long long)arg1 withTarget:(const struct qlEndpoint *)arg2 withInfo:(struct UserInfo *)arg3 asResponse:(_Bool)arg4;
- (void)scanContact:(unsigned long long)arg1 withTarget:(const struct qlEndpoint *)arg2 withInfo:(struct UserInfo *)arg3 asResponse:(_Bool)arg4;
- (void)sendQRCodeRsp:(unsigned long long)arg1 withTarget:(const struct qlEndpoint *)arg2 withInfo:(struct UserInfo *)arg3;
- (_Bool)sendQRCode:(unsigned long long)arg1 withTarget:(const struct qlEndpoint *)arg2 withQRCode:(id)arg3;
- (void)scanEndpoint:(unsigned long long)arg1 withTarget:(const struct qlEndpoint *)arg2 withInfo:(struct UserInfo *)arg3 asResponse:(_Bool)arg4;
- (void)sendDiscoverCmd:(unsigned int)arg1 toUin:(unsigned long long)arg2 withTarget:(const struct qlEndpoint *)arg3 withInfo:(struct UserInfo *)arg4 asResponse:(_Bool)arg5;
- (void)OnSendMsg:(_Bool)arg1 withContext:(id)arg2;
- (void)registerPushNotifyDelegate:(id)arg1;
- (void)registerMsgHandleDelegate:(id)arg1;

@end


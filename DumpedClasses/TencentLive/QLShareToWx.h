//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXApiDelegate.h"

@class NSString, UIViewController;

@interface QLShareToWx : NSObject <WXApiDelegate>
{
    _Bool _isInit;
    int _curScene;
    int _shareScene;
    id delegate;
    UIViewController *_controller;
}

+ (id)shareInstance;
@property(nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) int shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) id delegate; // @synthesize delegate;
@property int curScene; // @synthesize curScene=_curScene;
@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
- (void)sendVideoContent:(id)arg1 useAppExtend:(_Bool)arg2;
- (void)inviteWeiXinFriendsToQQLive:(id)arg1;
- (void)viewContent:(id)arg1;
- (void)onShowMediaMessage:(id)arg1;
- (_Bool)preHandleOpenURL:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertViewTitle:(id)arg1 withMessage:(id)arg2 withOtherButton:(id)arg3;
- (void)showFavoriteConfirmView;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)isWXAppInstalled;
- (_Bool)canShareMsgToWx:(int)arg1;
- (void)shareMsgToWxDelegate:(id)arg1 scene:(int)arg2 viewConroller:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)weiXinInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


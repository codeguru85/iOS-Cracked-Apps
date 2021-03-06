//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSViewController.h"

@class UIButton;

@interface GSFingerprintLockScreenViewController : GSViewController
{
    _Bool _isDialogShown;
    _Bool _ignoreNextNotification;
    _Bool _isObserverAdded;
    id <ColorFaceViewControllerDelegate> _delegate;
    UIButton *_loginBtn;
    long long _remainingRetryCount;
}

@property(nonatomic) _Bool isObserverAdded; // @synthesize isObserverAdded=_isObserverAdded;
@property(nonatomic) long long remainingRetryCount; // @synthesize remainingRetryCount=_remainingRetryCount;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(nonatomic) _Bool ignoreNextNotification; // @synthesize ignoreNextNotification=_ignoreNextNotification;
@property(nonatomic) _Bool isDialogShown; // @synthesize isDialogShown=_isDialogShown;
@property(nonatomic) __weak id <ColorFaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteLoggerBGOther;
- (void)remoteLoggerBGBtn;
- (void)remoteLoggerBGshow;
- (void)remoteLoggerPass;
- (void)remoteLoggerCancel;
- (void)remoteLoggerLoginWithPwd;
- (void)remoteLoggerTouchIDShow:(_Bool)arg1;
- (void)dealloc;
- (void)notifyFaceToFacePayReceivedData:(id)arg1;
- (void)actionChangeAccountToLogin;
- (void)loginWithPwd;
- (void)colorFaceViewQuitAndNotify;
- (void)alertPwdLoginWithMessage:(id)arg1;
- (void)alertPwdLogin;
- (void)showSafeTouchIDDialog;
- (_Bool)isCurrentViewControllerVisible;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)findServiceImpl;
- (void)addObserverAndShowTouchID;
- (void)retryTouchID;
- (void)fingerprintBtnTap;
- (void)actionPreferenceBtnClick;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


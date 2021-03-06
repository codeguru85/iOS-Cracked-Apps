//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TuSDKTSCControllerTrans;

@interface TuSDKICViewController : UIViewController
{
    _Bool _isBacked;
    _Bool _isOrginNavHidden;
    _Bool _isNavHidden;
    _Bool _isOrginStatusHidden;
    _Bool _isStatusHidden;
    TuSDKTSCControllerTrans *_transAnim;
}

@property(retain, nonatomic) TuSDKTSCControllerTrans *transAnim; // @synthesize transAnim=_transAnim;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissHub;
- (void)showHubErrorWithStatus:(id)arg1;
- (void)showHubSuccessWithStatus:(id)arg1;
- (void)showHubWithStatus:(id)arg1;
- (void)setBackButton;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)dismissModalViewControllerAnimated;
- (void)cancelAction;
- (void)setNavRightCancelButton;
- (void)setNavLeftCancelButton;
- (void)navRightButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)navLeftButtonWithTitle:(id)arg1 action:(SEL)arg2;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

@end


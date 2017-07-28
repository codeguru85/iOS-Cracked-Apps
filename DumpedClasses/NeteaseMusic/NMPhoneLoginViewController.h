//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMScreenShotProtocol.h"

@class NMBarButtonItem, NSDictionary, NSString;

@interface NMPhoneLoginViewController : UIViewController <NMScreenShotProtocol>
{
    NMBarButtonItem *_loginButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
- (void)dealloc;
- (void)stopActivityWithText:(id)arg1;
- (void)startActivity;
- (void)forgetPsdButtonClicked:(id)arg1;
- (_Bool)isValidNumber:(id)arg1;
- (void)loginButtonClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)loginView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end

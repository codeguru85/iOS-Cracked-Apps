//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSafeNavigationViewController.h"

#import "UINavigationBarDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, RCTBridge;

@interface NMRCTNavigationController : NMSafeNavigationViewController <UINavigationControllerDelegate, UINavigationBarDelegate>
{
    CDUnknownBlockType _scrollCallback;
    RCTBridge *_bridge;
    unsigned long long _navigationLock;
    id <NMRCTNavigationControllerDelegate> _aDelegate;
}

@property(nonatomic) __weak id <NMRCTNavigationControllerDelegate> aDelegate; // @synthesize aDelegate=_aDelegate;
@property(nonatomic) unsigned long long navigationLock; // @synthesize navigationLock=_navigationLock;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)backAction:(id)arg1;
- (id)initWithScrollCallback:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


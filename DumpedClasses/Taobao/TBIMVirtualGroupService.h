//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "TBIMVirtualGroupServiceAdapter.h"

@class NSString, YHMuticastDelegate<TBIMVirtualGroupServiceDelegate>;

@interface TBIMVirtualGroupService : MKTMsgBusHelp <TBIMVirtualGroupServiceAdapter>
{
    YHMuticastDelegate<TBIMVirtualGroupServiceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMVirtualGroupServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)ampVirtualGroupManageInfoUpdate:(id)arg1;
- (void)manageSetupInfoWithSubType:(id)arg1 configKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


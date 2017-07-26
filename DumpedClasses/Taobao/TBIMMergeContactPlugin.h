//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCPluginBaseProtocol.h"

@class NSDictionary, NSString, TBModelStatusHandler, UIView, WXSDKInstance;

@interface TBIMMergeContactPlugin : NSObject <MCPluginBaseProtocol>
{
    id <MCPluginMergeContactContextProtocol> _pluginContext;
    WXSDKInstance *_wxsdkInstance;
    UIView *_weexView;
    TBModelStatusHandler *_handler;
}

@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *wxsdkInstance; // @synthesize wxsdkInstance=_wxsdkInstance;
@property(retain, nonatomic) id <MCPluginMergeContactContextProtocol> pluginContext; // @synthesize pluginContext=_pluginContext;
- (void).cxx_destruct;
- (id)configHandler;
- (id)getEmptyView;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

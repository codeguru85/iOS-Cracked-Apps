//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCMenuDataSourceProtocol.h"

@class NSString, YHMuticastDelegate<MCMenuDataSourceDelegate>;

@interface MCMenuPreviewDataSource : NSObject <MCMenuDataSourceProtocol>
{
    NSString *_previewExt;
    YHMuticastDelegate<MCMenuDataSourceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<MCMenuDataSourceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
@property(copy, nonatomic) NSString *previewExt; // @synthesize previewExt=_previewExt;
- (void).cxx_destruct;
- (void)removeDataSourceDelegate:(id)arg1;
- (void)addDataSourceDelegate:(id)arg1;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;
- (id)menuData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


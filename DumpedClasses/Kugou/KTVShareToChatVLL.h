//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVShareToChatViewDataSource.h"
#import "KTVShareToChatViewEventDelegate.h"

@class KTVShareToChatVM, NSString;

@interface KTVShareToChatVLL : NSObject <KTVShareToChatViewDataSource, KTVShareToChatViewEventDelegate>
{
    KTVShareToChatVM *_viewModel;
    id <KTVShareToChatVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVShareToChatVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVShareToChatVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)myShareToChatViewShouldReflashData;
- (id)getData;
- (id)getTitles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


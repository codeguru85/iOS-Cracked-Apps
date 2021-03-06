//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityContentItemProtocol.h"

@class NSString;

@interface TTEditContentItem : NSObject <TTActivityContentItemProtocol>
{
    _Bool _canEdit;
    CDUnknownBlockType _customAction;
}

@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(copy, nonatomic) CDUnknownBlockType customAction; // @synthesize customAction=_customAction;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *activityImageName;
@property(readonly, nonatomic) NSString *contentItemType;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *contentTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAUserStarMVNewList;

@interface FAUserAuditAiYanSelectVM : NSObject
{
    long long _requestStatus;
    FAUserStarMVNewList *_mvList;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) FAUserStarMVNewList *mvList; // @synthesize mvList=_mvList;
@property(nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;
- (void).cxx_destruct;
- (void)requestMVList;
- (void)reRequestMVList;
- (id)init;

@end


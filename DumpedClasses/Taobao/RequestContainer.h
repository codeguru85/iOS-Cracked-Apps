//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ApiRequest, ApiRequestDelegateImpl;

@interface RequestContainer : NSObject
{
    ApiRequest *_request;
    ApiRequestDelegateImpl *_delegate;
}

@property(retain, nonatomic) ApiRequestDelegateImpl *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ApiRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end


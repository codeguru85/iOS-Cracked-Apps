//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTBusinessBean, NSString;

@interface CTResponseEntity : NSObject
{
    int _responseState;
    int _errorCode;
    int _errorCodeFromServer;
    NSString *_errorInfo;
    NSString *_addInfo;
    CTBusinessBean *_responseBean;
    NSString *_errorTitle;
}

@property(nonatomic) int errorCodeFromServer; // @synthesize errorCodeFromServer=_errorCodeFromServer;
@property(copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(retain, nonatomic) CTBusinessBean *responseBean; // @synthesize responseBean=_responseBean;
@property(copy, nonatomic) NSString *addInfo; // @synthesize addInfo=_addInfo;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int responseState; // @synthesize responseState=_responseState;
- (void).cxx_destruct;
- (id)init;

@end

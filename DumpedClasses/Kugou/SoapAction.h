//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasicParser.h"

@class NSDictionary, NSError, NSString, NSURL, NSURLResponse;

@interface SoapAction : BasicParser
{
    NSURL *_actionURL;
    NSURL *_eventURL;
    NSString *_upnpNameSpace;
    NSDictionary *_mOutput;
    NSURLResponse *_response;
    NSError *_error;
}

+ (id)soapActionWithURN:(id)arg1 andBaseNSURL:(id)arg2 andControlURL:(id)arg3 andEventURL:(id)arg4;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void)setStringValueForFoundAsset:(id)arg1;
- (long long)action:(id)arg1 parameters:(id)arg2 returnValues:(id)arg3;
- (void)dealloc;
- (id)initWithActionURL:(id)arg1 eventURL:(id)arg2 upnpnamespace:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFParser.h"

@class NSString;

@interface MFJSParser : MFParser
{
    NSString *_jsText;
}

@property(copy, nonatomic) NSString *jsText; // @synthesize jsText=_jsText;
- (void).cxx_destruct;
- (id)parse;
- (id)mergeJsTextFromJson:(id)arg1;
- (_Bool)loadText:(id)arg1;

@end


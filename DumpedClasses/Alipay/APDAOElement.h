//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APDAOElement : NSObject
{
    NSString *_name;
    NSString *_error;
}

+ (id)elementWithXML:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setErrorWithName:(id)arg1;
- (id)initNamedElementWithXML:(id)arg1;
- (id)initWithXML:(id)arg1;

@end


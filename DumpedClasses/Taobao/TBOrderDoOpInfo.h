//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSString;

@interface TBOrderDoOpInfo : TBOrderObject
{
    _Bool _needReload;
    NSString *_msg;
    NSString *_url;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

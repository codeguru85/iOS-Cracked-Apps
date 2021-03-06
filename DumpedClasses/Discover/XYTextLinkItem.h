//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface XYTextLinkItem : NSObject <NSCoding, NSCopying>
{
    unsigned long long _type;
    NSString *_matchedString;
    NSString *_valueString;
    NSString *_hashTypeEnglishString;
    struct _NSRange _linkRange;
}

@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(retain, nonatomic) NSString *hashTypeEnglishString; // @synthesize hashTypeEnglishString=_hashTypeEnglishString;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *matchedString; // @synthesize matchedString=_matchedString;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface APLogAutoClickModel : NSObject
{
    NSString *_pageId;
    NSString *_actionName;
    NSString *_actionClickTimestamp;
    NSMutableDictionary *_bizRespondTimeDict;
    NSString *_spmInfo;
}

+ (id)appearKeyWithPageId:(id)arg1;
+ (id)updateKeyWithPageId:(id)arg1;
+ (id)actionKeyWithPageId:(id)arg1;
@property(copy) NSString *spmInfo; // @synthesize spmInfo=_spmInfo;
@property(copy) NSMutableDictionary *bizRespondTimeDict; // @synthesize bizRespondTimeDict=_bizRespondTimeDict;
@property(copy) NSString *actionClickTimestamp; // @synthesize actionClickTimestamp=_actionClickTimestamp;
@property(copy) NSString *actionName; // @synthesize actionName=_actionName;
@property(copy) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (void)resetWithPageId:(id)arg1;
- (void)appearWithPageId:(id)arg1;
- (void)updateRespondTimeWithPageId:(id)arg1;
- (void)setValuesWithDictionary:(id)arg1;
- (void)setAutoBizRespondTime:(id)arg1 forKey:(id)arg2;
- (id)init;

@end


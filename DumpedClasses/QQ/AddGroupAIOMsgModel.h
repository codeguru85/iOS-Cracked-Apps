//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@interface AddGroupAIOMsgModel : QQAIOMsgModel
{
    int _configType;
    double _contentHeight;
}

+ (id)XMLMessageWithAddGroupMsg:(id)arg1;
+ (_Bool)addGroupTypeCheck:(id)arg1 smMsg:(id)arg2;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) int configType; // @synthesize configType=_configType;
- (_Bool)shouldDisplaySelfNick;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;

@end


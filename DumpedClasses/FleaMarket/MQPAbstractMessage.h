//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQPMessage.h"

@class NSString;

@interface MQPAbstractMessage : NSObject <MQPMessage>
{
}

- (id)dictionaryRepresentation;
- (void)storeInDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (id)unknownFields;
- (id)defaultInstance;
- (void)writeToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (int)serializedSize;
- (_Bool)isInitialized;
- (id)data;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


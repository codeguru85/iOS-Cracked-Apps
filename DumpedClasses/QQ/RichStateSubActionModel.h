//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RichStateSubModel.h"

@class NSString;

@interface RichStateSubActionModel : RichStateSubModel
{
    int _actionID;
    int _dataID;
    NSString *_dataText;
    int _xo;
}

- (void).cxx_destruct;
- (id)description;
- (int)type;

// Remaining properties
@property(nonatomic) int actionID; // @dynamic actionID;
@property(nonatomic) int dataID; // @dynamic dataID;
@property(retain, nonatomic) NSString *dataText; // @dynamic dataText;

@end


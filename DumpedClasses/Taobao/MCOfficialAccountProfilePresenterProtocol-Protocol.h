//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialAccountProfileModelDelegate.h"
#import "NSObject.h"

@class UIView<MCAccountProfileViewProtocol>;

@protocol MCOfficialAccountProfilePresenterProtocol <NSObject, MCOfficialAccountProfileModelDelegate>
@property(retain, nonatomic) id <MCOfficialAccountProfileModelProtocol> officialAccountProfileModel;
@property(retain, nonatomic) UIView<MCAccountProfileViewProtocol> *accountProfileView;
@end


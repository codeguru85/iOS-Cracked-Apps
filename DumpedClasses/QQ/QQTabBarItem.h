//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarItem.h"

@class NSString;

@interface QQTabBarItem : UITabBarItem
{
    NSString *_normalImageName;
    NSString *_hiImageName;
    NSString *_normalFgImageName;
    NSString *_hiFgImageName;
    NSString *_accessibilityIdentifier;
}

@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *hiFgImageName; // @synthesize hiFgImageName=_hiFgImageName;
@property(retain, nonatomic) NSString *normalFgImageName; // @synthesize normalFgImageName=_normalFgImageName;
@property(retain, nonatomic) NSString *hiImageName; // @synthesize hiImageName=_hiImageName;
@property(retain, nonatomic) NSString *normalImageName; // @synthesize normalImageName=_normalImageName;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tag:(long long)arg2;

@end


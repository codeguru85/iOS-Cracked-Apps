//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL;

@interface GMSCacheStorage : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_cacheDirectoryURL;
}

+ (_Bool)createStorageDirectoryIfNeeded:(id)arg1;
@property(readonly) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;
- (void)deleteStoreFiles;
- (id)initWithCacheStorageDescriptor:(id)arg1 didReset:(_Bool *)arg2;
- (id)init;

@end


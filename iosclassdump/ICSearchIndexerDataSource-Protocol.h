//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableItem, NSArray, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;

@protocol ICSearchIndexerDataSource <NSObject>
- (NSArray *)allSearchableItems;
- (NSString *)dataSourceIdentifier;
- (_Bool)isObservingChanges;
- (_Bool)needsReindexing;
- (id <ICSearchIndexable>)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (id <ICSearchIndexable>)objectForSearchableItemIdentifier:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishIndexingItems:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishReindexingWithError:(NSError *)arg1;
- (void)searchIndexerWillBeginReindexing;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(NSArray *)arg1;
- (void)searchIndexerWillIndexSearchableItems:(NSArray *)arg1;
- (NSArray *)searchableItemIdentifiersToBeDeleted;
- (NSArray *)searchableItemsNeedingIndexing;
- (NSArray *)searchableItemsWithIdentifiers:(NSArray *)arg1;
- (void)startObservingChanges;
- (void)stopObservingChanges;
@end

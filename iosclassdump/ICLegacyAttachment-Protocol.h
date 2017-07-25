//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSManagedObjectContext, NSString, NSURL;

@protocol ICLegacyAttachment <NSObject>
- (NSString *)contentID;
- (NSURL *)fileURL;
- (NSString *)identifier;
- (NSManagedObjectContext *)managedObjectContext;
- (_Bool)persistAttachmentData:(NSData *)arg1 error:(id *)arg2;
- (void)setMimeType:(NSString *)arg1;
- (NSString *)typeUTI;
@end

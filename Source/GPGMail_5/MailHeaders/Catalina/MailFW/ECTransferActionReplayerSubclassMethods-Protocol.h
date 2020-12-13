//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <Mail/NSObject-Protocol.h>

@class ECTransferMessageActionItem, ECTransferMessageActionResults, NSArray, NSData, NSDictionary, NSError, NSString, NSURL;

@protocol ECTransferActionReplayerSubclassMethods <NSObject>
- (BOOL)deleteSourceMessagesFromTransferItems:(NSArray *)arg1;
- (ECTransferMessageActionResults *)appendItem:(ECTransferMessageActionItem *)arg1 mailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)moveItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)copyItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (BOOL)downloadFailed;
- (BOOL)isRecoverableError:(NSError *)arg1;
- (NSData *)fetchBodyDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;
@end


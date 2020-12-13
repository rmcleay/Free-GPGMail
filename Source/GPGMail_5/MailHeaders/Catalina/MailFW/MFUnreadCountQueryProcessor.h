//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <EFLoggable-Protocol.h>
#import <MFMessageConsumer-Protocol.h>
#import <MFSearchableIndexQueryResultProcessor-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSString;
@protocol MFMailboxDisplayCountUpdater, MFSearchableIndexQueryResultProcessorDelegate, OS_dispatch_queue;

@interface MFUnreadCountQueryProcessor : NSObject <EFLoggable, MFSearchableIndexQueryResultProcessor, MFMessageConsumer>
{
    BOOL _useTotalCount;
    BOOL _cancelled;
    id /*<MFSearchableIndexQueryResultProcessorDelegate>*/ _delegate;
    id /*<MFMailboxDisplayCountUpdater>*/ _displayCountUpdater;
    NSString *_logIdentifier;
    NSCountedSet *_seenMessageIDHeaders;
    NSMutableDictionary *_persistentIDToMessageIDHeaders;
    NSObject/*<OS_dispatch_queue>*/ *_seenMessageIDHeadersQueue;
    NSString *_logPrefixString;
}

+ (id)log;
@property(retain, nonatomic) NSString *logPrefixString; // @synthesize logPrefixString=_logPrefixString;
@property(retain, nonatomic) NSObject/*<OS_dispatch_queue>*/ *seenMessageIDHeadersQueue; // @synthesize seenMessageIDHeadersQueue=_seenMessageIDHeadersQueue;
@property(retain, nonatomic) NSMutableDictionary *persistentIDToMessageIDHeaders; // @synthesize persistentIDToMessageIDHeaders=_persistentIDToMessageIDHeaders;
@property(retain, nonatomic) NSCountedSet *seenMessageIDHeaders; // @synthesize seenMessageIDHeaders=_seenMessageIDHeaders;
@property(copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) BOOL useTotalCount; // @synthesize useTotalCount=_useTotalCount;
@property(readonly, nonatomic) id /*<MFMailboxDisplayCountUpdater>*/ displayCountUpdater; // @synthesize displayCountUpdater=_displayCountUpdater;
@property(nonatomic) __weak id /*<MFSearchableIndexQueryResultProcessorDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;
- (void)searchPhaseComplete;
- (void)finishedSendingMessages;
@property(readonly) BOOL shouldCancel;
- (void)removePersistentIDs:(id)arg1;
- (void)removePersistentID:(id)arg1;
- (void)_nts_removePersistentID:(id)arg1;
- (void)addPersistentID:(id)arg1 messageIDHeader:(id)arg2;
- (void)_nts_addPersistentID:(id)arg1 messageIDHeader:(id)arg2;
- (void)provider:(id)arg1 removedPersistentIDs:(id)arg2;
- (void)provider:(id)arg1 foundResults:(id)arg2;
//- (void)_updateIDsWithBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithDisplayCountUpdater:(id)arg1 useTotalCount:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


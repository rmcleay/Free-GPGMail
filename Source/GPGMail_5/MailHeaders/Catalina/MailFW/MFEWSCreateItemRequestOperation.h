//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MFEWSRequestOperation.h>

//#import <Mail/NSSecureCoding-Protocol.h>

@class MFEWSCreateItemResponseOperation, NSString;

@interface MFEWSCreateItemRequestOperation : MFEWSRequestOperation <NSSecureCoding>
{
    BOOL _messageType;
    BOOL _wroteOfflineData;
    NSString *_EWSFolderIdString;
    long long _disposition;
    NSString *_offlineCreatedEWSItemIdString;
}

+ (BOOL)supportsSecureCoding;
@property BOOL wroteOfflineData; // @synthesize wroteOfflineData=_wroteOfflineData;
@property(retain) NSString *offlineCreatedEWSItemIdString; // @synthesize offlineCreatedEWSItemIdString=_offlineCreatedEWSItemIdString;
@property(readonly, nonatomic) long long disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSString *EWSFolderIdString; // @synthesize EWSFolderIdString=_EWSFolderIdString;
//- (void).cxx_destruct;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSCreateItemResponseOperation *responseOperation;
- (void)_itemIdString:(id)arg1 didChangeForResponseOperation:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupOfflineResponse;
- (id)activityString;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)_ewsCreateItemRequestOperationCommonInitWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;

@end


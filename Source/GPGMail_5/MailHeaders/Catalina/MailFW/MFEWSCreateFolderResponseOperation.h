//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MFEWSResponseOperation.h>

@class EWSCreateFolderResponseType, NSString;

@interface MFEWSCreateFolderResponseOperation : MFEWSResponseOperation
{
    NSString *_createdFolderId;
}

@property(copy) NSString *createdFolderId; // @synthesize createdFolderId=_createdFolderId;
//- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSCreateFolderResponseType *response;

@end


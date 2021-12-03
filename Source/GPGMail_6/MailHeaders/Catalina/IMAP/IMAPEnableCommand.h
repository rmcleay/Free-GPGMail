//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAPSingleCommand.h>

@class NSArray;

@interface IMAPEnableCommand : IMAPSingleCommand
{
    NSArray *_capabilities;
}

@property(readonly, copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
//- (void).cxx_destruct;
- (BOOL)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithCapabilities:(id)arg1;

@end

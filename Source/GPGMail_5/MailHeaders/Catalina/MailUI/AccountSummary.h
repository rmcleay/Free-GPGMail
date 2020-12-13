//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSTextField, NSView;

@interface AccountSummary : NSObject
{
    NSView *_view;
    NSTextField *_accountDescription;
    NSTextField *_fullname;
    NSTextField *_emailAddress;
    NSTextField *_userName;
    NSTextField *_incomingServer;
    NSTextField *_incomingServerSSLMode;
    NSTextField *_outgoingServer;
    NSTextField *_outgoingServerSSLMode;
}

@property(nonatomic) __weak NSTextField *outgoingServerSSLMode; // @synthesize outgoingServerSSLMode=_outgoingServerSSLMode;
@property(nonatomic) __weak NSTextField *outgoingServer; // @synthesize outgoingServer=_outgoingServer;
@property(nonatomic) __weak NSTextField *incomingServerSSLMode; // @synthesize incomingServerSSLMode=_incomingServerSSLMode;
@property(nonatomic) __weak NSTextField *incomingServer; // @synthesize incomingServer=_incomingServer;
@property(nonatomic) __weak NSTextField *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak NSTextField *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(nonatomic) __weak NSTextField *fullname; // @synthesize fullname=_fullname;
@property(nonatomic) __weak NSTextField *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
//- (void).cxx_destruct;
- (void)setupUIWithAccount:(id)arg1;
- (void)setupUIWithAccount:(id)arg1 deliveryAccount:(id)arg2;
- (id)init;

@end


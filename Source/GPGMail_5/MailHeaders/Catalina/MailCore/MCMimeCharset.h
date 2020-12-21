//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <ECMIMECharset-Protocol.h>
//#import <MailCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface MCMimeCharset : NSObject <ECMIMECharset, NSSecureCoding>
{
    BOOL _canBeUsedForOutgoingMessages;
    unsigned long long _encoding;
    NSString *_charsetName;
}

+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2;
+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned long long)arg1;
+ (id)allMimeCharsets;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL canBeUsedForOutgoingMessages; // @synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages;
@property(readonly, copy, nonatomic) NSString *charsetName; // @synthesize charsetName=_charsetName;
@property(readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
//- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;
- (id)initWithCFEncoding:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSString;

@interface NSStreamCallback : NSObject <NSStreamDelegate>
{
    struct StreamSession *_session;	// 8 = 0x8
}

@property(nonatomic) struct StreamSession *session; // @synthesize session=_session;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


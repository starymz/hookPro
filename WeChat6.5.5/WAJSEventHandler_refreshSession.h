//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "PBMessageObserverDelegate-Protocol.h"

__attribute__((visibility("hidden")))
@interface WAJSEventHandler_refreshSession : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onJSRefreshSessionResponse:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end


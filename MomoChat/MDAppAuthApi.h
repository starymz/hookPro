//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@interface MDAppAuthApi : MDApiBase
{
}

- (void)getTokenWithParam:(id)arg1 identifier:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)authAppInfoWithParam:(id)arg1 identifier:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)verifyWithParam:(id)arg1 identifier:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;

@end


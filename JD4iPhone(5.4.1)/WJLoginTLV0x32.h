//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@class NSString;

@interface WJLoginTLV0x32 : WJLoginTLVBase
{
    NSString *_buttionTips;
}

@property(copy, nonatomic) NSString *buttionTips; // @synthesize buttionTips=_buttionTips;
- (void).cxx_destruct;
- (unsigned long long)getTLVLength;
- (int)decodeFromBuffer:(id)arg1 atLoc:(unsigned long long)arg2;

@end


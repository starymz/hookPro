//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPBodyObject-Protocol.h"

@class NSString;

@interface AMPBodyNotifyTrigger : NSObject <AMPBodyObject>
{
    long long _packTargetId;	// 8 = 0x8
    long long _triggerUserId;	// 16 = 0x10
    long long _relationUserId;	// 24 = 0x18
    long long _triggerTime;	// 32 = 0x20
    long long _triggerType;	// 40 = 0x28
    NSString *_content;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) long long triggerTime; // @synthesize triggerTime=_triggerTime;
@property(nonatomic) long long relationUserId; // @synthesize relationUserId=_relationUserId;
@property(nonatomic) long long triggerUserId; // @synthesize triggerUserId=_triggerUserId;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)parseFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


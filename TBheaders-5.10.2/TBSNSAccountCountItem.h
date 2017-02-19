//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSNSAccountCountItem : TBJSONModel
{
    unsigned long long _id;	// 8 = 0x8
    long long _fansCount;	// 16 = 0x10
    long long _followCount;	// 24 = 0x18
    long long _shareItemCount;	// 32 = 0x20
    long long _favourCount;	// 40 = 0x28
}

@property(nonatomic) long long favourCount; // @synthesize favourCount=_favourCount;
@property(nonatomic) long long shareItemCount; // @synthesize shareItemCount=_shareItemCount;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DSRequestModel;

@interface DSConfig : NSObject
{
    unsigned long long _configType;	// 8 = 0x8
    DSRequestModel *_dsModel;	// 16 = 0x10
}

@property(retain, nonatomic) DSRequestModel *dsModel; // @synthesize dsModel=_dsModel;
@property(nonatomic) unsigned long long configType; // @synthesize configType=_configType;
- (void).cxx_destruct;

@end

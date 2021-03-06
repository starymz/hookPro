//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ACDSSubscribeCost : NSObject
{
    NSString *_dsName;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    double _netTime;	// 32 = 0x20
    double _afterNetTime;	// 40 = 0x28
    double _totalTime;	// 48 = 0x30
}

+ (id)costOf:(id)arg1;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double afterNetTime; // @synthesize afterNetTime=_afterNetTime;
@property(nonatomic) double netTime; // @synthesize netTime=_netTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *dsName; // @synthesize dsName=_dsName;
- (void).cxx_destruct;

@end


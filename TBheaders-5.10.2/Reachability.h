//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface Reachability : NSObject
{
    _Bool reachableOnWWAN;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
    struct dispatch_queue_s *reachabilitySerialQueue;	// 24 = 0x18
    CDUnknownBlockType reachableBlock;	// 32 = 0x20
    CDUnknownBlockType unreachableBlock;	// 40 = 0x28
    id reachabilityObject;	// 48 = 0x30
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(nonatomic) struct dispatch_queue_s *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (void).cxx_destruct;
- (id)description;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (long long)currentReachabilityStatus;
- (_Bool)isInterventionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)connectionRequired;
- (_Bool)isConnectionRequired;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachable;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end


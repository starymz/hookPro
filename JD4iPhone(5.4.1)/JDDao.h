//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDNetwork, JDStoreNetwork;

@interface JDDao : NSObject
{
    JDStoreNetwork *_network;
    CDUnknownBlockType _baseBlock;
    CDUnknownBlockType _componentsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType componentsBlock; // @synthesize componentsBlock=_componentsBlock;
@property(copy, nonatomic) CDUnknownBlockType baseBlock; // @synthesize baseBlock=_baseBlock;
@property(retain, nonatomic) JDNetwork *network; // @synthesize network=_network;
- (void)dealloc;
- (id)init;

@end


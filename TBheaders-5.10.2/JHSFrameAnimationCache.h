//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JHSFrameAnimationCache : NSObject
{
}

+ (id)sharedFrameCacheInstance;
- (id)pathComponentWithURL:(id)arg1;
- (id)unzipCachePathWithURL:(id)arg1;
- (id)zipCachePathWithURL:(id)arg1;
- (id)unzipRootCachePath;
- (id)zipRootCachePath;
- (id)rootCachePath;
- (id)getUnzipConfigWithURL:(id)arg1;
- (id)getZipResourceWithURL:(id)arg1;
- (void)removeAllResource;
- (void)removeResourceWithURL:(id)arg1;
- (id)getResourceCacheForURL:(id)arg1;
- (void)storeFrameResource:(id)arg1 withURL:(id)arg2;

@end

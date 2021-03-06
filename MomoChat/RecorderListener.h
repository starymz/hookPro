//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RecorderListener : NSObject
{
    struct AudioQueueLevelMeterState *_levels;
    struct OpaqueAudioQueue *_queue;
    double _sampleRate;
    struct AudioStreamBasicDescription _format;
}

+ (id)sharedListener;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(nonatomic) struct OpaqueAudioQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) struct AudioQueueLevelMeterState *levels; // @synthesize levels=_levels;
- (void)setupMetering;
- (void)setupBuffers;
- (void)setupFormat;
- (void)setupQueue;
- (void)updateLevels;
- (float)peakPower;
- (float)averagePower;
- (_Bool)isListening;
- (void)stop;
- (void)pause;
- (void)listen;
- (void)dealloc;

@end


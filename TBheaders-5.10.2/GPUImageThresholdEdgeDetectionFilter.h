//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageSobelEdgeDetectionFilter.h"

@interface GPUImageThresholdEdgeDetectionFilter : GPUImageSobelEdgeDetectionFilter
{
    int thresholdUniform;	// 280 = 0x118
    double _threshold;	// 288 = 0x120
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (id)init;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

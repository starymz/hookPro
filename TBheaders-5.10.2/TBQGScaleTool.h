//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBQGScaleTool : NSObject
{
    long long _scaleType;	// 8 = 0x8
    double _scale;	// 16 = 0x10
}

+ (id)sharedInstance;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long scaleType; // @synthesize scaleType=_scaleType;
- (double)scaleFloatFloorf:(double)arg1;
- (double)scaleFloatRoundf:(double)arg1;
- (double)scaleFloatCeilf:(double)arg1;
- (double)scaleFloat:(double)arg1;
- (id)init;

@end


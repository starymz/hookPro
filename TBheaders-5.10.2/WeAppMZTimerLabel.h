//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSDate, NSDateFormatter, NSString, NSTimer;
@protocol MZTimerLabelDelegate;

@interface WeAppMZTimerLabel : UILabel
{
    double timeUserValue;	// 8 = 0x8
    NSDate *startCountDate;	// 16 = 0x10
    NSDate *pausedTime;	// 24 = 0x18
    NSDate *date1970;	// 32 = 0x20
    NSDate *timeToCountOff;	// 40 = 0x28
    _Bool _counting;	// 48 = 0x30
    _Bool _resetTimerAfterFinish;	// 49 = 0x31
    _Bool _shouldCountBeyondHHLimit;	// 50 = 0x32
    int _timerType;	// 52 = 0x34
    NSString *_timeFormat;	// 56 = 0x38
    id <MZTimerLabelDelegate> _delegate;	// 64 = 0x40
    UILabel *_timeLabel;	// 72 = 0x48
    CDUnknownBlockType _endedBlock;	// 80 = 0x50
    NSTimer *_timer;	// 88 = 0x58
    NSDateFormatter *_dateFormatter;	// 96 = 0x60
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(copy) CDUnknownBlockType endedBlock; // @synthesize endedBlock=_endedBlock;
@property(nonatomic) _Bool shouldCountBeyondHHLimit; // @synthesize shouldCountBeyondHHLimit=_shouldCountBeyondHHLimit;
@property _Bool resetTimerAfterFinish; // @synthesize resetTimerAfterFinish=_resetTimerAfterFinish;
@property(readonly) _Bool counting; // @synthesize counting=_counting;
@property int timerType; // @synthesize timerType=_timerType;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak id <MZTimerLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateLabel;
- (void)setup;
- (void)reset;
- (void)pause;
- (void)startWithEndingBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (double)getTimeRemaining;
- (double)getTimeCounted;
- (void)addTimeCountedByTime:(double)arg1;
@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
- (void)setCountDownToDate:(id)arg1;
- (void)setCountDownTime:(double)arg1;
- (void)setStopWatchTime:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 andTimerType:(int)arg2;
- (id)initWithTimerType:(int)arg1;

@end

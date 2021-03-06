//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface MMPWebProgress : UIView
{
    float _progress;	// 8 = 0x8
    UIView *_progressBarView;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)clearTimer;
- (void)handleTimer:(id)arg1;
- (void)stopProgress;
- (void)startProgress;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)configureViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


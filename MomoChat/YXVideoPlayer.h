//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerLayer;

@interface YXVideoPlayer : UIView
{
    long long currentRate;
    id avplayerEndTimeObserver;
    id avplayerTimeObserver;
    _Bool _muteSound;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    id <YXVideoPlayerDelegate> _delegate;
    AVPlayer *_bgmPlayer;
    UIView *_syncContainer;
}

@property(retain, nonatomic) UIView *syncContainer; // @synthesize syncContainer=_syncContainer;
@property(retain, nonatomic) AVPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(nonatomic) id <YXVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool muteSound; // @synthesize muteSound=_muteSound;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)updateBGMPlayerItem:(id)arg1;
- (void)setPlayItemWithEffect:(id)arg1 bgmPlayerItem:(id)arg2 andSynchronizedLayer:(id)arg3 effectArray:(id)arg4;
- (void)setSoundMixIntensity:(double)arg1;
- (void)dealloc;
- (void)updateProgress:(double)arg1;
- (void)addProgressObserver;
- (void)ShowOrHideAnimatedLayer:(_Bool)arg1;
- (void)updateSyncLayerPositionAndTransform:(struct CGSize)arg1;
- (id)getImageAtSecond:(double)arg1;
- (void)seekToSecond:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)mute;
- (void)setVideoPlayItem:(id)arg1 withDuration:(double)arg2;
- (void)setVideoPlayItem:(id)arg1;
- (void)setOncePlayWithPlayItem:(id)arg1;
- (void)updateWithAnimatedLayer:(id)arg1;
- (void)setPlayItemWithEffect:(id)arg1 andSynchronizedLayer:(id)arg2 effectArray:(id)arg3;
- (void)resetFrame:(struct CGRect)arg1;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playerTapped;
- (void)addTapGesture;
- (void)removeObserverForPlayer;
- (void)didBecameActive;
- (void)willResignActive;
- (void)addPlayerObserver;
- (id)initWithFrame:(struct CGRect)arg1;

@end

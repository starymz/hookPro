//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDShortcutManager : NSObject
{
    int _unsolvedAction;
}

@property(nonatomic) int unsolvedAction; // @synthesize unsolvedAction=_unsolvedAction;
- (void)listenBackgroundNotification:(id)arg1;
- (void)checkOverlayWindow;
- (void)gotoMomentVideoRelease;
- (void)gotoFeedVideoRelease;
- (void)gotoFeedRelease;
- (void)handleGotoMomentVideoRelease;
- (void)handlePushToFeedVideoRelease;
- (void)handlePushToFeedRelease;
- (_Bool)checkUnsolvedAction;
- (_Bool)handleShortCutItem:(id)arg1;
- (id)init;
- (void)dealloc;

@end


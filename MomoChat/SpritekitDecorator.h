//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatStatusBaseDecorator.h"

@class ChatStatusView;

@interface SpritekitDecorator : ChatStatusBaseDecorator
{
    ChatStatusView *_chatStatusView;
}

@property(nonatomic) __weak ChatStatusView *chatStatusView; // @synthesize chatStatusView=_chatStatusView;
- (void).cxx_destruct;
- (void)finishedSpritekitAnimate;
- (void)startSpritekitAnimate;
- (void)wrapper:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBAddressBookShareContactView : UIView
{
    UIButton *_sendButton;	// 8 = 0x8
    CDUnknownBlockType _tapBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
- (void).cxx_destruct;
- (void)tapSendButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tapBlock:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class NSString;

@interface JDShopMemberLodinView : JDView
{
    id <JDShopMemberLodinViewDelegate> _loginDelegate;
    NSString *_shopId;
}

@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) id <JDShopMemberLodinViewDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
- (void)LodinJDMAT:(id)arg1;
- (void)LoginBtnClick:(id)arg1;
- (void)refreshAfterLogin;
- (id)initWithFrame:(struct CGRect)arg1 shopId:(id)arg2;
- (void)dealloc;

@end

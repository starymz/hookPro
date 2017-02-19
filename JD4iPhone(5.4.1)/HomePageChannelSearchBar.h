//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HomePageChannelDisplayItem.h"
#import "HomePageChannelInteractiveItem.h"

@class NSString, UIButton;

@interface HomePageChannelSearchBar : UIView <HomePageChannelDisplayItem, HomePageChannelInteractiveItem>
{
    UIButton *_departmentsButton;
    UIButton *_searchButton;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *departmentsButton; // @synthesize departmentsButton=_departmentsButton;
- (void).cxx_destruct;
- (void)handleActionBlock:(CDUnknownBlockType)arg1 withData:(id)arg2;
- (void)populateWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

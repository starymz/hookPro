//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MDProfileTableBindViewDelegate.h"

@class NSString, UILabel;

@interface MDProfileUserEditSessionCell : UITableViewCell <MDProfileTableBindViewDelegate>
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bindHobbySessionWithModel:(id)arg1;
- (void)bindLifeSessionWithModel:(id)arg1;
- (void)bindBasicSessionWithModel:(id)arg1;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

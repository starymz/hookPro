//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface WareConsultCell : UITableViewCell
{
    UILabel *questionIconLabel;
    UILabel *dateLabel;
    UILabel *questionLabel;
    UILabel *userInfoLabel;
    UIView *splitView;
    UILabel *answerIconLabel;
    UILabel *answerLabel;
}

+ (double)heightForModel:(id)arg1;
- (void).cxx_destruct;
- (void)setWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADActivityModel.h"

@class JDShopActionConfigModel, NSString;

@interface JDShopADActivityModel : ADActivityModel
{
    JDShopActionConfigModel *actionModel;
    NSString *templateId;
    NSString *_uid;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) NSString *templateId; // @synthesize templateId;
@property(retain, nonatomic) JDShopActionConfigModel *actionModel; // @synthesize actionModel;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1 uid:(id)arg2 index:(long long)arg3;
- (void)setDataWithDic:(id)arg1;

@end

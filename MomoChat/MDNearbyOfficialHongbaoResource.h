//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDNearbyOfficialHongbaoResource : NSObject
{
    NSString *_imgUrlStr;
    NSString *_titleText;
    NSString *_desIconUrlStr;
    NSString *_desText;
    NSString *_desTextColor;
    NSString *_actionLabelText;
    NSString *_actionTextColor;
    NSString *_actionGotoStr;
}

+ (id)modelFromDict:(id)arg1;
@property(copy, nonatomic) NSString *actionGotoStr; // @synthesize actionGotoStr=_actionGotoStr;
@property(copy, nonatomic) NSString *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(copy, nonatomic) NSString *actionLabelText; // @synthesize actionLabelText=_actionLabelText;
@property(copy, nonatomic) NSString *desTextColor; // @synthesize desTextColor=_desTextColor;
@property(copy, nonatomic) NSString *desText; // @synthesize desText=_desText;
@property(copy, nonatomic) NSString *desIconUrlStr; // @synthesize desIconUrlStr=_desIconUrlStr;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *imgUrlStr; // @synthesize imgUrlStr=_imgUrlStr;
- (void).cxx_destruct;

@end

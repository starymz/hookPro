//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSCCommentImageItem : TBJSONModel
{
    NSString *_picName;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *picName; // @synthesize picName=_picName;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (void)setFromDictionary:(id)arg1;

@end


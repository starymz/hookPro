//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUSDKDOBase.h"

@class NSString;

@interface JUSDKItemTagInfo : JUSDKDOBase
{
    _Bool _deleted;	// 8 = 0x8
    _Bool _isOpen;	// 9 = 0x9
    NSString *_code;	// 16 = 0x10
    NSString *_tagInfoDescription;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_imageUrl;	// 40 = 0x28
    NSString *_color;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tagInfoDescription; // @synthesize tagInfoDescription=_tagInfoDescription;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end


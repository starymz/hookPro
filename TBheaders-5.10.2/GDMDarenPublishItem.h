//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GDMDarenPublishElement, NSArray, NSString;

@interface GDMDarenPublishItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    NSArray *_images;	// 24 = 0x18
    NSArray *_products;	// 32 = 0x20
    NSArray *_tags;	// 40 = 0x28
    GDMDarenPublishElement *_locatonInfo;	// 48 = 0x30
}

+ (id)item;
@property(retain) GDMDarenPublishElement *locatonInfo; // @synthesize locatonInfo=_locatonInfo;
@property(retain) NSArray *tags; // @synthesize tags=_tags;
@property(retain) NSArray *products; // @synthesize products=_products;
@property(retain) NSArray *images; // @synthesize images=_images;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isTextContainEmoji;
- (void)removeTagAtIndex:(unsigned long long)arg1;
- (void)updateTags:(id)arg1;
- (id)init;

@end

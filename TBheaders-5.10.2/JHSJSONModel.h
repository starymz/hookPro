//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary;

@interface JHSJSONModel : TBJSONModel
{
    NSDictionary *_originalJSON;	// 8 = 0x8
}

+ (id)mappingList:(id)arg1;
@property(retain, nonatomic) NSDictionary *originalJSON; // @synthesize originalJSON=_originalJSON;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

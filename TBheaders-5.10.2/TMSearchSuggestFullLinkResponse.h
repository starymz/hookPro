//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TMSearchMtopResponse-Protocol.h"

@class NSArray, NSString;

@interface TMSearchSuggestFullLinkResponse : NSObject <TMSearchMtopResponse>
{
    NSArray *_result;	// 8 = 0x8
    NSString *_status;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)parseWithJsonData:(id)arg1;
- (id)validJsonDataFromResponseData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, RequestSetupModel, ScanSearchResults, ScanSearchResultsController;

@protocol ScanSearchResultsControllerDelegate <NSObject>

@optional
- (void)scanSearchResultsController:(ScanSearchResultsController *)arg1 didCompleteWithResults:(ScanSearchResults *)arg2 error:(NSError *)arg3;
- (void)scanSearchResultsController:(ScanSearchResultsController *)arg1 prepareForRequest:(RequestSetupModel *)arg2;
@end

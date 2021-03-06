//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSDateFormatter, NSString;

@interface GameNotificationListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *_tableView;
    NSArray *_gameAds;
    NSArray *_bubbleMessages;
    NSArray *_sectionTypes;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(retain, nonatomic) NSArray *bubbleMessages; // @synthesize bubbleMessages=_bubbleMessages;
@property(retain, nonatomic) NSArray *gameAds; // @synthesize gameAds=_gameAds;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createSeparatorView:(double)arg1;
- (id)titleOfSection:(unsigned long long)arg1;
- (unsigned int)typeOfSection:(unsigned long long)arg1;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


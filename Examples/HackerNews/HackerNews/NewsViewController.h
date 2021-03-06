//
//  NewsViewController.h
//  NNNetworkExample
//
//  Created by Tomaz Nedeljko on 16/10/12.
//  Copyright (c) 2012 Tomaz Nedeljko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AccountsViewController.h"
#import "AddAccountViewController.h"

@interface NewsViewController : UITableViewController <AccountsViewControllerDelegate, AddAccountViewControllerDelegate, NNReadLaterActivityDelegate>

@property(strong, readonly, nonatomic) NSArray *newsItems;
@property(strong, readonly, nonatomic) NSOperationQueue *operationQueue;

- (IBAction)refresh:(id)sender;

@end

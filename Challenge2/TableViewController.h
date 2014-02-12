//
//  TableViewController.h
//  Challenge2
//
//  Created by Larry on 2/11/14.
//  Copyright (c) 2014 Larry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableCell.h"

@interface TableViewController : UITableViewController

@property (nonatomic, strong) NSArray *libraries;
@property (nonatomic, strong) NSArray *books;
@property (nonatomic, strong) NSArray *shelves;
@end

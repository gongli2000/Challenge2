//
//  TableCell.h
//  Challenge2
//
//  Created by Larry on 2/12/14.
//  Copyright (c) 2014 Larry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableCell : UITableViewCell

@property (nonatomic,strong) IBOutlet UILabel *libraryLabel;
@property (nonatomic,strong) IBOutlet UILabel *selfLabel;
@property (nonatomic,strong) IBOutlet UILabel *bookLabel;

@end

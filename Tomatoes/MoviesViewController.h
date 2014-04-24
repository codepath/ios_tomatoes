//
//  MoviesViewController.h
//  Tomatoes
//
//  Created by Timothy Lee on 4/24/14.
//  Copyright (c) 2014 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MoviesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSString *movieType;

@end

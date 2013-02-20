//
//  AFDetailViewController.h
//  Validate
//
//  Created by James Errol Villagarcia on 2/20/13.
//  Copyright (c) 2013 Apply Financial Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

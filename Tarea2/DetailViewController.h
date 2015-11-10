//
//  DetailViewController.h
//  Tarea2
//
//  Created by José Carlos Pérez Vilchis on 10/11/15.
//  Copyright © 2015 José Carlos Pérez Vilchis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


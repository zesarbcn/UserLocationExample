//
//  ViewController.h
//  UserLocationExample
//
//  Created by Cesar Perez Laguna on 29/03/14.
//  Copyright (c) 2014 Cesar Perez Laguna. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *latLabel;
@property (weak, nonatomic) IBOutlet UILabel *longLabel;
@property (weak, nonatomic) IBOutlet UILabel *adrLabel;

- (IBAction)getCurrentLocation:(id)sender;

@end

//
//  ViewController.h
//  StepperExample
//
//  Created by Rob Phillips on 5/23/13.
//  Copyright (c) 2013 Rob Phillips. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIVerticalStepper.h"

@interface ViewController : UIViewController <UIVerticalStepperDelegate>

@property (nonatomic, weak) IBOutlet UILabel *stepperViaDelegateLabel;
@property (nonatomic, weak) IBOutlet UIVerticalStepper *stepperViaDelegate;

@property (nonatomic, weak) IBOutlet UILabel *stepperLabel;
@property (nonatomic, weak) IBOutlet UIVerticalStepper *stepper;

@end

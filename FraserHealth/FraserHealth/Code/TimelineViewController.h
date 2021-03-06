//
//  TimelineViewController.h
//  FraserHealth
//
//  Created by Jesse Scott on 2014-03-15.
//  Copyright (c) 2014 ECUAD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineViewController : UIViewController {
    
    UIFont *titleFont;
    
}

// Properties
@property (weak, nonatomic) IBOutlet UILabel *titleBar;

// Methods
- (void) makeGoalVisible;
- (void) makeNoteVisible;


@end

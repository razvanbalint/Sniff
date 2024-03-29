//
//  LoggedUserView.h
//  Sniff
//
//  Created by Razvan Balint on 21/07/15.
//  Copyright (c) 2015 Razvan Balint. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoggedUserViewDelegate <NSObject>

- (void)loginButtonPressed;

@end

@interface LoggedUserView : UIView

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UIButton *loggedUser;

@property (nonatomic) id<LoggedUserViewDelegate> delegate;

- (id)initWithFrame:(CGRect)frame;
- (IBAction)loginButtonPresed:(id)sender;

@end

//
//  FeedbackFooterView.h
//  Sniff
//
//  Created by Razvan Balint on 27/08/15.
//  Copyright (c) 2015 Razvan Balint. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomRatingSlider.h"

@protocol FeedbackFooterViewDelegate <NSObject>

- (void)sendFeedbackWithRating:(int)ratingValue Comment:(NSString*)comment;

@end

@interface FeedbackFooterView : UIView <CustomRatingSliderDelegate>

@property (nonatomic, weak) IBOutlet UITextView *commentView;
@property (nonatomic, assign) float userVote;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *SliderWidthCOnstraint;

@property (nonatomic, strong) id <FeedbackFooterViewDelegate> delegate;

- (IBAction)feedbackButtonTouched:(id)sender;

@end
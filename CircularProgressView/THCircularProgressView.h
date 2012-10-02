//
//  THCircularProgressView.h
//  BigDataApp
//
//  Created by Tommy Hanks on 8/15/12.
//  Copyright 2012 tommymaxhanks.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THCircularProgressView;

@protocol THCircularProgressViewDelegate
@required
@optional
-(void)progressView:(THCircularProgressView*)view updatedPercent:(float)percent;

@end

@interface THCircularProgressView : UIControl  
{
	NSObject<THCircularProgressViewDelegate>* _delegate;
}
@property (assign) NSObject<THCircularProgressViewDelegate>* delegate;
@property (retain) UIColor* trackColor;
@property (retain) UIColor* endGradientColor;
@property (retain) UIColor* progressColor;
@property (assign,nonatomic) float percentCompleted;
-(void)setPercent:(float)percent animated:(BOOL)animated;

@end
//
//  LDTransformTableView.h
//  PLLivingDemo
//
//  Created by TaoZeyu on 16/7/20.
//  Copyright © 2016年 com.pili-engineering. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LDTransformTableView : UITableView

@property (nonatomic, assign) BOOL canNotMaskGestureRecognizer;

- (instancetype)initWithTransform:(CGAffineTransform)transform;

@end

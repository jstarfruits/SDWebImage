//
//  UIImage+GIF.h
//  LBGIFImage
//
//  Created by Laurin Brandner on 06.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GIF)

+ (nullable UIImage *)sd_animatedGIFNamed:(nullable NSString *)name;

+ (nullable UIImage *)sd_animatedGIFWithData:(nullable NSData *)data;

- (nullable UIImage *)sd_animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end

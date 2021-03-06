//
//  UIImage+ZXNavBundleExtension.h
//  ZXNavigationBar
//
//  Created by 李兆祥 on 2020/3/11.
//  Copyright © 2020 ZXLee. All rights reserved.
//  https://github.com/SmileZXLee/ZXNavigationBar

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ZXNavBundleExtension)
+ (UIImage *)imageFromBundleWithImageName:(NSString *)imageName;
@end

NS_ASSUME_NONNULL_END

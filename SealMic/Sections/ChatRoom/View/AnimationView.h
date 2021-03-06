//
//  AnimationView.h
//  SealMic
//
//  Created by 张改红 on 2019/5/8.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AnimationView : UIView
@property (nonatomic, strong) UIImage *image;
- (void)startVoiceAnimation;
- (void)stopVoiceAnimation;
@end

NS_ASSUME_NONNULL_END

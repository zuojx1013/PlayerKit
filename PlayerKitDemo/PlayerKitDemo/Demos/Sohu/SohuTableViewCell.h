//
//  SohuTableViewCell.h
//  PlayerKitDemo
//
//  Created by Jack_iMac on 16/1/18.
//  Copyright © 2016年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//
#import <UIKit/UIKit.h>

static NSString * const SohuTableViewCellIdentifier = @"SohuTableViewCellIdentifier";

@class PlayerKitContainer;

@interface SohuTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet PlayerKitContainer *playerContainer;

@end

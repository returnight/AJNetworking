//
//  ResponseBeanDemo.h
//  AJNetworking
//
//  Created by 钟宝健 on 16/3/22.
//  Copyright © 2016年 aboojan. All rights reserved.
//

#import "AJResponseBeanBase.h"

@interface ResponseBeanDemo : AJResponseBeanBase <AJResponseBeanProtocol>
@property (nonatomic,strong) NSString *msg;
@property (nonatomic,assign) NSInteger code;
@end

//
//  Instruction.m
//  额温枪
//
//  Created by hu on 2018/4/11.
//  Copyright © 2018年 huweihong. All rights reserved.
//

#import "Instruction.h"

@implementation Instruction
+(NSString *)getNowDateString{

//例如 18-04-11 09：23：24  转成16进制数据  12 04 0b 09 17 18
    NSDateFormatter *formatter = [[NSDateFormatter alloc]init];
    [formatter setDateFormat:@"yyMMddHHmmss"];
    NSString *currentDateStr = [formatter stringFromDate:[NSDate date]];

    NSLog(@"%@",currentDateStr);

    NSMutableString * dateMutableStr = [[NSMutableString alloc]init];
    for (int i = 0; i < currentDateStr.length; i+=2) {
        NSString * subStr = [currentDateStr substringWithRange:NSMakeRange(i, 2)];
        NSLog(@"====%02lx",(long)[subStr integerValue]);

        [dateMutableStr appendFormat:@"%02lx",(long)[subStr integerValue]];
    }

    NSLog(@"%@",dateMutableStr);

    return dateMutableStr;
}
+(NSString *)timeAnalyse:(NSData *)data{

    return nil;
}
+(NSString *)tempAnalyse:(NSData *)data{

    return nil;
}
@end
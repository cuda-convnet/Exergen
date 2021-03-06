//
//  Instruction.h
//  额温枪
//
//  Created by hu on 2018/4/11.
//  Copyright © 2018年 huweihong. All rights reserved.
//

#import <Foundation/Foundation.h>

#define HeaderName @"CosbeautySS-"

/*************软件接受硬件数据的特征值***********************/
#define NormalElectric 0x80 //电压正常
#define LowerElectric 0x81 //电压低
#define NOElectric 0x82 //无电
#define NormalTemp 0x83 //温度正常
#define LowerTemp 0x84 //温度过低
#define NaturalHigher 0x85 //环境温度过高
#define NaturalLower 0x86 //环境温度过低
#define errorMsg 0x87 //硬件错误
#define UnitRight 0x88 //单位设置成功
#define UnitCorrect 0x89 //单位设置失败
#define DataError 0x8A //数据格式错误
#define HistoryNum 0x8B //历史数据包数







@interface CHInstruction : NSObject
//指令解析
//上传给硬件的当前的时间
+(NSString *)getNowDateString;

//从硬件获取出来的时间解析
+(NSString *)timeAnalyse:(NSData *)data;
//从硬件获取出来的温度
+(NSString *)tempAnalyse:(NSData *)data;
//获取历史数据包数
+(NSInteger)getHistroyNum:(NSData *)data;
@end

//
//  list.h
//  额温枪
//
//  Created by hu on 2018/4/12.
//  Copyright © 2018年 huweihong. All rights reserved.
//

#ifndef list_h
#define list_h



/*** 4月11日更改****/
//1.指令集合特征挪后
//2.单位设置成功或者失败 应答
//3.指令错误的应答
//4.历史数据返回32条，软件接收完毕发送应答，硬件清空数据


/**4.11完成情况**/
/*1.软件发送指令硬件已经能接受，并给予反馈。
 2.目前反馈的给软件是单位设置成功和单位设置失败
 */



/******问题确认******/
/*1.电池电量（春阳，晨曦）
 2.设备广播名称（王巍）
 3.mac地址（海全）
 4.连接上设备以后，响声音（向东）
 5.手动录入额温度 （向东有文档）
 */


/*** 4月12日更改****/
//1.与王巍和向东沟通设备广播名称和Prd文档的事情
//2.与春阳海全晨曦电话会议沟通MAC地址广播的事情
//3.昨天走通的流程，嵌入式修改之后出现问题，不返回数值
//4.修改蓝牙测试程序，完成所有指令验证
//5.静静App蓝牙连接流程
//6.我写App同步历史数据流程
//未验证历史数据清空、没有连接的响声

/*******4月13号******/
//1.用蓝牙模拟器完成App蓝牙连接和同步历史数据流程

#endif /* list_h */

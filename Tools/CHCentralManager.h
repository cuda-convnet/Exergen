//
//  CHCentralManager.h
//  额温枪
//
//  Created by hu on 2018/4/10.
//  Copyright © 2018年 huweihong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define Write_UUID @"01005970-6D75-4753-5053-676E6F6C7553"
#define Observe_UUID @"02005970-6D75-4753-5053-676E6F6C7553"

#define  SERVICE_UUID@"00005970-6d75-4753-5053-676e6f6c7553"

@protocol CHCentralManagerDelegate <NSObject>

@optional
- (void) stopScanPeripheral;
- (void) discoverPeripheral:(CBPeripheral *)peripheral;//发现设备
- (void) discoverServices:(CBPeripheral *)peripheral;//发现服务
- (void) failToConnectPeripheral:(CBPeripheral *)peripheral;//连接失败
- (void) peripheral:(CBPeripheral *)peripheral updateValueForCharacteristic:(CBCharacteristic *)characteristic;//获取外设发来的数据

/*****以上的代理只是为了打印信息可以不要*****/


- (void) scanEnd;
- (void) blueToothOpen:(BOOL)isOpen;//连接设备
- (void) connectPeripheral:(CBPeripheral *)peripheral;//断开连接设备
- (void) disconnectPeripheral:(CBPeripheral *)peripheral;//发现特征服务
- (void) peripheral:(CBPeripheral *)peripheral discoverCharacteristicsForService:(CBService *)service;//测试打印东西使用方法

@end

@interface CHCentralManager : NSObject<CBCentralManagerDelegate,CBPeripheralDelegate>

@property (nonatomic,strong) CBCentralManager *centralManager;
@property (nonatomic,strong) NSMutableArray *nDevices;
@property (nonatomic,strong) CBCharacteristic*writeCharacter;
@property (nonatomic,strong) CBPeripheral*discovedPeripheral;//链接的设备


@property (nonatomic,assign) NSInteger histroryNum;
@property (nonatomic,strong) NSMutableArray * histroryArray;
@property (nonatomic,assign) id<CHCentralManagerDelegate>delegate;
+ (instancetype)shareManager;
-(void)Scan;
-(void)sendMessage:(NSData *)data;
-(void)connect:(CBPeripheral *)peripheral;
- (void) cancel:(CBPeripheral *)peripheral;//断开连接
-(void)centralManager:(CBCentralManager *)central didConnectPeripheral:(CBPeripheral *)peripheral;

@end

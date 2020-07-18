//
// LWPreferences.h
// LockWatch2
//
// Created by janikschmidt on 1/23/2020
// Copyright © 2020 Team FESTIVAL. All rights reserved
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LWPreferences : NSObject {
	NSMutableDictionary* _defaults;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isEmulatingDevice;
@property (nonatomic) NSString* emulatedDeviceType;
@property (nonatomic) NSInteger backgroundType;
@property (nonatomic) BOOL batteryChargingViewHidden;
@property (nonatomic) NSInteger complicationContent;

@property (nonatomic) BOOL onBoardingCompleted;
@property (nonatomic) NSString* upgradeLastVersion;

+ (instancetype)sharedInstance;
- (instancetype)init;
- (void)reloadPreferences;
- (BOOL)synchronize;

@end

NS_ASSUME_NONNULL_END
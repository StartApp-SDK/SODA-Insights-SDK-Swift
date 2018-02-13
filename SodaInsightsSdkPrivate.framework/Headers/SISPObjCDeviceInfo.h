//
//  SISPObjCDeviceInfo.h
//  SodaInsightsPrivateSdkSwift
//
//  Created by StartApp on 09/10/2017.
//  Copyright © 2017 StartApp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SISPObjCDeviceInfo : NSObject

NS_ASSUME_NONNULL_BEGIN

+ (SISPObjCDeviceInfo *)sharedInstance;
- (unsigned long)freeRam;
- (NSString *)platform;
- (NSString *)hwmodel;
- (NSDictionary*)existingIpAddresses;

NS_ASSUME_NONNULL_END

@end




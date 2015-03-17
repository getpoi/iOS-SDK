//
//  BeaconData.h
//  Beacon
//
//  Created by Salih zeki Cimen on 11/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface GPBeaconData : NSObject
{
    NSString *uniqueId;
    NSMutableArray<NSObject> *pois;
    NSString *platform;
    NSString *device;
    NSNumber *lon;
    NSNumber *lat;
    NSString *WifiSsid;
    BOOL ConnectedToWifi;
    NSString *IpAddress;
    NSString *SdkVersion;
    NSString *OsVersion;
}

@property NSString *uniqueId;
@property NSMutableArray<NSObject> *pois;
@property NSString *platform;
@property NSString *device;
@property NSNumber *lon;
@property NSNumber *lat;
@property NSString *WifiSsid;
@property BOOL ConnectedToWifi;
@property NSString *IpAddress;
@property NSString *SdkVersion;
@property NSString *OsVersion;

-(NSDictionary *)dictionary;

-(NSDictionary *)simpledictionary;

@end
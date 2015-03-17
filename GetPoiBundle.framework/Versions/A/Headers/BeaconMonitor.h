//
//  BeaconMonitor.h
//  GetPoi
//
//  Created by Salih zeki Cimen on 27/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ClientConfig.h"
#import "GPBeaconResponse.h"
#import "BeaconFilter.h"
#import "ScanResult.h"
#import "Poi.h"
#import "GPBeaconData.h"
#import "User.h"
#import "BeaconMonitorListener.h"
#import "UserPushNotifToken.h"

@interface BeaconMonitor : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLBeaconRegion *myBeaconRegion;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (nonatomic,strong) id<BeaconMonitorListener> listener;

- (void) startMonitoring;   // Starts the SDK and beacon monitoring, secret and uniqueId should be already set to start.

- (void) stopMonitoring;    // Stops beacon monitoring.

- (void) sendUserData;      // Send User Data to Server

- (NSString *) getUserCurrentLocation;  // Get user location from server

- (void) setSecret:(NSString *) Secret; // Fill with value that our company gives you.

- (void) setSimple:(BOOL) Simple;

- (void) setUniqueId:(NSString *) UniqueId; // Required to start monitoring, the main identifier of the user

- (void) sendPushNotifToken:(NSString *) pushToken;

/* User Variables */
// Required only for sendUserData method
// Required to filled out if you will use these info later
- (void) setName:(NSString *) Name;
- (void) setSurname:(NSString *) Surname;
- (void) setAddress:(NSString *) Address;
- (void) setTCKN:(NSString *) TCKN;
- (void) setAdvertisingId:(NSString *) AdvertisingId;
- (void) setEmail:(NSString *) Email;
- (void) setTelNo:(NSString *) TelNo;
- (void) setTwitter:(NSString *) Twitter;
- (void) setFacebook:(NSString *) Facebook;
- (void) setMacAddress:(NSString *) MacAddress;
/* End of User Variables */

@end
//
//  DisruptionStatus.h
//  FerryServices
//
//  Created by Stefan Church on 23/12/2013.
//  Copyright (c) 2013 Stefan Church. All rights reserved.
//

#ifndef FerryServices_SCDisruptionStatus_h
#define FerryServices_SCDisruptionStatus_h

typedef NS_ENUM(NSInteger, SCDisruptionStatus) {
    SCDisruptionStatusUnknown = -99,
    SCDisruptionStatusNormal = -1,
    SCDisruptionStatusSailingsAffected = 1,
    SCDisruptionStatusSailingsCancelled = 2
};

typedef NS_ENUM(NSInteger, SCDisruptionDetailsStatus) {
    SCDisruptionDetailsStatusNormal = 0,
    SCDisruptionDetailsStatusSailingsAffected = 1,
    SCDisruptionDetailsStatusSailingsCancelled = 2,
    SCDisruptionDetailsStatusInformation = -1
};

#endif

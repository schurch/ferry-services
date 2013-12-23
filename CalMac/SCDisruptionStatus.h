//
//  DisruptionStatus.h
//  CalMac
//
//  Created by Stefan Church on 23/12/2013.
//  Copyright (c) 2013 Stefan Church. All rights reserved.
//

#ifndef CalMac_SCDisruptionStatus_h
#define CalMac_SCDisruptionStatus_h

typedef NS_ENUM(NSInteger, SCDisruptionStatus) {
    SCDisruptionStatusNormal = -1,
    SCDisruptionStatusSailingsAffected = 1,
    SCDisruptionStatusSailingsCancelled = 2
};

#endif

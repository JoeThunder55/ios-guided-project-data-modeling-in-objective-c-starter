//
//  Quake.h
//  Quakes-Objc
//
//  Created by Joe on 5/26/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Quake : NSObject

- (instancetype)initWithMagnitude:(double)magnitude
                            place:(NSString *)place
                             time:(NSDate *)time
                         latitude:(double)latitude
                        longitude:(double)longitude;


@property (nonatomic, readonly) double magnitude;
@property (nonatomic, readonly, copy) NSString *place;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
 
@end

NS_ASSUME_NONNULL_END

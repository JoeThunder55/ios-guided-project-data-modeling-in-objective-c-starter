//
//  FirstResponder.m
//  Quakes-Objc
//
//  Created by Joe on 5/26/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "FirstResponder.h"

@implementation FirstResponder

//@interface FirstResponder () {
//    NSString *_name;
//}
//@end

@synthesize name = _name;

- (void)setName:(NSString *)name
{
    //willSet
    _name = name.copy; // [name copy];
    // didSet
}

- (NSString *)name
{
    return _name;
}

@end

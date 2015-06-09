//
//  CHBlowfish.h
//  TouchCPlatform
//
//  Created by Jiao Liu on 6/8/15.
//  Copyright (c) 2015 changhong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CHBlowfish : NSObject
{
    unsigned short int N, blockSize;
    
@private
    SInt32 P[18];
    SInt32 S[4][256];
}

@property(nonatomic, strong) NSString *Key;
@property(nonatomic, assign) long IV;

- (void)initBlowfish;
- (NSString *)encrypt:(NSString *)plain;
- (NSString *)decrypt:(NSString *)crypted;

@end

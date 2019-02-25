//
//  SRXXTEA.h
//  SREncryption
//
//  Created by 小叶 on 2019/2/25.
//  Copyright © 2019 siruoxian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface SRXXTEA : NSObject
+ (NSData *) encrypt:(NSData *)data key:(NSData *)key sign:(BOOL)sign;
+ (NSData *) encrypt:(NSData *)data stringKey:(NSString *)key sign:(BOOL)sign;

+ (NSString *) encryptToBase64String:(NSData *)data key:(NSData *)key sign:(BOOL)sign;
+ (NSString *) encryptToBase64String:(NSData *)data stringKey:(NSString *)key sign:(BOOL)sign;

+ (NSData *) encryptString:(NSString *)data key:(NSData *)key sign:(BOOL)sign;
+ (NSData *) encryptString:(NSString *)data stringKey:(NSString *)key sign:(BOOL)sign;

+ (NSString *) encryptStringToBase64String:(NSString *)data key:(NSData *)key sign:(BOOL)sign;
+ (NSString *) encryptStringToBase64String:(NSString *)data stringKey:(NSString *)key sign:(BOOL)sign;

+ (NSData *) decrypt:(NSData *)data key:(NSData *)key sign:(BOOL)sign ;
+ (NSData *) decrypt:(NSData *)data stringKey:(NSString *)key sign:(BOOL)sign ;

+ (NSData *) decryptBase64String:(NSString *)data key:(NSData *)key sign:(BOOL)sign;
+ (NSData *) decryptBase64String:(NSString *)data stringKey:(NSString *)key sign:(BOOL)sign ;

+ (NSString *) decryptToString:(NSData *)data key:(NSData *)key sign:(BOOL)sign ;
+ (NSString *) decryptToString:(NSData *)data stringKey:(NSString *)key sign:(BOOL)sign ;

+ (NSString *) decryptBase64StringToString:(NSString *)data key:(NSData *)key sign:(BOOL)sign ;
+ (NSString *) decryptBase64StringToString:(NSString *)data stringKey:(NSString *)key sign:(BOOL)sign ;

@end

@interface NSData (SRXXTEA)

- (NSData *) srxxteaEncrypt:(NSData *)key sign:(BOOL)sign;
- (NSData *) srxxteaDecrypt:(NSData *)key sign:(BOOL)sign ;

@end


NS_ASSUME_NONNULL_END

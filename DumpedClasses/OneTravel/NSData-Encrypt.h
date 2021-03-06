//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (Encrypt)
+ (id)generateRSAPublicKeyWithModulus:(id)arg1 exponent:(id)arg2;
+ (struct __SecKey *)getPublicKeyRef;
+ (struct __SecKey *)getKeyRefWithPersistentKeyRef:(void *)arg1;
+ (struct __SecKey *)addPeerPublicKey:(id)arg1 keyBits:(id)arg2;
+ (id)rsaEncryptData:(id)arg1 Modulus:(id)arg2 exponent:(id)arg3 error:(id *)arg4;
+ (id)decryptData:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (id)decryptData:(id)arg1 algorithmType:(unsigned int)arg2 options:(unsigned int)arg3 key:(id)arg4 keySize:(long long)arg5 iv:(id)arg6 error:(id *)arg7;
+ (id)encryptData:(id)arg1 algorithmType:(unsigned int)arg2 options:(unsigned int)arg3 key:(id)arg4 keySize:(long long)arg5 iv:(id)arg6 error:(id *)arg7;
+ (id)encryptData:(id)arg1 password:(id)arg2 addTag:(_Bool)arg3 error:(id *)arg4;
+ (id)encryptData:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (id)encryptString:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)hasPBEncryptTag;
@end


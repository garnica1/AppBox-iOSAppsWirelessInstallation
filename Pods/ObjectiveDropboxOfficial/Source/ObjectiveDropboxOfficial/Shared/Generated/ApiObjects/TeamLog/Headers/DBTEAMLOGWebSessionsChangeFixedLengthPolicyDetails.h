///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails;
@class DBTEAMLOGWebSessionsFixedLengthPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebSessionsChangeFixedLengthPolicyDetails` struct.
///
/// Changed how long members can stay signed in to Dropbox.com.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New session length policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGWebSessionsFixedLengthPolicy *dNewValue;

/// Previous session length policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGWebSessionsFixedLengthPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New session length policy. Might be missing due to
/// historical data gap.
/// @param previousValue Previous session length policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(nullable DBTEAMLOGWebSessionsFixedLengthPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGWebSessionsFixedLengthPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebSessionsChangeFixedLengthPolicyDetails`
/// struct.
///
@interface DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails` object.
///
+ (DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

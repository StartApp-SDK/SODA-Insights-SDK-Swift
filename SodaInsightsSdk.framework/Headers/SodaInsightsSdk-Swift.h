// Generated by Apple Swift version 4.1 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SodaInsightsSdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// User Profile - SIS_AgeRange enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_AgeRange) {
/// range18_24 description
  SIS_AgeRangeRange18_24 = 1,
/// range25_34 description
  SIS_AgeRangeRange25_34 = 2,
/// range35_44 description
  SIS_AgeRangeRange35_44 = 3,
/// range45_54 description
  SIS_AgeRangeRange45_54 = 4,
/// range55_plus description
  SIS_AgeRangeRange55_plus = 5,
};

/// User Profile - SIS_BodyType enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_BodyType) {
/// slender description
  SIS_BodyTypeSlender = 0,
/// fewExtraPounds description
  SIS_BodyTypeFewExtraPounds = 1,
/// petite description
  SIS_BodyTypePetite = 2,
/// medium description
  SIS_BodyTypeMedium = 3,
/// wellBuilt description
  SIS_BodyTypeWellBuilt = 4,
/// overweight description
  SIS_BodyTypeOverweight = 5,
};

/// User Profile - SIS_EducationLevel enum description.
typedef SWIFT_ENUM(NSInteger, SIS_EducationLevel) {
/// unknown description
  SIS_EducationLevelUnknown = -1,
/// earlyChildhood description
  SIS_EducationLevelEarlyChildhood = 0,
/// primaryOrEquivalent description
  SIS_EducationLevelPrimaryOrEquivalent = 1,
/// secondaryOrEquivalent description
  SIS_EducationLevelSecondaryOrEquivalent = 2,
/// bachelorOrEquivalent description
  SIS_EducationLevelBachelorOrEquivalent = 3,
/// masterOrEquivalent description
  SIS_EducationLevelMasterOrEquivalent = 4,
/// doctoralOrEquivalent description
  SIS_EducationLevelDoctoralOrEquivalent = 5,
/// stillStudying description
  SIS_EducationLevelStillStudying = 6,
/// professionalEducation description
  SIS_EducationLevelProfessionalEducation = 7,
};

/// SodaInsightsSdk error codes.
typedef SWIFT_ENUM(NSInteger, SIS_ErrorCodes) {
/// API call succeeded
  SIS_ErrorCodesSuccess = 0,
/// API call cannot be fulfilled due to missing parameters
  SIS_ErrorCodesMissingParameters = 1,
/// API call cannot be fulfilled due to invalid input parameters
  SIS_ErrorCodesInvalidParameters = 2,
/// API call cannot be fulfilled due to mismatched SodaInsightsSdkPrivate framework
  SIS_ErrorCodesInternalInconsistency = 3,
/// API call cannot be fulfilled due to a fact the insights functionality already enabled.
/// Relevant for enableInsights() function only.
  SIS_ErrorCodesInsightsAlreadyEnabled = 4,
/// API call cannot be fulfilled due to a fact the insights functionality already disabled.
/// Relevant for disableInsights() function only.
  SIS_ErrorCodesInsightsAlreadyDisabled = 5,
/// API call cannot be fulfilled due to a fact the SodaInsightsSdk instance has not been properly started.
  SIS_ErrorCodesInitalizationError = 6,
/// API call cannot be fulfilled due to a fact the SodaInsightsSdk functionality is disabled by calling disableInsights() function.
  SIS_ErrorCodesInsightsDisabled = 7,
/// Following API functions should be called only once during SodaInsightsSdk instance lifetime:
/// <ul>
///   <li>
///     initialize(withPartnerId, productId)
///   </li>
///   <li>
///     start()
///   </li>
/// </ul>
  SIS_ErrorCodesAlreadyInitialized = 8,
/// Some unexpected internal error has occurred. Please refer to console log for more info and contact StartApp.
  SIS_ErrorCodesInternalError = 9,
/// Server is busy or temporary unavailable, try again later
  SIS_ErrorCodesServerNotAvailableTryAgainLater = 10,
};

/// Event Activity type.
typedef SWIFT_ENUM(NSInteger, SIS_EventActivityType) {
/// unknown description
  SIS_EventActivityTypeUnknown = -1,
/// like description
  SIS_EventActivityTypeLike = 0,
/// dislike description
  SIS_EventActivityTypeDislike = 1,
/// ignore description
  SIS_EventActivityTypeIgnore = 2,
/// message description
  SIS_EventActivityTypeMessage = 3,
/// static_message description
  SIS_EventActivityTypeStatic_message = 4,
/// gift description
  SIS_EventActivityTypeGift = 5,
/// navigate description
  SIS_EventActivityTypeNavigate = 6,
/// tag description
  SIS_EventActivityTypeTag = 7,
/// share description
  SIS_EventActivityTypeShare = 8,
/// rate description
  SIS_EventActivityTypeRate = 9,
/// questionnaire description
  SIS_EventActivityTypeQuestionnaire = 10,
/// location_update description
  SIS_EventActivityTypeLocation_update = 11,
/// upload description
  SIS_EventActivityTypeUpload = 12,
/// remove description
  SIS_EventActivityTypeRemove = 13,
/// search description
  SIS_EventActivityTypeSearch = 14,
/// follow description
  SIS_EventActivityTypeFollow = 15,
/// comment description
  SIS_EventActivityTypeComment = 16,
/// connect description
  SIS_EventActivityTypeConnect = 17,
/// invite description
  SIS_EventActivityTypeInvite = 18,
/// play description
  SIS_EventActivityTypePlay = 19,
/// pay description
  SIS_EventActivityTypePay = 20,
/// report description
  SIS_EventActivityTypeReport = 21,
/// verify description
  SIS_EventActivityTypeVerify = 22,
/// block description
  SIS_EventActivityTypeBlock = 23,
/// unblock description
  SIS_EventActivityTypeUnblock = 24,
/// call description
  SIS_EventActivityTypeCall = 25,
/// enter description
  SIS_EventActivityTypeEnter = 26,
/// quit description
  SIS_EventActivityTypeQuit = 27,
/// uninstall description
  SIS_EventActivityTypeUninstall = 28,
/// unlike description
  SIS_EventActivityTypeUnlike = 29,
/// unfollow description
  SIS_EventActivityTypeUnfollow = 30,
/// view description
  SIS_EventActivityTypeView = 31,
/// trial description
  SIS_EventActivityTypeTrial = 32,
/// link description
  SIS_EventActivityTypeLink = 33,
/// add_friend description
  SIS_EventActivityTypeAdd_friend = 34,
/// create description
  SIS_EventActivityTypeCreate = 35,
/// interested_in description
  SIS_EventActivityTypeInterested_in = 36,
/// add_to_favorites description
  SIS_EventActivityTypeAdd_to_favorites = 37,
/// post description
  SIS_EventActivityTypePost = 38,
/// download description
  SIS_EventActivityTypeDownload = 39,
/// withdraw description
  SIS_EventActivityTypeWithdraw = 40,
};

/// Event Target Content type.
typedef SWIFT_ENUM(NSInteger, SIS_EventTargetContentType) {
/// user description
  SIS_EventTargetContentTypeUser = 0,
/// video description
  SIS_EventTargetContentTypeVideo = 1,
/// text description
  SIS_EventTargetContentTypeText = 2,
/// image description
  SIS_EventTargetContentTypeImage = 3,
/// post description
  SIS_EventTargetContentTypePost = 4,
/// profile description
  SIS_EventTargetContentTypeProfile = 5,
/// album description
  SIS_EventTargetContentTypeAlbum = 6,
/// gif description
  SIS_EventTargetContentTypeGif = 7,
/// voice description
  SIS_EventTargetContentTypeVoice = 8,
/// theme description
  SIS_EventTargetContentTypeTheme = 9,
/// sticker description
  SIS_EventTargetContentTypeSticker = 10,
/// app description
  SIS_EventTargetContentTypeApp = 11,
};

/// Event Target type.
typedef SWIFT_ENUM(NSInteger, SIS_EventTargetType) {
/// user description
  SIS_EventTargetTypeUser = 0,
/// group description
  SIS_EventTargetTypeGroup = 1,
/// everyone description
  SIS_EventTargetTypeEveryone = 2,
/// app description
  SIS_EventTargetTypeApp = 3,
/// chat_room description
  SIS_EventTargetTypeChat_room = 4,
/// forum description
  SIS_EventTargetTypeForum = 5,
/// game description
  SIS_EventTargetTypeGame = 6,
/// album description
  SIS_EventTargetTypeAlbum = 7,
/// channel description
  SIS_EventTargetTypeChannel = 8,
};

/// Gender type.
typedef SWIFT_ENUM(NSInteger, SIS_Gender) {
/// unknown description
  SIS_GenderUnknown = -1,
/// male description
  SIS_GenderMale = 0,
/// female description
  SIS_GenderFemale = 1,
};

/// User Profile - SIS_HabitLevel enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_HabitLevel) {
/// no description
  SIS_HabitLevelNo = 0,
/// yes description
  SIS_HabitLevelYes = 1,
/// occasionally description
  SIS_HabitLevelOccasionally = 2,
/// tryingToQuit description
  SIS_HabitLevelTryingToQuit = 3,
};

/// User Profile - SIS_LocationContext enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_LocationContext) {
/// unknown description
  SIS_LocationContextUnknown = 0,
/// home description
  SIS_LocationContextHome = 1,
/// work description
  SIS_LocationContextWork = 2,
/// education description
  SIS_LocationContextEducation = 3,
};

/// User Profile - SIS_MaritalStatus enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_MaritalStatus) {
/// married description
  SIS_MaritalStatusMarried = 0,
/// livingCommonLaw description
  SIS_MaritalStatusLivingCommonLaw = 1,
/// widowed description
  SIS_MaritalStatusWidowed = 2,
/// separated description
  SIS_MaritalStatusSeparated = 3,
/// divorced description
  SIS_MaritalStatusDivorced = 4,
/// single description
  SIS_MaritalStatusSingle = 5,
};

/// User Profile - SIS_SocialInterest enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_SocialInterest) {
/// all description
  SIS_SocialInterestAll = 0,
/// dating description
  SIS_SocialInterestDating = 1,
/// seriousRelationship description
  SIS_SocialInterestSeriousRelationship = 2,
/// friends description
  SIS_SocialInterestFriends = 3,
/// networking description
  SIS_SocialInterestNetworking = 4,
};

/// User Profile - SIS_VerificationChannel enum description.
typedef SWIFT_ENUM(NSUInteger, SIS_VerificationChannel) {
/// google description
  SIS_VerificationChannelGoogle = 0,
/// facebook description
  SIS_VerificationChannelFacebook = 1,
/// twitter description
  SIS_VerificationChannelTwitter = 2,
/// linkedin description
  SIS_VerificationChannelLinkedin = 3,
/// email description
  SIS_VerificationChannelEmail = 4,
/// phoneNumber description
  SIS_VerificationChannelPhoneNumber = 5,
};


/// SodaInsightsEvent description
SWIFT_CLASS("_TtC15SodaInsightsSdk17SodaInsightsEvent")
@interface SodaInsightsEvent : NSObject
/// Set targetType
- (void)setTargetType:(enum SIS_EventTargetType)targetType;
/// Set targetEntityId
- (void)setTargetEntityId:(NSString * _Nonnull)targetEntityId;
/// Set internalTargetEntityId
- (void)setInternalTargetEntityId:(NSString * _Nonnull)internalTargetEntityId;
/// Set targetContentType
- (void)setTargetContentType:(enum SIS_EventTargetContentType)targetContentType;
/// Set targetContentId
- (void)setTargetContentId:(NSString * _Nonnull)targetContentId;
/// Set targetEntityName
- (void)setTargetEntityName:(NSString * _Nonnull)targetEntityName;
/// Set targetEntityCategory
- (void)setTargetEntityCategory:(NSString * _Nonnull)targetEntityCategory;
/// Set subActivity
- (void)setSubActivity:(NSString * _Nonnull)subActivity;
/// Set hostApp
- (void)setHostApp:(NSString * _Nonnull)hostApp;
/// Set url
- (void)setUrl:(NSString * _Nonnull)url;
/// Set text
- (void)setText:(NSString * _Nonnull)text;
/// Set value
- (void)setValue:(NSString * _Nonnull)value;
/// Set tags
- (void)setTags:(NSArray<NSString *> * _Nonnull)tags;
/// Set product
- (void)setProduct:(NSString * _Nonnull)product;
/// Set brand
- (void)setBrand:(NSString * _Nonnull)brand;
/// Set segments
- (void)setSegments:(NSArray<NSString *> * _Nonnull)segments;
/// Set startTime
- (void)setStartTime:(int64_t)startTime;
/// Set endTime
- (void)setEndTime:(int64_t)endTime;
/// Set currency
- (void)setCurrency:(NSString * _Nonnull)currency;
/// Sends Soda Event
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .initalizationError, .insightsDisabled, .success
- (enum SIS_ErrorCodes)send;
/// Initializes Soda Event
/// \param activityType activity type
///
- (nonnull instancetype)initWithActivityType:(enum SIS_EventActivityType)activityType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// SodaInsightsSdk description
SWIFT_CLASS("_TtC15SodaInsightsSdk15SodaInsightsSdk")
@interface SodaInsightsSdk : NSObject
/// Version of Soda Insights SDK
- (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
/// Soda Insights SDK shared instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SodaInsightsSdk * _Nonnull sharedInstance;)
+ (SodaInsightsSdk * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Initializes Soda Insights SDK instance
/// \param partnerId Partner ID - should be provided by StartApp.
///
/// \param prodId Product ID - should be provided by StartApp.
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .missingParameters, .alreadyInitialized
- (enum SIS_ErrorCodes)initializeWithPartnerId:(NSString * _Nonnull)partnerId productId:(NSString * _Nonnull)prodId;
/// Starts Soda Insights SDK data collecting operation
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .internalInconsistency, .missingParameters, .alreadyInitialized
- (enum SIS_ErrorCodes)start;
/// Enables Soda Insights SDK operation
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .insightsAlreadyEnabled, .initalizationError
- (enum SIS_ErrorCodes)enableInsights;
/// Disables Soda Insights SDK operation
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .insightsAlreadyDisabled, .initalizationError
- (enum SIS_ErrorCodes)disableInsights;
/// Resets current Soda Insights SDK session
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .insightsDisabled, .initalizationError
- (enum SIS_ErrorCodes)startSession;
/// Sets customized minimum Soda Insights SDK session duration.
/// \param seconds minimum session duration
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values:.success, .invalidParameters
- (enum SIS_ErrorCodes)setMinimumSessionDurationWithSeconds:(NSInteger)seconds;
/// Sets customized Soda Insights SDK session timeout duration.
/// \param seconds session timeout duration
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .invalidParameters
- (enum SIS_ErrorCodes)setSessionTimeoutDurationWithSeconds:(NSInteger)seconds;
/// Soda Insights SDK extended information - Gender
/// \param gender appropriate gender value (SIS_Gender)
///
- (void)setGender:(enum SIS_Gender)gender;
/// Soda Insights SDK extended information - Age
/// \param age appropriate age value. Used only if positive.
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .invalidParameters
- (enum SIS_ErrorCodes)setAge:(NSInteger)age;
/// Soda Insights SDK extended partner data - Internal user Id
/// \param internalUserId partner’s custom user Id. Should be non-empty.
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .invalidParameters
- (enum SIS_ErrorCodes)setInternalUserId:(NSString * _Nonnull)internalUserId;
/// Soda Insights SDK extended partner data - sub partner Id
/// \param subPartnerId partner additional Id. Should be non-empty.
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .invalidParameters
- (enum SIS_ErrorCodes)setSubPartnerId:(NSString * _Nonnull)subPartnerId;
/// Soda Insights SDK extended partner data - sub product Id
/// \param subProductId product additional Id. Should be non-empty.
///
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .success, .invalidParameters
- (enum SIS_ErrorCodes)setSubProductId:(NSString * _Nonnull)subProductId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// SodaInsightsUserProfile description.
SWIFT_CLASS("_TtC15SodaInsightsSdk23SodaInsightsUserProfile")
@interface SodaInsightsUserProfile : NSObject
/// setJoinDate description
- (void)setJoinDate:(NSDate * _Nonnull)date;
/// setZipCode description
- (void)setZipCode:(NSString * _Nonnull)zip;
/// setBirthDate description
- (void)setBirthDate:(NSDate * _Nonnull)date;
/// setBirthCountry description
- (void)setBirthCountry:(NSString * _Nonnull)country;
/// setGender description
- (void)setGender:(enum SIS_Gender)gender;
/// setAge description
- (void)setAge:(NSUInteger)age;
/// setAgeRange description
- (void)setAgeRange:(NSString * _Nonnull)ageRange;
/// setIsKid description
- (void)setIsKid:(BOOL)isKid;
/// setIsParent description
- (void)setIsParent:(BOOL)isParent;
/// setIsGrandParent description
- (void)setIsGrandParent:(BOOL)isGrandParent;
/// setKidsNum description
- (void)setKidsNum:(NSUInteger)kidsNum;
/// setEducationLevel description (SIS_EducationLevel enum can be used)
- (void)setEducationLevel:(NSInteger)educationLevel;
/// setMaritalStatus description
- (void)setMaritalStatus:(enum SIS_MaritalStatus)maritalStatus;
/// setIncome description
- (void)setIncome:(uint32_t)income;
/// setIncomeCurrency description
- (void)setIncomeCurrency:(NSString * _Nonnull)incomeCurrency;
/// setLocationLongitude description
- (void)setLocationLongitude:(double)longitude;
/// setLocationLatitude description
- (void)setLocationLatitude:(double)latitude;
/// setLocationAccuracy description
- (void)setLocationAccuracy:(double)accuracy;
/// setLocationTimestamp description (in seconds)
- (void)setLocationTimestamp:(uint32_t)timestamp;
/// setIsPaid description
- (void)setIsPaid:(BOOL)isPaid;
/// setMinAgeInterest description
- (void)setMinAgeInterest:(NSUInteger)minAgeInterest;
/// setMaxAgeInterest description
- (void)setMaxAgeInterest:(NSUInteger)maxAgeInterest;
/// setUpdateTimestamp description
- (void)setUpdateTimestamp:(uint32_t)timestamp;
/// setLookingFor description
- (void)setLookingFor:(NSUInteger)lookingFor;
/// setOccupation description
- (void)setOccupation:(NSString * _Nonnull)occupation;
/// setHeight description
- (void)setHeight:(NSUInteger)height;
/// setWeight description
- (void)setWeight:(NSUInteger)weight;
/// setSmokingHabit description
- (void)setSmokingHabit:(enum SIS_HabitLevel)habitLevel;
/// setDrinkingHabit description
- (void)setDrinkingHabit:(enum SIS_HabitLevel)habitLevel;
/// setBodyType description
- (void)setBodyType:(enum SIS_BodyType)bodyType;
/// setDescriptionText description
- (void)setDescriptionText:(NSString * _Nonnull)desc;
/// setProfilePicturesNumber description
- (void)setProfilePicturesNumber:(NSUInteger)profilePicsNum;
/// setVerificationChannel description (SIS_VerificationChannel enum can be used)
- (void)setVerificationChannel:(NSUInteger)channel;
/// gender description - .unknown if this field has not been set.
- (enum SIS_Gender)gender SWIFT_WARN_UNUSED_RESULT;
/// ageRangeCategory description - SIS_AgeRange enum or ‘-100’ if this field has not been set.
- (NSInteger)ageRangeCategory SWIFT_WARN_UNUSED_RESULT;
/// isParent description - ‘-100’ if this field has not been set.
- (NSInteger)isParent SWIFT_WARN_UNUSED_RESULT;
/// educationLevel description - (see SIS_EducationLevel for reference) or ‘-100’ if this field has not been set.
- (NSInteger)educationLevel SWIFT_WARN_UNUSED_RESULT;
/// maritalStatus description (see SIS_MaritalStatus values for reference) or ‘-100’ if this field has not been set.
- (NSInteger)maritalStatus SWIFT_WARN_UNUSED_RESULT;
/// locationLongitude description - kCLLocationCoordinate2DInvalid.longitude if this field has not been set.
- (double)locationLongitude SWIFT_WARN_UNUSED_RESULT;
/// locationLatitude description - kCLLocationCoordinate2DInvalid.latitude if this field has not been set.
- (double)locationLatitude SWIFT_WARN_UNUSED_RESULT;
/// locationAccuracy description - 0 if this field has not been set.
- (double)locationAccuracy SWIFT_WARN_UNUSED_RESULT;
/// locationTimestamp description (in seconds) - 0 if this field has not been set.
- (uint32_t)locationTimestamp SWIFT_WARN_UNUSED_RESULT;
/// minAgeInterest description - positive age or ‘-100’ if this field has not been set.
- (NSInteger)minAgeInterest SWIFT_WARN_UNUSED_RESULT;
/// maxAgeInterest description - positive age or ‘-100’ if this field has not been set.
- (NSInteger)maxAgeInterest SWIFT_WARN_UNUSED_RESULT;
/// currentCountry description - nil if this field has not been set.
- (NSString * _Nullable)currentCountry SWIFT_WARN_UNUSED_RESULT;
/// currentCity description - nil if this field has not been set.
- (NSString * _Nullable)currentCity SWIFT_WARN_UNUSED_RESULT;
/// currentRegion description - nil if this field has not been set.
- (NSString * _Nullable)currentRegion SWIFT_WARN_UNUSED_RESULT;
/// mainCountry description - nil if this field has not been set.
- (NSString * _Nullable)mainCountry SWIFT_WARN_UNUSED_RESULT;
/// mainCity description - nil if this field has not been set.
- (NSString * _Nullable)mainCity SWIFT_WARN_UNUSED_RESULT;
/// mainRegion description - nil if this field has not been set.
- (NSString * _Nullable)mainRegion SWIFT_WARN_UNUSED_RESULT;
/// isInfluencer description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isInfluencer SWIFT_WARN_UNUSED_RESULT;
/// isSharer description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isSharer SWIFT_WARN_UNUSED_RESULT;
/// isTraveler description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isTraveler SWIFT_WARN_UNUSED_RESULT;
/// isGamer description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isGamer SWIFT_WARN_UNUSED_RESULT;
/// isEarlyAdopter description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isEarlyAdopter SWIFT_WARN_UNUSED_RESULT;
/// segments description - nil if this field has not been set.
- (NSArray<NSString *> * _Nullable)segments SWIFT_WARN_UNUSED_RESULT;
/// isPayer description - 1 or 0, ‘-100’ if this field has not been set.
- (NSInteger)isPayer SWIFT_WARN_UNUSED_RESULT;
/// locationContext, (see SIS_LocationContext for reference) or ‘-100’ if this field has not been set.
- (NSInteger)locationContext SWIFT_WARN_UNUSED_RESULT;
/// loyaltyScore description - (1-7) or ‘-100’ if this field has not been set.
- (NSInteger)loyaltyScore SWIFT_WARN_UNUSED_RESULT;
/// trustScore description - (1-7) or ‘-100’ if this field has not been set.
- (NSInteger)trustScore SWIFT_WARN_UNUSED_RESULT;
/// Public init method
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Sends User Profile
///
/// returns:
///
/// Error code (SIS_ErrorCodes)
/// Possible values: .initalizationError, .insightsDisabled, .invalidParameters, .success
- (enum SIS_ErrorCodes)send;
@end


/// SodaInsightsUserProfileFetchMetaData description.
SWIFT_CLASS("_TtC15SodaInsightsSdk36SodaInsightsUserProfileFetchMetaData")
@interface SodaInsightsUserProfileFetchMetaData : NSObject
/// setLongitude description
- (void)setLongitude:(double)lon;
/// setLatitude description
- (void)setLatitude:(double)lat;
/// description methods returns the meta data description string - for logging purposes only.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// SodaInsightsUserProfileManager description.
SWIFT_CLASS("_TtC15SodaInsightsSdk30SodaInsightsUserProfileManager")
@interface SodaInsightsUserProfileManager : NSObject
/// Soda Insights User Profile Manager shared instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SodaInsightsUserProfileManager * _Nonnull sharedInstance;)
+ (SodaInsightsUserProfileManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Retrieves the User Profile from the server.
/// In case of the initialization error the completion block is is executed on the calling queue.
/// In other cases the completion block is called on custom dedicated serial queue.
- (void)getUserProfileWithMetaData:(SodaInsightsUserProfileFetchMetaData * _Nonnull)metaData andCompletion:(void (^ _Nonnull)(SodaInsightsUserProfile * _Nullable, enum SIS_ErrorCodes))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

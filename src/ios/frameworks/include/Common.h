//
//  Common.h
//  ios-sdk
//
//  Intel Cloud Services iOS SDK - 23/04/13.
//  Copyright (c) 2013 Intel ; Licensed MIT
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>

FOUNDATION_EXPORT NSString* kSDKVersionHeaderName;
FOUNDATION_EXPORT NSString* kSDKVersion;

//Locales and locale codes constants
FOUNDATION_EXPORT NSString *const GERMAN;
FOUNDATION_EXPORT NSString *const ENGLISH;
FOUNDATION_EXPORT NSString *const FRENCH;
FOUNDATION_EXPORT NSString *const ITALIAN;
FOUNDATION_EXPORT NSString *const SPANISH;

FOUNDATION_EXPORT NSString *BASE_URL;
FOUNDATION_EXPORT NSString *AUTH_URL;
FOUNDATION_EXPORT NSString *AUTH_CODE_URL;

//idenity
FOUNDATION_EXPORT NSString *TOKEN_URL;
FOUNDATION_EXPORT NSString *TOKEN_INFORMATION_URL;
FOUNDATION_EXPORT NSString *TOKEN_SOCIAL_URL;
FOUNDATION_EXPORT NSString *LOGOUT_URL;
FOUNDATION_EXPORT NSString *REDIRECT_URI;
FOUNDATION_EXPORT NSString *REDIRECT_URI_ASYNC;
FOUNDATION_EXPORT NSString *REDIRECT_SCHEMA;
FOUNDATION_EXPORT NSString *APPLICATION_INSTANCE_URL;

//user
FOUNDATION_EXPORT NSString *USER_BASIC_DETAIL_URL;
FOUNDATION_EXPORT NSString *ACCESS_TOKEN_SCOPE_URL;

//profile
FOUNDATION_EXPORT NSString *PROFILE_FULL_URL;
FOUNDATION_EXPORT NSString *PROFILE_BASIC_URL;

//application profile
FOUNDATION_EXPORT NSString *POST_SPECIFIC_APP_PROFILE_URL;

//Commerce
FOUNDATION_EXPORT NSString *POST_CART_URL;
FOUNDATION_EXPORT NSString *DELETE_CART_URL;
FOUNDATION_EXPORT NSString *GET_MULTIPLE_CARTS_URL;
FOUNDATION_EXPORT NSString *GET_CART_URL;
FOUNDATION_EXPORT NSString *GET_ORDER_URL;
FOUNDATION_EXPORT NSString *GET_MULTIPLE_ORDERS_URL;
FOUNDATION_EXPORT NSString *REFUND_FULL_ORDER_URL;
FOUNDATION_EXPORT NSString *REFUND_PARTIAL_ORDER_URL;
FOUNDATION_EXPORT NSString *GET_CART_TAX_URL;
FOUNDATION_EXPORT NSString *GET_CART_STATUS_URL;
FOUNDATION_EXPORT NSString *UPDATE_CART_URL;
FOUNDATION_EXPORT NSString *PURCHASE_CART_URL;
FOUNDATION_EXPORT NSString *GET_BILLING_PROFILE;

//Context
FOUNDATION_EXPORT NSString *GET_RESOURCES_TYPES_URL;
FOUNDATION_EXPORT NSString *ITEMS_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_ITEM_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_WATCHES_CONTEXT_URL;
FOUNDATION_EXPORT NSString *DELETE_WATCH_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_NEW_ITEMS_WATCH_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_PREDICT_ACTIVITY_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_PLACE_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_POINTS_OF_INTEREST_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_POSSIBLE_NEXT_DESTINATIONS_CONTEXT_URL;
FOUNDATION_EXPORT NSString *GET_STATE_CONTEXT_URL;
FOUNDATION_EXPORT NSString *UPDATE_STATE_CONTEXT_URL;

//Catalog
FOUNDATION_EXPORT NSString *CREATE_PRIVATE_SCHEMA_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PRIVATE_SCHEMA_LIST_CATALOG_URL;
FOUNDATION_EXPORT NSString *VIEW_PRIVATE_SCHEMA_LIST_CATALOG_URL;
FOUNDATION_EXPORT NSString *UPDATE_PRIVATE_SCHEMA_CATALOG_URL;
FOUNDATION_EXPORT NSString *DELETE_PRIVATE_SCHEMA_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PRIVATE_SCHEMA_VERSIONS_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PRIVATE_SCHEMA_VERSION_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PUBLIC_SCHEMA_LIST_CATALOG_URL;
FOUNDATION_EXPORT NSString *VIEW_PUBLIC_SCHEMA_LIST_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PUBLIC_SCHEMA_VERSIONS_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_PUBLIC_SCHEMA_VERSION_CATALOG_URL;
FOUNDATION_EXPORT NSString *CREATE_DATASET_CATALOG_URL;
FOUNDATION_EXPORT NSString *BROWSE_DATASET_CATALOG_URL;
FOUNDATION_EXPORT NSString *VIEW_DATASET_CATALOG_URL;
FOUNDATION_EXPORT NSString *DELETE_DATASET_CATALOG_URL;
FOUNDATION_EXPORT NSString *CREATE_COLLECTION_CATALOG_URL;
FOUNDATION_EXPORT NSString *UPDATE_COLLECTION_CATALOG_URL;
FOUNDATION_EXPORT NSString *BROWSE_COLLECTIONS_CATALOG_URL;
FOUNDATION_EXPORT NSString *VIEW_COLLECTION_CATALOG_URL;
FOUNDATION_EXPORT NSString *DELETE_COLLECTION_CATALOG_URL;
FOUNDATION_EXPORT NSString *CREATE_ITEM_CATALOG_URL;
FOUNDATION_EXPORT NSString *CREATE_ITEMS_CATALOG_URL;
FOUNDATION_EXPORT NSString *VIEW_ITEM_CATALOG_URL;
FOUNDATION_EXPORT NSString *BROWSE_ITEMS_CATALOG_URL;
FOUNDATION_EXPORT NSString *UPDATE_ITEMS_CATALOG_URL;
FOUNDATION_EXPORT NSString *DELETE_ITEM_CATALOG_URL;
FOUNDATION_EXPORT NSString *DELETE_ITEMS_CATALOG_URL;
FOUNDATION_EXPORT NSString *UPDATE_ITEM_CATALOG_URL;
FOUNDATION_EXPORT NSString *BULK_CREATE_UPDATE_CATALOG_URL;
FOUNDATION_EXPORT NSString *GET_POINTS_OF_INTEREST_CATALOG;
FOUNDATION_EXPORT NSString *GET_POINT_OF_INTEREST_CATALOG;

//Curation
FOUNDATION_EXPORT NSString *ADD_ITEMS_TO_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_ITEMS_CURATION_URL;
FOUNDATION_EXPORT NSString *DELETE_ITEM_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_PUBLIC_ITEMS_CURATION_URL;
FOUNDATION_EXPORT NSString *CREATE_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_LIST_VERSIONS_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_LIST_VERSION_METADATA_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_LIST_CONTENT_VERSION_CURATION_URL;
FOUNDATION_EXPORT NSString *GET_LISTS_CURATION_URL;
FOUNDATION_EXPORT NSString *DELETE_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *ADD_FIELD_TO_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *RENAME_LIST_CURATION_URL;
FOUNDATION_EXPORT NSString *REORDER_LIST_CURATION_URL;

//Recommendation
FOUNDATION_EXPORT NSString *GET_ESTIMATED_RATE_PREFERENCE_RECOMMENDATION_URL;
FOUNDATION_EXPORT NSString *GET_ANONYMOUS_RECOMMENDATION;
FOUNDATION_EXPORT NSString *GET_ESTIMATION_FOR_PERSONAL_PREFERENCE;
FOUNDATION_EXPORT NSString *GET_RECOMMENDED_ITEMS;
FOUNDATION_EXPORT NSString *GET_RECOMMENDATION_FOR_SIMILAR_ITEMS;

//Feedback
FOUNDATION_EXPORT NSString *ACCEPT_RELATION_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *GET_ACTION_TYPES_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *CREATE_ACTION_TYPE_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *DELETE_ACTION_TYPE_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *ADD_ITEM_TO_BLACKLIST_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *REMOVE_ITEM_FROM_BLACKLIST_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *DELETE_USER_DATA_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *GET_AVERAGE_RATE_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *PURCHASE_ITEM_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *GET_PURCHASE_HISTORY_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *RATE_AN_ITEM_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *GET_RATE_HISTORY_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *REVIEW_AN_ITEM_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *GET_REVIEWS_HISTORY_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *ACCEPT_RECOMMENDATION_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *IGNORE_RECOMMENDATION_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *REJECT_RECOMMENDATION_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *REGISTER_VISIT_RECOMMENDATION_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *REGISTER_GENERIC_FEEDBACK_URL;
FOUNDATION_EXPORT NSString *UPDATE_STATUS_USER_FEEDBACK_URL;

typedef void (^OkCallback)();

typedef void (^ErrorCallback)(NSError*);

@interface Common : NSObject{
        
}

+ (NSString*)getStringFromUrl: (NSString*) url needle:(NSString *) needle;

+ (NSURL*)generateURL:(NSString*)baseURL params:(NSDictionary*)params;

+ (NSError*)createSdkError:(NSString*)errorDomain code:(NSInteger)code error:(NSError*)error;

+ (NSError*)createSdkError:(NSString*)errorDomain code:(NSInteger)code message:(NSString*)message;

+ (NSError*)createSdkErrorCallbackRest:(int)statusCode errorDomain:(NSString*)errorDomain dataResult:(NSData*)dataResult;

+ (NSString*)getRedirectUri;

+ (NSString*)getUTCFormateDate:(NSDate *)date;

+ (NSDate*)getDateFromString:(NSString*)stringDate dateFormat:(NSString*)dateFormat;

+ (NSString*)dictionaryToJsonString:(NSDictionary*)data;

+ (NSString*)prepareUrl:(NSString*)url findValue:(NSString*)findValue replaceValue:(NSString*)replaceValue;

+ (NSData*)getNSDataFromDictionary:(NSDictionary*)data;

+(NSData*) encrypt:(NSData*) key data:(NSData*) data;

+(NSData*) encryptWithString:(NSString*) key data:(NSData*) data;

+(NSData*) encrypt:(NSData*) key
       withPadding:(CCOptions) options data:(NSData*) data;

+(NSData*) encrypt:(NSData*) key
       withInitial:(NSData*) iv data:(NSData*) data;

+(NSData*) encrypt:(NSData*) key
       withInitial:(NSData*) iv
        andPadding:(CCOptions) options data:(NSData*) data;

+(NSData*) decrypt:(NSData*) key data:(NSData*) data;

+(NSData*) decryptWithString:(NSString*) key data:(NSData*) data;

+(NSData*) decrypt:(NSData*) key
       withPadding:(CCOptions) options data:(NSData*) data;

+(NSData*) decrypt:(NSData*) key
       withInitial:(NSData*) iv data:(NSData*) data;

+(NSData*) decrypt:(NSData*) key
       withInitial:(NSData*) iv
        andPadding:(CCOptions) options data:(NSData*) data;

@end
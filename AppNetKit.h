//
//  AppNetKit.h
//  AppNetKit
//
//  Created by Brent Royal-Gordon on 8/18/12.
//  Copyright (c) 2012 Architechies. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ANDefines.h"

extern NSString * const ANErrorDomain;
extern NSString * const ANExplanationURLKey;

typedef enum {
    ANGenericError,
    ANOAuthInvalidRequestError,
    ANOAuthUnauthorizedClientError,
    ANOAuthAccessDeniedError,
    ANOAuthUnsupportedResponseTypeError,
    ANOAuthInvalidScopeError,
    ANOAuthServerError,
    ANOAuthTemporarilyUnavailableError,
    
    ANBadRequestError = 400,
    ANUnauthorizedError,
    ANPaymentRequiredError,
    ANForbiddenError,
    ANNotFoundError,
    ANMethodNotAllowedError,
    ANNotAcceptableError,
    ANProxyAuthenticationRequiredError,
    ANRequestTimeoutError,
    ANConflictError,
    ANGoneError,
    ANLengthRequiredError,
    ANPreconditionFailedError,
    ANRequestEntityTooLargeError,
    ANRequestURITooLongError,
    ANUnsupportedMediaTypeError,
    ANRequestedRangeNotSatisfiableError,
    ANExpectationFailedError,
    
    ANInternalServerError = 500,
    ANNotImplementedError,
    ANBadGatewayError,
    ANServiceUnavailableError,
    ANGatewayTimeoutError,
    ANHTTPVersionNotSupportedError
} ANErrorCode;

#import "NSString+AppNetExtensions.h"
#import "ANCompletions.h"
#import "ANAuthenticator.h"
#import "ANSession.h"
#import "ANUser.h"
#import "ANPost.h"
#import "ANAnnotation.h"
#import "ANEntity.h"
#import "ANSource.h"
#import "ANDraft.h"

//
//  ANMuteUserRequest.m
//  AppNetKit
//
//  Created by Brent Royal-Gordon on 8/19/12.
//  Copyright (c) 2012 Architechies. All rights reserved.
//

#import "ANMuteUserRequest.h"

@implementation ANMuteUserRequest

- (NSURL *)URL {
    return [NSURL URLWithString:[self pathWithFormat:@"users/%@/mute" userID:self.userID] relativeToURL:[self.session URLForStreamAPIVersion:ANStreamAPIVersion0]];
}

- (NSDictionary *)parameters {
    return nil;
}

- (ANRequestMethod)method {
    return ANRequestMethodPost;
}

- (void)sendRequestWithCompletion:(ANUserRequestCompletion)completion {
    [self sendRequestWithRepresentationCompletion:^(ANResponse * response, id rep, NSError *error) {
        [self.session completeUserRequest:completion withResponse:response representation:rep error:error];
    }];
}

@end

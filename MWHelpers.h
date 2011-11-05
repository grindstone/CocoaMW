//
//  MWHelpers.h
//  CocoaMW
//
//  Created by Linas Valiukas on 2011-11-03.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "MWDefines.h"

@interface MWHelpers : NSObject {
	
}

// Checks if after trying to log in we got 'NeedToken' or 'Success'.
// Returns the token that has to be sent, or nil if we're logged in without token already.
+ (NSString *)logInTokenThatWasRequestedOrNil:(NSDictionary *)data;

// Takes a result of
//   http://en.wikipedia.org/w/api.php?action=query&titles=Lietuvos_rytas&prop=images|revisions&redirects&imlimit=max&rvprop=content
// as a parameter.
// Returns an array (NSString) of article titles that do not have their own images or nil in case of an error
+ (NSArray *)articleTitlesOfArticlesThatDoNotHaveImages:(NSDictionary *)apiResult;

@end

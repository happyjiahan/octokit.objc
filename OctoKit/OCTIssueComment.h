//
//  OCTIssueComment.h
//  OctoKit
//
//  Created by Justin Spahr-Summers on 2012-10-02.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "OCTObject.h"
#import "OCTComment.h"

// A single comment on an issue.
@interface OCTIssueComment : OCTObject<OCTComment>

// The webpage URL for this comment.
@property (nonatomic, copy, readonly) NSURL *HTMLURL;

// The login of the user who created this comment.
@property (nonatomic, copy, readonly) NSString *commenterLogin;

// The date at which the comment was originally created.
@property (nonatomic, copy, readonly) NSDate *creationDate;

// The date the comment was last updated. This will be equal to
// creationDate if the comment has not been updated.
@property (nonatomic, copy, readonly) NSDate *updatedDate;

// The body of the issue comment.
@property (nonatomic, copy, readonly) NSString *body;

@end

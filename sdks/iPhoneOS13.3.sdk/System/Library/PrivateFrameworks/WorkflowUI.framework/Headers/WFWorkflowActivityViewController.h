//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class WFFileRepresentation;

@interface WFWorkflowActivityViewController : UIActivityViewController
{
    WFFileRepresentation *_workflowFile;
}

@property(retain, nonatomic) WFFileRepresentation *workflowFile; // @synthesize workflowFile=_workflowFile;
// - (void).cxx_destruct;
- (id)initWithWorkflow:(id)arg1 applicationActivities:(id)arg2;

@end


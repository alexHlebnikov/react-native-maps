//
// Created by Leland Richardson on 12/27/15.
// Copyright (c) 2015 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>
#import <UIKit/UIKit.h>

#import <React/RCTConvert+MapKit.h>
#import <React/RCTComponent.h>
#import <React/RCTView.h>
#import "AIRMapCoordinate.h"
#import "AIRMap.h"


@interface AIRMapPolyline: MKAnnotationView <MKOverlay>

@property (nonatomic, weak) AIRMap *map;

@property (nonatomic, strong) MKPolyline *polyline;
@property (nonatomic, strong) MKPolylineRenderer *renderer;

@property (nonatomic, strong) NSArray<AIRMapCoordinate *> *coordinates;
@property (nonatomic, strong) UIColor *fillColor;
@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) CGFloat strokeWidth;
@property (nonatomic, assign) CGFloat miterLimit;
@property (nonatomic, assign) CGLineCap lineCap;
@property (nonatomic, assign) CGLineJoin lineJoin;
@property (nonatomic, assign) CGFloat lineDashPhase;
@property (nonatomic, strong) NSArray <NSNumber *> *lineDashPattern;

#pragma mark MKOverlay protocol

@property(nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property(nonatomic, readonly) MKMapRect boundingMapRect;
- (BOOL)intersectsMapRect:(MKMapRect)mapRect;
- (BOOL)canReplaceMapContent;

@end

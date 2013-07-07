/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOLatLng, GEOMapRegion, NSData;

@interface GEORPMapLocation : PBCodable
{
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOMapRegion *_mapRegion;
    float _zoomLevel;
    struct {
        unsigned int zoomLevel:1;
    } _has;
}

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(nonatomic) BOOL hasZoomLevel;
@property(readonly, nonatomic) BOOL hasCoordinate;
@property(readonly, nonatomic) BOOL hasImage;
- (void)dealloc;

@end

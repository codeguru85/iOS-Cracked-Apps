//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MAGLES2Shader : NSObject
{
    unsigned int _pointProgram;
    unsigned int _textureProgram;
    unsigned int _multipleColorProgram;
    unsigned int _pointVertexShader;
    unsigned int _pointFragmentShader;
    unsigned int _multipleColorVertexShader;
    unsigned int _multipleColorFragmentShader;
    unsigned int _textureVertexShader;
    unsigned int _textureFragmentShader;
    int _attribLocationPointVertex;
    int _attribLocationTextureVertex;
    int _attribLocationTextureCode;
    int _attribLocationMultipleColorVertex;
    int _attribLocationMultipleColorCode;
    int _attribLocationMultipleColorVertexColor;
    int _uniformLocationPointTransForm;
    int _uniformLocationTextureTransForm;
    int _uniformLocationPointViewMatrix;
    int _uniformLocationTextureViewMatrix;
    int _uniformLocationPointProjectionMatrix;
    int _uniformLocationTextureProjectionMatrix;
    int _uniformLocationPointColor;
    int _uniformLocationTextureColor;
    int _uniformLocationMultipleColorTransForm;
    int _uniformLocationMultipleColorViewMatrix;
    int _uniformLocationMultipleColorProjectionMatrix;
    int _uniformLocationMultipleColorMixColor;
}

@property(readonly, nonatomic) int uniformLocationMultipleColorMixColor; // @synthesize uniformLocationMultipleColorMixColor=_uniformLocationMultipleColorMixColor;
@property(readonly, nonatomic) int uniformLocationMultipleColorProjectionMatrix; // @synthesize uniformLocationMultipleColorProjectionMatrix=_uniformLocationMultipleColorProjectionMatrix;
@property(readonly, nonatomic) int uniformLocationMultipleColorViewMatrix; // @synthesize uniformLocationMultipleColorViewMatrix=_uniformLocationMultipleColorViewMatrix;
@property(readonly, nonatomic) int uniformLocationMultipleColorTransForm; // @synthesize uniformLocationMultipleColorTransForm=_uniformLocationMultipleColorTransForm;
@property(readonly, nonatomic) int uniformLocationTextureColor; // @synthesize uniformLocationTextureColor=_uniformLocationTextureColor;
@property(readonly, nonatomic) int uniformLocationPointColor; // @synthesize uniformLocationPointColor=_uniformLocationPointColor;
@property(readonly, nonatomic) int uniformLocationTextureProjectionMatrix; // @synthesize uniformLocationTextureProjectionMatrix=_uniformLocationTextureProjectionMatrix;
@property(readonly, nonatomic) int uniformLocationPointProjectionMatrix; // @synthesize uniformLocationPointProjectionMatrix=_uniformLocationPointProjectionMatrix;
@property(readonly, nonatomic) int uniformLocationTextureViewMatrix; // @synthesize uniformLocationTextureViewMatrix=_uniformLocationTextureViewMatrix;
@property(readonly, nonatomic) int uniformLocationPointViewMatrix; // @synthesize uniformLocationPointViewMatrix=_uniformLocationPointViewMatrix;
@property(readonly, nonatomic) int uniformLocationTextureTransForm; // @synthesize uniformLocationTextureTransForm=_uniformLocationTextureTransForm;
@property(readonly, nonatomic) int uniformLocationPointTransForm; // @synthesize uniformLocationPointTransForm=_uniformLocationPointTransForm;
@property(readonly, nonatomic) int attribLocationMultipleColorVertexColor; // @synthesize attribLocationMultipleColorVertexColor=_attribLocationMultipleColorVertexColor;
@property(readonly, nonatomic) int attribLocationMultipleColorCode; // @synthesize attribLocationMultipleColorCode=_attribLocationMultipleColorCode;
@property(readonly, nonatomic) int attribLocationMultipleColorVertex; // @synthesize attribLocationMultipleColorVertex=_attribLocationMultipleColorVertex;
@property(readonly, nonatomic) int attribLocationTextureCode; // @synthesize attribLocationTextureCode=_attribLocationTextureCode;
@property(readonly, nonatomic) int attribLocationTextureVertex; // @synthesize attribLocationTextureVertex=_attribLocationTextureVertex;
@property(readonly, nonatomic) int attribLocationPointVertex; // @synthesize attribLocationPointVertex=_attribLocationPointVertex;
@property(readonly, nonatomic) unsigned int textureFragmentShader; // @synthesize textureFragmentShader=_textureFragmentShader;
@property(readonly, nonatomic) unsigned int textureVertexShader; // @synthesize textureVertexShader=_textureVertexShader;
@property(readonly, nonatomic) unsigned int multipleColorFragmentShader; // @synthesize multipleColorFragmentShader=_multipleColorFragmentShader;
@property(readonly, nonatomic) unsigned int multipleColorVertexShader; // @synthesize multipleColorVertexShader=_multipleColorVertexShader;
@property(readonly, nonatomic) unsigned int pointFragmentShader; // @synthesize pointFragmentShader=_pointFragmentShader;
@property(readonly, nonatomic) unsigned int pointVertexShader; // @synthesize pointVertexShader=_pointVertexShader;
- (void)createShader;
@property(readonly, nonatomic) unsigned int multipleColorProgram; // @synthesize multipleColorProgram=_multipleColorProgram;
@property(readonly, nonatomic) unsigned int textureProgram; // @synthesize textureProgram=_textureProgram;
@property(readonly, nonatomic) unsigned int pointProgram; // @synthesize pointProgram=_pointProgram;
- (void)resetShader;
- (id)init;

@end


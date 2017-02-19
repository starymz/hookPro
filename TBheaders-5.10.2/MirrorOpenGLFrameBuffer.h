//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MirrorOpenGLFrameBuffer : NSObject
{
    unsigned int _framebuffer;	// 8 = 0x8
    struct __CVBuffer *_renderTarget;	// 16 = 0x10
    struct __CVBuffer *_renderTexture;	// 24 = 0x18
    unsigned long long _referenceCount;	// 32 = 0x20
    _Bool _referenceCountingDisabled;	// 40 = 0x28
    unsigned long long _readLockCount;	// 48 = 0x30
    _Bool _missingFramebuffer;	// 56 = 0x38
    unsigned int _texture;	// 60 = 0x3c
    struct CGSize _bufferSize;	// 64 = 0x40
    struct MirrorTextureOptions _textureOptions;	// 80 = 0x50
}

@property(readonly, nonatomic) _Bool missingFramebuffer; // @synthesize missingFramebuffer=_missingFramebuffer;
@property(readonly, nonatomic) struct MirrorTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly, nonatomic) struct CGSize bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)enableReferenceCounting;
- (void)disableReferenceCounting;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)unlockAfterReading;
- (void)lockForReading;
- (void)restoreRenderTarget;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int texture; // @synthesize texture=_texture;
- (void)destroyFramebuffer;
- (void)activateFramebuffer;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (void)createTexture;
- (void)createFramebuffer;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct MirrorTextureOptions)arg2 onlyTexture:(_Bool)arg3;

@end

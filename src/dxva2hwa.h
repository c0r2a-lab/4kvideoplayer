#ifndef __FANPLAYER_DXVA2HWA_H__
#define __FANPLAYER_DXVA2HWA_H__

#ifdef __cplusplus
extern "C" {
#endif

// include header file
#include "libavcodec/avcodec.h"

// function declaration
int  dxva2hwa_init(AVCodecContext *ctxt, void *d3ddev, void *hwnd);
void dxva2hwa_free(AVCodecContext *ctxt);
void dxva2hwa_lock_frame  (AVFrame *dxva2frame, AVFrame *lockedframe);
void dxva2hwa_unlock_frame(AVFrame *dxva2frame);

#ifdef __cplusplus
}
#endif

#endif



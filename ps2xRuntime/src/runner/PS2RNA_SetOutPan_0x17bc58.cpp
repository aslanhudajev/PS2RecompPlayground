#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetOutPan
// Address: 0x17bc58 - 0x17bc84
void PS2RNA_SetOutPan_0x17bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetOutPan");


    ctx->pc = 0x17bc58u;

    // 0x17bc58: 0x2402fff0
    ctx->pc = 0x17bc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17bc5c: 0x2403fff1
    ctx->pc = 0x17bc5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x17bc60: 0x46102a
    ctx->pc = 0x17bc60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x17bc64: 0x52880
    ctx->pc = 0x17bc64u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17bc68: 0xc2180b
    ctx->pc = 0x17bc68u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x17bc6c: 0x852021
    ctx->pc = 0x17bc6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17bc70: 0x28660010
    ctx->pc = 0x17bc70u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 3), 16));
    // 0x17bc74: 0x2402000f
    ctx->pc = 0x17bc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17bc78: 0x46180a
    ctx->pc = 0x17bc78u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x17bc7c: 0x3e00008
    ctx->pc = 0x17BC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC80u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BC84u;
}

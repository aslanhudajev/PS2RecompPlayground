#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMissedLegend
// Address: 0x2613c0 - 0x261410
void AudioMissedLegend_0x2613c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2613c0u;

    // 0x2613c0: 0x3c040034
    ctx->pc = 0x2613c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2613c4: 0x2484e410
    ctx->pc = 0x2613c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960144));
    // 0x2613c8: 0x3c050034
    ctx->pc = 0x2613c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x2613cc: 0x8ca3e40c
    ctx->pc = 0x2613ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294960140)));
    // 0x2613d0: 0x31080
    ctx->pc = 0x2613d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2613d4: 0x441021
    ctx->pc = 0x2613d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2613d8: 0x8c440000
    ctx->pc = 0x2613d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2613dc: 0x24630001
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2613e0: 0xaca3e40c
    ctx->pc = 0x2613e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960140), GPR_U32(ctx, 3));
    // 0x2613e4: 0x28630004
    ctx->pc = 0x2613e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4));
    // 0x2613e8: 0x50600001
    ctx->pc = 0x2613E8u;
    {
        const bool branch_taken_0x2613e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2613e8) {
            ctx->pc = 0x2613ECu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294960140), GPR_U32(ctx, 0));
            ctx->pc = 0x2613F0u;
            goto label_2613f0;
        }
    }
    ctx->pc = 0x2613F0u;
label_2613f0:
    // 0x2613f0: 0x240500e0
    ctx->pc = 0x2613f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2613f4: 0x2406007f
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2613f8: 0x3c01bf80
    ctx->pc = 0x2613f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2613fc: 0x44816000
    ctx->pc = 0x2613fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x261400: 0x3c013f00
    ctx->pc = 0x261400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x261404: 0x44816800
    ctx->pc = 0x261404u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x261408: 0x8097116
    ctx->pc = 0x261408u;
    ctx->pc = 0x26140Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x261410u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMissedRune
// Address: 0x261410 - 0x261460
void AudioMissedRune_0x261410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261410u;

    // 0x261410: 0x3c040034
    ctx->pc = 0x261410u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x261414: 0x2484e428
    ctx->pc = 0x261414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960168));
    // 0x261418: 0x3c050034
    ctx->pc = 0x261418u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x26141c: 0x8ca3e420
    ctx->pc = 0x26141cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294960160)));
    // 0x261420: 0x31080
    ctx->pc = 0x261420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x261424: 0x441021
    ctx->pc = 0x261424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261428: 0x8c440000
    ctx->pc = 0x261428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26142c: 0x24630001
    ctx->pc = 0x26142cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x261430: 0xaca3e420
    ctx->pc = 0x261430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960160), GPR_U32(ctx, 3));
    // 0x261434: 0x28630004
    ctx->pc = 0x261434u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4));
    // 0x261438: 0x50600001
    ctx->pc = 0x261438u;
    {
        const bool branch_taken_0x261438 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x261438) {
            ctx->pc = 0x26143Cu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294960160), GPR_U32(ctx, 0));
            ctx->pc = 0x261440u;
            goto label_261440;
        }
    }
    ctx->pc = 0x261440u;
label_261440:
    // 0x261440: 0x240500e0
    ctx->pc = 0x261440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x261444: 0x2406007f
    ctx->pc = 0x261444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x261448: 0x3c01bf80
    ctx->pc = 0x261448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x26144c: 0x44816000
    ctx->pc = 0x26144cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x261450: 0x3c013f00
    ctx->pc = 0x261450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x261454: 0x44816800
    ctx->pc = 0x261454u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x261458: 0x8097116
    ctx->pc = 0x261458u;
    ctx->pc = 0x26145Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x261460u;
}

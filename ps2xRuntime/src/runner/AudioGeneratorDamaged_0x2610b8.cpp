#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGeneratorDamaged
// Address: 0x2610b8 - 0x261108
void AudioGeneratorDamaged_0x2610b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2610b8u;

    // 0x2610b8: 0x80382d
    ctx->pc = 0x2610b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610bc: 0x3c030034
    ctx->pc = 0x2610bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2610c0: 0x2463e218
    ctx->pc = 0x2610c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959640));
    // 0x2610c4: 0x3c020034
    ctx->pc = 0x2610c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2610c8: 0x8c44e7f0
    ctx->pc = 0x2610c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2610cc: 0x41080
    ctx->pc = 0x2610ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2610d0: 0x431021
    ctx->pc = 0x2610d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2610d4: 0x8c460000
    ctx->pc = 0x2610d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610d8: 0x2402000a
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2610dc: 0x14820006
    ctx->pc = 0x2610DCu;
    {
        const bool branch_taken_0x2610dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2610E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2610dc) {
            ctx->pc = 0x2610F8u;
            goto label_2610f8;
        }
    }
    ctx->pc = 0x2610E4u;
    // 0x2610e4: 0x3c03002c
    ctx->pc = 0x2610e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x2610e8: 0x34630024
    ctx->pc = 0x2610e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36));
    // 0x2610ec: 0x38a20018
    ctx->pc = 0x2610ecu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 24));
    // 0x2610f0: 0x62300a
    ctx->pc = 0x2610f0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x2610f4: 0xc0202d
    ctx->pc = 0x2610f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2610f8:
    // 0x2610f8: 0xe0282d
    ctx->pc = 0x2610f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610fc: 0x240600b4
    ctx->pc = 0x2610fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    // 0x261100: 0x8088a62
    ctx->pc = 0x261100u;
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 91));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x261108u;
}

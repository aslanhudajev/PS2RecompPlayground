#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerHit
// Address: 0x25ec30 - 0x25ec90
void AudioPlayerHit_0x25ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ec30u;

    // 0x25ec30: 0x80302d
    ctx->pc = 0x25ec30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec34: 0xa0382d
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec38: 0x3c020032
    ctx->pc = 0x25ec38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ec3c: 0x24481bc0
    ctx->pc = 0x25ec3cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25ec40: 0x24022b00
    ctx->pc = 0x25ec40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ec44: 0xc22818
    ctx->pc = 0x25ec44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ec48: 0xa81021
    ctx->pc = 0x25ec48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x25ec4c: 0x8c4300fc
    ctx->pc = 0x25ec4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x25ec50: 0x24020001
    ctx->pc = 0x25ec50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ec54: 0x1462000c
    ctx->pc = 0x25EC54u;
    {
        const bool branch_taken_0x25ec54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25EC58u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x25ec54) {
            ctx->pc = 0x25EC88u;
            goto label_25ec88;
        }
    }
    ctx->pc = 0x25EC5Cu;
    // 0x25ec5c: 0x2484d848
    ctx->pc = 0x25ec5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957128));
    // 0x25ec60: 0x61080
    ctx->pc = 0x25ec60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x25ec64: 0x71900
    ctx->pc = 0x25ec64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x25ec68: 0x431021
    ctx->pc = 0x25ec68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ec6c: 0x441021
    ctx->pc = 0x25ec6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25ec70: 0x1052821
    ctx->pc = 0x25ec70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x25ec74: 0x8c440000
    ctx->pc = 0x25ec74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ec78: 0x24a50050
    ctx->pc = 0x25ec78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    // 0x25ec7c: 0x2406007f
    ctx->pc = 0x25ec7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ec80: 0x8088a26
    ctx->pc = 0x25EC80u;
    ctx->pc = 0x25EC84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 74));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EC88u;
label_25ec88:
    // 0x25ec88: 0x3e00008
    ctx->pc = 0x25EC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EC88u: goto label_25ec88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EC90u;
}

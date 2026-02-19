#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLeafFall
// Address: 0x25ffb8 - 0x25fff0
void AudioLeafFall_0x25ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ffb8u;

    // 0x25ffb8: 0x80282d
    ctx->pc = 0x25ffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffbc: 0x3c030034
    ctx->pc = 0x25ffbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ffc0: 0x2463dba0
    ctx->pc = 0x25ffc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957984));
    // 0x25ffc4: 0x3c020034
    ctx->pc = 0x25ffc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ffc8: 0x8c42e7f0
    ctx->pc = 0x25ffc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25ffcc: 0x21080
    ctx->pc = 0x25ffccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ffd0: 0x431021
    ctx->pc = 0x25ffd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ffd4: 0x8c440000
    ctx->pc = 0x25ffd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ffd8: 0x4800003
    ctx->pc = 0x25FFD8u;
    {
        const bool branch_taken_0x25ffd8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FFDCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25ffd8) {
            ctx->pc = 0x25FFE8u;
            goto label_25ffe8;
        }
    }
    ctx->pc = 0x25FFE0u;
    // 0x25ffe0: 0x8088a62
    ctx->pc = 0x25FFE0u;
    ctx->pc = 0x25FFE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FFE8u;
label_25ffe8:
    // 0x25ffe8: 0x3e00008
    ctx->pc = 0x25FFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FFE8u: goto label_25ffe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FFF0u;
}

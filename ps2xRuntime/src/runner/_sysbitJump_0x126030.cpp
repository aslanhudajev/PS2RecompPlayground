#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitJump
// Address: 0x126030 - 0x126084
void _sysbitJump_0x126030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126030u;

    // 0x126030: 0x80382d
    ctx->pc = 0x126030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126034: 0x528c0
    ctx->pc = 0x126034u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x126038: 0xdce20018
    ctx->pc = 0x126038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12603c: 0x8ce60008
    ctx->pc = 0x12603cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x126040: 0xa2102d
    ctx->pc = 0x126040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x126044: 0x8ce30024
    ctx->pc = 0x126044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x126048: 0x22778
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x12604c: 0x4203f
    ctx->pc = 0x12604cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x126050: 0xfce00000
    ctx->pc = 0x126050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x126054: 0xc43021
    ctx->pc = 0x126054u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x126058: 0xace00010
    ctx->pc = 0x126058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x12605c: 0xc3182b
    ctx->pc = 0x12605cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x126060: 0xfce20018
    ctx->pc = 0x126060u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x126064: 0x14600004
    ctx->pc = 0x126064u;
    {
        const bool branch_taken_0x126064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x126068u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        if (branch_taken_0x126064) {
            ctx->pc = 0x126078u;
            goto label_126078;
        }
    }
    ctx->pc = 0x12606Cu;
    // 0x12606c: 0x8ce20028
    ctx->pc = 0x12606cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x126070: 0xc21023
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x126074: 0xace2000c
    ctx->pc = 0x126074u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_126078:
    // 0x126078: 0xe0202d
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12607c: 0x80497c0
    ctx->pc = 0x12607Cu;
    ctx->pc = 0x126080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125F00u;
    _sysbitFlush_0x125f00(rdram, ctx, runtime); return;
    ctx->pc = 0x126084u;
}

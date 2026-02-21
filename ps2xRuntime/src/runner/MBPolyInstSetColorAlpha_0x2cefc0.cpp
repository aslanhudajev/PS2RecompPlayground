#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPolyInstSetColorAlpha
// Address: 0x2cefc0 - 0x2cefe4
void MBPolyInstSetColorAlpha_0x2cefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cefc0u;

    // 0x2cefc0: 0x4c20001
    ctx->pc = 0x2CEFC0u;
    {
        const bool branch_taken_0x2cefc0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2cefc0) {
            ctx->pc = 0x2CEFC4u;
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
            ctx->pc = 0x2CEFC8u;
            goto label_2cefc8;
        }
    }
    ctx->pc = 0x2CEFC8u;
label_2cefc8:
    // 0x2cefc8: 0x240200ff
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cefcc: 0x463023
    ctx->pc = 0x2cefccu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cefd0: 0x63043
    ctx->pc = 0x2cefd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2cefd4: 0x61600
    ctx->pc = 0x2cefd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 24));
    // 0x2cefd8: 0xa21025
    ctx->pc = 0x2cefd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cefdc: 0x3e00008
    ctx->pc = 0x2CEFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEFE0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEFC8u: goto label_2cefc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CEFE4u;
}

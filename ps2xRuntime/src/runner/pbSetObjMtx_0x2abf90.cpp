#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetObjMtx
// Address: 0x2abf90 - 0x2abfb8
void pbSetObjMtx_0x2abf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abf90u;

    // 0x2abf90: 0x50a00004
    ctx->pc = 0x2ABF90u;
    {
        const bool branch_taken_0x2abf90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2abf90) {
            ctx->pc = 0x2ABF94u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x2ABFA4u;
            goto label_2abfa4;
        }
    }
    ctx->pc = 0x2ABF98u;
    // 0x2abf98: 0x3c02003c
    ctx->pc = 0x2abf98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2abf9c: 0x10000002
    ctx->pc = 0x2ABF9Cu;
    {
        const bool branch_taken_0x2abf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ABFA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22688));
        if (branch_taken_0x2abf9c) {
            ctx->pc = 0x2ABFA8u;
            goto label_2abfa8;
        }
    }
    ctx->pc = 0x2ABFA4u;
label_2abfa4:
    // 0x2abfa4: 0x24425890
    ctx->pc = 0x2abfa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22672));
label_2abfa8:
    // 0x2abfa8: 0x78420000
    ctx->pc = 0x2abfa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abfac: 0x7c820000
    ctx->pc = 0x2abfacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2abfb0: 0x3e00008
    ctx->pc = 0x2ABFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABFB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ABFA4u: goto label_2abfa4;
            case 0x2ABFA8u: goto label_2abfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ABFB8u;
}

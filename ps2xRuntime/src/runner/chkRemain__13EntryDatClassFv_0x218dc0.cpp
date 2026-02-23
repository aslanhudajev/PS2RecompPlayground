#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkRemain__13EntryDatClassFv
// Address: 0x218dc0 - 0x218df0
void chkRemain__13EntryDatClassFv_0x218dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkRemain__13EntryDatClassFv");


    ctx->pc = 0x218dc0u;

    // 0x218dc0: 0x84831000
    ctx->pc = 0x218dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x218dc4: 0x84841002
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x218dc8: 0x83082a
    ctx->pc = 0x218dc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x218dcc: 0x14200002
    ctx->pc = 0x218DCCu;
    {
        const bool branch_taken_0x218dcc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x218dcc) {
            ctx->pc = 0x218DD8u;
            goto label_218dd8;
        }
    }
    ctx->pc = 0x218DD4u;
    // 0x218dd4: 0x70001628
    ctx->pc = 0x218dd4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218dd8:
    // 0x218dd8: 0x821021
    ctx->pc = 0x218dd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218ddc: 0x14620002
    ctx->pc = 0x218DDCu;
    {
        const bool branch_taken_0x218ddc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x218DE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x218ddc) {
            ctx->pc = 0x218DE8u;
            goto label_218de8;
        }
    }
    ctx->pc = 0x218DE4u;
    // 0x218de4: 0x70001628
    ctx->pc = 0x218de4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218de8:
    // 0x218de8: 0x3e00008
    ctx->pc = 0x218DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218DD8u: goto label_218dd8;
            case 0x218DE8u: goto label_218de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218DF0u;
}

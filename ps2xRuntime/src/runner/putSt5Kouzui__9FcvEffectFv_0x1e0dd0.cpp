#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putSt5Kouzui__9FcvEffectFv
// Address: 0x1e0dd0 - 0x1e0e18
void putSt5Kouzui__9FcvEffectFv_0x1e0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSt5Kouzui__9FcvEffectFv");


    ctx->pc = 0x1e0dd0u;

    // 0x1e0dd0: 0x27bdffe0
    ctx->pc = 0x1e0dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0dd4: 0x7fbf0010
    ctx->pc = 0x1e0dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e0dd8: 0x7fb00000
    ctx->pc = 0x1e0dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0ddc: 0x8f828cec
    ctx->pc = 0x1e0ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1e0de0: 0x14400004
    ctx->pc = 0x1E0DE0u;
    {
        const bool branch_taken_0x1e0de0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0DE4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0de0) {
            ctx->pc = 0x1E0DF4u;
            goto label_1e0df4;
        }
    }
    ctx->pc = 0x1E0DE8u;
    // 0x1e0de8: 0x8f828ce8
    ctx->pc = 0x1e0de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e0dec: 0x10400004
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0DF0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E0E00u;
            goto label_1e0e00;
        }
    }
    ctx->pc = 0x1E0DF4u;
label_1e0df4:
    // 0x1e0df4: 0xc06898c
    ctx->pc = 0x1E0DF4u;
    SET_GPR_U32(ctx, 31, 0x1E0DFCu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DFCu; }
        else if (ctx->pc != 0x1E0DFCu) { ctx->pc = 0x1E0DFCu; }
    }
    if (ctx->pc != 0x1E0DFCu) { return; }
    ctx->pc = 0x1E0DFCu;
    // 0x1e0dfc: 0x72002628
    ctx->pc = 0x1e0dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1e0e00:
    // 0x1e0e00: 0xc077be8
    ctx->pc = 0x1E0E00u;
    SET_GPR_U32(ctx, 31, 0x1E0E08u);
    ctx->pc = 0x1DEFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__9FcvEffectFv_0x1defa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E08u; }
        else if (ctx->pc != 0x1E0E08u) { ctx->pc = 0x1E0E08u; }
    }
    if (ctx->pc != 0x1E0E08u) { return; }
    ctx->pc = 0x1E0E08u;
    // 0x1e0e08: 0x7bbf0010
    ctx->pc = 0x1e0e08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e0c: 0x7bb00000
    ctx->pc = 0x1e0e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e10: 0x3e00008
    ctx->pc = 0x1E0E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0DF4u: goto label_1e0df4;
            case 0x1E0E00u: goto label_1e0e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0E18u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_IsGetFrmTimeTunit
// Address: 0x19e7b0 - 0x19e7e4
void SFTIM_IsGetFrmTimeTunit_0x19e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_IsGetFrmTimeTunit");


    ctx->pc = 0x19e7b0u;

    // 0x19e7b0: 0x27bdffe0
    ctx->pc = 0x19e7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e7b4: 0x24830994
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2452));
    // 0x19e7b8: 0xffbf0010
    ctx->pc = 0x19e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e7bc: 0x8c620038
    ctx->pc = 0x19e7bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x19e7c0: 0x14400005
    ctx->pc = 0x19E7C0u;
    {
        const bool branch_taken_0x19e7c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E7C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19e7c0) {
            ctx->pc = 0x19E7D8u;
            goto label_19e7d8;
        }
    }
    ctx->pc = 0x19E7C8u;
    // 0x19e7c8: 0x8c6800b0
    ctx->pc = 0x19e7c8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x19e7cc: 0xc067a48
    ctx->pc = 0x19E7CCu;
    SET_GPR_U32(ctx, 31, 0x19E7D4u);
    ctx->pc = 0x19E7D0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E920u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsExecTime_0x19e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7D4u; }
        else if (ctx->pc != 0x19E7D4u) { ctx->pc = 0x19E7D4u; }
    }
    if (ctx->pc != 0x19E7D4u) { return; }
    ctx->pc = 0x19E7D4u;
    // 0x19e7d4: 0x8fa20000
    ctx->pc = 0x19e7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19e7d8:
    // 0x19e7d8: 0xdfbf0010
    ctx->pc = 0x19e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e7dc: 0x3e00008
    ctx->pc = 0x19E7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E7D8u: goto label_19e7d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E7E4u;
}

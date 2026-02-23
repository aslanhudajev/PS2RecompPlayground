#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetNumStm
// Address: 0x17a398 - 0x17a3c8
void LSC_GetNumStm_0x17a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetNumStm");


    ctx->pc = 0x17a398u;

    // 0x17a398: 0x27bdfff0
    ctx->pc = 0x17a398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a39c: 0x14800006
    ctx->pc = 0x17A39Cu;
    {
        const bool branch_taken_0x17a39c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A3A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a39c) {
            ctx->pc = 0x17A3B8u;
            goto label_17a3b8;
        }
    }
    ctx->pc = 0x17A3A4u;
    // 0x17a3a4: 0x3c04002c
    ctx->pc = 0x17a3a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a3a8: 0xc05e9c6
    ctx->pc = 0x17A3A8u;
    SET_GPR_U32(ctx, 31, 0x17A3B0u);
    ctx->pc = 0x17A3ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3B0u; }
        else if (ctx->pc != 0x17A3B0u) { ctx->pc = 0x17A3B0u; }
    }
    if (ctx->pc != 0x17A3B0u) { return; }
    ctx->pc = 0x17A3B0u;
    // 0x17a3b0: 0x10000002
    ctx->pc = 0x17A3B0u;
    {
        const bool branch_taken_0x17a3b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A3B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a3b0) {
            ctx->pc = 0x17A3BCu;
            goto label_17a3bc;
        }
    }
    ctx->pc = 0x17A3B8u;
label_17a3b8:
    // 0x17a3b8: 0x8c820024
    ctx->pc = 0x17a3b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_17a3bc:
    // 0x17a3bc: 0xdfbf0000
    ctx->pc = 0x17a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3c0: 0x3e00008
    ctx->pc = 0x17A3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A3B8u: goto label_17a3b8;
            case 0x17A3BCu: goto label_17a3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A3C8u;
}

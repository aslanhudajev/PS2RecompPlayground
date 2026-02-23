#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTBSK__13EventCtrlTaskFv
// Address: 0x1e2fc0 - 0x1e300c
void ENTBSK__13EventCtrlTaskFv_0x1e2fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTBSK__13EventCtrlTaskFv");


    ctx->pc = 0x1e2fc0u;

    // 0x1e2fc0: 0x27bdffe0
    ctx->pc = 0x1e2fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2fc4: 0x7fbf0010
    ctx->pc = 0x1e2fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e2fc8: 0x7fb00000
    ctx->pc = 0x1e2fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2fcc: 0x8f828ce8
    ctx->pc = 0x1e2fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e2fd0: 0x10400006
    ctx->pc = 0x1E2FD0u;
    {
        const bool branch_taken_0x1e2fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2FD4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e2fd0) {
            ctx->pc = 0x1E2FECu;
            goto label_1e2fec;
        }
    }
    ctx->pc = 0x1E2FD8u;
    // 0x1e2fd8: 0x8e05000c
    ctx->pc = 0x1e2fd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2fdc: 0xc24cbb0
    ctx->pc = 0x1E2FDCu;
    SET_GPR_U32(ctx, 31, 0x1E2FE4u);
    ctx->pc = 0x1E2FE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        skipEvent__13EnemyMgrClassFPUi_0x932ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FE4u; }
        else if (ctx->pc != 0x1E2FE4u) { ctx->pc = 0x1E2FE4u; }
    }
    if (ctx->pc != 0x1E2FE4u) { return; }
    ctx->pc = 0x1E2FE4u;
    // 0x1e2fe4: 0x10000005
    ctx->pc = 0x1E2FE4u;
    {
        const bool branch_taken_0x1e2fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2FE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1e2fe4) {
            ctx->pc = 0x1E2FFCu;
            goto label_1e2ffc;
        }
    }
    ctx->pc = 0x1E2FECu;
label_1e2fec:
    // 0x1e2fec: 0x8e05000c
    ctx->pc = 0x1e2fecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2ff0: 0xc24cae0
    ctx->pc = 0x1E2FF0u;
    SET_GPR_U32(ctx, 31, 0x1E2FF8u);
    ctx->pc = 0x1E2FF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__13EnemyMgrClassFPUi_0x932b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FF8u; }
        else if (ctx->pc != 0x1E2FF8u) { ctx->pc = 0x1E2FF8u; }
    }
    if (ctx->pc != 0x1E2FF8u) { return; }
    ctx->pc = 0x1E2FF8u;
    // 0x1e2ff8: 0xae02000c
    ctx->pc = 0x1e2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2ffc:
    // 0x1e2ffc: 0x7bbf0010
    ctx->pc = 0x1e2ffcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3000: 0x7bb00000
    ctx->pc = 0x1e3000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3004: 0x3e00008
    ctx->pc = 0x1E3004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2FECu: goto label_1e2fec;
            case 0x1E2FFCu: goto label_1e2ffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E300Cu;
}

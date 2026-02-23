#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__14SysCfgMgrClassFv
// Address: 0x1d36b0 - 0x1d3720
void synch__14SysCfgMgrClassFv_0x1d36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__14SysCfgMgrClassFv");


    ctx->pc = 0x1d36b0u;

    // 0x1d36b0: 0x27bdffe0
    ctx->pc = 0x1d36b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d36b4: 0x7fbf0010
    ctx->pc = 0x1d36b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d36b8: 0x7fb00000
    ctx->pc = 0x1d36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d36bc: 0x70808628
    ctx->pc = 0x1d36bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d36c0: 0x24040001
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d36c4: 0x70002e28
    ctx->pc = 0x1d36c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d36c8: 0xc057510
    ctx->pc = 0x1D36C8u;
    SET_GPR_U32(ctx, 31, 0x1D36D0u);
    ctx->pc = 0x1D36CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x15D440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x15d440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36D0u; }
        else if (ctx->pc != 0x1D36D0u) { ctx->pc = 0x1D36D0u; }
    }
    if (ctx->pc != 0x1D36D0u) { return; }
    ctx->pc = 0x1D36D0u;
    // 0x1d36d0: 0xae02000c
    ctx->pc = 0x1d36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d36d4: 0x8e03000c
    ctx->pc = 0x1d36d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d36d8: 0x1060000d
    ctx->pc = 0x1D36D8u;
    {
        const bool branch_taken_0x1d36d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d36d8) {
            ctx->pc = 0x1D3710u;
            goto label_1d3710;
        }
    }
    ctx->pc = 0x1D36E0u;
    // 0x1d36e0: 0x8e030014
    ctx->pc = 0x1d36e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d36e4: 0x1060000a
    ctx->pc = 0x1D36E4u;
    {
        const bool branch_taken_0x1d36e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d36e4) {
            ctx->pc = 0x1D3710u;
            goto label_1d3710;
        }
    }
    ctx->pc = 0x1D36ECu;
    // 0x1d36ec: 0xae000014
    ctx->pc = 0x1d36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d36f0: 0x8e030008
    ctx->pc = 0x1d36f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d36f4: 0x10600006
    ctx->pc = 0x1D36F4u;
    {
        const bool branch_taken_0x1d36f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d36f4) {
            ctx->pc = 0x1D3710u;
            goto label_1d3710;
        }
    }
    ctx->pc = 0x1D36FCu;
    // 0x1d36fc: 0xae030010
    ctx->pc = 0x1d36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d3700: 0x8e050010
    ctx->pc = 0x1d3700u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3704: 0x3c020026
    ctx->pc = 0x1d3704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d3708: 0xc05114a
    ctx->pc = 0x1D3708u;
    SET_GPR_U32(ctx, 31, 0x1D3710u);
    ctx->pc = 0x1D370Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21784));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3710u; }
        else if (ctx->pc != 0x1D3710u) { ctx->pc = 0x1D3710u; }
    }
    if (ctx->pc != 0x1D3710u) { return; }
    ctx->pc = 0x1D3710u;
label_1d3710:
    // 0x1d3710: 0x7bbf0010
    ctx->pc = 0x1d3710u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3714: 0x7bb00000
    ctx->pc = 0x1d3714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3718: 0x3e00008
    ctx->pc = 0x1D3718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D371Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3710u: goto label_1d3710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3720u;
}

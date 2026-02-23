#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CtrlGunFlash__Fv
// Address: 0x1ee950 - 0x1eea14
void CtrlGunFlash__Fv_0x1ee950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CtrlGunFlash__Fv");


    ctx->pc = 0x1ee950u;

    // 0x1ee950: 0x27bdfff0
    ctx->pc = 0x1ee950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee954: 0x3c020050
    ctx->pc = 0x1ee954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ee958: 0x7fbf0000
    ctx->pc = 0x1ee958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ee95c: 0xc07ce18
    ctx->pc = 0x1EE95Cu;
    SET_GPR_U32(ctx, 31, 0x1EE964u);
    ctx->pc = 0x1EE960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE964u; }
        else if (ctx->pc != 0x1EE964u) { ctx->pc = 0x1EE964u; }
    }
    if (ctx->pc != 0x1EE964u) { return; }
    ctx->pc = 0x1EE964u;
    // 0x1ee964: 0x1c400022
    ctx->pc = 0x1EE964u;
    {
        const bool branch_taken_0x1ee964 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EE968u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1ee964) {
            ctx->pc = 0x1EE9F0u;
            goto label_1ee9f0;
        }
    }
    ctx->pc = 0x1EE96Cu;
    // 0x1ee96c: 0x8424e504
    ctx->pc = 0x1ee96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1ee970: 0x2403000a
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee974: 0x14830008
    ctx->pc = 0x1EE974u;
    {
        const bool branch_taken_0x1ee974 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EE978u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1ee974) {
            ctx->pc = 0x1EE998u;
            goto label_1ee998;
        }
    }
    ctx->pc = 0x1EE97Cu;
    // 0x1ee97c: 0x8f838b68
    ctx->pc = 0x1ee97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x1ee980: 0x14600011
    ctx->pc = 0x1EE980u;
    {
        const bool branch_taken_0x1ee980 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee980) {
            ctx->pc = 0x1EE9C8u;
            goto label_1ee9c8;
        }
    }
    ctx->pc = 0x1EE988u;
    // 0x1ee988: 0x8f838ce4
    ctx->pc = 0x1ee988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
    // 0x1ee98c: 0x1460000e
    ctx->pc = 0x1EE98Cu;
    {
        const bool branch_taken_0x1ee98c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee98c) {
            ctx->pc = 0x1EE9C8u;
            goto label_1ee9c8;
        }
    }
    ctx->pc = 0x1EE994u;
    // 0x1ee994: 0x24030006
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1ee998:
    // 0x1ee998: 0x1083000b
    ctx->pc = 0x1EE998u;
    {
        const bool branch_taken_0x1ee998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE99Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1ee998) {
            ctx->pc = 0x1EE9C8u;
            goto label_1ee9c8;
        }
    }
    ctx->pc = 0x1EE9A0u;
    // 0x1ee9a0: 0x10830009
    ctx->pc = 0x1EE9A0u;
    {
        const bool branch_taken_0x1ee9a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE9A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1ee9a0) {
            ctx->pc = 0x1EE9C8u;
            goto label_1ee9c8;
        }
    }
    ctx->pc = 0x1EE9A8u;
    // 0x1ee9a8: 0x14830005
    ctx->pc = 0x1EE9A8u;
    {
        const bool branch_taken_0x1ee9a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EE9ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1ee9a8) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE9B0u;
    // 0x1ee9b0: 0x8f838b68
    ctx->pc = 0x1ee9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x1ee9b4: 0x14600004
    ctx->pc = 0x1EE9B4u;
    {
        const bool branch_taken_0x1ee9b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee9b4) {
            ctx->pc = 0x1EE9C8u;
            goto label_1ee9c8;
        }
    }
    ctx->pc = 0x1EE9BCu;
    // 0x1ee9bc: 0x24030008
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1ee9c0:
    // 0x1ee9c0: 0x1483000b
    ctx->pc = 0x1EE9C0u;
    {
        const bool branch_taken_0x1ee9c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ee9c0) {
            ctx->pc = 0x1EE9F0u;
            goto label_1ee9f0;
        }
    }
    ctx->pc = 0x1EE9C8u;
label_1ee9c8:
    // 0x1ee9c8: 0x87838b50
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937424)));
    // 0x1ee9cc: 0x14600006
    ctx->pc = 0x1EE9CCu;
    {
        const bool branch_taken_0x1ee9cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee9cc) {
            ctx->pc = 0x1EE9E8u;
            goto label_1ee9e8;
        }
    }
    ctx->pc = 0x1EE9D4u;
    // 0x1ee9d4: 0x87848b4c
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937420)));
    // 0x1ee9d8: 0x87838b54
    ctx->pc = 0x1ee9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937428)));
    // 0x1ee9dc: 0x831824
    ctx->pc = 0x1ee9dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ee9e0: 0x10600003
    ctx->pc = 0x1EE9E0u;
    {
        const bool branch_taken_0x1ee9e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee9e0) {
            ctx->pc = 0x1EE9F0u;
            goto label_1ee9f0;
        }
    }
    ctx->pc = 0x1EE9E8u;
label_1ee9e8:
    // 0x1ee9e8: 0xc07bac8
    ctx->pc = 0x1EE9E8u;
    SET_GPR_U32(ctx, 31, 0x1EE9F0u);
    ctx->pc = 0x1EEB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispGunFlash__Fv_0x1eeb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9F0u; }
        else if (ctx->pc != 0x1EE9F0u) { ctx->pc = 0x1EE9F0u; }
    }
    if (ctx->pc != 0x1EE9F0u) { return; }
    ctx->pc = 0x1EE9F0u;
label_1ee9f0:
    // 0x1ee9f0: 0x87838b4c
    ctx->pc = 0x1ee9f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937420)));
    // 0x1ee9f4: 0x10600003
    ctx->pc = 0x1EE9F4u;
    {
        const bool branch_taken_0x1ee9f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee9f4) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE9FCu;
    // 0x1ee9fc: 0x87838b50
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937424)));
    // 0x1eea00: 0xa7838b54
    ctx->pc = 0x1eea00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937428), (uint16_t)GPR_U32(ctx, 3));
label_1eea04:
    // 0x1eea04: 0xa7808b50
    ctx->pc = 0x1eea04u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eea08: 0x7bbf0000
    ctx->pc = 0x1eea08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea0c: 0x3e00008
    ctx->pc = 0x1EEA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE998u: goto label_1ee998;
            case 0x1EE9C0u: goto label_1ee9c0;
            case 0x1EE9C8u: goto label_1ee9c8;
            case 0x1EE9E8u: goto label_1ee9e8;
            case 0x1EE9F0u: goto label_1ee9f0;
            case 0x1EEA04u: goto label_1eea04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEA14u;
}

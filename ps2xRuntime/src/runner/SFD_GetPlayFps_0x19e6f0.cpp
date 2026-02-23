#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetPlayFps
// Address: 0x19e6f0 - 0x19e77c
void SFD_GetPlayFps_0x19e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetPlayFps");


    ctx->pc = 0x19e6f0u;

    // 0x19e6f0: 0x27bdffd0
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e6f4: 0x2402ffff
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e6f8: 0xffb10010
    ctx->pc = 0x19e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e6fc: 0xffb00000
    ctx->pc = 0x19e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e700: 0xa0882d
    ctx->pc = 0x19e700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e704: 0xffbf0020
    ctx->pc = 0x19e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e708: 0x80802d
    ctx->pc = 0x19e708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e70c: 0xc064f1e
    ctx->pc = 0x19E70Cu;
    SET_GPR_U32(ctx, 31, 0x19E714u);
    ctx->pc = 0x19E710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E714u; }
        else if (ctx->pc != 0x19E714u) { ctx->pc = 0x19E714u; }
    }
    if (ctx->pc != 0x19E714u) { return; }
    ctx->pc = 0x19E714u;
    // 0x19e714: 0x10400006
    ctx->pc = 0x19E714u;
    {
        const bool branch_taken_0x19e714 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e714) {
            ctx->pc = 0x19E730u;
            goto label_19e730;
        }
    }
    ctx->pc = 0x19E71Cu;
    // 0x19e71c: 0x3c05ff00
    ctx->pc = 0x19e71cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e720: 0xc064ea0
    ctx->pc = 0x19E720u;
    SET_GPR_U32(ctx, 31, 0x19E728u);
    ctx->pc = 0x19E724u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 280));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E728u; }
        else if (ctx->pc != 0x19E728u) { ctx->pc = 0x19E728u; }
    }
    if (ctx->pc != 0x19E728u) { return; }
    ctx->pc = 0x19E728u;
    // 0x19e728: 0x10000010
    ctx->pc = 0x19E728u;
    {
        const bool branch_taken_0x19e728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E72Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19e728) {
            ctx->pc = 0x19E76Cu;
            goto label_19e76c;
        }
    }
    ctx->pc = 0x19E730u;
label_19e730:
    // 0x19e730: 0x8e030914
    ctx->pc = 0x19e730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x19e734: 0x26040a94
    ctx->pc = 0x19e734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x19e738: 0x1060000b
    ctx->pc = 0x19E738u;
    {
        const bool branch_taken_0x19e738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E73Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e738) {
            ctx->pc = 0x19E768u;
            goto label_19e768;
        }
    }
    ctx->pc = 0x19E740u;
    // 0x19e740: 0x3c02002c
    ctx->pc = 0x19e740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x19e744: 0x31880
    ctx->pc = 0x19e744u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e748: 0x2442d5f0
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956528));
    // 0x19e74c: 0x8c850258
    ctx->pc = 0x19e74cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x19e750: 0x621821
    ctx->pc = 0x19e750u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e754: 0x240603e8
    ctx->pc = 0x19e754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e758: 0xc063132
    ctx->pc = 0x19E758u;
    SET_GPR_U32(ctx, 31, 0x19E760u);
    ctx->pc = 0x19E75Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E760u; }
        else if (ctx->pc != 0x19E760u) { ctx->pc = 0x19E760u; }
    }
    if (ctx->pc != 0x19E760u) { return; }
    ctx->pc = 0x19E760u;
    // 0x19e760: 0xae220000
    ctx->pc = 0x19e760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19e764: 0x102d
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e768:
    // 0x19e768: 0xdfbf0020
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e76c:
    // 0x19e76c: 0xdfb10010
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e770: 0xdfb00000
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e774: 0x3e00008
    ctx->pc = 0x19E774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E730u: goto label_19e730;
            case 0x19E768u: goto label_19e768;
            case 0x19E76Cu: goto label_19e76c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E77Cu;
}

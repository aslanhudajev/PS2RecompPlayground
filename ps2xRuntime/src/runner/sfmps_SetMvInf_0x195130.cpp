#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetMvInf
// Address: 0x195130 - 0x195194
void sfmps_SetMvInf_0x195130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetMvInf");


    ctx->pc = 0x195130u;

    // 0x195130: 0x27bdffa0
    ctx->pc = 0x195130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x195134: 0xffb10040
    ctx->pc = 0x195134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x195138: 0x3a0282d
    ctx->pc = 0x195138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19513c: 0xffbf0050
    ctx->pc = 0x19513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x195140: 0x24910900
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 2304));
    // 0x195144: 0xffb00030
    ctx->pc = 0x195144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x195148: 0x8c903060
    ctx->pc = 0x195148u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 12384)));
    // 0x19514c: 0xc060894
    ctx->pc = 0x19514Cu;
    SET_GPR_U32(ctx, 31, 0x195154u);
    ctx->pc = 0x195150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182250u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetPackHd_0x182250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195154u; }
        else if (ctx->pc != 0x195154u) { ctx->pc = 0x195154u; }
    }
    if (ctx->pc != 0x195154u) { return; }
    ctx->pc = 0x195154u;
    // 0x195154: 0x8fa20008
    ctx->pc = 0x195154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195158: 0x5c400001
    ctx->pc = 0x195158u;
    {
        const bool branch_taken_0x195158 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x195158) {
            ctx->pc = 0x19515Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
            ctx->pc = 0x195160u;
            goto label_195160;
        }
    }
    ctx->pc = 0x195160u;
label_195160:
    // 0x195160: 0x200202d
    ctx->pc = 0x195160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195164: 0x27a50010
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x195168: 0xc0608ae
    ctx->pc = 0x195168u;
    SET_GPR_U32(ctx, 31, 0x195170u);
    ctx->pc = 0x19516Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1822B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetSysHd_0x1822b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195170u; }
        else if (ctx->pc != 0x195170u) { ctx->pc = 0x195170u; }
    }
    if (ctx->pc != 0x195170u) { return; }
    ctx->pc = 0x195170u;
    // 0x195170: 0x8fa30020
    ctx->pc = 0x195170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195174: 0x2402ffff
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195178: 0x54620001
    ctx->pc = 0x195178u;
    {
        const bool branch_taken_0x195178 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x195178) {
            ctx->pc = 0x19517Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
            ctx->pc = 0x195180u;
            goto label_195180;
        }
    }
    ctx->pc = 0x195180u;
label_195180:
    // 0x195180: 0xdfbf0050
    ctx->pc = 0x195180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195184: 0xdfb10040
    ctx->pc = 0x195184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195188: 0xdfb00030
    ctx->pc = 0x195188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19518c: 0x3e00008
    ctx->pc = 0x19518Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195160u: goto label_195160;
            case 0x195180u: goto label_195180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195194u;
}

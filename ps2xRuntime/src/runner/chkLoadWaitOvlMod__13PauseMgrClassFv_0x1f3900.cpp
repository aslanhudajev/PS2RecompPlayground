#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkLoadWaitOvlMod__13PauseMgrClassFv
// Address: 0x1f3900 - 0x1f395c
void chkLoadWaitOvlMod__13PauseMgrClassFv_0x1f3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkLoadWaitOvlMod__13PauseMgrClassFv");


    ctx->pc = 0x1f3900u;

    // 0x1f3900: 0x27bdfff0
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3904: 0x7fbf0000
    ctx->pc = 0x1f3904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f3908: 0x8f838e04
    ctx->pc = 0x1f3908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f390c: 0x3c020051
    ctx->pc = 0x1f390cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3910: 0x70003e28
    ctx->pc = 0x1f3910u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f3914: 0x24464fc0
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 20416));
    // 0x1f3918: 0x10000007
    ctx->pc = 0x1F3918u;
    {
        const bool branch_taken_0x1f3918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F391Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1f3918) {
            ctx->pc = 0x1F3938u;
            goto label_1f3938;
        }
    }
    ctx->pc = 0x1F3920u;
label_1f3920:
    // 0x1f3920: 0x8cc20000
    ctx->pc = 0x1f3920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f3924: 0x54450003
    ctx->pc = 0x1F3924u;
    {
        const bool branch_taken_0x1f3924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1f3924) {
            ctx->pc = 0x1F3928u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1F3934u;
            goto label_1f3934;
        }
    }
    ctx->pc = 0x1F392Cu;
    // 0x1f392c: 0xd
    ctx->pc = 0x1f392cu;
    runtime->handleBreak(rdram, ctx);
    // 0x1f3930: 0x24e70001
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1f3934:
    // 0x1f3934: 0x24c60010
    ctx->pc = 0x1f3934u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_1f3938:
    // 0x1f3938: 0xe3102a
    ctx->pc = 0x1f3938u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x1f393c: 0x1440fff8
    ctx->pc = 0x1F393Cu;
    {
        const bool branch_taken_0x1f393c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f393c) {
            ctx->pc = 0x1F3920u;
            goto label_1f3920;
        }
    }
    ctx->pc = 0x1F3944u;
    // 0x1f3944: 0xc07ce24
    ctx->pc = 0x1F3944u;
    SET_GPR_U32(ctx, 31, 0x1F394Cu);
    ctx->pc = 0x1F3948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1F3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteWaitCauseElem__13PauseMgrClassFi_0x1f3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F394Cu; }
        else if (ctx->pc != 0x1F394Cu) { ctx->pc = 0x1F394Cu; }
    }
    if (ctx->pc != 0x1F394Cu) { return; }
    ctx->pc = 0x1F394Cu;
    // 0x1f394c: 0x7bbf0000
    ctx->pc = 0x1f394cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3950: 0x70001628
    ctx->pc = 0x1f3950u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f3954: 0x3e00008
    ctx->pc = 0x1F3954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3958u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3920u: goto label_1f3920;
            case 0x1F3934u: goto label_1f3934;
            case 0x1F3938u: goto label_1f3938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F395Cu;
}

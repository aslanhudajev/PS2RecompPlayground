#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_ChkRegularTime
// Address: 0x19e150 - 0x19e194
void SFTIM_ChkRegularTime_0x19e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_ChkRegularTime");


    ctx->pc = 0x19e150u;

    // 0x19e150: 0x8c830040
    ctx->pc = 0x19e150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19e154: 0x24020004
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e158: 0x1062000c
    ctx->pc = 0x19E158u;
    {
        const bool branch_taken_0x19e158 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E15Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x19e158) {
            ctx->pc = 0x19E18Cu;
            goto label_19e18c;
        }
    }
    ctx->pc = 0x19E160u;
    // 0x19e160: 0x1062000a
    ctx->pc = 0x19E160u;
    {
        const bool branch_taken_0x19e160 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E164u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x19e160) {
            ctx->pc = 0x19E18Cu;
            goto label_19e18c;
        }
    }
    ctx->pc = 0x19E168u;
    // 0x19e168: 0x10620008
    ctx->pc = 0x19E168u;
    {
        const bool branch_taken_0x19e168 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E16Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x19e168) {
            ctx->pc = 0x19E18Cu;
            goto label_19e18c;
        }
    }
    ctx->pc = 0x19E170u;
    // 0x19e170: 0x10620006
    ctx->pc = 0x19E170u;
    {
        const bool branch_taken_0x19e170 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E174u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19e170) {
            ctx->pc = 0x19E18Cu;
            goto label_19e18c;
        }
    }
    ctx->pc = 0x19E178u;
    // 0x19e178: 0x24030001
    ctx->pc = 0x19e178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e17c: 0xaca20000
    ctx->pc = 0x19e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19e180: 0x102d
    ctx->pc = 0x19e180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e184: 0x3e00008
    ctx->pc = 0x19E184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E188u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E18Cu: goto label_19e18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E18Cu;
label_19e18c:
    // 0x19e18c: 0x3e00008
    ctx->pc = 0x19E18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E190u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E18Cu: goto label_19e18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E194u;
}

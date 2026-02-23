#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_01__15CamPathMgrClassFv
// Address: 0x1cc1c0 - 0x1cc29c
void entryExec_STAT_01__15CamPathMgrClassFv_0x1cc1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_01__15CamPathMgrClassFv");


    ctx->pc = 0x1cc1c0u;

    // 0x1cc1c0: 0x27bdffd0
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc1c4: 0x7fbf0020
    ctx->pc = 0x1cc1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cc1c8: 0x7fb10010
    ctx->pc = 0x1cc1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc1cc: 0x7fb00000
    ctx->pc = 0x1cc1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc1d0: 0x3c010030
    ctx->pc = 0x1cc1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc1d4: 0x8c227c70
    ctx->pc = 0x1cc1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31856)));
    // 0x1cc1d8: 0x70808e28
    ctx->pc = 0x1cc1d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cc1dc: 0x14400020
    ctx->pc = 0x1CC1DCu;
    {
        const bool branch_taken_0x1cc1dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC1E0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cc1dc) {
            ctx->pc = 0x1CC260u;
            goto label_1cc260;
        }
    }
    ctx->pc = 0x1CC1E4u;
    // 0x1cc1e4: 0x3c010050
    ctx->pc = 0x1cc1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc1e8: 0xc05b018
    ctx->pc = 0x1CC1E8u;
    SET_GPR_U32(ctx, 31, 0x1CC1F0u);
    ctx->pc = 0x1CC1ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1F0u; }
        else if (ctx->pc != 0x1CC1F0u) { ctx->pc = 0x1CC1F0u; }
    }
    if (ctx->pc != 0x1CC1F0u) { return; }
    ctx->pc = 0x1CC1F0u;
    // 0x1cc1f0: 0x24030004
    ctx->pc = 0x1cc1f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc1f4: 0x1443000f
    ctx->pc = 0x1CC1F4u;
    {
        const bool branch_taken_0x1cc1f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CC1F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cc1f4) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC1FCu;
    // 0x1cc1fc: 0x3c010030
    ctx->pc = 0x1cc1fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc200: 0x8c267c60
    ctx->pc = 0x1cc200u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31840)));
    // 0x1cc204: 0x8f828d10
    ctx->pc = 0x1cc204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1cc208: 0x3c010050
    ctx->pc = 0x1cc208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc20c: 0x8c240c74
    ctx->pc = 0x1cc20cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    // 0x1cc210: 0x24420001
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc214: 0x3c010030
    ctx->pc = 0x1cc214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc218: 0x8c257c6c
    ctx->pc = 0x1cc218u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 31852)));
    // 0x1cc21c: 0xc05aeba
    ctx->pc = 0x1CC21Cu;
    SET_GPR_U32(ctx, 31, 0x1CC224u);
    ctx->pc = 0x1CC220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC224u; }
        else if (ctx->pc != 0x1CC224u) { ctx->pc = 0x1CC224u; }
    }
    if (ctx->pc != 0x1CC224u) { return; }
    ctx->pc = 0x1CC224u;
    // 0x1cc224: 0x3c010050
    ctx->pc = 0x1cc224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc228: 0xc05b018
    ctx->pc = 0x1CC228u;
    SET_GPR_U32(ctx, 31, 0x1CC230u);
    ctx->pc = 0x1CC22Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC230u; }
        else if (ctx->pc != 0x1CC230u) { ctx->pc = 0x1CC230u; }
    }
    if (ctx->pc != 0x1CC230u) { return; }
    ctx->pc = 0x1CC230u;
    // 0x1cc230: 0x24030001
    ctx->pc = 0x1cc230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1cc234:
    // 0x1cc234: 0x10430004
    ctx->pc = 0x1CC234u;
    {
        const bool branch_taken_0x1cc234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CC238u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cc234) {
            ctx->pc = 0x1CC248u;
            goto label_1cc248;
        }
    }
    ctx->pc = 0x1CC23Cu;
    // 0x1cc23c: 0x24030003
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc240: 0x1443000b
    ctx->pc = 0x1CC240u;
    {
        const bool branch_taken_0x1cc240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cc240) {
            ctx->pc = 0x1CC270u;
            goto label_1cc270;
        }
    }
    ctx->pc = 0x1CC248u;
label_1cc248:
    // 0x1cc248: 0xc05ae0c
    ctx->pc = 0x1CC248u;
    SET_GPR_U32(ctx, 31, 0x1CC250u);
    ctx->pc = 0x1CC24Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC250u; }
        else if (ctx->pc != 0x1CC250u) { ctx->pc = 0x1CC250u; }
    }
    if (ctx->pc != 0x1CC250u) { return; }
    ctx->pc = 0x1CC250u;
    // 0x1cc250: 0x3c010050
    ctx->pc = 0x1cc250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc254: 0xac200c74
    ctx->pc = 0x1cc254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3188), GPR_U32(ctx, 0));
    // 0x1cc258: 0x10000005
    ctx->pc = 0x1CC258u;
    {
        const bool branch_taken_0x1cc258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC25Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cc258) {
            ctx->pc = 0x1CC270u;
            goto label_1cc270;
        }
    }
    ctx->pc = 0x1CC260u;
label_1cc260:
    // 0x1cc260: 0x8f828b38
    ctx->pc = 0x1cc260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1cc264: 0x14400002
    ctx->pc = 0x1CC264u;
    {
        const bool branch_taken_0x1cc264 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cc264) {
            ctx->pc = 0x1CC270u;
            goto label_1cc270;
        }
    }
    ctx->pc = 0x1CC26Cu;
    // 0x1cc26c: 0x24100001
    ctx->pc = 0x1cc26cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1cc270:
    // 0x1cc270: 0x12000004
    ctx->pc = 0x1CC270u;
    {
        const bool branch_taken_0x1cc270 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc270) {
            ctx->pc = 0x1CC284u;
            goto label_1cc284;
        }
    }
    ctx->pc = 0x1CC278u;
    // 0x1cc278: 0x8e220000
    ctx->pc = 0x1cc278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc27c: 0x24030003
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc280: 0xac43000c
    ctx->pc = 0x1cc280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1cc284:
    // 0x1cc284: 0x7bbf0020
    ctx->pc = 0x1cc284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc288: 0x7bb10010
    ctx->pc = 0x1cc288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc28c: 0x7bb00000
    ctx->pc = 0x1cc28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc290: 0x24020001
    ctx->pc = 0x1cc290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc294: 0x3e00008
    ctx->pc = 0x1CC294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC234u: goto label_1cc234;
            case 0x1CC248u: goto label_1cc248;
            case 0x1CC260u: goto label_1cc260;
            case 0x1CC270u: goto label_1cc270;
            case 0x1CC284u: goto label_1cc284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC29Cu;
}

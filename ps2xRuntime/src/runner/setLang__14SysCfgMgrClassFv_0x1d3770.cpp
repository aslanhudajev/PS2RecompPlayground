#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setLang__14SysCfgMgrClassFv
// Address: 0x1d3770 - 0x1d3828
void setLang__14SysCfgMgrClassFv_0x1d3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLang__14SysCfgMgrClassFv");


    ctx->pc = 0x1d3770u;

    // 0x1d3770: 0x27bdffe0
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3774: 0x7fbf0010
    ctx->pc = 0x1d3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3778: 0x7fb00000
    ctx->pc = 0x1d3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d377c: 0xc068450
    ctx->pc = 0x1D377Cu;
    SET_GPR_U32(ctx, 31, 0x1D3784u);
    ctx->pc = 0x1D3780u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceScfGetLanguage_0x1a1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3784u; }
        else if (ctx->pc != 0x1D3784u) { ctx->pc = 0x1D3784u; }
    }
    if (ctx->pc != 0x1D3784u) { return; }
    ctx->pc = 0x1D3784u;
    // 0x1d3784: 0x24030005
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d3788: 0x10430018
    ctx->pc = 0x1D3788u;
    {
        const bool branch_taken_0x1d3788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3788) {
            ctx->pc = 0x1D37ECu;
            goto label_1d37ec;
        }
    }
    ctx->pc = 0x1D3790u;
    // 0x1d3790: 0x24030004
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3794: 0x10430013
    ctx->pc = 0x1D3794u;
    {
        const bool branch_taken_0x1d3794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3794) {
            ctx->pc = 0x1D37E4u;
            goto label_1d37e4;
        }
    }
    ctx->pc = 0x1D379Cu;
    // 0x1d379c: 0x24030003
    ctx->pc = 0x1d379cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d37a0: 0x5043000e
    ctx->pc = 0x1D37A0u;
    {
        const bool branch_taken_0x1d37a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d37a0) {
            ctx->pc = 0x1D37A4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
            ctx->pc = 0x1D37DCu;
            goto label_1d37dc;
        }
    }
    ctx->pc = 0x1D37A8u;
    // 0x1d37a8: 0x24040002
    ctx->pc = 0x1d37a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d37ac: 0x10440008
    ctx->pc = 0x1D37ACu;
    {
        const bool branch_taken_0x1d37ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x1d37ac) {
            ctx->pc = 0x1D37D0u;
            goto label_1d37d0;
        }
    }
    ctx->pc = 0x1D37B4u;
    // 0x1d37b4: 0x24030001
    ctx->pc = 0x1d37b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d37b8: 0x10430003
    ctx->pc = 0x1D37B8u;
    {
        const bool branch_taken_0x1d37b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d37b8) {
            ctx->pc = 0x1D37C8u;
            goto label_1d37c8;
        }
    }
    ctx->pc = 0x1D37C0u;
    // 0x1d37c0: 0x1000000b
    ctx->pc = 0x1D37C0u;
    {
        const bool branch_taken_0x1d37c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37C4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1d37c0) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37C8u;
label_1d37c8:
    // 0x1d37c8: 0x10000009
    ctx->pc = 0x1D37C8u;
    {
        const bool branch_taken_0x1d37c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37CCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1d37c8) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37D0u;
label_1d37d0:
    // 0x1d37d0: 0x10000007
    ctx->pc = 0x1D37D0u;
    {
        const bool branch_taken_0x1d37d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37D4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d37d0) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37D8u;
    // 0x1d37d8: 0x24030006
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1d37dc:
    // 0x1d37dc: 0x10000004
    ctx->pc = 0x1D37DCu;
    {
        const bool branch_taken_0x1d37dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37E0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d37dc) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37E4u;
label_1d37e4:
    // 0x1d37e4: 0x10000002
    ctx->pc = 0x1D37E4u;
    {
        const bool branch_taken_0x1d37e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37E8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d37e4) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37ECu;
label_1d37ec:
    // 0x1d37ec: 0xa2030045
    ctx->pc = 0x1d37ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
label_1d37f0:
    // 0x1d37f0: 0x24030002
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d37f4: 0xa2030045
    ctx->pc = 0x1d37f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d37f8: 0x82040045
    ctx->pc = 0x1d37f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1d37fc: 0x24030004
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3800: 0x14830004
    ctx->pc = 0x1D3800u;
    {
        const bool branch_taken_0x1d3800 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d3800) {
            ctx->pc = 0x1D3814u;
            goto label_1d3814;
        }
    }
    ctx->pc = 0x1D3808u;
    // 0x1d3808: 0x24030001
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d380c: 0x10000002
    ctx->pc = 0x1D380Cu;
    {
        const bool branch_taken_0x1d380c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3810u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d380c) {
            ctx->pc = 0x1D3818u;
            goto label_1d3818;
        }
    }
    ctx->pc = 0x1D3814u;
label_1d3814:
    // 0x1d3814: 0xa2000043
    ctx->pc = 0x1d3814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
label_1d3818:
    // 0x1d3818: 0x7bbf0010
    ctx->pc = 0x1d3818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d381c: 0x7bb00000
    ctx->pc = 0x1d381cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3820: 0x3e00008
    ctx->pc = 0x1D3820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3828u;
}

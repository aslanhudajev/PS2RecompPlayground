#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13PauseMgrClassFi
// Address: 0x1f37e0 - 0x1f383c
void init__13PauseMgrClassFi_0x1f37e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13PauseMgrClassFi");


    ctx->pc = 0x1f37e0u;

label_1f37e0:
    // 0x1f37e0: 0x27bdffe0
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f37e4:
    // 0x1f37e4: 0x7fbf0010
    ctx->pc = 0x1f37e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1f37e8:
    // 0x1f37e8: 0x7fb00000
    ctx->pc = 0x1f37e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f37ec:
    // 0x1f37ec: 0xa480000c
    ctx->pc = 0x1f37ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
label_1f37f0:
    // 0x1f37f0: 0xa480000e
    ctx->pc = 0x1f37f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
label_1f37f4:
    // 0x1f37f4: 0xa4800008
    ctx->pc = 0x1f37f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_1f37f8:
    // 0x1f37f8: 0xa480000a
    ctx->pc = 0x1f37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f37fc:
    // 0x1f37fc: 0xaf808e04
    ctx->pc = 0x1f37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), GPR_U32(ctx, 0));
label_1f3800:
    // 0x1f3800: 0xa4800010
    ctx->pc = 0x1f3800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
label_1f3804:
    // 0x1f3804: 0xa4800012
    ctx->pc = 0x1f3804u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
label_1f3808:
    // 0x1f3808: 0xa4800004
    ctx->pc = 0x1f3808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
label_1f380c:
    // 0x1f380c: 0x8c990000
    ctx->pc = 0x1f380cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3810:
    // 0x1f3810: 0x8f39000c
    ctx->pc = 0x1f3810u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f3814:
    // 0x1f3814: 0x320f809
label_1f3818:
    if (ctx->pc == 0x1F3818u) {
        ctx->pc = 0x1F3818u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F381Cu;
        goto label_1f381c;
    }
    ctx->pc = 0x1F3814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F381Cu);
        ctx->pc = 0x1F3818u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F37E0u: goto label_1f37e0;
            case 0x1F37E4u: goto label_1f37e4;
            case 0x1F37E8u: goto label_1f37e8;
            case 0x1F37ECu: goto label_1f37ec;
            case 0x1F37F0u: goto label_1f37f0;
            case 0x1F37F4u: goto label_1f37f4;
            case 0x1F37F8u: goto label_1f37f8;
            case 0x1F37FCu: goto label_1f37fc;
            case 0x1F3800u: goto label_1f3800;
            case 0x1F3804u: goto label_1f3804;
            case 0x1F3808u: goto label_1f3808;
            case 0x1F380Cu: goto label_1f380c;
            case 0x1F3810u: goto label_1f3810;
            case 0x1F3814u: goto label_1f3814;
            case 0x1F3818u: goto label_1f3818;
            case 0x1F381Cu: goto label_1f381c;
            case 0x1F3820u: goto label_1f3820;
            case 0x1F3824u: goto label_1f3824;
            case 0x1F3828u: goto label_1f3828;
            case 0x1F382Cu: goto label_1f382c;
            case 0x1F3830u: goto label_1f3830;
            case 0x1F3834u: goto label_1f3834;
            case 0x1F3838u: goto label_1f3838;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F381Cu; }
            if (ctx->pc != 0x1F381Cu) { return; }
        }
    }
    ctx->pc = 0x1F381Cu;
label_1f381c:
    // 0x1f381c: 0x8e190000
    ctx->pc = 0x1f381cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3820:
    // 0x1f3820: 0x8f390010
    ctx->pc = 0x1f3820u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f3824:
    // 0x1f3824: 0x320f809
label_1f3828:
    if (ctx->pc == 0x1F3828u) {
        ctx->pc = 0x1F3828u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F382Cu;
        goto label_1f382c;
    }
    ctx->pc = 0x1F3824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F382Cu);
        ctx->pc = 0x1F3828u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F37E0u: goto label_1f37e0;
            case 0x1F37E4u: goto label_1f37e4;
            case 0x1F37E8u: goto label_1f37e8;
            case 0x1F37ECu: goto label_1f37ec;
            case 0x1F37F0u: goto label_1f37f0;
            case 0x1F37F4u: goto label_1f37f4;
            case 0x1F37F8u: goto label_1f37f8;
            case 0x1F37FCu: goto label_1f37fc;
            case 0x1F3800u: goto label_1f3800;
            case 0x1F3804u: goto label_1f3804;
            case 0x1F3808u: goto label_1f3808;
            case 0x1F380Cu: goto label_1f380c;
            case 0x1F3810u: goto label_1f3810;
            case 0x1F3814u: goto label_1f3814;
            case 0x1F3818u: goto label_1f3818;
            case 0x1F381Cu: goto label_1f381c;
            case 0x1F3820u: goto label_1f3820;
            case 0x1F3824u: goto label_1f3824;
            case 0x1F3828u: goto label_1f3828;
            case 0x1F382Cu: goto label_1f382c;
            case 0x1F3830u: goto label_1f3830;
            case 0x1F3834u: goto label_1f3834;
            case 0x1F3838u: goto label_1f3838;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F382Cu; }
            if (ctx->pc != 0x1F382Cu) { return; }
        }
    }
    ctx->pc = 0x1F382Cu;
label_1f382c:
    // 0x1f382c: 0x7bbf0010
    ctx->pc = 0x1f382cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3830:
    // 0x1f3830: 0x7bb00000
    ctx->pc = 0x1f3830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3834:
    // 0x1f3834: 0x3e00008
label_1f3838:
    if (ctx->pc == 0x1F3838u) {
        ctx->pc = 0x1F3838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F383Cu;
        goto label_fallthrough_0x1f3834;
    }
    ctx->pc = 0x1F3834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F37E0u: goto label_1f37e0;
            case 0x1F37E4u: goto label_1f37e4;
            case 0x1F37E8u: goto label_1f37e8;
            case 0x1F37ECu: goto label_1f37ec;
            case 0x1F37F0u: goto label_1f37f0;
            case 0x1F37F4u: goto label_1f37f4;
            case 0x1F37F8u: goto label_1f37f8;
            case 0x1F37FCu: goto label_1f37fc;
            case 0x1F3800u: goto label_1f3800;
            case 0x1F3804u: goto label_1f3804;
            case 0x1F3808u: goto label_1f3808;
            case 0x1F380Cu: goto label_1f380c;
            case 0x1F3810u: goto label_1f3810;
            case 0x1F3814u: goto label_1f3814;
            case 0x1F3818u: goto label_1f3818;
            case 0x1F381Cu: goto label_1f381c;
            case 0x1F3820u: goto label_1f3820;
            case 0x1F3824u: goto label_1f3824;
            case 0x1F3828u: goto label_1f3828;
            case 0x1F382Cu: goto label_1f382c;
            case 0x1F3830u: goto label_1f3830;
            case 0x1F3834u: goto label_1f3834;
            case 0x1F3838u: goto label_1f3838;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f3834:
    ctx->pc = 0x1F383Cu;
}

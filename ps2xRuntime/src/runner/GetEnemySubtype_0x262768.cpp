#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetEnemySubtype
// Address: 0x262768 - 0x2627d4
void GetEnemySubtype_0x262768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262768u;

label_262768:
    // 0x262768: 0x2c82002d
    ctx->pc = 0x262768u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 45));
label_26276c:
    // 0x26276c: 0x10400017
label_262770:
    if (ctx->pc == 0x262770u) {
        ctx->pc = 0x262770u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262774u;
        goto label_262774;
    }
    ctx->pc = 0x26276Cu;
    {
        const bool branch_taken_0x26276c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262770u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26276c) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x262774u;
label_262774:
    // 0x262774: 0x3c02003b
    ctx->pc = 0x262774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_262778:
    // 0x262778: 0x24429870
    ctx->pc = 0x262778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940784));
label_26277c:
    // 0x26277c: 0x41880
    ctx->pc = 0x26277cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_262780:
    // 0x262780: 0x621821
    ctx->pc = 0x262780u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_262784:
    // 0x262784: 0x8c620000
    ctx->pc = 0x262784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_262788:
    // 0x262788: 0x400008
label_26278c:
    if (ctx->pc == 0x26278Cu) {
        ctx->pc = 0x262790u;
        goto label_262790;
    }
    ctx->pc = 0x262788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262768u: goto label_262768;
            case 0x26276Cu: goto label_26276c;
            case 0x262770u: goto label_262770;
            case 0x262774u: goto label_262774;
            case 0x262778u: goto label_262778;
            case 0x26277Cu: goto label_26277c;
            case 0x262780u: goto label_262780;
            case 0x262784u: goto label_262784;
            case 0x262788u: goto label_262788;
            case 0x26278Cu: goto label_26278c;
            case 0x262790u: goto label_262790;
            case 0x262794u: goto label_262794;
            case 0x262798u: goto label_262798;
            case 0x26279Cu: goto label_26279c;
            case 0x2627A0u: goto label_2627a0;
            case 0x2627A4u: goto label_2627a4;
            case 0x2627A8u: goto label_2627a8;
            case 0x2627ACu: goto label_2627ac;
            case 0x2627B0u: goto label_2627b0;
            case 0x2627B4u: goto label_2627b4;
            case 0x2627B8u: goto label_2627b8;
            case 0x2627BCu: goto label_2627bc;
            case 0x2627C0u: goto label_2627c0;
            case 0x2627C4u: goto label_2627c4;
            case 0x2627C8u: goto label_2627c8;
            case 0x2627CCu: goto label_2627cc;
            case 0x2627D0u: goto label_2627d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x1000000e
label_262794:
    if (ctx->pc == 0x262794u) {
        ctx->pc = 0x262794u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x262798u;
        goto label_262798;
    }
    ctx->pc = 0x262790u;
    {
        const bool branch_taken_0x262790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262794u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x262790) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x262798u;
label_262798:
    // 0x262798: 0x1000000c
label_26279c:
    if (ctx->pc == 0x26279Cu) {
        ctx->pc = 0x26279Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2627A0u;
        goto label_2627a0;
    }
    ctx->pc = 0x262798u;
    {
        const bool branch_taken_0x262798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26279Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x262798) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627A0u;
label_2627a0:
    // 0x2627a0: 0x1000000a
label_2627a4:
    if (ctx->pc == 0x2627A4u) {
        ctx->pc = 0x2627A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2627A8u;
        goto label_2627a8;
    }
    ctx->pc = 0x2627A0u;
    {
        const bool branch_taken_0x2627a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2627A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2627a0) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627A8u;
label_2627a8:
    // 0x2627a8: 0x10000008
label_2627ac:
    if (ctx->pc == 0x2627ACu) {
        ctx->pc = 0x2627ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2627B0u;
        goto label_2627b0;
    }
    ctx->pc = 0x2627A8u;
    {
        const bool branch_taken_0x2627a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2627ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2627a8) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627B0u;
label_2627b0:
    // 0x2627b0: 0x10000006
label_2627b4:
    if (ctx->pc == 0x2627B4u) {
        ctx->pc = 0x2627B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2627B8u;
        goto label_2627b8;
    }
    ctx->pc = 0x2627B0u;
    {
        const bool branch_taken_0x2627b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2627B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2627b0) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627B8u;
label_2627b8:
    // 0x2627b8: 0x10000004
label_2627bc:
    if (ctx->pc == 0x2627BCu) {
        ctx->pc = 0x2627BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2627C0u;
        goto label_2627c0;
    }
    ctx->pc = 0x2627B8u;
    {
        const bool branch_taken_0x2627b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2627BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2627b8) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627C0u;
label_2627c0:
    // 0x2627c0: 0x10000002
label_2627c4:
    if (ctx->pc == 0x2627C4u) {
        ctx->pc = 0x2627C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2627C8u;
        goto label_2627c8;
    }
    ctx->pc = 0x2627C0u;
    {
        const bool branch_taken_0x2627c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2627C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2627c0) {
            ctx->pc = 0x2627CCu;
            goto label_2627cc;
        }
    }
    ctx->pc = 0x2627C8u;
label_2627c8:
    // 0x2627c8: 0x24050009
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_2627cc:
    // 0x2627cc: 0x3e00008
label_2627d0:
    if (ctx->pc == 0x2627D0u) {
        ctx->pc = 0x2627D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2627D4u;
        goto label_fallthrough_0x2627cc;
    }
    ctx->pc = 0x2627CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2627D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262768u: goto label_262768;
            case 0x26276Cu: goto label_26276c;
            case 0x262770u: goto label_262770;
            case 0x262774u: goto label_262774;
            case 0x262778u: goto label_262778;
            case 0x26277Cu: goto label_26277c;
            case 0x262780u: goto label_262780;
            case 0x262784u: goto label_262784;
            case 0x262788u: goto label_262788;
            case 0x26278Cu: goto label_26278c;
            case 0x262790u: goto label_262790;
            case 0x262794u: goto label_262794;
            case 0x262798u: goto label_262798;
            case 0x26279Cu: goto label_26279c;
            case 0x2627A0u: goto label_2627a0;
            case 0x2627A4u: goto label_2627a4;
            case 0x2627A8u: goto label_2627a8;
            case 0x2627ACu: goto label_2627ac;
            case 0x2627B0u: goto label_2627b0;
            case 0x2627B4u: goto label_2627b4;
            case 0x2627B8u: goto label_2627b8;
            case 0x2627BCu: goto label_2627bc;
            case 0x2627C0u: goto label_2627c0;
            case 0x2627C4u: goto label_2627c4;
            case 0x2627C8u: goto label_2627c8;
            case 0x2627CCu: goto label_2627cc;
            case 0x2627D0u: goto label_2627d0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2627cc:
    ctx->pc = 0x2627D4u;
}

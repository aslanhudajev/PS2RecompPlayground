#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__16ScrBlurCtrlClassFPUi
// Address: 0x216830 - 0x2168f4
void entryEvent__16ScrBlurCtrlClassFPUi_0x216830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216830u;

label_216830:
    // 0x216830: 0x27bdfff0
    ctx->pc = 0x216830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_216834:
    // 0x216834: 0x7fbf0000
    ctx->pc = 0x216834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_216838:
    // 0x216838: 0x8ca20004
    ctx->pc = 0x216838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21683c:
    // 0x21683c: 0x2c410009
    ctx->pc = 0x21683cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 9));
label_216840:
    // 0x216840: 0x10200007
label_216844:
    if (ctx->pc == 0x216844u) {
        ctx->pc = 0x216844u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x216848u;
        goto label_216848;
    }
    ctx->pc = 0x216840u;
    {
        const bool branch_taken_0x216840 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x216844u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x216840) {
            ctx->pc = 0x216860u;
            goto label_216860;
        }
    }
    ctx->pc = 0x216848u;
label_216848:
    // 0x216848: 0x21080
    ctx->pc = 0x216848u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_21684c:
    // 0x21684c: 0x246306d0
    ctx->pc = 0x21684cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1744));
label_216850:
    // 0x216850: 0x431021
    ctx->pc = 0x216850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216854:
    // 0x216854: 0x8c420000
    ctx->pc = 0x216854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216858:
    // 0x216858: 0x400008
label_21685c:
    if (ctx->pc == 0x21685Cu) {
        ctx->pc = 0x216860u;
        goto label_216860;
    }
    ctx->pc = 0x216858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216830u: goto label_216830;
            case 0x216834u: goto label_216834;
            case 0x216838u: goto label_216838;
            case 0x21683Cu: goto label_21683c;
            case 0x216840u: goto label_216840;
            case 0x216844u: goto label_216844;
            case 0x216848u: goto label_216848;
            case 0x21684Cu: goto label_21684c;
            case 0x216850u: goto label_216850;
            case 0x216854u: goto label_216854;
            case 0x216858u: goto label_216858;
            case 0x21685Cu: goto label_21685c;
            case 0x216860u: goto label_216860;
            case 0x216864u: goto label_216864;
            case 0x216868u: goto label_216868;
            case 0x21686Cu: goto label_21686c;
            case 0x216870u: goto label_216870;
            case 0x216874u: goto label_216874;
            case 0x216878u: goto label_216878;
            case 0x21687Cu: goto label_21687c;
            case 0x216880u: goto label_216880;
            case 0x216884u: goto label_216884;
            case 0x216888u: goto label_216888;
            case 0x21688Cu: goto label_21688c;
            case 0x216890u: goto label_216890;
            case 0x216894u: goto label_216894;
            case 0x216898u: goto label_216898;
            case 0x21689Cu: goto label_21689c;
            case 0x2168A0u: goto label_2168a0;
            case 0x2168A4u: goto label_2168a4;
            case 0x2168A8u: goto label_2168a8;
            case 0x2168ACu: goto label_2168ac;
            case 0x2168B0u: goto label_2168b0;
            case 0x2168B4u: goto label_2168b4;
            case 0x2168B8u: goto label_2168b8;
            case 0x2168BCu: goto label_2168bc;
            case 0x2168C0u: goto label_2168c0;
            case 0x2168C4u: goto label_2168c4;
            case 0x2168C8u: goto label_2168c8;
            case 0x2168CCu: goto label_2168cc;
            case 0x2168D0u: goto label_2168d0;
            case 0x2168D4u: goto label_2168d4;
            case 0x2168D8u: goto label_2168d8;
            case 0x2168DCu: goto label_2168dc;
            case 0x2168E0u: goto label_2168e0;
            case 0x2168E4u: goto label_2168e4;
            case 0x2168E8u: goto label_2168e8;
            case 0x2168ECu: goto label_2168ec;
            case 0x2168F0u: goto label_2168f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216860u;
label_216860:
    // 0x216860: 0xc08596c
label_216864:
    if (ctx->pc == 0x216864u) {
        ctx->pc = 0x216868u;
        goto label_216868;
    }
    ctx->pc = 0x216860u;
    SET_GPR_U32(ctx, 31, 0x216868u);
    ctx->pc = 0x2165B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eENB__16ScrBlurCtrlClassFPUi_0x2165b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216868u; }
        else if (ctx->pc != 0x216868u) { ctx->pc = 0x216868u; }
    }
    if (ctx->pc != 0x216868u) { return; }
    ctx->pc = 0x216868u;
label_216868:
    // 0x216868: 0x10000020
label_21686c:
    if (ctx->pc == 0x21686Cu) {
        ctx->pc = 0x21686Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x216870u;
        goto label_216870;
    }
    ctx->pc = 0x216868u;
    {
        const bool branch_taken_0x216868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21686Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x216868) {
            ctx->pc = 0x2168ECu;
            goto label_2168ec;
        }
    }
    ctx->pc = 0x216870u;
label_216870:
    // 0x216870: 0xc085990
label_216874:
    if (ctx->pc == 0x216874u) {
        ctx->pc = 0x216878u;
        goto label_216878;
    }
    ctx->pc = 0x216870u;
    SET_GPR_U32(ctx, 31, 0x216878u);
    ctx->pc = 0x216640u;
    {
        const uint32_t __entryPc = ctx->pc;
        eMODE__16ScrBlurCtrlClassFPUi_0x216640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216878u; }
        else if (ctx->pc != 0x216878u) { ctx->pc = 0x216878u; }
    }
    if (ctx->pc != 0x216878u) { return; }
    ctx->pc = 0x216878u;
label_216878:
    // 0x216878: 0x1000001b
label_21687c:
    if (ctx->pc == 0x21687Cu) {
        ctx->pc = 0x216880u;
        goto label_216880;
    }
    ctx->pc = 0x216878u;
    {
        const bool branch_taken_0x216878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216878) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x216880u;
label_216880:
    // 0x216880: 0xc0859a0
label_216884:
    if (ctx->pc == 0x216884u) {
        ctx->pc = 0x216888u;
        goto label_216888;
    }
    ctx->pc = 0x216880u;
    SET_GPR_U32(ctx, 31, 0x216888u);
    ctx->pc = 0x216680u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETSTR__16ScrBlurCtrlClassFPUi_0x216680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216888u; }
        else if (ctx->pc != 0x216888u) { ctx->pc = 0x216888u; }
    }
    if (ctx->pc != 0x216888u) { return; }
    ctx->pc = 0x216888u;
label_216888:
    // 0x216888: 0x10000017
label_21688c:
    if (ctx->pc == 0x21688Cu) {
        ctx->pc = 0x216890u;
        goto label_216890;
    }
    ctx->pc = 0x216888u;
    {
        const bool branch_taken_0x216888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216888) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x216890u;
label_216890:
    // 0x216890: 0xc0859b0
label_216894:
    if (ctx->pc == 0x216894u) {
        ctx->pc = 0x216898u;
        goto label_216898;
    }
    ctx->pc = 0x216890u;
    SET_GPR_U32(ctx, 31, 0x216898u);
    ctx->pc = 0x2166C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGSTR__16ScrBlurCtrlClassFPUi_0x2166c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216898u; }
        else if (ctx->pc != 0x216898u) { ctx->pc = 0x216898u; }
    }
    if (ctx->pc != 0x216898u) { return; }
    ctx->pc = 0x216898u;
label_216898:
    // 0x216898: 0x10000013
label_21689c:
    if (ctx->pc == 0x21689Cu) {
        ctx->pc = 0x2168A0u;
        goto label_2168a0;
    }
    ctx->pc = 0x216898u;
    {
        const bool branch_taken_0x216898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216898) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x2168A0u;
label_2168a0:
    // 0x2168a0: 0xc0859c0
label_2168a4:
    if (ctx->pc == 0x2168A4u) {
        ctx->pc = 0x2168A8u;
        goto label_2168a8;
    }
    ctx->pc = 0x2168A0u;
    SET_GPR_U32(ctx, 31, 0x2168A8u);
    ctx->pc = 0x216700u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETCEN__16ScrBlurCtrlClassFPUi_0x216700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168A8u; }
        else if (ctx->pc != 0x2168A8u) { ctx->pc = 0x2168A8u; }
    }
    if (ctx->pc != 0x2168A8u) { return; }
    ctx->pc = 0x2168A8u;
label_2168a8:
    // 0x2168a8: 0x1000000f
label_2168ac:
    if (ctx->pc == 0x2168ACu) {
        ctx->pc = 0x2168B0u;
        goto label_2168b0;
    }
    ctx->pc = 0x2168A8u;
    {
        const bool branch_taken_0x2168a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2168a8) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x2168B0u;
label_2168b0:
    // 0x2168b0: 0xc0859d0
label_2168b4:
    if (ctx->pc == 0x2168B4u) {
        ctx->pc = 0x2168B8u;
        goto label_2168b8;
    }
    ctx->pc = 0x2168B0u;
    SET_GPR_U32(ctx, 31, 0x2168B8u);
    ctx->pc = 0x216740u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETMAG__16ScrBlurCtrlClassFPUi_0x216740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168B8u; }
        else if (ctx->pc != 0x2168B8u) { ctx->pc = 0x2168B8u; }
    }
    if (ctx->pc != 0x2168B8u) { return; }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0x1000000b
label_2168bc:
    if (ctx->pc == 0x2168BCu) {
        ctx->pc = 0x2168C0u;
        goto label_2168c0;
    }
    ctx->pc = 0x2168B8u;
    {
        const bool branch_taken_0x2168b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2168b8) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x2168C0u;
label_2168c0:
    // 0x2168c0: 0xc0859dc
label_2168c4:
    if (ctx->pc == 0x2168C4u) {
        ctx->pc = 0x2168C8u;
        goto label_2168c8;
    }
    ctx->pc = 0x2168C0u;
    SET_GPR_U32(ctx, 31, 0x2168C8u);
    ctx->pc = 0x216770u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETROT__16ScrBlurCtrlClassFPUi_0x216770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168C8u; }
        else if (ctx->pc != 0x2168C8u) { ctx->pc = 0x2168C8u; }
    }
    if (ctx->pc != 0x2168C8u) { return; }
    ctx->pc = 0x2168C8u;
label_2168c8:
    // 0x2168c8: 0x10000007
label_2168cc:
    if (ctx->pc == 0x2168CCu) {
        ctx->pc = 0x2168D0u;
        goto label_2168d0;
    }
    ctx->pc = 0x2168C8u;
    {
        const bool branch_taken_0x2168c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2168c8) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x2168D0u;
label_2168d0:
    // 0x2168d0: 0xc0859e8
label_2168d4:
    if (ctx->pc == 0x2168D4u) {
        ctx->pc = 0x2168D8u;
        goto label_2168d8;
    }
    ctx->pc = 0x2168D0u;
    SET_GPR_U32(ctx, 31, 0x2168D8u);
    ctx->pc = 0x2167A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eALLOC__16ScrBlurCtrlClassFPUi_0x2167a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168D8u; }
        else if (ctx->pc != 0x2168D8u) { ctx->pc = 0x2168D8u; }
    }
    if (ctx->pc != 0x2168D8u) { return; }
    ctx->pc = 0x2168D8u;
label_2168d8:
    // 0x2168d8: 0x10000003
label_2168dc:
    if (ctx->pc == 0x2168DCu) {
        ctx->pc = 0x2168E0u;
        goto label_2168e0;
    }
    ctx->pc = 0x2168D8u;
    {
        const bool branch_taken_0x2168d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2168d8) {
            ctx->pc = 0x2168E8u;
            goto label_2168e8;
        }
    }
    ctx->pc = 0x2168E0u;
label_2168e0:
    // 0x2168e0: 0xc085a08
label_2168e4:
    if (ctx->pc == 0x2168E4u) {
        ctx->pc = 0x2168E8u;
        goto label_2168e8;
    }
    ctx->pc = 0x2168E0u;
    SET_GPR_U32(ctx, 31, 0x2168E8u);
    ctx->pc = 0x216820u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSTOP__16ScrBlurCtrlClassFPUi_0x216820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168E8u; }
        else if (ctx->pc != 0x2168E8u) { ctx->pc = 0x2168E8u; }
    }
    if (ctx->pc != 0x2168E8u) { return; }
    ctx->pc = 0x2168E8u;
label_2168e8:
    // 0x2168e8: 0x7bbf0000
    ctx->pc = 0x2168e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2168ec:
    // 0x2168ec: 0x3e00008
label_2168f0:
    if (ctx->pc == 0x2168F0u) {
        ctx->pc = 0x2168F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2168F4u;
        goto label_fallthrough_0x2168ec;
    }
    ctx->pc = 0x2168ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2168F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216830u: goto label_216830;
            case 0x216834u: goto label_216834;
            case 0x216838u: goto label_216838;
            case 0x21683Cu: goto label_21683c;
            case 0x216840u: goto label_216840;
            case 0x216844u: goto label_216844;
            case 0x216848u: goto label_216848;
            case 0x21684Cu: goto label_21684c;
            case 0x216850u: goto label_216850;
            case 0x216854u: goto label_216854;
            case 0x216858u: goto label_216858;
            case 0x21685Cu: goto label_21685c;
            case 0x216860u: goto label_216860;
            case 0x216864u: goto label_216864;
            case 0x216868u: goto label_216868;
            case 0x21686Cu: goto label_21686c;
            case 0x216870u: goto label_216870;
            case 0x216874u: goto label_216874;
            case 0x216878u: goto label_216878;
            case 0x21687Cu: goto label_21687c;
            case 0x216880u: goto label_216880;
            case 0x216884u: goto label_216884;
            case 0x216888u: goto label_216888;
            case 0x21688Cu: goto label_21688c;
            case 0x216890u: goto label_216890;
            case 0x216894u: goto label_216894;
            case 0x216898u: goto label_216898;
            case 0x21689Cu: goto label_21689c;
            case 0x2168A0u: goto label_2168a0;
            case 0x2168A4u: goto label_2168a4;
            case 0x2168A8u: goto label_2168a8;
            case 0x2168ACu: goto label_2168ac;
            case 0x2168B0u: goto label_2168b0;
            case 0x2168B4u: goto label_2168b4;
            case 0x2168B8u: goto label_2168b8;
            case 0x2168BCu: goto label_2168bc;
            case 0x2168C0u: goto label_2168c0;
            case 0x2168C4u: goto label_2168c4;
            case 0x2168C8u: goto label_2168c8;
            case 0x2168CCu: goto label_2168cc;
            case 0x2168D0u: goto label_2168d0;
            case 0x2168D4u: goto label_2168d4;
            case 0x2168D8u: goto label_2168d8;
            case 0x2168DCu: goto label_2168dc;
            case 0x2168E0u: goto label_2168e0;
            case 0x2168E4u: goto label_2168e4;
            case 0x2168E8u: goto label_2168e8;
            case 0x2168ECu: goto label_2168ec;
            case 0x2168F0u: goto label_2168f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2168ec:
    ctx->pc = 0x2168F4u;
}

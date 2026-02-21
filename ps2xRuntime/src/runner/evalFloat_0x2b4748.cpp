#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalFloat
// Address: 0x2b4748 - 0x2b4890
void evalFloat_0x2b4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4748u;

label_2b4748:
    // 0x2b4748: 0x27bdffe0
    ctx->pc = 0x2b4748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b474c:
    // 0x2b474c: 0xffbf0010
    ctx->pc = 0x2b474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b4750:
    // 0x2b4750: 0xffb00000
    ctx->pc = 0x2b4750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b4754:
    // 0x2b4754: 0x80802d
    ctx->pc = 0x2b4754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4758:
    // 0x2b4758: 0x8e030000
    ctx->pc = 0x2b4758u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b475c:
    // 0x2b475c: 0x2c620021
    ctx->pc = 0x2b475cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 33));
label_2b4760:
    // 0x2b4760: 0x1040002d
label_2b4764:
    if (ctx->pc == 0x2B4764u) {
        ctx->pc = 0x2B4764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4768u;
        goto label_2b4768;
    }
    ctx->pc = 0x2B4760u;
    {
        const bool branch_taken_0x2b4760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4760) {
            ctx->pc = 0x2B4818u;
            goto label_2b4818;
        }
    }
    ctx->pc = 0x2B4768u;
label_2b4768:
    // 0x2b4768: 0x24424750
    ctx->pc = 0x2b4768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18256));
label_2b476c:
    // 0x2b476c: 0x31880
    ctx->pc = 0x2b476cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b4770:
    // 0x2b4770: 0x621821
    ctx->pc = 0x2b4770u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4774:
    // 0x2b4774: 0x8c620000
    ctx->pc = 0x2b4774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4778:
    // 0x2b4778: 0x400008
label_2b477c:
    if (ctx->pc == 0x2B477Cu) {
        ctx->pc = 0x2B4780u;
        goto label_2b4780;
    }
    ctx->pc = 0x2B4778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4748u: goto label_2b4748;
            case 0x2B474Cu: goto label_2b474c;
            case 0x2B4750u: goto label_2b4750;
            case 0x2B4754u: goto label_2b4754;
            case 0x2B4758u: goto label_2b4758;
            case 0x2B475Cu: goto label_2b475c;
            case 0x2B4760u: goto label_2b4760;
            case 0x2B4764u: goto label_2b4764;
            case 0x2B4768u: goto label_2b4768;
            case 0x2B476Cu: goto label_2b476c;
            case 0x2B4770u: goto label_2b4770;
            case 0x2B4774u: goto label_2b4774;
            case 0x2B4778u: goto label_2b4778;
            case 0x2B477Cu: goto label_2b477c;
            case 0x2B4780u: goto label_2b4780;
            case 0x2B4784u: goto label_2b4784;
            case 0x2B4788u: goto label_2b4788;
            case 0x2B478Cu: goto label_2b478c;
            case 0x2B4790u: goto label_2b4790;
            case 0x2B4794u: goto label_2b4794;
            case 0x2B4798u: goto label_2b4798;
            case 0x2B479Cu: goto label_2b479c;
            case 0x2B47A0u: goto label_2b47a0;
            case 0x2B47A4u: goto label_2b47a4;
            case 0x2B47A8u: goto label_2b47a8;
            case 0x2B47ACu: goto label_2b47ac;
            case 0x2B47B0u: goto label_2b47b0;
            case 0x2B47B4u: goto label_2b47b4;
            case 0x2B47B8u: goto label_2b47b8;
            case 0x2B47BCu: goto label_2b47bc;
            case 0x2B47C0u: goto label_2b47c0;
            case 0x2B47C4u: goto label_2b47c4;
            case 0x2B47C8u: goto label_2b47c8;
            case 0x2B47CCu: goto label_2b47cc;
            case 0x2B47D0u: goto label_2b47d0;
            case 0x2B47D4u: goto label_2b47d4;
            case 0x2B47D8u: goto label_2b47d8;
            case 0x2B47DCu: goto label_2b47dc;
            case 0x2B47E0u: goto label_2b47e0;
            case 0x2B47E4u: goto label_2b47e4;
            case 0x2B47E8u: goto label_2b47e8;
            case 0x2B47ECu: goto label_2b47ec;
            case 0x2B47F0u: goto label_2b47f0;
            case 0x2B47F4u: goto label_2b47f4;
            case 0x2B47F8u: goto label_2b47f8;
            case 0x2B47FCu: goto label_2b47fc;
            case 0x2B4800u: goto label_2b4800;
            case 0x2B4804u: goto label_2b4804;
            case 0x2B4808u: goto label_2b4808;
            case 0x2B480Cu: goto label_2b480c;
            case 0x2B4810u: goto label_2b4810;
            case 0x2B4814u: goto label_2b4814;
            case 0x2B4818u: goto label_2b4818;
            case 0x2B481Cu: goto label_2b481c;
            case 0x2B4820u: goto label_2b4820;
            case 0x2B4824u: goto label_2b4824;
            case 0x2B4828u: goto label_2b4828;
            case 0x2B482Cu: goto label_2b482c;
            case 0x2B4830u: goto label_2b4830;
            case 0x2B4834u: goto label_2b4834;
            case 0x2B4838u: goto label_2b4838;
            case 0x2B483Cu: goto label_2b483c;
            case 0x2B4840u: goto label_2b4840;
            case 0x2B4844u: goto label_2b4844;
            case 0x2B4848u: goto label_2b4848;
            case 0x2B484Cu: goto label_2b484c;
            case 0x2B4850u: goto label_2b4850;
            case 0x2B4854u: goto label_2b4854;
            case 0x2B4858u: goto label_2b4858;
            case 0x2B485Cu: goto label_2b485c;
            case 0x2B4860u: goto label_2b4860;
            case 0x2B4864u: goto label_2b4864;
            case 0x2B4868u: goto label_2b4868;
            case 0x2B486Cu: goto label_2b486c;
            case 0x2B4870u: goto label_2b4870;
            case 0x2B4874u: goto label_2b4874;
            case 0x2B4878u: goto label_2b4878;
            case 0x2B487Cu: goto label_2b487c;
            case 0x2B4880u: goto label_2b4880;
            case 0x2B4884u: goto label_2b4884;
            case 0x2B4888u: goto label_2b4888;
            case 0x2B488Cu: goto label_2b488c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4780u;
label_2b4780:
    // 0x2b4780: 0x1ca00026
label_2b4784:
    if (ctx->pc == 0x2B4784u) {
        ctx->pc = 0x2B4784u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4788u;
        goto label_2b4788;
    }
    ctx->pc = 0x2B4780u;
    {
        const bool branch_taken_0x2b4780 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2B4784u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4780) {
            ctx->pc = 0x2B481Cu;
            goto label_2b481c;
        }
    }
    ctx->pc = 0x2B4788u;
label_2b4788:
    // 0x2b4788: 0x1000003d
label_2b478c:
    if (ctx->pc == 0x2B478Cu) {
        ctx->pc = 0x2B478Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2B4790u;
        goto label_2b4790;
    }
    ctx->pc = 0x2B4788u;
    {
        const bool branch_taken_0x2b4788 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B478Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2b4788) {
            ctx->pc = 0x2B4880u;
            goto label_2b4880;
        }
    }
    ctx->pc = 0x2B4790u;
label_2b4790:
    // 0x2b4790: 0x1ca00022
label_2b4794:
    if (ctx->pc == 0x2B4794u) {
        ctx->pc = 0x2B4794u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4798u;
        goto label_2b4798;
    }
    ctx->pc = 0x2B4790u;
    {
        const bool branch_taken_0x2b4790 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2B4794u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4790) {
            ctx->pc = 0x2B481Cu;
            goto label_2b481c;
        }
    }
    ctx->pc = 0x2B4798u;
label_2b4798:
    // 0x2b4798: 0x8e020010
    ctx->pc = 0x2b4798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b479c:
    // 0x2b479c: 0x4400005
label_2b47a0:
    if (ctx->pc == 0x2B47A0u) {
        ctx->pc = 0x2B47A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2B47A4u;
        goto label_2b47a4;
    }
    ctx->pc = 0x2B479Cu;
    {
        const bool branch_taken_0x2b479c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B47A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b479c) {
            ctx->pc = 0x2B47B4u;
            goto label_2b47b4;
        }
    }
    ctx->pc = 0x2B47A4u;
label_2b47a4:
    // 0x2b47a4: 0x44820000
    ctx->pc = 0x2b47a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2b47a8:
    // 0x2b47a8: 0x46800020
    ctx->pc = 0x2b47a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2b47ac:
    // 0x2b47ac: 0x10000036
label_2b47b0:
    if (ctx->pc == 0x2B47B0u) {
        ctx->pc = 0x2B47B0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2B47B4u;
        goto label_2b47b4;
    }
    ctx->pc = 0x2B47ACu;
    {
        const bool branch_taken_0x2b47ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B47B0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2b47ac) {
            ctx->pc = 0x2B4888u;
            goto label_2b4888;
        }
    }
    ctx->pc = 0x2B47B4u;
label_2b47b4:
    // 0x2b47b4: 0x30430001
    ctx->pc = 0x2b47b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_2b47b8:
    // 0x2b47b8: 0x21042
    ctx->pc = 0x2b47b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_2b47bc:
    // 0x2b47bc: 0x621825
    ctx->pc = 0x2b47bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b47c0:
    // 0x2b47c0: 0x44830000
    ctx->pc = 0x2b47c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_2b47c4:
    // 0x2b47c4: 0x46800020
    ctx->pc = 0x2b47c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2b47c8:
    // 0x2b47c8: 0x1000002d
label_2b47cc:
    if (ctx->pc == 0x2B47CCu) {
        ctx->pc = 0x2B47CCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x2B47D0u;
        goto label_2b47d0;
    }
    ctx->pc = 0x2B47C8u;
    {
        const bool branch_taken_0x2b47c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B47CCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        if (branch_taken_0x2b47c8) {
            ctx->pc = 0x2B4880u;
            goto label_2b4880;
        }
    }
    ctx->pc = 0x2B47D0u;
label_2b47d0:
    // 0x2b47d0: 0x28a20021
    ctx->pc = 0x2b47d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 33));
label_2b47d4:
    // 0x2b47d4: 0x24a3ffe0
    ctx->pc = 0x2b47d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967264));
label_2b47d8:
    // 0x2b47d8: 0x62280a
    ctx->pc = 0x2b47d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2b47dc:
    // 0x2b47dc: 0x2ca20004
    ctx->pc = 0x2b47dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 4));
label_2b47e0:
    // 0x2b47e0: 0x1040000d
label_2b47e4:
    if (ctx->pc == 0x2B47E4u) {
        ctx->pc = 0x2B47E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2B47E8u;
        goto label_2b47e8;
    }
    ctx->pc = 0x2B47E0u;
    {
        const bool branch_taken_0x2b47e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B47E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x2b47e0) {
            ctx->pc = 0x2B4818u;
            goto label_2b4818;
        }
    }
    ctx->pc = 0x2B47E8u;
label_2b47e8:
    // 0x2b47e8: 0x10000009
label_2b47ec:
    if (ctx->pc == 0x2B47ECu) {
        ctx->pc = 0x2B47ECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x2B47F0u;
        goto label_2b47f0;
    }
    ctx->pc = 0x2B47E8u;
    {
        const bool branch_taken_0x2b47e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B47ECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2b47e8) {
            ctx->pc = 0x2B4810u;
            goto label_2b4810;
        }
    }
    ctx->pc = 0x2B47F0u;
label_2b47f0:
    // 0x2b47f0: 0x2ca20011
    ctx->pc = 0x2b47f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 17));
label_2b47f4:
    // 0x2b47f4: 0x10400008
label_2b47f8:
    if (ctx->pc == 0x2B47F8u) {
        ctx->pc = 0x2B47F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x2B47FCu;
        goto label_2b47fc;
    }
    ctx->pc = 0x2B47F4u;
    {
        const bool branch_taken_0x2b47f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B47F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x2b47f4) {
            ctx->pc = 0x2B4818u;
            goto label_2b4818;
        }
    }
    ctx->pc = 0x2B47FCu;
label_2b47fc:
    // 0x2b47fc: 0x21080
    ctx->pc = 0x2b47fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2b4800:
    // 0x2b4800: 0x51883
    ctx->pc = 0x2b4800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_2b4804:
    // 0x2b4804: 0x31900
    ctx->pc = 0x2b4804u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_2b4808:
    // 0x2b4808: 0x431021
    ctx->pc = 0x2b4808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b480c:
    // 0x2b480c: 0x2021021
    ctx->pc = 0x2b480cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b4810:
    // 0x2b4810: 0x1000001b
label_2b4814:
    if (ctx->pc == 0x2B4814u) {
        ctx->pc = 0x2B4814u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2B4818u;
        goto label_2b4818;
    }
    ctx->pc = 0x2B4810u;
    {
        const bool branch_taken_0x2b4810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4814u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2b4810) {
            ctx->pc = 0x2B4880u;
            goto label_2b4880;
        }
    }
    ctx->pc = 0x2B4818u;
label_2b4818:
    // 0x2b4818: 0x3c04003b
    ctx->pc = 0x2b4818u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b481c:
    // 0x2b481c: 0x24844650
    ctx->pc = 0x2b481cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b4820:
    // 0x2b4820: 0x24050020
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b4824:
    // 0x2b4824: 0x3c06003b
    ctx->pc = 0x2b4824u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b4828:
    // 0x2b4828: 0x24c60d80
    ctx->pc = 0x2b4828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b482c:
    // 0x2b482c: 0xc0ad0d6
label_2b4830:
    if (ctx->pc == 0x2B4830u) {
        ctx->pc = 0x2B4830u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B4834u;
        goto label_2b4834;
    }
    ctx->pc = 0x2B482Cu;
    SET_GPR_U32(ctx, 31, 0x2B4834u);
    ctx->pc = 0x2B4830u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4834u; }
    }
    if (ctx->pc != 0x2B4834u) { return; }
    ctx->pc = 0x2B4834u;
label_2b4834:
    // 0x2b4834: 0xc0ad082
label_2b4838:
    if (ctx->pc == 0x2B4838u) {
        ctx->pc = 0x2B4838u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B483Cu;
        goto label_2b483c;
    }
    ctx->pc = 0x2B4834u;
    SET_GPR_U32(ctx, 31, 0x2B483Cu);
    ctx->pc = 0x2B4838u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B483Cu; }
    }
    if (ctx->pc != 0x2B483Cu) { return; }
    ctx->pc = 0x2B483Cu;
label_2b483c:
    // 0x2b483c: 0x3c04003b
    ctx->pc = 0x2b483cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4840:
    // 0x2b4840: 0x24844728
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18216));
label_2b4844:
    // 0x2b4844: 0xc0b4a34
label_2b4848:
    if (ctx->pc == 0x2B4848u) {
        ctx->pc = 0x2B4848u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B484Cu;
        goto label_2b484c;
    }
    ctx->pc = 0x2B4844u;
    SET_GPR_U32(ctx, 31, 0x2B484Cu);
    ctx->pc = 0x2B4848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B484Cu; }
    }
    if (ctx->pc != 0x2B484Cu) { return; }
    ctx->pc = 0x2B484Cu;
label_2b484c:
    // 0x2b484c: 0x3c04003b
    ctx->pc = 0x2b484cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4850:
    // 0x2b4850: 0xc0b4a34
label_2b4854:
    if (ctx->pc == 0x2B4854u) {
        ctx->pc = 0x2B4854u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B4858u;
        goto label_2b4858;
    }
    ctx->pc = 0x2B4850u;
    SET_GPR_U32(ctx, 31, 0x2B4858u);
    ctx->pc = 0x2B4854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4858u; }
    }
    if (ctx->pc != 0x2B4858u) { return; }
    ctx->pc = 0x2B4858u;
label_2b4858:
    // 0x2b4858: 0x3c020037
    ctx->pc = 0x2b4858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b485c:
    // 0x2b485c: 0x8c4320ac
    ctx->pc = 0x2b485cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b4860:
    // 0x2b4860: 0x8c620048
    ctx->pc = 0x2b4860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b4864:
    // 0x2b4864: 0x34420001
    ctx->pc = 0x2b4864u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b4868:
    // 0x2b4868: 0xac620048
    ctx->pc = 0x2b4868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b486c:
    // 0x2b486c: 0x3c030037
    ctx->pc = 0x2b486cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2b4870:
    // 0x2b4870: 0x8c6220b0
    ctx->pc = 0x2b4870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8368)));
label_2b4874:
    // 0x2b4874: 0x34420004
    ctx->pc = 0x2b4874u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_2b4878:
    // 0x2b4878: 0xac6220b0
    ctx->pc = 0x2b4878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8368), GPR_U32(ctx, 2));
label_2b487c:
    // 0x2b487c: 0x44800000
    ctx->pc = 0x2b487cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2b4880:
    // 0x2b4880: 0xdfbf0010
    ctx->pc = 0x2b4880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4884:
    // 0x2b4884: 0xdfb00000
    ctx->pc = 0x2b4884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4888:
    // 0x2b4888: 0x3e00008
label_2b488c:
    if (ctx->pc == 0x2B488Cu) {
        ctx->pc = 0x2B488Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2B4890u;
        goto label_fallthrough_0x2b4888;
    }
    ctx->pc = 0x2B4888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B488Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4748u: goto label_2b4748;
            case 0x2B474Cu: goto label_2b474c;
            case 0x2B4750u: goto label_2b4750;
            case 0x2B4754u: goto label_2b4754;
            case 0x2B4758u: goto label_2b4758;
            case 0x2B475Cu: goto label_2b475c;
            case 0x2B4760u: goto label_2b4760;
            case 0x2B4764u: goto label_2b4764;
            case 0x2B4768u: goto label_2b4768;
            case 0x2B476Cu: goto label_2b476c;
            case 0x2B4770u: goto label_2b4770;
            case 0x2B4774u: goto label_2b4774;
            case 0x2B4778u: goto label_2b4778;
            case 0x2B477Cu: goto label_2b477c;
            case 0x2B4780u: goto label_2b4780;
            case 0x2B4784u: goto label_2b4784;
            case 0x2B4788u: goto label_2b4788;
            case 0x2B478Cu: goto label_2b478c;
            case 0x2B4790u: goto label_2b4790;
            case 0x2B4794u: goto label_2b4794;
            case 0x2B4798u: goto label_2b4798;
            case 0x2B479Cu: goto label_2b479c;
            case 0x2B47A0u: goto label_2b47a0;
            case 0x2B47A4u: goto label_2b47a4;
            case 0x2B47A8u: goto label_2b47a8;
            case 0x2B47ACu: goto label_2b47ac;
            case 0x2B47B0u: goto label_2b47b0;
            case 0x2B47B4u: goto label_2b47b4;
            case 0x2B47B8u: goto label_2b47b8;
            case 0x2B47BCu: goto label_2b47bc;
            case 0x2B47C0u: goto label_2b47c0;
            case 0x2B47C4u: goto label_2b47c4;
            case 0x2B47C8u: goto label_2b47c8;
            case 0x2B47CCu: goto label_2b47cc;
            case 0x2B47D0u: goto label_2b47d0;
            case 0x2B47D4u: goto label_2b47d4;
            case 0x2B47D8u: goto label_2b47d8;
            case 0x2B47DCu: goto label_2b47dc;
            case 0x2B47E0u: goto label_2b47e0;
            case 0x2B47E4u: goto label_2b47e4;
            case 0x2B47E8u: goto label_2b47e8;
            case 0x2B47ECu: goto label_2b47ec;
            case 0x2B47F0u: goto label_2b47f0;
            case 0x2B47F4u: goto label_2b47f4;
            case 0x2B47F8u: goto label_2b47f8;
            case 0x2B47FCu: goto label_2b47fc;
            case 0x2B4800u: goto label_2b4800;
            case 0x2B4804u: goto label_2b4804;
            case 0x2B4808u: goto label_2b4808;
            case 0x2B480Cu: goto label_2b480c;
            case 0x2B4810u: goto label_2b4810;
            case 0x2B4814u: goto label_2b4814;
            case 0x2B4818u: goto label_2b4818;
            case 0x2B481Cu: goto label_2b481c;
            case 0x2B4820u: goto label_2b4820;
            case 0x2B4824u: goto label_2b4824;
            case 0x2B4828u: goto label_2b4828;
            case 0x2B482Cu: goto label_2b482c;
            case 0x2B4830u: goto label_2b4830;
            case 0x2B4834u: goto label_2b4834;
            case 0x2B4838u: goto label_2b4838;
            case 0x2B483Cu: goto label_2b483c;
            case 0x2B4840u: goto label_2b4840;
            case 0x2B4844u: goto label_2b4844;
            case 0x2B4848u: goto label_2b4848;
            case 0x2B484Cu: goto label_2b484c;
            case 0x2B4850u: goto label_2b4850;
            case 0x2B4854u: goto label_2b4854;
            case 0x2B4858u: goto label_2b4858;
            case 0x2B485Cu: goto label_2b485c;
            case 0x2B4860u: goto label_2b4860;
            case 0x2B4864u: goto label_2b4864;
            case 0x2B4868u: goto label_2b4868;
            case 0x2B486Cu: goto label_2b486c;
            case 0x2B4870u: goto label_2b4870;
            case 0x2B4874u: goto label_2b4874;
            case 0x2B4878u: goto label_2b4878;
            case 0x2B487Cu: goto label_2b487c;
            case 0x2B4880u: goto label_2b4880;
            case 0x2B4884u: goto label_2b4884;
            case 0x2B4888u: goto label_2b4888;
            case 0x2B488Cu: goto label_2b488c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b4888:
    ctx->pc = 0x2B4890u;
}

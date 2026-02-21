#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxDeleteParentedSub
// Address: 0x27a7a0 - 0x27a888
void SfxDeleteParentedSub_0x27a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27a7a0u;

label_27a7a0:
    // 0x27a7a0: 0x27bdff90
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27a7a4: 0xffbf0060
    ctx->pc = 0x27a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27a7a8: 0xffb50050
    ctx->pc = 0x27a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27a7ac: 0xffb40040
    ctx->pc = 0x27a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27a7b0: 0xffb30030
    ctx->pc = 0x27a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27a7b4: 0xffb20020
    ctx->pc = 0x27a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a7b8: 0xffb10010
    ctx->pc = 0x27a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a7bc: 0xffb00000
    ctx->pc = 0x27a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a7c0: 0x80982d
    ctx->pc = 0x27a7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7c4: 0xa0802d
    ctx->pc = 0x27a7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7c8: 0xc0882d
    ctx->pc = 0x27a7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7cc: 0xe0a02d
    ctx->pc = 0x27a7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7d0: 0x240300f0
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27a7d4: 0x2631818
    ctx->pc = 0x27a7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a7d8: 0x3c020034
    ctx->pc = 0x27a7d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a7dc: 0x24420eb0
    ctx->pc = 0x27a7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27a7e0: 0x1200001f
    ctx->pc = 0x27A7E0u;
    {
        const bool branch_taken_0x27a7e0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A7E4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x27a7e0) {
            ctx->pc = 0x27A860u;
            goto label_27a860;
        }
    }
    ctx->pc = 0x27A7E8u;
    // 0x27a7e8: 0x24150002
    ctx->pc = 0x27a7e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a7ec: 0x8e420014
    ctx->pc = 0x27a7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_27a7f0:
    // 0x27a7f0: 0x8c420074
    ctx->pc = 0x27a7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x27a7f4: 0x10500007
    ctx->pc = 0x27A7F4u;
    {
        const bool branch_taken_0x27a7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x27A7F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a7f4) {
            ctx->pc = 0x27A814u;
            goto label_27a814;
        }
    }
    ctx->pc = 0x27A7FCu;
    // 0x27a7fc: 0x6200009
    ctx->pc = 0x27A7FCu;
    {
        const bool branch_taken_0x27a7fc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27a7fc) {
            ctx->pc = 0x27A824u;
            goto label_27a824;
        }
    }
    ctx->pc = 0x27A804u;
    // 0x27a804: 0x864200bc
    ctx->pc = 0x27a804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x27a808: 0x2442ffff
    ctx->pc = 0x27a808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a80c: 0x16220005
    ctx->pc = 0x27A80Cu;
    {
        const bool branch_taken_0x27a80c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x27a80c) {
            ctx->pc = 0x27A824u;
            goto label_27a824;
        }
    }
    ctx->pc = 0x27A814u;
label_27a814:
    // 0x27a814: 0xc09e964
    ctx->pc = 0x27A814u;
    SET_GPR_U32(ctx, 31, 0x27A81Cu);
    ctx->pc = 0x27A818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A81Cu; }
    }
    if (ctx->pc != 0x27A81Cu) { return; }
    ctx->pc = 0x27A81Cu;
    // 0x27a81c: 0x10000011
    ctx->pc = 0x27A81Cu;
    {
        const bool branch_taken_0x27a81c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A820u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27a81c) {
            ctx->pc = 0x27A864u;
            goto label_27a864;
        }
    }
    ctx->pc = 0x27A824u;
label_27a824:
    // 0x27a824: 0x12800009
    ctx->pc = 0x27A824u;
    {
        const bool branch_taken_0x27a824 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x27a824) {
            ctx->pc = 0x27A84Cu;
            goto label_27a84c;
        }
    }
    ctx->pc = 0x27A82Cu;
    // 0x27a82c: 0x8e050078
    ctx->pc = 0x27a82cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x27a830: 0x10a00006
    ctx->pc = 0x27A830u;
    {
        const bool branch_taken_0x27a830 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A834u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a830) {
            ctx->pc = 0x27A84Cu;
            goto label_27a84c;
        }
    }
    ctx->pc = 0x27A838u;
    // 0x27a838: 0x220302d
    ctx->pc = 0x27a838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a83c: 0xc09e9e8
    ctx->pc = 0x27A83Cu;
    SET_GPR_U32(ctx, 31, 0x27A844u);
    ctx->pc = 0x27A840u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x27A7A0u;
    goto label_27a7a0;
    ctx->pc = 0x27A844u;
label_27a844:
    // 0x27a844: 0x14400007
    ctx->pc = 0x27A844u;
    {
        const bool branch_taken_0x27a844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A848u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27a844) {
            ctx->pc = 0x27A864u;
            goto label_27a864;
        }
    }
    ctx->pc = 0x27A84Cu;
label_27a84c:
    // 0x27a84c: 0x16950005
    ctx->pc = 0x27A84Cu;
    {
        const bool branch_taken_0x27a84c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 21));
        ctx->pc = 0x27A850u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a84c) {
            ctx->pc = 0x27A864u;
            goto label_27a864;
        }
    }
    ctx->pc = 0x27A854u;
    // 0x27a854: 0x8e10007c
    ctx->pc = 0x27a854u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x27a858: 0x5600ffe5
    ctx->pc = 0x27A858u;
    {
        const bool branch_taken_0x27a858 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x27a858) {
            ctx->pc = 0x27A85Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->pc = 0x27A7F0u;
            goto label_27a7f0;
        }
    }
    ctx->pc = 0x27A860u;
label_27a860:
    // 0x27a860: 0x102d
    ctx->pc = 0x27a860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a864:
    // 0x27a864: 0xdfbf0060
    ctx->pc = 0x27a864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a868: 0xdfb50050
    ctx->pc = 0x27a868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a86c: 0xdfb40040
    ctx->pc = 0x27a86cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a870: 0xdfb30030
    ctx->pc = 0x27a870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a874: 0xdfb20020
    ctx->pc = 0x27a874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a878: 0xdfb10010
    ctx->pc = 0x27a878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a87c: 0xdfb00000
    ctx->pc = 0x27a87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a880: 0x3e00008
    ctx->pc = 0x27A880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A7A0u: goto label_27a7a0;
            case 0x27A7F0u: goto label_27a7f0;
            case 0x27A814u: goto label_27a814;
            case 0x27A824u: goto label_27a824;
            case 0x27A844u: goto label_27a844;
            case 0x27A84Cu: goto label_27a84c;
            case 0x27A860u: goto label_27a860;
            case 0x27A864u: goto label_27a864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A888u;
}

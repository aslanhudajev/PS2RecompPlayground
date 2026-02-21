#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetTextures
// Address: 0x2ae7e0 - 0x2ae8f0
void pbResetTextures_0x2ae7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae7e0u;

    // 0x2ae7e0: 0x27bdffc0
    ctx->pc = 0x2ae7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ae7e4: 0xffbf0030
    ctx->pc = 0x2ae7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ae7e8: 0xffb20020
    ctx->pc = 0x2ae7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae7ec: 0xffb10010
    ctx->pc = 0x2ae7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae7f0: 0xffb00000
    ctx->pc = 0x2ae7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae7f4: 0x3c020036
    ctx->pc = 0x2ae7f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae7f8: 0x8c51dee0
    ctx->pc = 0x2ae7f8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae7fc: 0x8e22002c
    ctx->pc = 0x2ae7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ae800: 0x8c420074
    ctx->pc = 0x2ae800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2ae804: 0x14400035
    ctx->pc = 0x2AE804u;
    {
        const bool branch_taken_0x2ae804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE808u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2ae804) {
            ctx->pc = 0x2AE8DCu;
            goto label_2ae8dc;
        }
    }
    ctx->pc = 0x2AE80Cu;
    // 0x2ae80c: 0xc0ab526
    ctx->pc = 0x2AE80Cu;
    SET_GPR_U32(ctx, 31, 0x2AE814u);
    ctx->pc = 0x2AE810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2AD498u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetupVramPageStart_0x2ad498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE814u; }
    }
    if (ctx->pc != 0x2AE814u) { return; }
    ctx->pc = 0x2AE814u;
    // 0x2ae814: 0x8e220038
    ctx->pc = 0x2ae814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2ae818: 0x40182d
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae81c: 0x8c420000
    ctx->pc = 0x2ae81cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae820: 0x18400017
    ctx->pc = 0x2AE820u;
    {
        const bool branch_taken_0x2ae820 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AE824u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ae820) {
            ctx->pc = 0x2AE880u;
            goto label_2ae880;
        }
    }
    ctx->pc = 0x2AE828u;
    // 0x2ae828: 0x3c12ffff
    ctx->pc = 0x2ae828u;
    SET_GPR_U32(ctx, 18, ((uint32_t)65535 << 16));
    // 0x2ae82c: 0x3652fff8
    ctx->pc = 0x2ae82cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65528));
    // 0x2ae830: 0x101100
    ctx->pc = 0x2ae830u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ae834: 0x0
    ctx->pc = 0x2ae834u;
    // NOP
label_2ae838:
    // 0x2ae838: 0x24420004
    ctx->pc = 0x2ae838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ae83c: 0x431821
    ctx->pc = 0x2ae83cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae840: 0x8c62000c
    ctx->pc = 0x2ae840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ae844: 0x54400009
    ctx->pc = 0x2AE844u;
    {
        const bool branch_taken_0x2ae844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ae844) {
            ctx->pc = 0x2AE848u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2AE86Cu;
            goto label_2ae86c;
        }
    }
    ctx->pc = 0x2AE84Cu;
    // 0x2ae84c: 0x8c620000
    ctx->pc = 0x2ae84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae850: 0x8c460048
    ctx->pc = 0x2ae850u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae854: 0x24c60007
    ctx->pc = 0x2ae854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7));
    // 0x2ae858: 0x8c440078
    ctx->pc = 0x2ae858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2ae85c: 0x282d
    ctx->pc = 0x2ae85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae860: 0xc0becc6
    ctx->pc = 0x2AE860u;
    SET_GPR_U32(ctx, 31, 0x2AE868u);
    ctx->pc = 0x2AE864u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE868u; }
    }
    if (ctx->pc != 0x2AE868u) { return; }
    ctx->pc = 0x2AE868u;
    // 0x2ae868: 0x26100001
    ctx->pc = 0x2ae868u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2ae86c:
    // 0x2ae86c: 0x8e230038
    ctx->pc = 0x2ae86cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2ae870: 0x8c620000
    ctx->pc = 0x2ae870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae874: 0x202102a
    ctx->pc = 0x2ae874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2ae878: 0x1440ffef
    ctx->pc = 0x2AE878u;
    {
        const bool branch_taken_0x2ae878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE87Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2ae878) {
            ctx->pc = 0x2AE838u;
            goto label_2ae838;
        }
    }
    ctx->pc = 0x2AE880u;
label_2ae880:
    // 0x2ae880: 0x3c020037
    ctx->pc = 0x2ae880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae884: 0x2403ffff
    ctx->pc = 0x2ae884u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae888: 0xac4385e0
    ctx->pc = 0x2ae888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936032), GPR_U32(ctx, 3));
    // 0x2ae88c: 0x3c020037
    ctx->pc = 0x2ae88cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae890: 0xac4385e4
    ctx->pc = 0x2ae890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936036), GPR_U32(ctx, 3));
    // 0x2ae894: 0x3c040037
    ctx->pc = 0x2ae894u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ae898: 0x3c02ffff
    ctx->pc = 0x2ae898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ae89c: 0x3442ffff
    ctx->pc = 0x2ae89cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ae8a0: 0xac8285f4
    ctx->pc = 0x2ae8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294936052), GPR_U32(ctx, 2));
    // 0x2ae8a4: 0x3c020037
    ctx->pc = 0x2ae8a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae8a8: 0xac4385f8
    ctx->pc = 0x2ae8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936056), GPR_U32(ctx, 3));
    // 0x2ae8ac: 0x3c020037
    ctx->pc = 0x2ae8acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae8b0: 0xac4385e8
    ctx->pc = 0x2ae8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936040), GPR_U32(ctx, 3));
    // 0x2ae8b4: 0x3c020037
    ctx->pc = 0x2ae8b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae8b8: 0xac4385ec
    ctx->pc = 0x2ae8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936044), GPR_U32(ctx, 3));
    // 0x2ae8bc: 0x3c040037
    ctx->pc = 0x2ae8bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ae8c0: 0x24848ab0
    ctx->pc = 0x2ae8c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937264));
    // 0x2ae8c4: 0xdfbf0030
    ctx->pc = 0x2ae8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae8c8: 0xdfb20020
    ctx->pc = 0x2ae8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae8cc: 0xdfb10010
    ctx->pc = 0x2ae8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae8d0: 0xdfb00000
    ctx->pc = 0x2ae8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae8d4: 0x80ab5ce
    ctx->pc = 0x2AE8D4u;
    ctx->pc = 0x2AE8D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2AD738u;
    pbTexBlitSetup_0x2ad738(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE8DCu;
label_2ae8dc:
    // 0x2ae8dc: 0xdfb20020
    ctx->pc = 0x2ae8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae8e0: 0xdfb10010
    ctx->pc = 0x2ae8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae8e4: 0xdfb00000
    ctx->pc = 0x2ae8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae8e8: 0x3e00008
    ctx->pc = 0x2AE8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE838u: goto label_2ae838;
            case 0x2AE86Cu: goto label_2ae86c;
            case 0x2AE880u: goto label_2ae880;
            case 0x2AE8DCu: goto label_2ae8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AE8F0u;
}

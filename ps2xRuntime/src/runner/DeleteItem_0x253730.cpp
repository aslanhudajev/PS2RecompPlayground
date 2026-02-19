#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DeleteItem
// Address: 0x253730 - 0x2537e4
void DeleteItem_0x253730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253730u;

label_253730:
    // 0x253730: 0x27bdffe0
    ctx->pc = 0x253730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253734: 0xffbf0010
    ctx->pc = 0x253734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253738: 0xffb00000
    ctx->pc = 0x253738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25373c: 0x10a00015
    ctx->pc = 0x25373Cu;
    {
        const bool branch_taken_0x25373c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x253740u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25373c) {
            ctx->pc = 0x253794u;
            goto label_253794;
        }
    }
    ctx->pc = 0x253744u;
    // 0x253744: 0x8e020000
    ctx->pc = 0x253744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253748: 0x8c430000
    ctx->pc = 0x253748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25374c: 0x24020001
    ctx->pc = 0x25374cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253750: 0x54620007
    ctx->pc = 0x253750u;
    {
        const bool branch_taken_0x253750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x253750) {
            ctx->pc = 0x253754u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x253770u;
            goto label_253770;
        }
    }
    ctx->pc = 0x253758u;
    // 0x253758: 0x8e0400fc
    ctx->pc = 0x253758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x25375c: 0x50800004
    ctx->pc = 0x25375Cu;
    {
        const bool branch_taken_0x25375c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x25375c) {
            ctx->pc = 0x253760u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x253770u;
            goto label_253770;
        }
    }
    ctx->pc = 0x253764u;
    // 0x253764: 0xc094dcc
    ctx->pc = 0x253764u;
    SET_GPR_U32(ctx, 31, 0x25376Cu);
    ctx->pc = 0x253768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    goto label_253730;
    ctx->pc = 0x25376Cu;
label_25376c:
    // 0x25376c: 0x8e020000
    ctx->pc = 0x25376cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253770:
    // 0x253770: 0x8c430000
    ctx->pc = 0x253770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253774: 0x24020002
    ctx->pc = 0x253774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x253778: 0x14620006
    ctx->pc = 0x253778u;
    {
        const bool branch_taken_0x253778 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x253778) {
            ctx->pc = 0x253794u;
            goto label_253794;
        }
    }
    ctx->pc = 0x253780u;
    // 0x253780: 0x8e0400fc
    ctx->pc = 0x253780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x253784: 0x10800003
    ctx->pc = 0x253784u;
    {
        const bool branch_taken_0x253784 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x253784) {
            ctx->pc = 0x253794u;
            goto label_253794;
        }
    }
    ctx->pc = 0x25378Cu;
    // 0x25378c: 0xc094dcc
    ctx->pc = 0x25378Cu;
    SET_GPR_U32(ctx, 31, 0x253794u);
    ctx->pc = 0x253790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    goto label_253730;
    ctx->pc = 0x253794u;
label_253794:
    // 0x253794: 0xc094db8
    ctx->pc = 0x253794u;
    SET_GPR_U32(ctx, 31, 0x25379Cu);
    ctx->pc = 0x253798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2536E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveItemGeo_0x2536e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25379Cu; }
    }
    if (ctx->pc != 0x25379Cu) { return; }
    ctx->pc = 0x25379Cu;
    // 0x25379c: 0x2402ffff
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2537a0: 0xa60200d8
    ctx->pc = 0x2537a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x2537a4: 0x3c020034
    ctx->pc = 0x2537a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2537a8: 0x8c42cd94
    ctx->pc = 0x2537a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x2537ac: 0x2021023
    ctx->pc = 0x2537acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2537b0: 0x3c03f0f0
    ctx->pc = 0x2537b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61680 << 16));
    // 0x2537b4: 0x3463f0f1
    ctx->pc = 0x2537b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61681));
    // 0x2537b8: 0x431018
    ctx->pc = 0x2537b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2537bc: 0x22103
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2537c0: 0x3c030034
    ctx->pc = 0x2537c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2537c4: 0x8c62cdd8
    ctx->pc = 0x2537c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954456)));
    // 0x2537c8: 0x82102a
    ctx->pc = 0x2537c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2537cc: 0x54400001
    ctx->pc = 0x2537CCu;
    {
        const bool branch_taken_0x2537cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2537cc) {
            ctx->pc = 0x2537D0u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294954456), GPR_U32(ctx, 4));
            ctx->pc = 0x2537D4u;
            goto label_2537d4;
        }
    }
    ctx->pc = 0x2537D4u;
label_2537d4:
    // 0x2537d4: 0xdfbf0010
    ctx->pc = 0x2537d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2537d8: 0xdfb00000
    ctx->pc = 0x2537d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537dc: 0x3e00008
    ctx->pc = 0x2537DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2537E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253730u: goto label_253730;
            case 0x25376Cu: goto label_25376c;
            case 0x253770u: goto label_253770;
            case 0x253794u: goto label_253794;
            case 0x2537D4u: goto label_2537d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2537E4u;
}

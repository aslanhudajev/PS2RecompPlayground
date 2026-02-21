#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PotionType
// Address: 0x258858 - 0x2588cc
void PotionType_0x258858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x258858u;

    // 0x258858: 0x27bdffc0
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25885c: 0xffbf0030
    ctx->pc = 0x25885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x258860: 0xffb20020
    ctx->pc = 0x258860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x258864: 0xffb10010
    ctx->pc = 0x258864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x258868: 0xffb00000
    ctx->pc = 0x258868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25886c: 0x80882d
    ctx->pc = 0x25886cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258870: 0x802d
    ctx->pc = 0x258870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258874: 0x3c020033
    ctx->pc = 0x258874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x258878: 0x24524a10
    ctx->pc = 0x258878u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 18960));
    // 0x25887c: 0x8e250000
    ctx->pc = 0x25887cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258880:
    // 0x258880: 0x101080
    ctx->pc = 0x258880u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x258884: 0x521021
    ctx->pc = 0x258884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x258888: 0x8c440000
    ctx->pc = 0x258888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25888c: 0xc0bf270
    ctx->pc = 0x25888Cu;
    SET_GPR_U32(ctx, 31, 0x258894u);
    ctx->pc = 0x258890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 40));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258894u; }
    }
    if (ctx->pc != 0x258894u) { return; }
    ctx->pc = 0x258894u;
    // 0x258894: 0x54400003
    ctx->pc = 0x258894u;
    {
        const bool branch_taken_0x258894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x258894) {
            ctx->pc = 0x258898u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2588A4u;
            goto label_2588a4;
        }
    }
    ctx->pc = 0x25889Cu;
    // 0x25889c: 0x10000005
    ctx->pc = 0x25889Cu;
    {
        const bool branch_taken_0x25889c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2588A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25889c) {
            ctx->pc = 0x2588B4u;
            goto label_2588b4;
        }
    }
    ctx->pc = 0x2588A4u;
label_2588a4:
    // 0x2588a4: 0x2a020004
    ctx->pc = 0x2588a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2588a8: 0x5440fff5
    ctx->pc = 0x2588A8u;
    {
        const bool branch_taken_0x2588a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2588a8) {
            ctx->pc = 0x2588ACu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x258880u;
            goto label_258880;
        }
    }
    ctx->pc = 0x2588B0u;
    // 0x2588b0: 0x102d
    ctx->pc = 0x2588b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2588b4:
    // 0x2588b4: 0xdfbf0030
    ctx->pc = 0x2588b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2588b8: 0xdfb20020
    ctx->pc = 0x2588b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2588bc: 0xdfb10010
    ctx->pc = 0x2588bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588c0: 0xdfb00000
    ctx->pc = 0x2588c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2588c4: 0x3e00008
    ctx->pc = 0x2588C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2588C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258880u: goto label_258880;
            case 0x2588A4u: goto label_2588a4;
            case 0x2588B4u: goto label_2588b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2588CCu;
}

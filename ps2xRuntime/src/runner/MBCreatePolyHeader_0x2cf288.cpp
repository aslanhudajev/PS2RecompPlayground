#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCreatePolyHeader
// Address: 0x2cf288 - 0x2cf314
void MBCreatePolyHeader_0x2cf288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf288u;

    // 0x2cf288: 0x27bdfff0
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf28c: 0xffbf0000
    ctx->pc = 0x2cf28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf290: 0x3c02003a
    ctx->pc = 0x2cf290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf294: 0x8c42caf8
    ctx->pc = 0x2cf294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953720)));
    // 0x2cf298: 0x28420010
    ctx->pc = 0x2cf298u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2cf29c: 0x14400006
    ctx->pc = 0x2CF29Cu;
    {
        const bool branch_taken_0x2cf29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF2A0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf29c) {
            ctx->pc = 0x2CF2B8u;
            goto label_2cf2b8;
        }
    }
    ctx->pc = 0x2CF2A4u;
    // 0x2cf2a4: 0x3c04003b
    ctx->pc = 0x2cf2a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cf2a8: 0xc0b492e
    ctx->pc = 0x2CF2A8u;
    SET_GPR_U32(ctx, 31, 0x2CF2B0u);
    ctx->pc = 0x2CF2ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30384));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2B0u; }
    }
    if (ctx->pc != 0x2CF2B0u) { return; }
    ctx->pc = 0x2CF2B0u;
    // 0x2cf2b0: 0x10000015
    ctx->pc = 0x2CF2B0u;
    {
        const bool branch_taken_0x2cf2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF2B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf2b0) {
            ctx->pc = 0x2CF308u;
            goto label_2cf308;
        }
    }
    ctx->pc = 0x2CF2B8u;
label_2cf2b8:
    // 0x2cf2b8: 0x3c05003a
    ctx->pc = 0x2cf2b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2cf2bc: 0x8ca4caf8
    ctx->pc = 0x2cf2bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294953720)));
    // 0x2cf2c0: 0x41100
    ctx->pc = 0x2cf2c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2cf2c4: 0x3c03003a
    ctx->pc = 0x2cf2c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf2c8: 0x2463cb00
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x2cf2cc: 0x431021
    ctx->pc = 0x2cf2ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf2d0: 0x24840001
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cf2d4: 0xaca4caf8
    ctx->pc = 0x2cf2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953720), GPR_U32(ctx, 4));
    // 0x2cf2d8: 0xac400000
    ctx->pc = 0x2cf2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cf2dc: 0x3c06003a
    ctx->pc = 0x2cf2dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2cf2e0: 0x8cc50c10
    ctx->pc = 0x2cf2e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 3088)));
    // 0x2cf2e4: 0x52140
    ctx->pc = 0x2cf2e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 5));
    // 0x2cf2e8: 0x3c03003a
    ctx->pc = 0x2cf2e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf2ec: 0x2463cc10
    ctx->pc = 0x2cf2ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954000));
    // 0x2cf2f0: 0x832021
    ctx->pc = 0x2cf2f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf2f4: 0xac440004
    ctx->pc = 0x2cf2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2cf2f8: 0xac470008
    ctx->pc = 0x2cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x2cf2fc: 0xac40000c
    ctx->pc = 0x2cf2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2cf300: 0xe52821
    ctx->pc = 0x2cf300u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2cf304: 0xacc50c10
    ctx->pc = 0x2cf304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3088), GPR_U32(ctx, 5));
label_2cf308:
    // 0x2cf308: 0xdfbf0000
    ctx->pc = 0x2cf308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf30c: 0x3e00008
    ctx->pc = 0x2CF30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF310u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF2B8u: goto label_2cf2b8;
            case 0x2CF308u: goto label_2cf308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF314u;
}

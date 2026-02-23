#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ch4dma
// Address: 0x163358 - 0x16342c
void _ch4dma_0x163358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ch4dma");


    ctx->pc = 0x163358u;

    // 0x163358: 0x3c021000
    ctx->pc = 0x163358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x16335c: 0x24030010
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x163360: 0x3442e010
    ctx->pc = 0x163360u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x163364: 0x3c04002e
    ctx->pc = 0x163364u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x163368: 0xac430000
    ctx->pc = 0x163368u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x16336c: 0x3c0a002e
    ctx->pc = 0x16336cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)46 << 16));
    // 0x163370: 0x8c82c14c
    ctx->pc = 0x163370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294951244)));
    // 0x163374: 0x8d48c150
    ctx->pc = 0x163374u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 4294951248)));
    // 0x163378: 0x24420001
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16337c: 0x15000003
    ctx->pc = 0x16337Cu;
    {
        const bool branch_taken_0x16337c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x163380u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294951244), GPR_U32(ctx, 2));
        if (branch_taken_0x16337c) {
            ctx->pc = 0x16338Cu;
            goto label_16338c;
        }
    }
    ctx->pc = 0x163384u;
    // 0x163384: 0x3e00008
    ctx->pc = 0x163384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163388u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16338Cu: goto label_16338c;
            case 0x1633F0u: goto label_1633f0;
            case 0x163424u: goto label_163424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16338Cu;
label_16338c:
    // 0x16338c: 0x3409ffff
    ctx->pc = 0x16338cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 0), 65535));
    // 0x163390: 0x128102b
    ctx->pc = 0x163390u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x163394: 0x10400016
    ctx->pc = 0x163394u;
    {
        const bool branch_taken_0x163394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163398u;
        SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
        if (branch_taken_0x163394) {
            ctx->pc = 0x1633F0u;
            goto label_1633f0;
        }
    }
    ctx->pc = 0x16339Cu;
    // 0x16339c: 0x3c021000
    ctx->pc = 0x16339cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1633a0: 0x8ce6c154
    ctx->pc = 0x1633a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4294951252)));
    // 0x1633a4: 0x3442b410
    ctx->pc = 0x1633a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x1633a8: 0x3c03000f
    ctx->pc = 0x1633a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x1633ac: 0x3c041000
    ctx->pc = 0x1633acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1633b0: 0xac460000
    ctx->pc = 0x1633b0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x1633b4: 0x3463fff0
    ctx->pc = 0x1633b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65520));
    // 0x1633b8: 0xc33021
    ctx->pc = 0x1633b8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1633bc: 0x3484b420
    ctx->pc = 0x1633bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x1633c0: 0x3c051000
    ctx->pc = 0x1633c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1633c4: 0xac890000
    ctx->pc = 0x1633c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1633c8: 0x24030101
    ctx->pc = 0x1633c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x1633cc: 0x3c020fff
    ctx->pc = 0x1633ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1633d0: 0x34a5b400
    ctx->pc = 0x1633d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 46080));
    // 0x1633d4: 0x3442ffff
    ctx->pc = 0x1633d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1633d8: 0xaca30000
    ctx->pc = 0x1633d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1633dc: 0xc23024
    ctx->pc = 0x1633dcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1633e0: 0x1091823
    ctx->pc = 0x1633e0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1633e4: 0xace6c154
    ctx->pc = 0x1633e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294951252), GPR_U32(ctx, 6));
    // 0x1633e8: 0x1000000e
    ctx->pc = 0x1633E8u;
    {
        const bool branch_taken_0x1633e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1633ECu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294951248), GPR_U32(ctx, 3));
        if (branch_taken_0x1633e8) {
            ctx->pc = 0x163424u;
            goto label_163424;
        }
    }
    ctx->pc = 0x1633F0u;
label_1633f0:
    // 0x1633f0: 0x3c02002e
    ctx->pc = 0x1633f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1633f4: 0x3c031000
    ctx->pc = 0x1633f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1633f8: 0x8c45c154
    ctx->pc = 0x1633f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294951252)));
    // 0x1633fc: 0x3463b410
    ctx->pc = 0x1633fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x163400: 0x3c021000
    ctx->pc = 0x163400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163404: 0x3c041000
    ctx->pc = 0x163404u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x163408: 0xac650000
    ctx->pc = 0x163408u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x16340c: 0x3442b420
    ctx->pc = 0x16340cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x163410: 0xac480000
    ctx->pc = 0x163410u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x163414: 0x3484b400
    ctx->pc = 0x163414u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x163418: 0x24020101
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x16341c: 0xac820000
    ctx->pc = 0x16341cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x163420: 0xad40c150
    ctx->pc = 0x163420u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294951248), GPR_U32(ctx, 0));
label_163424:
    // 0x163424: 0x3e00008
    ctx->pc = 0x163424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163428u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16338Cu: goto label_16338c;
            case 0x1633F0u: goto label_1633f0;
            case 0x163424u: goto label_163424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16342Cu;
}

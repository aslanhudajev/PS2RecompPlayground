#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetZBUF
// Address: 0x1b1670 - 0x1b1760
void nlGraphSetZBUF_0x1b1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetZBUF");


    ctx->pc = 0x1b1670u;

    // 0x1b1670: 0x27bdffb0
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1674: 0x7fbf0040
    ctx->pc = 0x1b1674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1b1678: 0x7fb30030
    ctx->pc = 0x1b1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b167c: 0x7fb20020
    ctx->pc = 0x1b167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1680: 0x7fb10010
    ctx->pc = 0x1b1680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1684: 0x7fb00000
    ctx->pc = 0x1b1684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1688: 0x70a09e28
    ctx->pc = 0x1b1688u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b168c: 0x70c09628
    ctx->pc = 0x1b168cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b1690: 0x14800003
    ctx->pc = 0x1B1690u;
    {
        const bool branch_taken_0x1b1690 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1694u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1690) {
            ctx->pc = 0x1B16A0u;
            goto label_1b16a0;
        }
    }
    ctx->pc = 0x1B1698u;
    // 0x1b1698: 0x10000002
    ctx->pc = 0x1B1698u;
    {
        const bool branch_taken_0x1b1698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B169Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1698) {
            ctx->pc = 0x1B16A4u;
            goto label_1b16a4;
        }
    }
    ctx->pc = 0x1B16A0u;
label_1b16a0:
    // 0x1b16a0: 0x24100001
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1b16a4:
    // 0x1b16a4: 0x3c011001
    ctx->pc = 0x1b16a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b16a8: 0x8c22d000
    ctx->pc = 0x1b16a8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b16ac: 0x30420100
    ctx->pc = 0x1b16acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b16b0: 0x0
    ctx->pc = 0x1b16b0u;
    // NOP
    // 0x1b16b4: 0x0
    ctx->pc = 0x1b16b4u;
    // NOP
    // 0x1b16b8: 0x1440fffa
    ctx->pc = 0x1B16B8u;
    {
        const bool branch_taken_0x1b16b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b16b8) {
            ctx->pc = 0x1B16A4u;
            goto label_1b16a4;
        }
    }
    ctx->pc = 0x1B16C0u;
    // 0x1b16c0: 0xc069528
    ctx->pc = 0x1B16C0u;
    SET_GPR_U32(ctx, 31, 0x1B16C8u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16C8u; }
        else if (ctx->pc != 0x1B16C8u) { ctx->pc = 0x1B16C8u; }
    }
    if (ctx->pc != 0x1B16C8u) { return; }
    ctx->pc = 0x1B16C8u;
    // 0x1b16c8: 0x3c051000
    ctx->pc = 0x1b16c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1b16cc: 0x34a60002
    ctx->pc = 0x1b16ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), 2));
    // 0x1b16d0: 0xac460000
    ctx->pc = 0x1b16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1b16d4: 0x12183c
    ctx->pc = 0x1b16d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b16d8: 0xac400004
    ctx->pc = 0x1b16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b16dc: 0x13203c
    ctx->pc = 0x1b16dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b16e0: 0x3183f
    ctx->pc = 0x1b16e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b16e4: 0xac450008
    ctx->pc = 0x1b16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1b16e8: 0x5303c
    ctx->pc = 0x1b16e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b16ec: 0x3c055100
    ctx->pc = 0x1b16ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)20736 << 16));
    // 0x1b16f0: 0x34a50002
    ctx->pc = 0x1b16f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2));
    // 0x1b16f4: 0xac45000c
    ctx->pc = 0x1b16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1b16f8: 0x34058001
    ctx->pc = 0x1b16f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1b16fc: 0xa62825
    ctx->pc = 0x1b16fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b1700: 0xfc450010
    ctx->pc = 0x1b1700u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x1b1704: 0x2405000e
    ctx->pc = 0x1b1704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b1708: 0x4203f
    ctx->pc = 0x1b1708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b170c: 0x31e38
    ctx->pc = 0x1b170cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b1710: 0x832025
    ctx->pc = 0x1b1710u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b1714: 0x11183c
    ctx->pc = 0x1b1714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b1718: 0x3183f
    ctx->pc = 0x1b1718u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b171c: 0x3183c
    ctx->pc = 0x1b171cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1720: 0x642025
    ctx->pc = 0x1b1720u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1724: 0x2603004e
    ctx->pc = 0x1b1724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 78));
    // 0x1b1728: 0x3183c
    ctx->pc = 0x1b1728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b172c: 0xfc450018
    ctx->pc = 0x1b172cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x1b1730: 0xfc440020
    ctx->pc = 0x1b1730u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 4));
    // 0x1b1734: 0x3183f
    ctx->pc = 0x1b1734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b1738: 0xfc430028
    ctx->pc = 0x1b1738u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1b173c: 0xc06952c
    ctx->pc = 0x1B173Cu;
    SET_GPR_U32(ctx, 31, 0x1B1744u);
    ctx->pc = 0x1B1740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1744u; }
        else if (ctx->pc != 0x1B1744u) { ctx->pc = 0x1B1744u; }
    }
    if (ctx->pc != 0x1B1744u) { return; }
    ctx->pc = 0x1B1744u;
    // 0x1b1744: 0x7bbf0040
    ctx->pc = 0x1b1744u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1748: 0x7bb30030
    ctx->pc = 0x1b1748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b174c: 0x7bb20020
    ctx->pc = 0x1b174cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1750: 0x7bb10010
    ctx->pc = 0x1b1750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1754: 0x7bb00000
    ctx->pc = 0x1b1754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1758: 0x3e00008
    ctx->pc = 0x1B1758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B175Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B16A0u: goto label_1b16a0;
            case 0x1B16A4u: goto label_1b16a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1760u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetFBA
// Address: 0x1b1820 - 0x1b18d8
void nlGraphSetFBA_0x1b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetFBA");


    ctx->pc = 0x1b1820u;

    // 0x1b1820: 0x27bdffd0
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1824: 0x7fbf0020
    ctx->pc = 0x1b1824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b1828: 0x7fb10010
    ctx->pc = 0x1b1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b182c: 0x7fb00000
    ctx->pc = 0x1b182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1830: 0x14800003
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1834u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1840u;
            goto label_1b1840;
        }
    }
    ctx->pc = 0x1B1838u;
    // 0x1b1838: 0x10000002
    ctx->pc = 0x1B1838u;
    {
        const bool branch_taken_0x1b1838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B183Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1838) {
            ctx->pc = 0x1B1844u;
            goto label_1b1844;
        }
    }
    ctx->pc = 0x1B1840u;
label_1b1840:
    // 0x1b1840: 0x24100001
    ctx->pc = 0x1b1840u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1b1844:
    // 0x1b1844: 0x3c011001
    ctx->pc = 0x1b1844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b1848: 0x8c22d000
    ctx->pc = 0x1b1848u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b184c: 0x30420100
    ctx->pc = 0x1b184cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b1850: 0x0
    ctx->pc = 0x1b1850u;
    // NOP
    // 0x1b1854: 0x0
    ctx->pc = 0x1b1854u;
    // NOP
    // 0x1b1858: 0x1440fffa
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B1844u;
            goto label_1b1844;
        }
    }
    ctx->pc = 0x1B1860u;
    // 0x1b1860: 0xc069528
    ctx->pc = 0x1B1860u;
    SET_GPR_U32(ctx, 31, 0x1B1868u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1868u; }
        else if (ctx->pc != 0x1B1868u) { ctx->pc = 0x1B1868u; }
    }
    if (ctx->pc != 0x1B1868u) { return; }
    ctx->pc = 0x1B1868u;
    // 0x1b1868: 0x3c051000
    ctx->pc = 0x1b1868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1b186c: 0x34a60002
    ctx->pc = 0x1b186cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), 2));
    // 0x1b1870: 0xac460000
    ctx->pc = 0x1b1870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1b1874: 0xac400004
    ctx->pc = 0x1b1874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b1878: 0xac450008
    ctx->pc = 0x1b1878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1b187c: 0x5303c
    ctx->pc = 0x1b187cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b1880: 0x3c055100
    ctx->pc = 0x1b1880u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20736 << 16));
    // 0x1b1884: 0x34a50002
    ctx->pc = 0x1b1884u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2));
    // 0x1b1888: 0xac45000c
    ctx->pc = 0x1b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1b188c: 0x34058001
    ctx->pc = 0x1b188cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1b1890: 0xa62825
    ctx->pc = 0x1b1890u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b1894: 0xfc450010
    ctx->pc = 0x1b1894u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x1b1898: 0x11203c
    ctx->pc = 0x1b1898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b189c: 0x2603004a
    ctx->pc = 0x1b189cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 74));
    // 0x1b18a0: 0x2405000e
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b18a4: 0x3183c
    ctx->pc = 0x1b18a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b18a8: 0x4203f
    ctx->pc = 0x1b18a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b18ac: 0xfc450018
    ctx->pc = 0x1b18acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x1b18b0: 0xfc440020
    ctx->pc = 0x1b18b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 4));
    // 0x1b18b4: 0x3183f
    ctx->pc = 0x1b18b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b18b8: 0xfc430028
    ctx->pc = 0x1b18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1b18bc: 0xc06952c
    ctx->pc = 0x1B18BCu;
    SET_GPR_U32(ctx, 31, 0x1B18C4u);
    ctx->pc = 0x1B18C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18C4u; }
        else if (ctx->pc != 0x1B18C4u) { ctx->pc = 0x1B18C4u; }
    }
    if (ctx->pc != 0x1B18C4u) { return; }
    ctx->pc = 0x1B18C4u;
    // 0x1b18c4: 0x7bbf0020
    ctx->pc = 0x1b18c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b18c8: 0x7bb10010
    ctx->pc = 0x1b18c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18cc: 0x7bb00000
    ctx->pc = 0x1b18ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b18d0: 0x3e00008
    ctx->pc = 0x1B18D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B18D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1840u: goto label_1b1840;
            case 0x1B1844u: goto label_1b1844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B18D8u;
}

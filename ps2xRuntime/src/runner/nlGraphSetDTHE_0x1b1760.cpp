#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetDTHE
// Address: 0x1b1760 - 0x1b181c
void nlGraphSetDTHE_0x1b1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetDTHE");


    ctx->pc = 0x1b1760u;

    // 0x1b1760: 0x27bdffe0
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1764: 0x7fbf0010
    ctx->pc = 0x1b1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b1768: 0x7fb00000
    ctx->pc = 0x1b1768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b176c: 0x70808628
    ctx->pc = 0x1b176cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1b1770:
    // 0x1b1770: 0x3c011001
    ctx->pc = 0x1b1770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b1774: 0x8c22d000
    ctx->pc = 0x1b1774u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b1778: 0x30420100
    ctx->pc = 0x1b1778u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b177c: 0x0
    ctx->pc = 0x1b177cu;
    // NOP
    // 0x1b1780: 0x0
    ctx->pc = 0x1b1780u;
    // NOP
    // 0x1b1784: 0x1440fffa
    ctx->pc = 0x1B1784u;
    {
        const bool branch_taken_0x1b1784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1784) {
            ctx->pc = 0x1B1770u;
            goto label_1b1770;
        }
    }
    ctx->pc = 0x1B178Cu;
    // 0x1b178c: 0xc069528
    ctx->pc = 0x1B178Cu;
    SET_GPR_U32(ctx, 31, 0x1B1794u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1794u; }
        else if (ctx->pc != 0x1B1794u) { ctx->pc = 0x1B1794u; }
    }
    if (ctx->pc != 0x1B1794u) { return; }
    ctx->pc = 0x1B1794u;
    // 0x1b1794: 0x3c041000
    ctx->pc = 0x1b1794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1b1798: 0x34850003
    ctx->pc = 0x1b1798u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 3));
    // 0x1b179c: 0xac450000
    ctx->pc = 0x1b179cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1b17a0: 0xac400004
    ctx->pc = 0x1b17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b17a4: 0xac440008
    ctx->pc = 0x1b17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1b17a8: 0x4283c
    ctx->pc = 0x1b17a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b17ac: 0x3c045100
    ctx->pc = 0x1b17acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20736 << 16));
    // 0x1b17b0: 0x34840003
    ctx->pc = 0x1b17b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 3));
    // 0x1b17b4: 0xac44000c
    ctx->pc = 0x1b17b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1b17b8: 0x34048002
    ctx->pc = 0x1b17b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32770));
    // 0x1b17bc: 0x852025
    ctx->pc = 0x1b17bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b17c0: 0xfc440010
    ctx->pc = 0x1b17c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x1b17c4: 0x10183c
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b17c8: 0x2404000e
    ctx->pc = 0x1b17c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b17cc: 0x3183f
    ctx->pc = 0x1b17ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b17d0: 0xfc440018
    ctx->pc = 0x1b17d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x1b17d4: 0xfc430020
    ctx->pc = 0x1b17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1b17d8: 0x24030045
    ctx->pc = 0x1b17d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x1b17dc: 0xfc430028
    ctx->pc = 0x1b17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1b17e0: 0x3c036071
    ctx->pc = 0x1b17e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24689 << 16));
    // 0x1b17e4: 0x34632435
    ctx->pc = 0x1b17e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 9269));
    // 0x1b17e8: 0x3203c
    ctx->pc = 0x1b17e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b17ec: 0x3c037160
    ctx->pc = 0x1b17ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)29024 << 16));
    // 0x1b17f0: 0x34633524
    ctx->pc = 0x1b17f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13604));
    // 0x1b17f4: 0x641825
    ctx->pc = 0x1b17f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b17f8: 0xfc430030
    ctx->pc = 0x1b17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1b17fc: 0x24030044
    ctx->pc = 0x1b17fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b1800: 0xfc430038
    ctx->pc = 0x1b1800u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1b1804: 0xc06952c
    ctx->pc = 0x1B1804u;
    SET_GPR_U32(ctx, 31, 0x1B180Cu);
    ctx->pc = 0x1B1808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B180Cu; }
        else if (ctx->pc != 0x1B180Cu) { ctx->pc = 0x1B180Cu; }
    }
    if (ctx->pc != 0x1B180Cu) { return; }
    ctx->pc = 0x1B180Cu;
    // 0x1b180c: 0x7bbf0010
    ctx->pc = 0x1b180cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1810: 0x7bb00000
    ctx->pc = 0x1b1810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1814: 0x3e00008
    ctx->pc = 0x1B1814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1770u: goto label_1b1770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B181Cu;
}

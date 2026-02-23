#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetLABEL
// Address: 0x1b1970 - 0x1b1a24
void nlGraphSetLABEL_0x1b1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetLABEL");


    ctx->pc = 0x1b1970u;

    // 0x1b1970: 0x27bdffd0
    ctx->pc = 0x1b1970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1974: 0x7fbf0020
    ctx->pc = 0x1b1974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b1978: 0x7fb10010
    ctx->pc = 0x1b1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b197c: 0x7fb00000
    ctx->pc = 0x1b197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1980: 0x70808e28
    ctx->pc = 0x1b1980u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1b1984: 0x70a08628
    ctx->pc = 0x1b1984u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b1988:
    // 0x1b1988: 0x3c011001
    ctx->pc = 0x1b1988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b198c: 0x8c22d000
    ctx->pc = 0x1b198cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b1990: 0x30420100
    ctx->pc = 0x1b1990u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b1994: 0x0
    ctx->pc = 0x1b1994u;
    // NOP
    // 0x1b1998: 0x0
    ctx->pc = 0x1b1998u;
    // NOP
    // 0x1b199c: 0x1440fffa
    ctx->pc = 0x1B199Cu;
    {
        const bool branch_taken_0x1b199c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b199c) {
            ctx->pc = 0x1B1988u;
            goto label_1b1988;
        }
    }
    ctx->pc = 0x1B19A4u;
    // 0x1b19a4: 0xc069528
    ctx->pc = 0x1B19A4u;
    SET_GPR_U32(ctx, 31, 0x1B19ACu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19ACu; }
        else if (ctx->pc != 0x1B19ACu) { ctx->pc = 0x1B19ACu; }
    }
    if (ctx->pc != 0x1B19ACu) { return; }
    ctx->pc = 0x1B19ACu;
    // 0x1b19ac: 0x10183c
    ctx->pc = 0x1b19acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b19b0: 0x11203c
    ctx->pc = 0x1b19b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b19b4: 0x3183f
    ctx->pc = 0x1b19b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b19b8: 0x4203f
    ctx->pc = 0x1b19b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b19bc: 0x3183c
    ctx->pc = 0x1b19bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b19c0: 0x831825
    ctx->pc = 0x1b19c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b19c4: 0x3c041000
    ctx->pc = 0x1b19c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1b19c8: 0x34850002
    ctx->pc = 0x1b19c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 2));
    // 0x1b19cc: 0xac450000
    ctx->pc = 0x1b19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1b19d0: 0xac400004
    ctx->pc = 0x1b19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b19d4: 0xac440008
    ctx->pc = 0x1b19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1b19d8: 0x4283c
    ctx->pc = 0x1b19d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b19dc: 0x3c045100
    ctx->pc = 0x1b19dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20736 << 16));
    // 0x1b19e0: 0x34840002
    ctx->pc = 0x1b19e0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x1b19e4: 0xac44000c
    ctx->pc = 0x1b19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1b19e8: 0x34048001
    ctx->pc = 0x1b19e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1b19ec: 0x852025
    ctx->pc = 0x1b19ecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b19f0: 0xfc440010
    ctx->pc = 0x1b19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x1b19f4: 0x2404000e
    ctx->pc = 0x1b19f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b19f8: 0xfc440018
    ctx->pc = 0x1b19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x1b19fc: 0xfc430020
    ctx->pc = 0x1b19fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1b1a00: 0x24030062
    ctx->pc = 0x1b1a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1b1a04: 0xfc430028
    ctx->pc = 0x1b1a04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1b1a08: 0xc06952c
    ctx->pc = 0x1B1A08u;
    SET_GPR_U32(ctx, 31, 0x1B1A10u);
    ctx->pc = 0x1B1A0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A10u; }
        else if (ctx->pc != 0x1B1A10u) { ctx->pc = 0x1B1A10u; }
    }
    if (ctx->pc != 0x1B1A10u) { return; }
    ctx->pc = 0x1B1A10u;
    // 0x1b1a10: 0x7bbf0020
    ctx->pc = 0x1b1a10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1a14: 0x7bb10010
    ctx->pc = 0x1b1a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a18: 0x7bb00000
    ctx->pc = 0x1b1a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a1c: 0x3e00008
    ctx->pc = 0x1B1A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1988u: goto label_1b1988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1A24u;
}

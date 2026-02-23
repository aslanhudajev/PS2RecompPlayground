#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetTEXFLUSH
// Address: 0x1b18e0 - 0x1b1964
void nlGraphSetTEXFLUSH_0x1b18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetTEXFLUSH");


    ctx->pc = 0x1b18e0u;

    // 0x1b18e0: 0x27bdfff0
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b18e4: 0x7fbf0000
    ctx->pc = 0x1b18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1b18e8:
    // 0x1b18e8: 0x3c011001
    ctx->pc = 0x1b18e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b18ec: 0x8c22d000
    ctx->pc = 0x1b18ecu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b18f0: 0x30420100
    ctx->pc = 0x1b18f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b18f4: 0x0
    ctx->pc = 0x1b18f4u;
    // NOP
    // 0x1b18f8: 0x0
    ctx->pc = 0x1b18f8u;
    // NOP
    // 0x1b18fc: 0x1440fffa
    ctx->pc = 0x1B18FCu;
    {
        const bool branch_taken_0x1b18fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b18fc) {
            ctx->pc = 0x1B18E8u;
            goto label_1b18e8;
        }
    }
    ctx->pc = 0x1B1904u;
    // 0x1b1904: 0xc069528
    ctx->pc = 0x1B1904u;
    SET_GPR_U32(ctx, 31, 0x1B190Cu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B190Cu; }
        else if (ctx->pc != 0x1B190Cu) { ctx->pc = 0x1B190Cu; }
    }
    if (ctx->pc != 0x1B190Cu) { return; }
    ctx->pc = 0x1B190Cu;
    // 0x1b190c: 0x3c031000
    ctx->pc = 0x1b190cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1b1910: 0x34640002
    ctx->pc = 0x1b1910u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 2));
    // 0x1b1914: 0xac440000
    ctx->pc = 0x1b1914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1b1918: 0xac400004
    ctx->pc = 0x1b1918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b191c: 0xac430008
    ctx->pc = 0x1b191cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1b1920: 0x3203c
    ctx->pc = 0x1b1920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1924: 0x3c035100
    ctx->pc = 0x1b1924u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1b1928: 0x34630002
    ctx->pc = 0x1b1928u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1b192c: 0xac43000c
    ctx->pc = 0x1b192cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b1930: 0x34038001
    ctx->pc = 0x1b1930u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1b1934: 0x641825
    ctx->pc = 0x1b1934u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1938: 0xfc430010
    ctx->pc = 0x1b1938u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1b193c: 0x2403000e
    ctx->pc = 0x1b193cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b1940: 0xfc430018
    ctx->pc = 0x1b1940u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1b1944: 0xfc400020
    ctx->pc = 0x1b1944u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x1b1948: 0x2403003f
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b194c: 0xfc430028
    ctx->pc = 0x1b194cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1b1950: 0xc06952c
    ctx->pc = 0x1B1950u;
    SET_GPR_U32(ctx, 31, 0x1B1958u);
    ctx->pc = 0x1B1954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1958u; }
        else if (ctx->pc != 0x1B1958u) { ctx->pc = 0x1B1958u; }
    }
    if (ctx->pc != 0x1B1958u) { return; }
    ctx->pc = 0x1B1958u;
    // 0x1b1958: 0x7bbf0000
    ctx->pc = 0x1b1958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b195c: 0x3e00008
    ctx->pc = 0x1B195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B18E8u: goto label_1b18e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1964u;
}

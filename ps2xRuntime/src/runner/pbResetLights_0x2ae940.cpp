#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetLights
// Address: 0x2ae940 - 0x2aea68
void pbResetLights_0x2ae940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae940u;

    // 0x2ae940: 0x27bdffe0
    ctx->pc = 0x2ae940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae944: 0xffbf0010
    ctx->pc = 0x2ae944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ae948: 0xffb00000
    ctx->pc = 0x2ae948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae94c: 0x3c020036
    ctx->pc = 0x2ae94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae950: 0x8c50dee0
    ctx->pc = 0x2ae950u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae954: 0x8e02001c
    ctx->pc = 0x2ae954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae958: 0x3c01c500
    ctx->pc = 0x2ae958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50432 << 16));
    // 0x2ae95c: 0x44810000
    ctx->pc = 0x2ae95cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ae960: 0xe44000a0
    ctx->pc = 0x2ae960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ae964: 0x8e02001c
    ctx->pc = 0x2ae964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae968: 0xac4000c4
    ctx->pc = 0x2ae968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x2ae96c: 0x8e02001c
    ctx->pc = 0x2ae96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae970: 0x3c013f80
    ctx->pc = 0x2ae970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ae974: 0x44810000
    ctx->pc = 0x2ae974u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ae978: 0xe44000d0
    ctx->pc = 0x2ae978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ae97c: 0x8e02001c
    ctx->pc = 0x2ae97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae980: 0xe44000d4
    ctx->pc = 0x2ae980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2ae984: 0x8e02001c
    ctx->pc = 0x2ae984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae988: 0xe44000d8
    ctx->pc = 0x2ae988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2ae98c: 0x8e02001c
    ctx->pc = 0x2ae98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae990: 0xac4000dc
    ctx->pc = 0x2ae990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x2ae994: 0x202d
    ctx->pc = 0x2ae994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae998:
    // 0x2ae998: 0x8e02001c
    ctx->pc = 0x2ae998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae99c: 0x41940
    ctx->pc = 0x2ae99cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ae9a0: 0x431021
    ctx->pc = 0x2ae9a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9a4: 0xe44000f0
    ctx->pc = 0x2ae9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2ae9a8: 0x8e02001c
    ctx->pc = 0x2ae9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9ac: 0x431021
    ctx->pc = 0x2ae9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9b0: 0xe44000f4
    ctx->pc = 0x2ae9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2ae9b4: 0x8e02001c
    ctx->pc = 0x2ae9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9b8: 0x431021
    ctx->pc = 0x2ae9b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9bc: 0xe44000f8
    ctx->pc = 0x2ae9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x2ae9c0: 0x8e02001c
    ctx->pc = 0x2ae9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9c4: 0x431021
    ctx->pc = 0x2ae9c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9c8: 0xac4000fc
    ctx->pc = 0x2ae9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x2ae9cc: 0x8e02001c
    ctx->pc = 0x2ae9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9d0: 0x431021
    ctx->pc = 0x2ae9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9d4: 0xe4400100
    ctx->pc = 0x2ae9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2ae9d8: 0x8e02001c
    ctx->pc = 0x2ae9d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9dc: 0x431021
    ctx->pc = 0x2ae9dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9e0: 0xac400104
    ctx->pc = 0x2ae9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x2ae9e4: 0x8e02001c
    ctx->pc = 0x2ae9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9e8: 0x431021
    ctx->pc = 0x2ae9e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9ec: 0xac400108
    ctx->pc = 0x2ae9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x2ae9f0: 0x8e02001c
    ctx->pc = 0x2ae9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae9f4: 0x431021
    ctx->pc = 0x2ae9f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae9f8: 0x24840001
    ctx->pc = 0x2ae9f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ae9fc: 0x1880ffe6
    ctx->pc = 0x2AE9FCu;
    {
        const bool branch_taken_0x2ae9fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2AEA00u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
        if (branch_taken_0x2ae9fc) {
            ctx->pc = 0x2AE998u;
            goto label_2ae998;
        }
    }
    ctx->pc = 0x2AEA04u;
    // 0x2aea04: 0xc0abade
    ctx->pc = 0x2AEA04u;
    SET_GPR_U32(ctx, 31, 0x2AEA0Cu);
    ctx->pc = 0x2AEB78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightDeleteAll_0x2aeb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA0Cu; }
    }
    if (ctx->pc != 0x2AEA0Cu) { return; }
    ctx->pc = 0x2AEA0Cu;
    // 0x2aea0c: 0x8e02001c
    ctx->pc = 0x2aea0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea10: 0xac4000ac
    ctx->pc = 0x2aea10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x2aea14: 0x8e02001c
    ctx->pc = 0x2aea14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea18: 0x3c013f80
    ctx->pc = 0x2aea18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2aea1c: 0x44810000
    ctx->pc = 0x2aea1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2aea20: 0xe44000a8
    ctx->pc = 0x2aea20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2aea24: 0x8e02001c
    ctx->pc = 0x2aea24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea28: 0xac4000b4
    ctx->pc = 0x2aea28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x2aea2c: 0x8e02001c
    ctx->pc = 0x2aea2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea30: 0xe44000b0
    ctx->pc = 0x2aea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2aea34: 0x8e02001c
    ctx->pc = 0x2aea34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea38: 0xac4000bc
    ctx->pc = 0x2aea38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x2aea3c: 0x8e02001c
    ctx->pc = 0x2aea3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea40: 0xe44000b8
    ctx->pc = 0x2aea40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2aea44: 0x8e02001c
    ctx->pc = 0x2aea44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea48: 0xe44000c0
    ctx->pc = 0x2aea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x2aea4c: 0x8e03001c
    ctx->pc = 0x2aea4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aea50: 0x24020001
    ctx->pc = 0x2aea50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aea54: 0xac6200a4
    ctx->pc = 0x2aea54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x2aea58: 0xdfbf0010
    ctx->pc = 0x2aea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aea5c: 0xdfb00000
    ctx->pc = 0x2aea5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aea60: 0x3e00008
    ctx->pc = 0x2AEA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEA64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE998u: goto label_2ae998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEA68u;
}

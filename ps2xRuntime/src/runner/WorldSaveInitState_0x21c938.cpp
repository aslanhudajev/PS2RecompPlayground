#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldSaveInitState
// Address: 0x21c938 - 0x21ca5c
void WorldSaveInitState_0x21c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c938u;

    // 0x21c938: 0x27bdffc0
    ctx->pc = 0x21c938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21c93c: 0xffbf0030
    ctx->pc = 0x21c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21c940: 0xffb20020
    ctx->pc = 0x21c940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c944: 0xffb10010
    ctx->pc = 0x21c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c948: 0xffb00000
    ctx->pc = 0x21c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c94c: 0x3c02003a
    ctx->pc = 0x21c94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21c950: 0x8c52230c
    ctx->pc = 0x21c950u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21c954: 0x3c110032
    ctx->pc = 0x21c954u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21c958: 0x3c100032
    ctx->pc = 0x21c958u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21c95c: 0x8e02faa0
    ctx->pc = 0x21c95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965920)));
    // 0x21c960: 0x8c440000
    ctx->pc = 0x21c960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c964: 0xc0b4f52
    ctx->pc = 0x21C964u;
    SET_GPR_U32(ctx, 31, 0x21C96Cu);
    ctx->pc = 0x21C968u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
    }
    if (ctx->pc != 0x21C96Cu) { return; }
    ctx->pc = 0x21C96Cu;
    // 0x21c96c: 0xae22f9f0
    ctx->pc = 0x21c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965744), GPR_U32(ctx, 2));
    // 0x21c970: 0x3c110032
    ctx->pc = 0x21c970u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21c974: 0x8e02faa0
    ctx->pc = 0x21c974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965920)));
    // 0x21c978: 0x8c420000
    ctx->pc = 0x21c978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c97c: 0x2404000c
    ctx->pc = 0x21c97cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x21c980: 0xc0b4f52
    ctx->pc = 0x21C980u;
    SET_GPR_U32(ctx, 31, 0x21C988u);
    ctx->pc = 0x21C984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C988u; }
    }
    if (ctx->pc != 0x21C988u) { return; }
    ctx->pc = 0x21C988u;
    // 0x21c988: 0xae22f9f4
    ctx->pc = 0x21c988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965748), GPR_U32(ctx, 2));
    // 0x21c98c: 0x3c020032
    ctx->pc = 0x21c98cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c990: 0x8c42fa58
    ctx->pc = 0x21c990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965848)));
    // 0x21c994: 0x18400025
    ctx->pc = 0x21C994u;
    {
        const bool branch_taken_0x21c994 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C998u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c994) {
            ctx->pc = 0x21CA2Cu;
            goto label_21ca2c;
        }
    }
    ctx->pc = 0x21C99Cu;
    // 0x21c99c: 0x3c0b0032
    ctx->pc = 0x21c99cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)50 << 16));
    // 0x21c9a0: 0x3c020032
    ctx->pc = 0x21c9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c9a4: 0x2447f9f8
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21c9a8: 0x240a003c
    ctx->pc = 0x21c9a8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21c9ac: 0x220402d
    ctx->pc = 0x21c9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9b0: 0x2409000c
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
    // 0x21c9b4: 0x8d62f9f0
    ctx->pc = 0x21c9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4294965744)));
label_21c9b8:
    // 0x21c9b8: 0x61880
    ctx->pc = 0x21c9b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21c9bc: 0x621821
    ctx->pc = 0x21c9bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c9c0: 0x8ce20004
    ctx->pc = 0x21c9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21c9c4: 0xca2818
    ctx->pc = 0x21c9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21c9c8: 0xa21021
    ctx->pc = 0x21c9c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c9cc: 0x8c420018
    ctx->pc = 0x21c9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21c9d0: 0xac620000
    ctx->pc = 0x21c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21c9d4: 0x8d03f9f4
    ctx->pc = 0x21c9d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294965748)));
    // 0x21c9d8: 0xc92018
    ctx->pc = 0x21c9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21c9dc: 0x831821
    ctx->pc = 0x21c9dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21c9e0: 0x8ce20004
    ctx->pc = 0x21c9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21c9e4: 0xa21021
    ctx->pc = 0x21c9e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c9e8: 0xc440001c
    ctx->pc = 0x21c9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c9ec: 0xe4600000
    ctx->pc = 0x21c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x21c9f0: 0x8d02f9f4
    ctx->pc = 0x21c9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294965748)));
    // 0x21c9f4: 0x822021
    ctx->pc = 0x21c9f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21c9f8: 0x8ce20004
    ctx->pc = 0x21c9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21c9fc: 0xa21021
    ctx->pc = 0x21c9fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21ca00: 0xc4400020
    ctx->pc = 0x21ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ca04: 0xe4800004
    ctx->pc = 0x21ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21ca08: 0x8ce20004
    ctx->pc = 0x21ca08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21ca0c: 0xa22821
    ctx->pc = 0x21ca0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21ca10: 0xc4a00024
    ctx->pc = 0x21ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ca14: 0xe4800008
    ctx->pc = 0x21ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x21ca18: 0x24c60001
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21ca1c: 0x8ce20060
    ctx->pc = 0x21ca1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x21ca20: 0xc2102a
    ctx->pc = 0x21ca20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x21ca24: 0x1440ffe4
    ctx->pc = 0x21CA24u;
    {
        const bool branch_taken_0x21ca24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21CA28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4294965744)));
        if (branch_taken_0x21ca24) {
            ctx->pc = 0x21C9B8u;
            goto label_21c9b8;
        }
    }
    ctx->pc = 0x21CA2Cu;
label_21ca2c:
    // 0x21ca2c: 0x3c02003a
    ctx->pc = 0x21ca2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21ca30: 0x8c45230c
    ctx->pc = 0x21ca30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21ca34: 0xb22823
    ctx->pc = 0x21ca34u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x21ca38: 0x3c04003a
    ctx->pc = 0x21ca38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21ca3c: 0x248464b8
    ctx->pc = 0x21ca3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25784));
    // 0x21ca40: 0x52a83
    ctx->pc = 0x21ca40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 10));
    // 0x21ca44: 0xdfbf0030
    ctx->pc = 0x21ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ca48: 0xdfb20020
    ctx->pc = 0x21ca48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca4c: 0xdfb10010
    ctx->pc = 0x21ca4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca50: 0xdfb00000
    ctx->pc = 0x21ca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca54: 0x80b4a34
    ctx->pc = 0x21CA54u;
    ctx->pc = 0x21CA58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x21CA5Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: clearGsMem
// Address: 0x2dbee0 - 0x2dc124
void clearGsMem_0x2dbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dbee0u;

    // 0x2dbee0: 0x27bdfee0
    ctx->pc = 0x2dbee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2dbee4: 0xffbf0110
    ctx->pc = 0x2dbee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2dbee8: 0xffbe0100
    ctx->pc = 0x2dbee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2dbeec: 0xffb700f0
    ctx->pc = 0x2dbeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x2dbef0: 0xffb600e0
    ctx->pc = 0x2dbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2dbef4: 0xffb500d0
    ctx->pc = 0x2dbef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2dbef8: 0xffb400c0
    ctx->pc = 0x2dbef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2dbefc: 0xffb300b0
    ctx->pc = 0x2dbefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2dbf00: 0xffb200a0
    ctx->pc = 0x2dbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2dbf04: 0xffb10090
    ctx->pc = 0x2dbf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2dbf08: 0xffb00080
    ctx->pc = 0x2dbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2dbf0c: 0x80b82d
    ctx->pc = 0x2dbf0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf10: 0xa0902d
    ctx->pc = 0x2dbf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf14: 0xc0a82d
    ctx->pc = 0x2dbf14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf18: 0xe0a02d
    ctx->pc = 0x2dbf18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf1c: 0x100882d
    ctx->pc = 0x2dbf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf20: 0x3c02003c
    ctx->pc = 0x2dbf20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbf24: 0x24438308
    ctx->pc = 0x2dbf24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935304));
    // 0x2dbf28: 0xdc428308
    ctx->pc = 0x2dbf28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294935304)));
    // 0x2dbf2c: 0xffa20000
    ctx->pc = 0x2dbf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2dbf30: 0xdc620008
    ctx->pc = 0x2dbf30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dbf34: 0xffa20008
    ctx->pc = 0x2dbf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2dbf38: 0x27b60020
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dbf3c: 0xc0b86de
    ctx->pc = 0x2DBF3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF44u);
    ctx->pc = 0x2DBF40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2E1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x2e1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF44u; }
    }
    if (ctx->pc != 0x2DBF44u) { return; }
    ctx->pc = 0x2DBF44u;
    // 0x2dbf44: 0x40f02d
    ctx->pc = 0x2dbf44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf48: 0x3c13003a
    ctx->pc = 0x2dbf48u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2dbf4c: 0x26732bb0
    ctx->pc = 0x2dbf4cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 11184));
    // 0x2dbf50: 0x700014a9
    ctx->pc = 0x2dbf50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbf54: 0x7e620000
    ctx->pc = 0x2dbf54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x2dbf58: 0x2670ffb0
    ctx->pc = 0x2dbf58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294967216));
    // 0x2dbf5c: 0xde020050
    ctx->pc = 0x2dbf5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dbf60: 0x24038000
    ctx->pc = 0x2dbf60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2dbf64: 0x431024
    ctx->pc = 0x2dbf64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbf68: 0x24030008
    ctx->pc = 0x2dbf68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dbf6c: 0x431025
    ctx->pc = 0x2dbf6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbf70: 0x34038000
    ctx->pc = 0x2dbf70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2dbf74: 0x431025
    ctx->pc = 0x2dbf74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbf78: 0x2403ffff
    ctx->pc = 0x2dbf78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbf7c: 0x3193a
    ctx->pc = 0x2dbf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2dbf80: 0x431024
    ctx->pc = 0x2dbf80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbf84: 0x34038000
    ctx->pc = 0x2dbf84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2dbf88: 0x31b7c
    ctx->pc = 0x2dbf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2dbf8c: 0x431025
    ctx->pc = 0x2dbf8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbf90: 0xfe020050
    ctx->pc = 0x2dbf90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x2dbf94: 0xde020058
    ctx->pc = 0x2dbf94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2dbf98: 0x2403fff0
    ctx->pc = 0x2dbf98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2dbf9c: 0x431024
    ctx->pc = 0x2dbf9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbfa0: 0x2403000e
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2dbfa4: 0x431025
    ctx->pc = 0x2dbfa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbfa8: 0xfe020058
    ctx->pc = 0x2dbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x2dbfac: 0x14a400
    ctx->pc = 0x2dbfacu;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 20), 16));
    // 0x2dbfb0: 0x1117c2
    ctx->pc = 0x2dbfb0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 31));
    // 0x2dbfb4: 0x2221021
    ctx->pc = 0x2dbfb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dbfb8: 0x21043
    ctx->pc = 0x2dbfb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2dbfbc: 0x2447001f
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 31));
    // 0x2dbfc0: 0x2442003e
    ctx->pc = 0x2dbfc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 62));
    // 0x2dbfc4: 0x2404ffff
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbfc8: 0x87182a
    ctx->pc = 0x2dbfc8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x2dbfcc: 0x43380a
    ctx->pc = 0x2dbfccu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x2dbfd0: 0x73943
    ctx->pc = 0x2dbfd0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x2dbfd4: 0x2622001f
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 31));
    // 0x2dbfd8: 0x2631003e
    ctx->pc = 0x2dbfd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 62));
    // 0x2dbfdc: 0x82202a
    ctx->pc = 0x2dbfdcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2dbfe0: 0x224100a
    ctx->pc = 0x2dbfe0u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x2dbfe4: 0x21143
    ctx->pc = 0x2dbfe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2dbfe8: 0xe23821
    ctx->pc = 0x2dbfe8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dbfec: 0x73d80
    ctx->pc = 0x2dbfecu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 22));
    // 0x2dbff0: 0x26040060
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    // 0x2dbff4: 0x282d
    ctx->pc = 0x2dbff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbff8: 0x143403
    ctx->pc = 0x2dbff8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 16));
    // 0x2dbffc: 0x73c03
    ctx->pc = 0x2dbffcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2dc000: 0x402d
    ctx->pc = 0x2dc000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc004: 0xc0b81a0
    ctx->pc = 0x2DC004u;
    SET_GPR_U32(ctx, 31, 0x2DC00Cu);
    ctx->pc = 0x2DC008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDrawEnv_0x2e0680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC00Cu; }
    }
    if (ctx->pc != 0x2DC00Cu) { return; }
    ctx->pc = 0x2DC00Cu;
    // 0x2dc00c: 0xfe000080
    ctx->pc = 0x2dc00cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 0));
    // 0x2dc010: 0xc0c0e18
    ctx->pc = 0x2DC010u;
    SET_GPR_U32(ctx, 31, 0x2DC018u);
    ctx->pc = 0x2DC014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC018u; }
    }
    if (ctx->pc != 0x2DC018u) { return; }
    ctx->pc = 0x2DC018u;
    // 0x2dc018: 0x202d
    ctx->pc = 0x2dc018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc01c: 0xc0b8338
    ctx->pc = 0x2DC01Cu;
    SET_GPR_U32(ctx, 31, 0x2DC024u);
    ctx->pc = 0x2DC020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC024u; }
    }
    if (ctx->pc != 0x2DC024u) { return; }
    ctx->pc = 0x2DC024u;
    // 0x2dc024: 0xc0b821a
    ctx->pc = 0x2DC024u;
    SET_GPR_U32(ctx, 31, 0x2DC02Cu);
    ctx->pc = 0x2DC028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDrawEnv_0x2e0868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC02Cu; }
    }
    if (ctx->pc != 0x2DC02Cu) { return; }
    ctx->pc = 0x2DC02Cu;
    // 0x2dc02c: 0x27b00010
    ctx->pc = 0x2dc02cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dc030: 0x200202d
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc034: 0xc0b8e66
    ctx->pc = 0x2DC034u;
    SET_GPR_U32(ctx, 31, 0x2DC03Cu);
    ctx->pc = 0x2DC038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3998u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x2e3998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC03Cu; }
    }
    if (ctx->pc != 0x2DC03Cu) { return; }
    ctx->pc = 0x2DC03Cu;
    // 0x2dc03c: 0xc0b8e6a
    ctx->pc = 0x2DC03Cu;
    SET_GPR_U32(ctx, 31, 0x2DC044u);
    ctx->pc = 0x2DC040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x2e39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC044u; }
    }
    if (ctx->pc != 0x2DC044u) { return; }
    ctx->pc = 0x2DC044u;
    // 0x2dc044: 0x200202d
    ctx->pc = 0x2dc044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc048: 0x282d
    ctx->pc = 0x2dc048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc04c: 0x302d
    ctx->pc = 0x2dc04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc050: 0xc0b8ec8
    ctx->pc = 0x2DC050u;
    SET_GPR_U32(ctx, 31, 0x2DC058u);
    ctx->pc = 0x2DC054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x2e3b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC058u; }
    }
    if (ctx->pc != 0x2DC058u) { return; }
    ctx->pc = 0x2DC058u;
    // 0x2dc058: 0x200202d
    ctx->pc = 0x2dc058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc05c: 0xc0b8eec
    ctx->pc = 0x2DC05Cu;
    SET_GPR_U32(ctx, 31, 0x2DC064u);
    ctx->pc = 0x2DC060u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2E3BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x2e3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC064u; }
    }
    if (ctx->pc != 0x2DC064u) { return; }
    ctx->pc = 0x2DC064u;
    // 0x2dc064: 0x200202d
    ctx->pc = 0x2dc064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc068: 0x282d
    ctx->pc = 0x2dc068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc06c: 0xc0b8f1a
    ctx->pc = 0x2DC06Cu;
    SET_GPR_U32(ctx, 31, 0x2DC074u);
    ctx->pc = 0x2DC070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC074u; }
    }
    if (ctx->pc != 0x2DC074u) { return; }
    ctx->pc = 0x2DC074u;
    // 0x2dc074: 0x129238
    ctx->pc = 0x2dc074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 8);
    // 0x2dc078: 0x2f29025
    ctx->pc = 0x2dc078u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x2dc07c: 0x15ac38
    ctx->pc = 0x2dc07cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x2dc080: 0x200202d
    ctx->pc = 0x2dc080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc084: 0x24050001
    ctx->pc = 0x2dc084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc088: 0xc0b8f1a
    ctx->pc = 0x2DC088u;
    SET_GPR_U32(ctx, 31, 0x2DC090u);
    ctx->pc = 0x2DC08Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC090u; }
    }
    if (ctx->pc != 0x2DC090u) { return; }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x200202d
    ctx->pc = 0x2dc090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc094: 0x24050005
    ctx->pc = 0x2dc094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc098: 0xc0b8f1a
    ctx->pc = 0x2DC098u;
    SET_GPR_U32(ctx, 31, 0x2DC0A0u);
    ctx->pc = 0x2DC09Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0A0u; }
    }
    if (ctx->pc != 0x2DC0A0u) { return; }
    ctx->pc = 0x2DC0A0u;
    // 0x2dc0a0: 0x200202d
    ctx->pc = 0x2dc0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0a4: 0x34069600
    ctx->pc = 0x2dc0a4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 38400));
    // 0x2dc0a8: 0x63438
    ctx->pc = 0x2dc0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc0ac: 0x34c62800
    ctx->pc = 0x2dc0acu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 10240));
    // 0x2dc0b0: 0xc0b8f1a
    ctx->pc = 0x2DC0B0u;
    SET_GPR_U32(ctx, 31, 0x2DC0B8u);
    ctx->pc = 0x2DC0B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0B8u; }
    }
    if (ctx->pc != 0x2DC0B8u) { return; }
    ctx->pc = 0x2DC0B8u;
    // 0x2dc0b8: 0xc0b8ef2
    ctx->pc = 0x2DC0B8u;
    SET_GPR_U32(ctx, 31, 0x2DC0C0u);
    ctx->pc = 0x2DC0BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x2e3bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0C0u; }
    }
    if (ctx->pc != 0x2DC0C0u) { return; }
    ctx->pc = 0x2DC0C0u;
    // 0x2dc0c0: 0xc0b8e6e
    ctx->pc = 0x2DC0C0u;
    SET_GPR_U32(ctx, 31, 0x2DC0C8u);
    ctx->pc = 0x2DC0C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E39B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x2e39b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0C8u; }
    }
    if (ctx->pc != 0x2DC0C8u) { return; }
    ctx->pc = 0x2DC0C8u;
    // 0x2dc0c8: 0xc0c0e18
    ctx->pc = 0x2DC0C8u;
    SET_GPR_U32(ctx, 31, 0x2DC0D0u);
    ctx->pc = 0x2DC0CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0D0u; }
    }
    if (ctx->pc != 0x2DC0D0u) { return; }
    ctx->pc = 0x2DC0D0u;
    // 0x2dc0d0: 0x202d
    ctx->pc = 0x2dc0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0d4: 0xc0b8338
    ctx->pc = 0x2DC0D4u;
    SET_GPR_U32(ctx, 31, 0x2DC0DCu);
    ctx->pc = 0x2DC0D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0DCu; }
    }
    if (ctx->pc != 0x2DC0DCu) { return; }
    ctx->pc = 0x2DC0DCu;
    // 0x2dc0dc: 0x3c0202d
    ctx->pc = 0x2dc0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0e0: 0xc0b87b2
    ctx->pc = 0x2DC0E0u;
    SET_GPR_U32(ctx, 31, 0x2DC0E8u);
    ctx->pc = 0x2DC0E4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2E1EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x2e1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0E8u; }
    }
    if (ctx->pc != 0x2DC0E8u) { return; }
    ctx->pc = 0x2DC0E8u;
    // 0x2dc0e8: 0x202d
    ctx->pc = 0x2dc0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0ec: 0xc0b8338
    ctx->pc = 0x2DC0ECu;
    SET_GPR_U32(ctx, 31, 0x2DC0F4u);
    ctx->pc = 0x2DC0F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0F4u; }
    }
    if (ctx->pc != 0x2DC0F4u) { return; }
    ctx->pc = 0x2DC0F4u;
    // 0x2dc0f4: 0xdfbf0110
    ctx->pc = 0x2dc0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2dc0f8: 0xdfbe0100
    ctx->pc = 0x2dc0f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dc0fc: 0xdfb700f0
    ctx->pc = 0x2dc0fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dc100: 0xdfb600e0
    ctx->pc = 0x2dc100u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2dc104: 0xdfb500d0
    ctx->pc = 0x2dc104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dc108: 0xdfb400c0
    ctx->pc = 0x2dc108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dc10c: 0xdfb300b0
    ctx->pc = 0x2dc10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc110: 0xdfb200a0
    ctx->pc = 0x2dc110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc114: 0xdfb10090
    ctx->pc = 0x2dc114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dc118: 0xdfb00080
    ctx->pc = 0x2dc118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc11c: 0x3e00008
    ctx->pc = 0x2DC11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC124u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadConfig
// Address: 0x108f68 - 0x109258
void loadConfig_0x108f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108f68u;

    // 0x108f68: 0x27bdfef0
    ctx->pc = 0x108f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x108f6c: 0x3c040017
    ctx->pc = 0x108f6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108f70: 0xffb20090
    ctx->pc = 0x108f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x108f74: 0x24050001
    ctx->pc = 0x108f74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108f78: 0xffb10080
    ctx->pc = 0x108f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x108f7c: 0x248433c0
    ctx->pc = 0x108f7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13248));
    // 0x108f80: 0xffbf0100
    ctx->pc = 0x108f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x108f84: 0x2411ffff
    ctx->pc = 0x108f84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108f88: 0xffbe00f0
    ctx->pc = 0x108f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x108f8c: 0xffb700e0
    ctx->pc = 0x108f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x108f90: 0xffb600d0
    ctx->pc = 0x108f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x108f94: 0xffb500c0
    ctx->pc = 0x108f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x108f98: 0xffb400b0
    ctx->pc = 0x108f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x108f9c: 0xffb300a0
    ctx->pc = 0x108f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x108fa0: 0xc0444ea
    ctx->pc = 0x108FA0u;
    SET_GPR_U32(ctx, 31, 0x108FA8u);
    ctx->pc = 0x108FA4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    ctx->pc = 0x1113A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1113a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108FA8u; }
    }
    if (ctx->pc != 0x108FA8u) { return; }
    ctx->pc = 0x108FA8u;
    // 0x108fa8: 0x40902d
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fac: 0x6430009
    ctx->pc = 0x108FACu;
    {
        const bool branch_taken_0x108fac = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108fac) {
            ctx->pc = 0x108FB0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x108FD4u;
            goto label_108fd4;
        }
    }
    ctx->pc = 0x108FB4u;
    // 0x108fb4: 0x3c040017
    ctx->pc = 0x108fb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108fb8: 0xc04ace4
    ctx->pc = 0x108FB8u;
    SET_GPR_U32(ctx, 31, 0x108FC0u);
    ctx->pc = 0x108FBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13280));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108FC0u; }
    }
    if (ctx->pc != 0x108FC0u) { return; }
    ctx->pc = 0x108FC0u;
    // 0x108fc0: 0x3c040017
    ctx->pc = 0x108fc0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108fc4: 0x240282d
    ctx->pc = 0x108fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fc8: 0xc04ace4
    ctx->pc = 0x108FC8u;
    SET_GPR_U32(ctx, 31, 0x108FD0u);
    ctx->pc = 0x108FCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13312));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108FD0u; }
    }
    if (ctx->pc != 0x108FD0u) { return; }
    ctx->pc = 0x108FD0u;
    // 0x108fd0: 0x240202d
    ctx->pc = 0x108fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108fd4:
    // 0x108fd4: 0x282d
    ctx->pc = 0x108fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fd8: 0xc0445ec
    ctx->pc = 0x108FD8u;
    SET_GPR_U32(ctx, 31, 0x108FE0u);
    ctx->pc = 0x108FDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1117B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108FE0u; }
    }
    if (ctx->pc != 0x108FE0u) { return; }
    ctx->pc = 0x108FE0u;
    // 0x108fe0: 0x40802d
    ctx->pc = 0x108fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fe4: 0x240202d
    ctx->pc = 0x108fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fe8: 0x282d
    ctx->pc = 0x108fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fec: 0xc0445ec
    ctx->pc = 0x108FECu;
    SET_GPR_U32(ctx, 31, 0x108FF4u);
    ctx->pc = 0x108FF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1117B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108FF4u; }
    }
    if (ctx->pc != 0x108FF4u) { return; }
    ctx->pc = 0x108FF4u;
    // 0x108ff4: 0x1a00008a
    ctx->pc = 0x108FF4u;
    {
        const bool branch_taken_0x108ff4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x108FF8u;
        SET_GPR_U32(ctx, 20, ((uint32_t)19 << 16));
        if (branch_taken_0x108ff4) {
            ctx->pc = 0x109220u;
            goto label_109220;
        }
    }
    ctx->pc = 0x108FFCu;
    // 0x108ffc: 0x3c150013
    ctx->pc = 0x108ffcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)19 << 16));
    // 0x109000: 0x3c160013
    ctx->pc = 0x109000u;
    SET_GPR_U32(ctx, 22, ((uint32_t)19 << 16));
    // 0x109004: 0x3c170013
    ctx->pc = 0x109004u;
    SET_GPR_U32(ctx, 23, ((uint32_t)19 << 16));
    // 0x109008: 0x3c1e0013
    ctx->pc = 0x109008u;
    SET_GPR_U32(ctx, 30, ((uint32_t)19 << 16));
    // 0x10900c: 0x26310001
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_109010:
    // 0x109010: 0x240202d
    ctx->pc = 0x109010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109014: 0x3b18021
    ctx->pc = 0x109014u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x109018: 0x24060001
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10901c: 0xc04467a
    ctx->pc = 0x10901Cu;
    SET_GPR_U32(ctx, 31, 0x109024u);
    ctx->pc = 0x109020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109024u; }
    }
    if (ctx->pc != 0x109024u) { return; }
    ctx->pc = 0x109024u;
    // 0x109024: 0x82030000
    ctx->pc = 0x109024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109028: 0x2402000a
    ctx->pc = 0x109028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10902c: 0x1462fff8
    ctx->pc = 0x10902Cu;
    {
        const bool branch_taken_0x10902c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x109030u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x10902c) {
            ctx->pc = 0x109010u;
            goto label_109010;
        }
    }
    ctx->pc = 0x109034u;
    // 0x109034: 0x3a0202d
    ctx->pc = 0x109034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109038: 0xc04a83a
    ctx->pc = 0x109038u;
    SET_GPR_U32(ctx, 31, 0x109040u);
    ctx->pc = 0x10903Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109040u; }
    }
    if (ctx->pc != 0x109040u) { return; }
    ctx->pc = 0x109040u;
    // 0x109040: 0xa6821468
    ctx->pc = 0x109040u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 5224), (uint16_t)GPR_U32(ctx, 2));
    // 0x109044: 0x27b0ffff
    ctx->pc = 0x109044u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x109048: 0x26100001
    ctx->pc = 0x109048u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x10904c: 0x0
    ctx->pc = 0x10904cu;
    // NOP
label_109050:
    // 0x109050: 0x240202d
    ctx->pc = 0x109050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109054: 0x200282d
    ctx->pc = 0x109054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109058: 0xc04467a
    ctx->pc = 0x109058u;
    SET_GPR_U32(ctx, 31, 0x109060u);
    ctx->pc = 0x10905Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109060u; }
    }
    if (ctx->pc != 0x109060u) { return; }
    ctx->pc = 0x109060u;
    // 0x109060: 0x82030000
    ctx->pc = 0x109060u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109064: 0x1471fffa
    ctx->pc = 0x109064u;
    {
        const bool branch_taken_0x109064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x109068u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x109064) {
            ctx->pc = 0x109050u;
            goto label_109050;
        }
    }
    ctx->pc = 0x10906Cu;
    // 0x10906c: 0x3a0202d
    ctx->pc = 0x10906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109070: 0xc04a83a
    ctx->pc = 0x109070u;
    SET_GPR_U32(ctx, 31, 0x109078u);
    ctx->pc = 0x109074u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109078u; }
    }
    if (ctx->pc != 0x109078u) { return; }
    ctx->pc = 0x109078u;
    // 0x109078: 0x26831468
    ctx->pc = 0x109078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x10907c: 0x27b0ffff
    ctx->pc = 0x10907cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x109080: 0xa4620002
    ctx->pc = 0x109080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x109084: 0x26100001
    ctx->pc = 0x109084u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_109088:
    // 0x109088: 0x240202d
    ctx->pc = 0x109088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10908c: 0x200282d
    ctx->pc = 0x10908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109090: 0xc04467a
    ctx->pc = 0x109090u;
    SET_GPR_U32(ctx, 31, 0x109098u);
    ctx->pc = 0x109094u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109098u; }
    }
    if (ctx->pc != 0x109098u) { return; }
    ctx->pc = 0x109098u;
    // 0x109098: 0x82030000
    ctx->pc = 0x109098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10909c: 0x1471fffa
    ctx->pc = 0x10909Cu;
    {
        const bool branch_taken_0x10909c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x1090A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x10909c) {
            ctx->pc = 0x109088u;
            goto label_109088;
        }
    }
    ctx->pc = 0x1090A4u;
    // 0x1090a4: 0x3a0202d
    ctx->pc = 0x1090a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090a8: 0xc04a83a
    ctx->pc = 0x1090A8u;
    SET_GPR_U32(ctx, 31, 0x1090B0u);
    ctx->pc = 0x1090ACu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1090B0u; }
    }
    if (ctx->pc != 0x1090B0u) { return; }
    ctx->pc = 0x1090B0u;
    // 0x1090b0: 0x26831468
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x1090b4: 0x27b0ffff
    ctx->pc = 0x1090b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x1090b8: 0xa4620004
    ctx->pc = 0x1090b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1090bc: 0x26100001
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1090c0:
    // 0x1090c0: 0x240202d
    ctx->pc = 0x1090c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090c4: 0x200282d
    ctx->pc = 0x1090c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090c8: 0xc04467a
    ctx->pc = 0x1090C8u;
    SET_GPR_U32(ctx, 31, 0x1090D0u);
    ctx->pc = 0x1090CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1090D0u; }
    }
    if (ctx->pc != 0x1090D0u) { return; }
    ctx->pc = 0x1090D0u;
    // 0x1090d0: 0x82030000
    ctx->pc = 0x1090d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1090d4: 0x1471fffa
    ctx->pc = 0x1090D4u;
    {
        const bool branch_taken_0x1090d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x1090D8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1090d4) {
            ctx->pc = 0x1090C0u;
            goto label_1090c0;
        }
    }
    ctx->pc = 0x1090DCu;
    // 0x1090dc: 0x3a0202d
    ctx->pc = 0x1090dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090e0: 0xc04a83a
    ctx->pc = 0x1090E0u;
    SET_GPR_U32(ctx, 31, 0x1090E8u);
    ctx->pc = 0x1090E4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1090E8u; }
    }
    if (ctx->pc != 0x1090E8u) { return; }
    ctx->pc = 0x1090E8u;
    // 0x1090e8: 0x2413000a
    ctx->pc = 0x1090e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1090ec: 0x26831468
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x1090f0: 0x27b0ffff
    ctx->pc = 0x1090f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x1090f4: 0xa4620006
    ctx->pc = 0x1090f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_1090f8:
    // 0x1090f8: 0x26100001
    ctx->pc = 0x1090f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1090fc: 0x240202d
    ctx->pc = 0x1090fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109100: 0x200282d
    ctx->pc = 0x109100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109104: 0xc04467a
    ctx->pc = 0x109104u;
    SET_GPR_U32(ctx, 31, 0x10910Cu);
    ctx->pc = 0x109108u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10910Cu; }
    }
    if (ctx->pc != 0x10910Cu) { return; }
    ctx->pc = 0x10910Cu;
    // 0x10910c: 0x82020000
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109110: 0x1453fff9
    ctx->pc = 0x109110u;
    {
        const bool branch_taken_0x109110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x109114u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x109110) {
            ctx->pc = 0x1090F8u;
            goto label_1090f8;
        }
    }
    ctx->pc = 0x109118u;
    // 0x109118: 0x220302d
    ctx->pc = 0x109118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10911c: 0x26a41470
    ctx->pc = 0x10911cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 5232));
    // 0x109120: 0x3a0282d
    ctx->pc = 0x109120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109124: 0xc04af68
    ctx->pc = 0x109124u;
    SET_GPR_U32(ctx, 31, 0x10912Cu);
    ctx->pc = 0x109128u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x12BDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x12bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10912Cu; }
    }
    if (ctx->pc != 0x10912Cu) { return; }
    ctx->pc = 0x10912Cu;
    // 0x10912c: 0x27b0ffff
    ctx->pc = 0x10912cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x109130: 0x26100001
    ctx->pc = 0x109130u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x109134: 0x0
    ctx->pc = 0x109134u;
    // NOP
label_109138:
    // 0x109138: 0x240202d
    ctx->pc = 0x109138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10913c: 0x200282d
    ctx->pc = 0x10913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109140: 0xc04467a
    ctx->pc = 0x109140u;
    SET_GPR_U32(ctx, 31, 0x109148u);
    ctx->pc = 0x109144u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109148u; }
    }
    if (ctx->pc != 0x109148u) { return; }
    ctx->pc = 0x109148u;
    // 0x109148: 0x82030000
    ctx->pc = 0x109148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10914c: 0x1471fffa
    ctx->pc = 0x10914Cu;
    {
        const bool branch_taken_0x10914c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x109150u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x10914c) {
            ctx->pc = 0x109138u;
            goto label_109138;
        }
    }
    ctx->pc = 0x109154u;
    // 0x109154: 0x3a0202d
    ctx->pc = 0x109154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109158: 0xc04a83a
    ctx->pc = 0x109158u;
    SET_GPR_U32(ctx, 31, 0x109160u);
    ctx->pc = 0x10915Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109160u; }
    }
    if (ctx->pc != 0x109160u) { return; }
    ctx->pc = 0x109160u;
    // 0x109160: 0x2413000a
    ctx->pc = 0x109160u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 10));
    // 0x109164: 0x26831468
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 5224));
    // 0x109168: 0x27b0ffff
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x10916c: 0xa4620010
    ctx->pc = 0x10916cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
label_109170:
    // 0x109170: 0x26100001
    ctx->pc = 0x109170u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x109174: 0x240202d
    ctx->pc = 0x109174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109178: 0x200282d
    ctx->pc = 0x109178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10917c: 0xc04467a
    ctx->pc = 0x10917Cu;
    SET_GPR_U32(ctx, 31, 0x109184u);
    ctx->pc = 0x109180u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109184u; }
    }
    if (ctx->pc != 0x109184u) { return; }
    ctx->pc = 0x109184u;
    // 0x109184: 0x82020000
    ctx->pc = 0x109184u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109188: 0x1453fff9
    ctx->pc = 0x109188u;
    {
        const bool branch_taken_0x109188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x10918Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x109188) {
            ctx->pc = 0x109170u;
            goto label_109170;
        }
    }
    ctx->pc = 0x109190u;
    // 0x109190: 0x220302d
    ctx->pc = 0x109190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109194: 0x26c4147a
    ctx->pc = 0x109194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 5242));
    // 0x109198: 0x3a0282d
    ctx->pc = 0x109198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10919c: 0xc04af68
    ctx->pc = 0x10919Cu;
    SET_GPR_U32(ctx, 31, 0x1091A4u);
    ctx->pc = 0x1091A0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12BDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x12bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1091A4u; }
    }
    if (ctx->pc != 0x1091A4u) { return; }
    ctx->pc = 0x1091A4u;
    // 0x1091a4: 0x2413000a
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1091a8: 0x27b0ffff
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x1091ac: 0x0
    ctx->pc = 0x1091acu;
    // NOP
label_1091b0:
    // 0x1091b0: 0x26100001
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1091b4: 0x240202d
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091b8: 0x200282d
    ctx->pc = 0x1091b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091bc: 0xc04467a
    ctx->pc = 0x1091BCu;
    SET_GPR_U32(ctx, 31, 0x1091C4u);
    ctx->pc = 0x1091C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1091C4u; }
    }
    if (ctx->pc != 0x1091C4u) { return; }
    ctx->pc = 0x1091C4u;
    // 0x1091c4: 0x82020000
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1091c8: 0x1453fff9
    ctx->pc = 0x1091C8u;
    {
        const bool branch_taken_0x1091c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1091CCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1091c8) {
            ctx->pc = 0x1091B0u;
            goto label_1091b0;
        }
    }
    ctx->pc = 0x1091D0u;
    // 0x1091d0: 0x220302d
    ctx->pc = 0x1091d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d4: 0x26e41486
    ctx->pc = 0x1091d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 5254));
    // 0x1091d8: 0x3a0282d
    ctx->pc = 0x1091d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091dc: 0xc04af68
    ctx->pc = 0x1091DCu;
    SET_GPR_U32(ctx, 31, 0x1091E4u);
    ctx->pc = 0x1091E0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12BDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x12bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1091E4u; }
    }
    if (ctx->pc != 0x1091E4u) { return; }
    ctx->pc = 0x1091E4u;
    // 0x1091e4: 0x2413000a
    ctx->pc = 0x1091e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1091e8: 0x27b0ffff
    ctx->pc = 0x1091e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4294967295));
    // 0x1091ec: 0x0
    ctx->pc = 0x1091ecu;
    // NOP
label_1091f0:
    // 0x1091f0: 0x26100001
    ctx->pc = 0x1091f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1091f4: 0x240202d
    ctx->pc = 0x1091f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091f8: 0x200282d
    ctx->pc = 0x1091f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091fc: 0xc04467a
    ctx->pc = 0x1091FCu;
    SET_GPR_U32(ctx, 31, 0x109204u);
    ctx->pc = 0x109200u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109204u; }
    }
    if (ctx->pc != 0x109204u) { return; }
    ctx->pc = 0x109204u;
    // 0x109204: 0x82020000
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109208: 0x1453fff9
    ctx->pc = 0x109208u;
    {
        const bool branch_taken_0x109208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x10920Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x109208) {
            ctx->pc = 0x1091F0u;
            goto label_1091f0;
        }
    }
    ctx->pc = 0x109210u;
    // 0x109210: 0x27c41492
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 5266));
    // 0x109214: 0x220302d
    ctx->pc = 0x109214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109218: 0xc04af68
    ctx->pc = 0x109218u;
    SET_GPR_U32(ctx, 31, 0x109220u);
    ctx->pc = 0x10921Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12BDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x12bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109220u; }
    }
    if (ctx->pc != 0x109220u) { return; }
    ctx->pc = 0x109220u;
label_109220:
    // 0x109220: 0xc04458c
    ctx->pc = 0x109220u;
    SET_GPR_U32(ctx, 31, 0x109228u);
    ctx->pc = 0x109224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x111630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109228u; }
    }
    if (ctx->pc != 0x109228u) { return; }
    ctx->pc = 0x109228u;
    // 0x109228: 0xdfbf0100
    ctx->pc = 0x109228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10922c: 0xdfbe00f0
    ctx->pc = 0x10922cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x109230: 0xdfb700e0
    ctx->pc = 0x109230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x109234: 0xdfb600d0
    ctx->pc = 0x109234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x109238: 0xdfb500c0
    ctx->pc = 0x109238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10923c: 0xdfb400b0
    ctx->pc = 0x10923cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109240: 0xdfb300a0
    ctx->pc = 0x109240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109244: 0xdfb20090
    ctx->pc = 0x109244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109248: 0xdfb10080
    ctx->pc = 0x109248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10924c: 0xdfb00070
    ctx->pc = 0x10924cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109250: 0x3e00008
    ctx->pc = 0x109250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109254u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108FD4u: goto label_108fd4;
            case 0x109010u: goto label_109010;
            case 0x109050u: goto label_109050;
            case 0x109088u: goto label_109088;
            case 0x1090C0u: goto label_1090c0;
            case 0x1090F8u: goto label_1090f8;
            case 0x109138u: goto label_109138;
            case 0x109170u: goto label_109170;
            case 0x1091B0u: goto label_1091b0;
            case 0x1091F0u: goto label_1091f0;
            case 0x109220u: goto label_109220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109258u;
}

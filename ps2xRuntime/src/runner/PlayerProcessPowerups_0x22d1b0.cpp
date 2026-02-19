#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerProcessPowerups
// Address: 0x22d1b0 - 0x22e3b0
void PlayerProcessPowerups_0x22d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22d1b0u;

label_22d1b0:
    // 0x22d1b0: 0x27bdff90
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_22d1b4:
    // 0x22d1b4: 0xffbf0040
    ctx->pc = 0x22d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22d1b8:
    // 0x22d1b8: 0xffb30030
    ctx->pc = 0x22d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22d1bc:
    // 0x22d1bc: 0xffb20020
    ctx->pc = 0x22d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22d1c0:
    // 0x22d1c0: 0xffb10010
    ctx->pc = 0x22d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22d1c4:
    // 0x22d1c4: 0xffb00000
    ctx->pc = 0x22d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22d1c8:
    // 0x22d1c8: 0xe7b70068
    ctx->pc = 0x22d1c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d1cc:
    // 0x22d1cc: 0xe7b60060
    ctx->pc = 0x22d1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22d1d0:
    // 0x22d1d0: 0xe7b50058
    ctx->pc = 0x22d1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_22d1d4:
    // 0x22d1d4: 0xe7b40050
    ctx->pc = 0x22d1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_22d1d8:
    // 0x22d1d8: 0x80802d
    ctx->pc = 0x22d1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d1dc:
    // 0x22d1dc: 0x4480a000
    ctx->pc = 0x22d1dcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_22d1e0:
    // 0x22d1e0: 0x4600a546
    ctx->pc = 0x22d1e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_22d1e4:
    // 0x22d1e4: 0x3c01bf80
    ctx->pc = 0x22d1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_22d1e8:
    // 0x22d1e8: 0x4481b800
    ctx->pc = 0x22d1e8u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_22d1ec:
    // 0x22d1ec: 0x4600bd86
    ctx->pc = 0x22d1ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_22d1f0:
    // 0x22d1f0: 0x8e120000
    ctx->pc = 0x22d1f0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d1f4:
    // 0x22d1f4: 0xc08afec
label_22d1f8:
    if (ctx->pc == 0x22D1F8u) {
        ctx->pc = 0x22D1F8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D1FCu;
        goto label_22d1fc;
    }
    ctx->pc = 0x22D1F4u;
    SET_GPR_U32(ctx, 31, 0x22D1FCu);
    ctx->pc = 0x22D1F8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetFight_0x22bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1FCu; }
    }
    if (ctx->pc != 0x22D1FCu) { return; }
    ctx->pc = 0x22D1FCu;
label_22d1fc:
    // 0x22d1fc: 0xe6000118
    ctx->pc = 0x22d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_22d200:
    // 0x22d200: 0xc08aff8
label_22d204:
    if (ctx->pc == 0x22D204u) {
        ctx->pc = 0x22D204u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D208u;
        goto label_22d208;
    }
    ctx->pc = 0x22D200u;
    SET_GPR_U32(ctx, 31, 0x22D208u);
    ctx->pc = 0x22D204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22BFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetArmor_0x22bfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D208u; }
    }
    if (ctx->pc != 0x22D208u) { return; }
    ctx->pc = 0x22D208u;
label_22d208:
    // 0x22d208: 0xe600011c
    ctx->pc = 0x22d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_22d20c:
    // 0x22d20c: 0xc08b004
label_22d210:
    if (ctx->pc == 0x22D210u) {
        ctx->pc = 0x22D210u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D214u;
        goto label_22d214;
    }
    ctx->pc = 0x22D20Cu;
    SET_GPR_U32(ctx, 31, 0x22D214u);
    ctx->pc = 0x22D210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C010u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMagic_0x22c010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D214u; }
    }
    if (ctx->pc != 0x22D214u) { return; }
    ctx->pc = 0x22D214u;
label_22d214:
    // 0x22d214: 0xe6000120
    ctx->pc = 0x22d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_22d218:
    // 0x22d218: 0xc08b010
label_22d21c:
    if (ctx->pc == 0x22D21Cu) {
        ctx->pc = 0x22D21Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D220u;
        goto label_22d220;
    }
    ctx->pc = 0x22D218u;
    SET_GPR_U32(ctx, 31, 0x22D220u);
    ctx->pc = 0x22D21Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C040u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetSpeed_0x22c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D220u; }
    }
    if (ctx->pc != 0x22D220u) { return; }
    ctx->pc = 0x22D220u;
label_22d220:
    // 0x22d220: 0xe6000124
    ctx->pc = 0x22d220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_22d224:
    // 0x22d224: 0x8e030008
    ctx->pc = 0x22d224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d228:
    // 0x22d228: 0x24020002
    ctx->pc = 0x22d228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_22d22c:
    // 0x22d22c: 0x10620003
label_22d230:
    if (ctx->pc == 0x22D230u) {
        ctx->pc = 0x22D230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x22D234u;
        goto label_22d234;
    }
    ctx->pc = 0x22D22Cu;
    {
        const bool branch_taken_0x22d22c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22D230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x22d22c) {
            ctx->pc = 0x22D23Cu;
            goto label_22d23c;
        }
    }
    ctx->pc = 0x22D234u;
label_22d234:
    // 0x22d234: 0x14620006
label_22d238:
    if (ctx->pc == 0x22D238u) {
        ctx->pc = 0x22D23Cu;
        goto label_22d23c;
    }
    ctx->pc = 0x22D234u;
    {
        const bool branch_taken_0x22d234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22d234) {
            ctx->pc = 0x22D250u;
            goto label_22d250;
        }
    }
    ctx->pc = 0x22D23Cu;
label_22d23c:
    // 0x22d23c: 0xc08b01c
label_22d240:
    if (ctx->pc == 0x22D240u) {
        ctx->pc = 0x22D240u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D244u;
        goto label_22d244;
    }
    ctx->pc = 0x22D23Cu;
    SET_GPR_U32(ctx, 31, 0x22D244u);
    ctx->pc = 0x22D240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileDmg_0x22c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D244u; }
    }
    if (ctx->pc != 0x22D244u) { return; }
    ctx->pc = 0x22D244u;
label_22d244:
    // 0x22d244: 0xe6000128
    ctx->pc = 0x22d244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_22d248:
    // 0x22d248: 0x10000005
label_22d24c:
    if (ctx->pc == 0x22D24Cu) {
        ctx->pc = 0x22D24Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D250u;
        goto label_22d250;
    }
    ctx->pc = 0x22D248u;
    {
        const bool branch_taken_0x22d248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D24Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x22d248) {
            ctx->pc = 0x22D260u;
            goto label_22d260;
        }
    }
    ctx->pc = 0x22D250u;
label_22d250:
    // 0x22d250: 0xc08b01c
label_22d254:
    if (ctx->pc == 0x22D254u) {
        ctx->pc = 0x22D254u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22D258u;
        goto label_22d258;
    }
    ctx->pc = 0x22D250u;
    SET_GPR_U32(ctx, 31, 0x22D258u);
    ctx->pc = 0x22D254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileDmg_0x22c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D258u; }
    }
    if (ctx->pc != 0x22D258u) { return; }
    ctx->pc = 0x22D258u;
label_22d258:
    // 0x22d258: 0xe6000128
    ctx->pc = 0x22d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_22d25c:
    // 0x22d25c: 0xc60c0108
    ctx->pc = 0x22d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22d260:
    // 0x22d260: 0xc08b028
label_22d264:
    if (ctx->pc == 0x22D264u) {
        ctx->pc = 0x22D268u;
        goto label_22d268;
    }
    ctx->pc = 0x22D260u;
    SET_GPR_U32(ctx, 31, 0x22D268u);
    ctx->pc = 0x22C0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileSpd_0x22c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D268u; }
    }
    if (ctx->pc != 0x22D268u) { return; }
    ctx->pc = 0x22D268u;
label_22d268:
    // 0x22d268: 0xe600012c
    ctx->pc = 0x22d268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_22d26c:
    // 0x22d26c: 0xae000130
    ctx->pc = 0x22d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_22d270:
    // 0x22d270: 0xae000134
    ctx->pc = 0x22d270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_22d274:
    // 0x22d274: 0x8e130138
    ctx->pc = 0x22d274u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d278:
    // 0x22d278: 0xae000138
    ctx->pc = 0x22d278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_22d27c:
    // 0x22d27c: 0x282d
    ctx->pc = 0x22d27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d280:
    // 0x22d280: 0x51900
    ctx->pc = 0x22d280u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_22d284:
    // 0x22d284: 0x0
    ctx->pc = 0x22d284u;
    // NOP
label_22d288:
    // 0x22d288: 0x26020144
    ctx->pc = 0x22d288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 324));
label_22d28c:
    // 0x22d28c: 0x432021
    ctx->pc = 0x22d28cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d290:
    // 0x22d290: 0x44800000
    ctx->pc = 0x22d290u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d294:
    // 0x22d294: 0xc4820000
    ctx->pc = 0x22d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d298:
    // 0x22d298: 0x46001032
    ctx->pc = 0x22d298u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d29c:
    // 0x22d29c: 0x0
    ctx->pc = 0x22d29cu;
    // NOP
label_22d2a0:
    // 0x22d2a0: 0x450300d3
label_22d2a4:
    if (ctx->pc == 0x22D2A4u) {
        ctx->pc = 0x22D2A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x22D2A8u;
        goto label_22d2a8;
    }
    ctx->pc = 0x22D2A0u;
    {
        const bool branch_taken_0x22d2a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d2a0) {
            ctx->pc = 0x22D2A4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x22D5F0u;
            goto label_22d5f0;
        }
    }
    ctx->pc = 0x22D2A8u;
label_22d2a8:
    // 0x22d2a8: 0x3c020034
    ctx->pc = 0x22d2a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_22d2ac:
    // 0x22d2ac: 0x8c43e7f0
    ctx->pc = 0x22d2acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_22d2b0:
    // 0x22d2b0: 0x2402000d
    ctx->pc = 0x22d2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_22d2b4:
    // 0x22d2b4: 0x1062002e
label_22d2b8:
    if (ctx->pc == 0x22D2B8u) {
        ctx->pc = 0x22D2B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x22D2BCu;
        goto label_22d2bc;
    }
    ctx->pc = 0x22D2B4u;
    {
        const bool branch_taken_0x22d2b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22D2B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x22d2b4) {
            ctx->pc = 0x22D370u;
            goto label_22d370;
        }
    }
    ctx->pc = 0x22D2BCu;
label_22d2bc:
    // 0x22d2bc: 0x8c42dbac
    ctx->pc = 0x22d2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_22d2c0:
    // 0x22d2c0: 0x5440002c
label_22d2c4:
    if (ctx->pc == 0x22D2C4u) {
        ctx->pc = 0x22D2C4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D2C8u;
        goto label_22d2c8;
    }
    ctx->pc = 0x22D2C0u;
    {
        const bool branch_taken_0x22d2c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22d2c0) {
            ctx->pc = 0x22D2C4u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D374u;
            goto label_22d374;
        }
    }
    ctx->pc = 0x22D2C8u;
label_22d2c8:
    // 0x22d2c8: 0x3c020032
    ctx->pc = 0x22d2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22d2cc:
    // 0x22d2cc: 0x8c42080c
    ctx->pc = 0x22d2ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_22d2d0:
    // 0x22d2d0: 0x54400028
label_22d2d4:
    if (ctx->pc == 0x22D2D4u) {
        ctx->pc = 0x22D2D4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D2D8u;
        goto label_22d2d8;
    }
    ctx->pc = 0x22D2D0u;
    {
        const bool branch_taken_0x22d2d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22d2d0) {
            ctx->pc = 0x22D2D4u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D374u;
            goto label_22d374;
        }
    }
    ctx->pc = 0x22D2D8u;
label_22d2d8:
    // 0x22d2d8: 0x46020034
    ctx->pc = 0x22d2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d2dc:
    // 0x22d2dc: 0x0
    ctx->pc = 0x22d2dcu;
    // NOP
label_22d2e0:
    // 0x22d2e0: 0x45000023
label_22d2e4:
    if (ctx->pc == 0x22D2E4u) {
        ctx->pc = 0x22D2E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x22D2E8u;
        goto label_22d2e8;
    }
    ctx->pc = 0x22D2E0u;
    {
        const bool branch_taken_0x22d2e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D2E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x22d2e0) {
            ctx->pc = 0x22D370u;
            goto label_22d370;
        }
    }
    ctx->pc = 0x22D2E8u;
label_22d2e8:
    // 0x22d2e8: 0x8c42d934
    ctx->pc = 0x22d2e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_22d2ec:
    // 0x22d2ec: 0x440000f
label_22d2f0:
    if (ctx->pc == 0x22D2F0u) {
        ctx->pc = 0x22D2F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x22D2F4u;
        goto label_22d2f4;
    }
    ctx->pc = 0x22D2ECu;
    {
        const bool branch_taken_0x22d2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22D2F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x22d2ec) {
            ctx->pc = 0x22D32Cu;
            goto label_22d32c;
        }
    }
    ctx->pc = 0x22D2F4u;
label_22d2f4:
    // 0x22d2f4: 0x8c42d800
    ctx->pc = 0x22d2f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957056)));
label_22d2f8:
    // 0x22d2f8: 0x10400014
label_22d2fc:
    if (ctx->pc == 0x22D2FCu) {
        ctx->pc = 0x22D2FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x22D300u;
        goto label_22d300;
    }
    ctx->pc = 0x22D2F8u;
    {
        const bool branch_taken_0x22d2f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D2FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x22d2f8) {
            ctx->pc = 0x22D34Cu;
            goto label_22d34c;
        }
    }
    ctx->pc = 0x22D300u;
label_22d300:
    // 0x22d300: 0x8c42d804
    ctx->pc = 0x22d300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957060)));
label_22d304:
    // 0x22d304: 0x14400012
label_22d308:
    if (ctx->pc == 0x22D308u) {
        ctx->pc = 0x22D308u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D30Cu;
        goto label_22d30c;
    }
    ctx->pc = 0x22D304u;
    {
        const bool branch_taken_0x22d304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22D308u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x22d304) {
            ctx->pc = 0x22D350u;
            goto label_22d350;
        }
    }
    ctx->pc = 0x22D30Cu;
label_22d30c:
    // 0x22d30c: 0x3c020031
    ctx->pc = 0x22d30cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_22d310:
    // 0x22d310: 0x3c014040
    ctx->pc = 0x22d310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_22d314:
    // 0x22d314: 0x44810800
    ctx->pc = 0x22d314u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_22d318:
    // 0x22d318: 0xc440ffa8
    ctx->pc = 0x22d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d31c:
    // 0x22d31c: 0x46010002
    ctx->pc = 0x22d31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d320:
    // 0x22d320: 0x46001001
    ctx->pc = 0x22d320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_22d324:
    // 0x22d324: 0x10000009
label_22d328:
    if (ctx->pc == 0x22D328u) {
        ctx->pc = 0x22D328u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x22D32Cu;
        goto label_22d32c;
    }
    ctx->pc = 0x22D324u;
    {
        const bool branch_taken_0x22d324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D328u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x22d324) {
            ctx->pc = 0x22D34Cu;
            goto label_22d34c;
        }
    }
    ctx->pc = 0x22D32Cu;
label_22d32c:
    // 0x22d32c: 0x51900
    ctx->pc = 0x22d32cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_22d330:
    // 0x22d330: 0x26020144
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 324));
label_22d334:
    // 0x22d334: 0x431021
    ctx->pc = 0x22d334u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d338:
    // 0x22d338: 0x3c030031
    ctx->pc = 0x22d338u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_22d33c:
    // 0x22d33c: 0xc4400000
    ctx->pc = 0x22d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d340:
    // 0x22d340: 0xc461ffa8
    ctx->pc = 0x22d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d344:
    // 0x22d344: 0x46010001
    ctx->pc = 0x22d344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22d348:
    // 0x22d348: 0xe4400000
    ctx->pc = 0x22d348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22d34c:
    // 0x22d34c: 0x51100
    ctx->pc = 0x22d34cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d350:
    // 0x22d350: 0x26030144
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 324));
label_22d354:
    // 0x22d354: 0x621821
    ctx->pc = 0x22d354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d358:
    // 0x22d358: 0x44800800
    ctx->pc = 0x22d358u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_22d35c:
    // 0x22d35c: 0xc4600000
    ctx->pc = 0x22d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d360:
    // 0x22d360: 0x46010034
    ctx->pc = 0x22d360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d364:
    // 0x22d364: 0x0
    ctx->pc = 0x22d364u;
    // NOP
label_22d368:
    // 0x22d368: 0x45030001
label_22d36c:
    if (ctx->pc == 0x22D36Cu) {
        ctx->pc = 0x22D36Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x22D370u;
        goto label_22d370;
    }
    ctx->pc = 0x22D368u;
    {
        const bool branch_taken_0x22d368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d368) {
            ctx->pc = 0x22D36Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->pc = 0x22D370u;
            goto label_22d370;
        }
    }
    ctx->pc = 0x22D370u;
label_22d370:
    // 0x22d370: 0x51900
    ctx->pc = 0x22d370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_22d374:
    // 0x22d374: 0x2031021
    ctx->pc = 0x22d374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_22d378:
    // 0x22d378: 0xc4420144
    ctx->pc = 0x22d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22d37c:
    // 0x22d37c: 0x40182d
    ctx->pc = 0x22d37cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d380:
    // 0x22d380: 0x8c620148
    ctx->pc = 0x22d380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 328)));
label_22d384:
    // 0x22d384: 0x2443fffb
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967291));
label_22d388:
    // 0x22d388: 0x2c620005
    ctx->pc = 0x22d388u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_22d38c:
    // 0x22d38c: 0x10400097
label_22d390:
    if (ctx->pc == 0x22D390u) {
        ctx->pc = 0x22D390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x22D394u;
        goto label_22d394;
    }
    ctx->pc = 0x22D38Cu;
    {
        const bool branch_taken_0x22d38c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22d38c) {
            ctx->pc = 0x22D5ECu;
            goto label_22d5ec;
        }
    }
    ctx->pc = 0x22D394u;
label_22d394:
    // 0x22d394: 0x244273c0
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29632));
label_22d398:
    // 0x22d398: 0x31880
    ctx->pc = 0x22d398u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22d39c:
    // 0x22d39c: 0x621821
    ctx->pc = 0x22d39cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d3a0:
    // 0x22d3a0: 0x8c620000
    ctx->pc = 0x22d3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22d3a4:
    // 0x22d3a4: 0x400008
label_22d3a8:
    if (ctx->pc == 0x22D3A8u) {
        ctx->pc = 0x22D3ACu;
        goto label_22d3ac;
    }
    ctx->pc = 0x22D3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D1B0u: goto label_22d1b0;
            case 0x22D1B4u: goto label_22d1b4;
            case 0x22D1B8u: goto label_22d1b8;
            case 0x22D1BCu: goto label_22d1bc;
            case 0x22D1C0u: goto label_22d1c0;
            case 0x22D1C4u: goto label_22d1c4;
            case 0x22D1C8u: goto label_22d1c8;
            case 0x22D1CCu: goto label_22d1cc;
            case 0x22D1D0u: goto label_22d1d0;
            case 0x22D1D4u: goto label_22d1d4;
            case 0x22D1D8u: goto label_22d1d8;
            case 0x22D1DCu: goto label_22d1dc;
            case 0x22D1E0u: goto label_22d1e0;
            case 0x22D1E4u: goto label_22d1e4;
            case 0x22D1E8u: goto label_22d1e8;
            case 0x22D1ECu: goto label_22d1ec;
            case 0x22D1F0u: goto label_22d1f0;
            case 0x22D1F4u: goto label_22d1f4;
            case 0x22D1F8u: goto label_22d1f8;
            case 0x22D1FCu: goto label_22d1fc;
            case 0x22D200u: goto label_22d200;
            case 0x22D204u: goto label_22d204;
            case 0x22D208u: goto label_22d208;
            case 0x22D20Cu: goto label_22d20c;
            case 0x22D210u: goto label_22d210;
            case 0x22D214u: goto label_22d214;
            case 0x22D218u: goto label_22d218;
            case 0x22D21Cu: goto label_22d21c;
            case 0x22D220u: goto label_22d220;
            case 0x22D224u: goto label_22d224;
            case 0x22D228u: goto label_22d228;
            case 0x22D22Cu: goto label_22d22c;
            case 0x22D230u: goto label_22d230;
            case 0x22D234u: goto label_22d234;
            case 0x22D238u: goto label_22d238;
            case 0x22D23Cu: goto label_22d23c;
            case 0x22D240u: goto label_22d240;
            case 0x22D244u: goto label_22d244;
            case 0x22D248u: goto label_22d248;
            case 0x22D24Cu: goto label_22d24c;
            case 0x22D250u: goto label_22d250;
            case 0x22D254u: goto label_22d254;
            case 0x22D258u: goto label_22d258;
            case 0x22D25Cu: goto label_22d25c;
            case 0x22D260u: goto label_22d260;
            case 0x22D264u: goto label_22d264;
            case 0x22D268u: goto label_22d268;
            case 0x22D26Cu: goto label_22d26c;
            case 0x22D270u: goto label_22d270;
            case 0x22D274u: goto label_22d274;
            case 0x22D278u: goto label_22d278;
            case 0x22D27Cu: goto label_22d27c;
            case 0x22D280u: goto label_22d280;
            case 0x22D284u: goto label_22d284;
            case 0x22D288u: goto label_22d288;
            case 0x22D28Cu: goto label_22d28c;
            case 0x22D290u: goto label_22d290;
            case 0x22D294u: goto label_22d294;
            case 0x22D298u: goto label_22d298;
            case 0x22D29Cu: goto label_22d29c;
            case 0x22D2A0u: goto label_22d2a0;
            case 0x22D2A4u: goto label_22d2a4;
            case 0x22D2A8u: goto label_22d2a8;
            case 0x22D2ACu: goto label_22d2ac;
            case 0x22D2B0u: goto label_22d2b0;
            case 0x22D2B4u: goto label_22d2b4;
            case 0x22D2B8u: goto label_22d2b8;
            case 0x22D2BCu: goto label_22d2bc;
            case 0x22D2C0u: goto label_22d2c0;
            case 0x22D2C4u: goto label_22d2c4;
            case 0x22D2C8u: goto label_22d2c8;
            case 0x22D2CCu: goto label_22d2cc;
            case 0x22D2D0u: goto label_22d2d0;
            case 0x22D2D4u: goto label_22d2d4;
            case 0x22D2D8u: goto label_22d2d8;
            case 0x22D2DCu: goto label_22d2dc;
            case 0x22D2E0u: goto label_22d2e0;
            case 0x22D2E4u: goto label_22d2e4;
            case 0x22D2E8u: goto label_22d2e8;
            case 0x22D2ECu: goto label_22d2ec;
            case 0x22D2F0u: goto label_22d2f0;
            case 0x22D2F4u: goto label_22d2f4;
            case 0x22D2F8u: goto label_22d2f8;
            case 0x22D2FCu: goto label_22d2fc;
            case 0x22D300u: goto label_22d300;
            case 0x22D304u: goto label_22d304;
            case 0x22D308u: goto label_22d308;
            case 0x22D30Cu: goto label_22d30c;
            case 0x22D310u: goto label_22d310;
            case 0x22D314u: goto label_22d314;
            case 0x22D318u: goto label_22d318;
            case 0x22D31Cu: goto label_22d31c;
            case 0x22D320u: goto label_22d320;
            case 0x22D324u: goto label_22d324;
            case 0x22D328u: goto label_22d328;
            case 0x22D32Cu: goto label_22d32c;
            case 0x22D330u: goto label_22d330;
            case 0x22D334u: goto label_22d334;
            case 0x22D338u: goto label_22d338;
            case 0x22D33Cu: goto label_22d33c;
            case 0x22D340u: goto label_22d340;
            case 0x22D344u: goto label_22d344;
            case 0x22D348u: goto label_22d348;
            case 0x22D34Cu: goto label_22d34c;
            case 0x22D350u: goto label_22d350;
            case 0x22D354u: goto label_22d354;
            case 0x22D358u: goto label_22d358;
            case 0x22D35Cu: goto label_22d35c;
            case 0x22D360u: goto label_22d360;
            case 0x22D364u: goto label_22d364;
            case 0x22D368u: goto label_22d368;
            case 0x22D36Cu: goto label_22d36c;
            case 0x22D370u: goto label_22d370;
            case 0x22D374u: goto label_22d374;
            case 0x22D378u: goto label_22d378;
            case 0x22D37Cu: goto label_22d37c;
            case 0x22D380u: goto label_22d380;
            case 0x22D384u: goto label_22d384;
            case 0x22D388u: goto label_22d388;
            case 0x22D38Cu: goto label_22d38c;
            case 0x22D390u: goto label_22d390;
            case 0x22D394u: goto label_22d394;
            case 0x22D398u: goto label_22d398;
            case 0x22D39Cu: goto label_22d39c;
            case 0x22D3A0u: goto label_22d3a0;
            case 0x22D3A4u: goto label_22d3a4;
            case 0x22D3A8u: goto label_22d3a8;
            case 0x22D3ACu: goto label_22d3ac;
            case 0x22D3B0u: goto label_22d3b0;
            case 0x22D3B4u: goto label_22d3b4;
            case 0x22D3B8u: goto label_22d3b8;
            case 0x22D3BCu: goto label_22d3bc;
            case 0x22D3C0u: goto label_22d3c0;
            case 0x22D3C4u: goto label_22d3c4;
            case 0x22D3C8u: goto label_22d3c8;
            case 0x22D3CCu: goto label_22d3cc;
            case 0x22D3D0u: goto label_22d3d0;
            case 0x22D3D4u: goto label_22d3d4;
            case 0x22D3D8u: goto label_22d3d8;
            case 0x22D3DCu: goto label_22d3dc;
            case 0x22D3E0u: goto label_22d3e0;
            case 0x22D3E4u: goto label_22d3e4;
            case 0x22D3E8u: goto label_22d3e8;
            case 0x22D3ECu: goto label_22d3ec;
            case 0x22D3F0u: goto label_22d3f0;
            case 0x22D3F4u: goto label_22d3f4;
            case 0x22D3F8u: goto label_22d3f8;
            case 0x22D3FCu: goto label_22d3fc;
            case 0x22D400u: goto label_22d400;
            case 0x22D404u: goto label_22d404;
            case 0x22D408u: goto label_22d408;
            case 0x22D40Cu: goto label_22d40c;
            case 0x22D410u: goto label_22d410;
            case 0x22D414u: goto label_22d414;
            case 0x22D418u: goto label_22d418;
            case 0x22D41Cu: goto label_22d41c;
            case 0x22D420u: goto label_22d420;
            case 0x22D424u: goto label_22d424;
            case 0x22D428u: goto label_22d428;
            case 0x22D42Cu: goto label_22d42c;
            case 0x22D430u: goto label_22d430;
            case 0x22D434u: goto label_22d434;
            case 0x22D438u: goto label_22d438;
            case 0x22D43Cu: goto label_22d43c;
            case 0x22D440u: goto label_22d440;
            case 0x22D444u: goto label_22d444;
            case 0x22D448u: goto label_22d448;
            case 0x22D44Cu: goto label_22d44c;
            case 0x22D450u: goto label_22d450;
            case 0x22D454u: goto label_22d454;
            case 0x22D458u: goto label_22d458;
            case 0x22D45Cu: goto label_22d45c;
            case 0x22D460u: goto label_22d460;
            case 0x22D464u: goto label_22d464;
            case 0x22D468u: goto label_22d468;
            case 0x22D46Cu: goto label_22d46c;
            case 0x22D470u: goto label_22d470;
            case 0x22D474u: goto label_22d474;
            case 0x22D478u: goto label_22d478;
            case 0x22D47Cu: goto label_22d47c;
            case 0x22D480u: goto label_22d480;
            case 0x22D484u: goto label_22d484;
            case 0x22D488u: goto label_22d488;
            case 0x22D48Cu: goto label_22d48c;
            case 0x22D490u: goto label_22d490;
            case 0x22D494u: goto label_22d494;
            case 0x22D498u: goto label_22d498;
            case 0x22D49Cu: goto label_22d49c;
            case 0x22D4A0u: goto label_22d4a0;
            case 0x22D4A4u: goto label_22d4a4;
            case 0x22D4A8u: goto label_22d4a8;
            case 0x22D4ACu: goto label_22d4ac;
            case 0x22D4B0u: goto label_22d4b0;
            case 0x22D4B4u: goto label_22d4b4;
            case 0x22D4B8u: goto label_22d4b8;
            case 0x22D4BCu: goto label_22d4bc;
            case 0x22D4C0u: goto label_22d4c0;
            case 0x22D4C4u: goto label_22d4c4;
            case 0x22D4C8u: goto label_22d4c8;
            case 0x22D4CCu: goto label_22d4cc;
            case 0x22D4D0u: goto label_22d4d0;
            case 0x22D4D4u: goto label_22d4d4;
            case 0x22D4D8u: goto label_22d4d8;
            case 0x22D4DCu: goto label_22d4dc;
            case 0x22D4E0u: goto label_22d4e0;
            case 0x22D4E4u: goto label_22d4e4;
            case 0x22D4E8u: goto label_22d4e8;
            case 0x22D4ECu: goto label_22d4ec;
            case 0x22D4F0u: goto label_22d4f0;
            case 0x22D4F4u: goto label_22d4f4;
            case 0x22D4F8u: goto label_22d4f8;
            case 0x22D4FCu: goto label_22d4fc;
            case 0x22D500u: goto label_22d500;
            case 0x22D504u: goto label_22d504;
            case 0x22D508u: goto label_22d508;
            case 0x22D50Cu: goto label_22d50c;
            case 0x22D510u: goto label_22d510;
            case 0x22D514u: goto label_22d514;
            case 0x22D518u: goto label_22d518;
            case 0x22D51Cu: goto label_22d51c;
            case 0x22D520u: goto label_22d520;
            case 0x22D524u: goto label_22d524;
            case 0x22D528u: goto label_22d528;
            case 0x22D52Cu: goto label_22d52c;
            case 0x22D530u: goto label_22d530;
            case 0x22D534u: goto label_22d534;
            case 0x22D538u: goto label_22d538;
            case 0x22D53Cu: goto label_22d53c;
            case 0x22D540u: goto label_22d540;
            case 0x22D544u: goto label_22d544;
            case 0x22D548u: goto label_22d548;
            case 0x22D54Cu: goto label_22d54c;
            case 0x22D550u: goto label_22d550;
            case 0x22D554u: goto label_22d554;
            case 0x22D558u: goto label_22d558;
            case 0x22D55Cu: goto label_22d55c;
            case 0x22D560u: goto label_22d560;
            case 0x22D564u: goto label_22d564;
            case 0x22D568u: goto label_22d568;
            case 0x22D56Cu: goto label_22d56c;
            case 0x22D570u: goto label_22d570;
            case 0x22D574u: goto label_22d574;
            case 0x22D578u: goto label_22d578;
            case 0x22D57Cu: goto label_22d57c;
            case 0x22D580u: goto label_22d580;
            case 0x22D584u: goto label_22d584;
            case 0x22D588u: goto label_22d588;
            case 0x22D58Cu: goto label_22d58c;
            case 0x22D590u: goto label_22d590;
            case 0x22D594u: goto label_22d594;
            case 0x22D598u: goto label_22d598;
            case 0x22D59Cu: goto label_22d59c;
            case 0x22D5A0u: goto label_22d5a0;
            case 0x22D5A4u: goto label_22d5a4;
            case 0x22D5A8u: goto label_22d5a8;
            case 0x22D5ACu: goto label_22d5ac;
            case 0x22D5B0u: goto label_22d5b0;
            case 0x22D5B4u: goto label_22d5b4;
            case 0x22D5B8u: goto label_22d5b8;
            case 0x22D5BCu: goto label_22d5bc;
            case 0x22D5C0u: goto label_22d5c0;
            case 0x22D5C4u: goto label_22d5c4;
            case 0x22D5C8u: goto label_22d5c8;
            case 0x22D5CCu: goto label_22d5cc;
            case 0x22D5D0u: goto label_22d5d0;
            case 0x22D5D4u: goto label_22d5d4;
            case 0x22D5D8u: goto label_22d5d8;
            case 0x22D5DCu: goto label_22d5dc;
            case 0x22D5E0u: goto label_22d5e0;
            case 0x22D5E4u: goto label_22d5e4;
            case 0x22D5E8u: goto label_22d5e8;
            case 0x22D5ECu: goto label_22d5ec;
            case 0x22D5F0u: goto label_22d5f0;
            case 0x22D5F4u: goto label_22d5f4;
            case 0x22D5F8u: goto label_22d5f8;
            case 0x22D5FCu: goto label_22d5fc;
            case 0x22D600u: goto label_22d600;
            case 0x22D604u: goto label_22d604;
            case 0x22D608u: goto label_22d608;
            case 0x22D60Cu: goto label_22d60c;
            case 0x22D610u: goto label_22d610;
            case 0x22D614u: goto label_22d614;
            case 0x22D618u: goto label_22d618;
            case 0x22D61Cu: goto label_22d61c;
            case 0x22D620u: goto label_22d620;
            case 0x22D624u: goto label_22d624;
            case 0x22D628u: goto label_22d628;
            case 0x22D62Cu: goto label_22d62c;
            case 0x22D630u: goto label_22d630;
            case 0x22D634u: goto label_22d634;
            case 0x22D638u: goto label_22d638;
            case 0x22D63Cu: goto label_22d63c;
            case 0x22D640u: goto label_22d640;
            case 0x22D644u: goto label_22d644;
            case 0x22D648u: goto label_22d648;
            case 0x22D64Cu: goto label_22d64c;
            case 0x22D650u: goto label_22d650;
            case 0x22D654u: goto label_22d654;
            case 0x22D658u: goto label_22d658;
            case 0x22D65Cu: goto label_22d65c;
            case 0x22D660u: goto label_22d660;
            case 0x22D664u: goto label_22d664;
            case 0x22D668u: goto label_22d668;
            case 0x22D66Cu: goto label_22d66c;
            case 0x22D670u: goto label_22d670;
            case 0x22D674u: goto label_22d674;
            case 0x22D678u: goto label_22d678;
            case 0x22D67Cu: goto label_22d67c;
            case 0x22D680u: goto label_22d680;
            case 0x22D684u: goto label_22d684;
            case 0x22D688u: goto label_22d688;
            case 0x22D68Cu: goto label_22d68c;
            case 0x22D690u: goto label_22d690;
            case 0x22D694u: goto label_22d694;
            case 0x22D698u: goto label_22d698;
            case 0x22D69Cu: goto label_22d69c;
            case 0x22D6A0u: goto label_22d6a0;
            case 0x22D6A4u: goto label_22d6a4;
            case 0x22D6A8u: goto label_22d6a8;
            case 0x22D6ACu: goto label_22d6ac;
            case 0x22D6B0u: goto label_22d6b0;
            case 0x22D6B4u: goto label_22d6b4;
            case 0x22D6B8u: goto label_22d6b8;
            case 0x22D6BCu: goto label_22d6bc;
            case 0x22D6C0u: goto label_22d6c0;
            case 0x22D6C4u: goto label_22d6c4;
            case 0x22D6C8u: goto label_22d6c8;
            case 0x22D6CCu: goto label_22d6cc;
            case 0x22D6D0u: goto label_22d6d0;
            case 0x22D6D4u: goto label_22d6d4;
            case 0x22D6D8u: goto label_22d6d8;
            case 0x22D6DCu: goto label_22d6dc;
            case 0x22D6E0u: goto label_22d6e0;
            case 0x22D6E4u: goto label_22d6e4;
            case 0x22D6E8u: goto label_22d6e8;
            case 0x22D6ECu: goto label_22d6ec;
            case 0x22D6F0u: goto label_22d6f0;
            case 0x22D6F4u: goto label_22d6f4;
            case 0x22D6F8u: goto label_22d6f8;
            case 0x22D6FCu: goto label_22d6fc;
            case 0x22D700u: goto label_22d700;
            case 0x22D704u: goto label_22d704;
            case 0x22D708u: goto label_22d708;
            case 0x22D70Cu: goto label_22d70c;
            case 0x22D710u: goto label_22d710;
            case 0x22D714u: goto label_22d714;
            case 0x22D718u: goto label_22d718;
            case 0x22D71Cu: goto label_22d71c;
            case 0x22D720u: goto label_22d720;
            case 0x22D724u: goto label_22d724;
            case 0x22D728u: goto label_22d728;
            case 0x22D72Cu: goto label_22d72c;
            case 0x22D730u: goto label_22d730;
            case 0x22D734u: goto label_22d734;
            case 0x22D738u: goto label_22d738;
            case 0x22D73Cu: goto label_22d73c;
            case 0x22D740u: goto label_22d740;
            case 0x22D744u: goto label_22d744;
            case 0x22D748u: goto label_22d748;
            case 0x22D74Cu: goto label_22d74c;
            case 0x22D750u: goto label_22d750;
            case 0x22D754u: goto label_22d754;
            case 0x22D758u: goto label_22d758;
            case 0x22D75Cu: goto label_22d75c;
            case 0x22D760u: goto label_22d760;
            case 0x22D764u: goto label_22d764;
            case 0x22D768u: goto label_22d768;
            case 0x22D76Cu: goto label_22d76c;
            case 0x22D770u: goto label_22d770;
            case 0x22D774u: goto label_22d774;
            case 0x22D778u: goto label_22d778;
            case 0x22D77Cu: goto label_22d77c;
            case 0x22D780u: goto label_22d780;
            case 0x22D784u: goto label_22d784;
            case 0x22D788u: goto label_22d788;
            case 0x22D78Cu: goto label_22d78c;
            case 0x22D790u: goto label_22d790;
            case 0x22D794u: goto label_22d794;
            case 0x22D798u: goto label_22d798;
            case 0x22D79Cu: goto label_22d79c;
            case 0x22D7A0u: goto label_22d7a0;
            case 0x22D7A4u: goto label_22d7a4;
            case 0x22D7A8u: goto label_22d7a8;
            case 0x22D7ACu: goto label_22d7ac;
            case 0x22D7B0u: goto label_22d7b0;
            case 0x22D7B4u: goto label_22d7b4;
            case 0x22D7B8u: goto label_22d7b8;
            case 0x22D7BCu: goto label_22d7bc;
            case 0x22D7C0u: goto label_22d7c0;
            case 0x22D7C4u: goto label_22d7c4;
            case 0x22D7C8u: goto label_22d7c8;
            case 0x22D7CCu: goto label_22d7cc;
            case 0x22D7D0u: goto label_22d7d0;
            case 0x22D7D4u: goto label_22d7d4;
            case 0x22D7D8u: goto label_22d7d8;
            case 0x22D7DCu: goto label_22d7dc;
            case 0x22D7E0u: goto label_22d7e0;
            case 0x22D7E4u: goto label_22d7e4;
            case 0x22D7E8u: goto label_22d7e8;
            case 0x22D7ECu: goto label_22d7ec;
            case 0x22D7F0u: goto label_22d7f0;
            case 0x22D7F4u: goto label_22d7f4;
            case 0x22D7F8u: goto label_22d7f8;
            case 0x22D7FCu: goto label_22d7fc;
            case 0x22D800u: goto label_22d800;
            case 0x22D804u: goto label_22d804;
            case 0x22D808u: goto label_22d808;
            case 0x22D80Cu: goto label_22d80c;
            case 0x22D810u: goto label_22d810;
            case 0x22D814u: goto label_22d814;
            case 0x22D818u: goto label_22d818;
            case 0x22D81Cu: goto label_22d81c;
            case 0x22D820u: goto label_22d820;
            case 0x22D824u: goto label_22d824;
            case 0x22D828u: goto label_22d828;
            case 0x22D82Cu: goto label_22d82c;
            case 0x22D830u: goto label_22d830;
            case 0x22D834u: goto label_22d834;
            case 0x22D838u: goto label_22d838;
            case 0x22D83Cu: goto label_22d83c;
            case 0x22D840u: goto label_22d840;
            case 0x22D844u: goto label_22d844;
            case 0x22D848u: goto label_22d848;
            case 0x22D84Cu: goto label_22d84c;
            case 0x22D850u: goto label_22d850;
            case 0x22D854u: goto label_22d854;
            case 0x22D858u: goto label_22d858;
            case 0x22D85Cu: goto label_22d85c;
            case 0x22D860u: goto label_22d860;
            case 0x22D864u: goto label_22d864;
            case 0x22D868u: goto label_22d868;
            case 0x22D86Cu: goto label_22d86c;
            case 0x22D870u: goto label_22d870;
            case 0x22D874u: goto label_22d874;
            case 0x22D878u: goto label_22d878;
            case 0x22D87Cu: goto label_22d87c;
            case 0x22D880u: goto label_22d880;
            case 0x22D884u: goto label_22d884;
            case 0x22D888u: goto label_22d888;
            case 0x22D88Cu: goto label_22d88c;
            case 0x22D890u: goto label_22d890;
            case 0x22D894u: goto label_22d894;
            case 0x22D898u: goto label_22d898;
            case 0x22D89Cu: goto label_22d89c;
            case 0x22D8A0u: goto label_22d8a0;
            case 0x22D8A4u: goto label_22d8a4;
            case 0x22D8A8u: goto label_22d8a8;
            case 0x22D8ACu: goto label_22d8ac;
            case 0x22D8B0u: goto label_22d8b0;
            case 0x22D8B4u: goto label_22d8b4;
            case 0x22D8B8u: goto label_22d8b8;
            case 0x22D8BCu: goto label_22d8bc;
            case 0x22D8C0u: goto label_22d8c0;
            case 0x22D8C4u: goto label_22d8c4;
            case 0x22D8C8u: goto label_22d8c8;
            case 0x22D8CCu: goto label_22d8cc;
            case 0x22D8D0u: goto label_22d8d0;
            case 0x22D8D4u: goto label_22d8d4;
            case 0x22D8D8u: goto label_22d8d8;
            case 0x22D8DCu: goto label_22d8dc;
            case 0x22D8E0u: goto label_22d8e0;
            case 0x22D8E4u: goto label_22d8e4;
            case 0x22D8E8u: goto label_22d8e8;
            case 0x22D8ECu: goto label_22d8ec;
            case 0x22D8F0u: goto label_22d8f0;
            case 0x22D8F4u: goto label_22d8f4;
            case 0x22D8F8u: goto label_22d8f8;
            case 0x22D8FCu: goto label_22d8fc;
            case 0x22D900u: goto label_22d900;
            case 0x22D904u: goto label_22d904;
            case 0x22D908u: goto label_22d908;
            case 0x22D90Cu: goto label_22d90c;
            case 0x22D910u: goto label_22d910;
            case 0x22D914u: goto label_22d914;
            case 0x22D918u: goto label_22d918;
            case 0x22D91Cu: goto label_22d91c;
            case 0x22D920u: goto label_22d920;
            case 0x22D924u: goto label_22d924;
            case 0x22D928u: goto label_22d928;
            case 0x22D92Cu: goto label_22d92c;
            case 0x22D930u: goto label_22d930;
            case 0x22D934u: goto label_22d934;
            case 0x22D938u: goto label_22d938;
            case 0x22D93Cu: goto label_22d93c;
            case 0x22D940u: goto label_22d940;
            case 0x22D944u: goto label_22d944;
            case 0x22D948u: goto label_22d948;
            case 0x22D94Cu: goto label_22d94c;
            case 0x22D950u: goto label_22d950;
            case 0x22D954u: goto label_22d954;
            case 0x22D958u: goto label_22d958;
            case 0x22D95Cu: goto label_22d95c;
            case 0x22D960u: goto label_22d960;
            case 0x22D964u: goto label_22d964;
            case 0x22D968u: goto label_22d968;
            case 0x22D96Cu: goto label_22d96c;
            case 0x22D970u: goto label_22d970;
            case 0x22D974u: goto label_22d974;
            case 0x22D978u: goto label_22d978;
            case 0x22D97Cu: goto label_22d97c;
            case 0x22D980u: goto label_22d980;
            case 0x22D984u: goto label_22d984;
            case 0x22D988u: goto label_22d988;
            case 0x22D98Cu: goto label_22d98c;
            case 0x22D990u: goto label_22d990;
            case 0x22D994u: goto label_22d994;
            case 0x22D998u: goto label_22d998;
            case 0x22D99Cu: goto label_22d99c;
            case 0x22D9A0u: goto label_22d9a0;
            case 0x22D9A4u: goto label_22d9a4;
            case 0x22D9A8u: goto label_22d9a8;
            case 0x22D9ACu: goto label_22d9ac;
            case 0x22D9B0u: goto label_22d9b0;
            case 0x22D9B4u: goto label_22d9b4;
            case 0x22D9B8u: goto label_22d9b8;
            case 0x22D9BCu: goto label_22d9bc;
            case 0x22D9C0u: goto label_22d9c0;
            case 0x22D9C4u: goto label_22d9c4;
            case 0x22D9C8u: goto label_22d9c8;
            case 0x22D9CCu: goto label_22d9cc;
            case 0x22D9D0u: goto label_22d9d0;
            case 0x22D9D4u: goto label_22d9d4;
            case 0x22D9D8u: goto label_22d9d8;
            case 0x22D9DCu: goto label_22d9dc;
            case 0x22D9E0u: goto label_22d9e0;
            case 0x22D9E4u: goto label_22d9e4;
            case 0x22D9E8u: goto label_22d9e8;
            case 0x22D9ECu: goto label_22d9ec;
            case 0x22D9F0u: goto label_22d9f0;
            case 0x22D9F4u: goto label_22d9f4;
            case 0x22D9F8u: goto label_22d9f8;
            case 0x22D9FCu: goto label_22d9fc;
            case 0x22DA00u: goto label_22da00;
            case 0x22DA04u: goto label_22da04;
            case 0x22DA08u: goto label_22da08;
            case 0x22DA0Cu: goto label_22da0c;
            case 0x22DA10u: goto label_22da10;
            case 0x22DA14u: goto label_22da14;
            case 0x22DA18u: goto label_22da18;
            case 0x22DA1Cu: goto label_22da1c;
            case 0x22DA20u: goto label_22da20;
            case 0x22DA24u: goto label_22da24;
            case 0x22DA28u: goto label_22da28;
            case 0x22DA2Cu: goto label_22da2c;
            case 0x22DA30u: goto label_22da30;
            case 0x22DA34u: goto label_22da34;
            case 0x22DA38u: goto label_22da38;
            case 0x22DA3Cu: goto label_22da3c;
            case 0x22DA40u: goto label_22da40;
            case 0x22DA44u: goto label_22da44;
            case 0x22DA48u: goto label_22da48;
            case 0x22DA4Cu: goto label_22da4c;
            case 0x22DA50u: goto label_22da50;
            case 0x22DA54u: goto label_22da54;
            case 0x22DA58u: goto label_22da58;
            case 0x22DA5Cu: goto label_22da5c;
            case 0x22DA60u: goto label_22da60;
            case 0x22DA64u: goto label_22da64;
            case 0x22DA68u: goto label_22da68;
            case 0x22DA6Cu: goto label_22da6c;
            case 0x22DA70u: goto label_22da70;
            case 0x22DA74u: goto label_22da74;
            case 0x22DA78u: goto label_22da78;
            case 0x22DA7Cu: goto label_22da7c;
            case 0x22DA80u: goto label_22da80;
            case 0x22DA84u: goto label_22da84;
            case 0x22DA88u: goto label_22da88;
            case 0x22DA8Cu: goto label_22da8c;
            case 0x22DA90u: goto label_22da90;
            case 0x22DA94u: goto label_22da94;
            case 0x22DA98u: goto label_22da98;
            case 0x22DA9Cu: goto label_22da9c;
            case 0x22DAA0u: goto label_22daa0;
            case 0x22DAA4u: goto label_22daa4;
            case 0x22DAA8u: goto label_22daa8;
            case 0x22DAACu: goto label_22daac;
            case 0x22DAB0u: goto label_22dab0;
            case 0x22DAB4u: goto label_22dab4;
            case 0x22DAB8u: goto label_22dab8;
            case 0x22DABCu: goto label_22dabc;
            case 0x22DAC0u: goto label_22dac0;
            case 0x22DAC4u: goto label_22dac4;
            case 0x22DAC8u: goto label_22dac8;
            case 0x22DACCu: goto label_22dacc;
            case 0x22DAD0u: goto label_22dad0;
            case 0x22DAD4u: goto label_22dad4;
            case 0x22DAD8u: goto label_22dad8;
            case 0x22DADCu: goto label_22dadc;
            case 0x22DAE0u: goto label_22dae0;
            case 0x22DAE4u: goto label_22dae4;
            case 0x22DAE8u: goto label_22dae8;
            case 0x22DAECu: goto label_22daec;
            case 0x22DAF0u: goto label_22daf0;
            case 0x22DAF4u: goto label_22daf4;
            case 0x22DAF8u: goto label_22daf8;
            case 0x22DAFCu: goto label_22dafc;
            case 0x22DB00u: goto label_22db00;
            case 0x22DB04u: goto label_22db04;
            case 0x22DB08u: goto label_22db08;
            case 0x22DB0Cu: goto label_22db0c;
            case 0x22DB10u: goto label_22db10;
            case 0x22DB14u: goto label_22db14;
            case 0x22DB18u: goto label_22db18;
            case 0x22DB1Cu: goto label_22db1c;
            case 0x22DB20u: goto label_22db20;
            case 0x22DB24u: goto label_22db24;
            case 0x22DB28u: goto label_22db28;
            case 0x22DB2Cu: goto label_22db2c;
            case 0x22DB30u: goto label_22db30;
            case 0x22DB34u: goto label_22db34;
            case 0x22DB38u: goto label_22db38;
            case 0x22DB3Cu: goto label_22db3c;
            case 0x22DB40u: goto label_22db40;
            case 0x22DB44u: goto label_22db44;
            case 0x22DB48u: goto label_22db48;
            case 0x22DB4Cu: goto label_22db4c;
            case 0x22DB50u: goto label_22db50;
            case 0x22DB54u: goto label_22db54;
            case 0x22DB58u: goto label_22db58;
            case 0x22DB5Cu: goto label_22db5c;
            case 0x22DB60u: goto label_22db60;
            case 0x22DB64u: goto label_22db64;
            case 0x22DB68u: goto label_22db68;
            case 0x22DB6Cu: goto label_22db6c;
            case 0x22DB70u: goto label_22db70;
            case 0x22DB74u: goto label_22db74;
            case 0x22DB78u: goto label_22db78;
            case 0x22DB7Cu: goto label_22db7c;
            case 0x22DB80u: goto label_22db80;
            case 0x22DB84u: goto label_22db84;
            case 0x22DB88u: goto label_22db88;
            case 0x22DB8Cu: goto label_22db8c;
            case 0x22DB90u: goto label_22db90;
            case 0x22DB94u: goto label_22db94;
            case 0x22DB98u: goto label_22db98;
            case 0x22DB9Cu: goto label_22db9c;
            case 0x22DBA0u: goto label_22dba0;
            case 0x22DBA4u: goto label_22dba4;
            case 0x22DBA8u: goto label_22dba8;
            case 0x22DBACu: goto label_22dbac;
            case 0x22DBB0u: goto label_22dbb0;
            case 0x22DBB4u: goto label_22dbb4;
            case 0x22DBB8u: goto label_22dbb8;
            case 0x22DBBCu: goto label_22dbbc;
            case 0x22DBC0u: goto label_22dbc0;
            case 0x22DBC4u: goto label_22dbc4;
            case 0x22DBC8u: goto label_22dbc8;
            case 0x22DBCCu: goto label_22dbcc;
            case 0x22DBD0u: goto label_22dbd0;
            case 0x22DBD4u: goto label_22dbd4;
            case 0x22DBD8u: goto label_22dbd8;
            case 0x22DBDCu: goto label_22dbdc;
            case 0x22DBE0u: goto label_22dbe0;
            case 0x22DBE4u: goto label_22dbe4;
            case 0x22DBE8u: goto label_22dbe8;
            case 0x22DBECu: goto label_22dbec;
            case 0x22DBF0u: goto label_22dbf0;
            case 0x22DBF4u: goto label_22dbf4;
            case 0x22DBF8u: goto label_22dbf8;
            case 0x22DBFCu: goto label_22dbfc;
            case 0x22DC00u: goto label_22dc00;
            case 0x22DC04u: goto label_22dc04;
            case 0x22DC08u: goto label_22dc08;
            case 0x22DC0Cu: goto label_22dc0c;
            case 0x22DC10u: goto label_22dc10;
            case 0x22DC14u: goto label_22dc14;
            case 0x22DC18u: goto label_22dc18;
            case 0x22DC1Cu: goto label_22dc1c;
            case 0x22DC20u: goto label_22dc20;
            case 0x22DC24u: goto label_22dc24;
            case 0x22DC28u: goto label_22dc28;
            case 0x22DC2Cu: goto label_22dc2c;
            case 0x22DC30u: goto label_22dc30;
            case 0x22DC34u: goto label_22dc34;
            case 0x22DC38u: goto label_22dc38;
            case 0x22DC3Cu: goto label_22dc3c;
            case 0x22DC40u: goto label_22dc40;
            case 0x22DC44u: goto label_22dc44;
            case 0x22DC48u: goto label_22dc48;
            case 0x22DC4Cu: goto label_22dc4c;
            case 0x22DC50u: goto label_22dc50;
            case 0x22DC54u: goto label_22dc54;
            case 0x22DC58u: goto label_22dc58;
            case 0x22DC5Cu: goto label_22dc5c;
            case 0x22DC60u: goto label_22dc60;
            case 0x22DC64u: goto label_22dc64;
            case 0x22DC68u: goto label_22dc68;
            case 0x22DC6Cu: goto label_22dc6c;
            case 0x22DC70u: goto label_22dc70;
            case 0x22DC74u: goto label_22dc74;
            case 0x22DC78u: goto label_22dc78;
            case 0x22DC7Cu: goto label_22dc7c;
            case 0x22DC80u: goto label_22dc80;
            case 0x22DC84u: goto label_22dc84;
            case 0x22DC88u: goto label_22dc88;
            case 0x22DC8Cu: goto label_22dc8c;
            case 0x22DC90u: goto label_22dc90;
            case 0x22DC94u: goto label_22dc94;
            case 0x22DC98u: goto label_22dc98;
            case 0x22DC9Cu: goto label_22dc9c;
            case 0x22DCA0u: goto label_22dca0;
            case 0x22DCA4u: goto label_22dca4;
            case 0x22DCA8u: goto label_22dca8;
            case 0x22DCACu: goto label_22dcac;
            case 0x22DCB0u: goto label_22dcb0;
            case 0x22DCB4u: goto label_22dcb4;
            case 0x22DCB8u: goto label_22dcb8;
            case 0x22DCBCu: goto label_22dcbc;
            case 0x22DCC0u: goto label_22dcc0;
            case 0x22DCC4u: goto label_22dcc4;
            case 0x22DCC8u: goto label_22dcc8;
            case 0x22DCCCu: goto label_22dccc;
            case 0x22DCD0u: goto label_22dcd0;
            case 0x22DCD4u: goto label_22dcd4;
            case 0x22DCD8u: goto label_22dcd8;
            case 0x22DCDCu: goto label_22dcdc;
            case 0x22DCE0u: goto label_22dce0;
            case 0x22DCE4u: goto label_22dce4;
            case 0x22DCE8u: goto label_22dce8;
            case 0x22DCECu: goto label_22dcec;
            case 0x22DCF0u: goto label_22dcf0;
            case 0x22DCF4u: goto label_22dcf4;
            case 0x22DCF8u: goto label_22dcf8;
            case 0x22DCFCu: goto label_22dcfc;
            case 0x22DD00u: goto label_22dd00;
            case 0x22DD04u: goto label_22dd04;
            case 0x22DD08u: goto label_22dd08;
            case 0x22DD0Cu: goto label_22dd0c;
            case 0x22DD10u: goto label_22dd10;
            case 0x22DD14u: goto label_22dd14;
            case 0x22DD18u: goto label_22dd18;
            case 0x22DD1Cu: goto label_22dd1c;
            case 0x22DD20u: goto label_22dd20;
            case 0x22DD24u: goto label_22dd24;
            case 0x22DD28u: goto label_22dd28;
            case 0x22DD2Cu: goto label_22dd2c;
            case 0x22DD30u: goto label_22dd30;
            case 0x22DD34u: goto label_22dd34;
            case 0x22DD38u: goto label_22dd38;
            case 0x22DD3Cu: goto label_22dd3c;
            case 0x22DD40u: goto label_22dd40;
            case 0x22DD44u: goto label_22dd44;
            case 0x22DD48u: goto label_22dd48;
            case 0x22DD4Cu: goto label_22dd4c;
            case 0x22DD50u: goto label_22dd50;
            case 0x22DD54u: goto label_22dd54;
            case 0x22DD58u: goto label_22dd58;
            case 0x22DD5Cu: goto label_22dd5c;
            case 0x22DD60u: goto label_22dd60;
            case 0x22DD64u: goto label_22dd64;
            case 0x22DD68u: goto label_22dd68;
            case 0x22DD6Cu: goto label_22dd6c;
            case 0x22DD70u: goto label_22dd70;
            case 0x22DD74u: goto label_22dd74;
            case 0x22DD78u: goto label_22dd78;
            case 0x22DD7Cu: goto label_22dd7c;
            case 0x22DD80u: goto label_22dd80;
            case 0x22DD84u: goto label_22dd84;
            case 0x22DD88u: goto label_22dd88;
            case 0x22DD8Cu: goto label_22dd8c;
            case 0x22DD90u: goto label_22dd90;
            case 0x22DD94u: goto label_22dd94;
            case 0x22DD98u: goto label_22dd98;
            case 0x22DD9Cu: goto label_22dd9c;
            case 0x22DDA0u: goto label_22dda0;
            case 0x22DDA4u: goto label_22dda4;
            case 0x22DDA8u: goto label_22dda8;
            case 0x22DDACu: goto label_22ddac;
            case 0x22DDB0u: goto label_22ddb0;
            case 0x22DDB4u: goto label_22ddb4;
            case 0x22DDB8u: goto label_22ddb8;
            case 0x22DDBCu: goto label_22ddbc;
            case 0x22DDC0u: goto label_22ddc0;
            case 0x22DDC4u: goto label_22ddc4;
            case 0x22DDC8u: goto label_22ddc8;
            case 0x22DDCCu: goto label_22ddcc;
            case 0x22DDD0u: goto label_22ddd0;
            case 0x22DDD4u: goto label_22ddd4;
            case 0x22DDD8u: goto label_22ddd8;
            case 0x22DDDCu: goto label_22dddc;
            case 0x22DDE0u: goto label_22dde0;
            case 0x22DDE4u: goto label_22dde4;
            case 0x22DDE8u: goto label_22dde8;
            case 0x22DDECu: goto label_22ddec;
            case 0x22DDF0u: goto label_22ddf0;
            case 0x22DDF4u: goto label_22ddf4;
            case 0x22DDF8u: goto label_22ddf8;
            case 0x22DDFCu: goto label_22ddfc;
            case 0x22DE00u: goto label_22de00;
            case 0x22DE04u: goto label_22de04;
            case 0x22DE08u: goto label_22de08;
            case 0x22DE0Cu: goto label_22de0c;
            case 0x22DE10u: goto label_22de10;
            case 0x22DE14u: goto label_22de14;
            case 0x22DE18u: goto label_22de18;
            case 0x22DE1Cu: goto label_22de1c;
            case 0x22DE20u: goto label_22de20;
            case 0x22DE24u: goto label_22de24;
            case 0x22DE28u: goto label_22de28;
            case 0x22DE2Cu: goto label_22de2c;
            case 0x22DE30u: goto label_22de30;
            case 0x22DE34u: goto label_22de34;
            case 0x22DE38u: goto label_22de38;
            case 0x22DE3Cu: goto label_22de3c;
            case 0x22DE40u: goto label_22de40;
            case 0x22DE44u: goto label_22de44;
            case 0x22DE48u: goto label_22de48;
            case 0x22DE4Cu: goto label_22de4c;
            case 0x22DE50u: goto label_22de50;
            case 0x22DE54u: goto label_22de54;
            case 0x22DE58u: goto label_22de58;
            case 0x22DE5Cu: goto label_22de5c;
            case 0x22DE60u: goto label_22de60;
            case 0x22DE64u: goto label_22de64;
            case 0x22DE68u: goto label_22de68;
            case 0x22DE6Cu: goto label_22de6c;
            case 0x22DE70u: goto label_22de70;
            case 0x22DE74u: goto label_22de74;
            case 0x22DE78u: goto label_22de78;
            case 0x22DE7Cu: goto label_22de7c;
            case 0x22DE80u: goto label_22de80;
            case 0x22DE84u: goto label_22de84;
            case 0x22DE88u: goto label_22de88;
            case 0x22DE8Cu: goto label_22de8c;
            case 0x22DE90u: goto label_22de90;
            case 0x22DE94u: goto label_22de94;
            case 0x22DE98u: goto label_22de98;
            case 0x22DE9Cu: goto label_22de9c;
            case 0x22DEA0u: goto label_22dea0;
            case 0x22DEA4u: goto label_22dea4;
            case 0x22DEA8u: goto label_22dea8;
            case 0x22DEACu: goto label_22deac;
            case 0x22DEB0u: goto label_22deb0;
            case 0x22DEB4u: goto label_22deb4;
            case 0x22DEB8u: goto label_22deb8;
            case 0x22DEBCu: goto label_22debc;
            case 0x22DEC0u: goto label_22dec0;
            case 0x22DEC4u: goto label_22dec4;
            case 0x22DEC8u: goto label_22dec8;
            case 0x22DECCu: goto label_22decc;
            case 0x22DED0u: goto label_22ded0;
            case 0x22DED4u: goto label_22ded4;
            case 0x22DED8u: goto label_22ded8;
            case 0x22DEDCu: goto label_22dedc;
            case 0x22DEE0u: goto label_22dee0;
            case 0x22DEE4u: goto label_22dee4;
            case 0x22DEE8u: goto label_22dee8;
            case 0x22DEECu: goto label_22deec;
            case 0x22DEF0u: goto label_22def0;
            case 0x22DEF4u: goto label_22def4;
            case 0x22DEF8u: goto label_22def8;
            case 0x22DEFCu: goto label_22defc;
            case 0x22DF00u: goto label_22df00;
            case 0x22DF04u: goto label_22df04;
            case 0x22DF08u: goto label_22df08;
            case 0x22DF0Cu: goto label_22df0c;
            case 0x22DF10u: goto label_22df10;
            case 0x22DF14u: goto label_22df14;
            case 0x22DF18u: goto label_22df18;
            case 0x22DF1Cu: goto label_22df1c;
            case 0x22DF20u: goto label_22df20;
            case 0x22DF24u: goto label_22df24;
            case 0x22DF28u: goto label_22df28;
            case 0x22DF2Cu: goto label_22df2c;
            case 0x22DF30u: goto label_22df30;
            case 0x22DF34u: goto label_22df34;
            case 0x22DF38u: goto label_22df38;
            case 0x22DF3Cu: goto label_22df3c;
            case 0x22DF40u: goto label_22df40;
            case 0x22DF44u: goto label_22df44;
            case 0x22DF48u: goto label_22df48;
            case 0x22DF4Cu: goto label_22df4c;
            case 0x22DF50u: goto label_22df50;
            case 0x22DF54u: goto label_22df54;
            case 0x22DF58u: goto label_22df58;
            case 0x22DF5Cu: goto label_22df5c;
            case 0x22DF60u: goto label_22df60;
            case 0x22DF64u: goto label_22df64;
            case 0x22DF68u: goto label_22df68;
            case 0x22DF6Cu: goto label_22df6c;
            case 0x22DF70u: goto label_22df70;
            case 0x22DF74u: goto label_22df74;
            case 0x22DF78u: goto label_22df78;
            case 0x22DF7Cu: goto label_22df7c;
            case 0x22DF80u: goto label_22df80;
            case 0x22DF84u: goto label_22df84;
            case 0x22DF88u: goto label_22df88;
            case 0x22DF8Cu: goto label_22df8c;
            case 0x22DF90u: goto label_22df90;
            case 0x22DF94u: goto label_22df94;
            case 0x22DF98u: goto label_22df98;
            case 0x22DF9Cu: goto label_22df9c;
            case 0x22DFA0u: goto label_22dfa0;
            case 0x22DFA4u: goto label_22dfa4;
            case 0x22DFA8u: goto label_22dfa8;
            case 0x22DFACu: goto label_22dfac;
            case 0x22DFB0u: goto label_22dfb0;
            case 0x22DFB4u: goto label_22dfb4;
            case 0x22DFB8u: goto label_22dfb8;
            case 0x22DFBCu: goto label_22dfbc;
            case 0x22DFC0u: goto label_22dfc0;
            case 0x22DFC4u: goto label_22dfc4;
            case 0x22DFC8u: goto label_22dfc8;
            case 0x22DFCCu: goto label_22dfcc;
            case 0x22DFD0u: goto label_22dfd0;
            case 0x22DFD4u: goto label_22dfd4;
            case 0x22DFD8u: goto label_22dfd8;
            case 0x22DFDCu: goto label_22dfdc;
            case 0x22DFE0u: goto label_22dfe0;
            case 0x22DFE4u: goto label_22dfe4;
            case 0x22DFE8u: goto label_22dfe8;
            case 0x22DFECu: goto label_22dfec;
            case 0x22DFF0u: goto label_22dff0;
            case 0x22DFF4u: goto label_22dff4;
            case 0x22DFF8u: goto label_22dff8;
            case 0x22DFFCu: goto label_22dffc;
            case 0x22E000u: goto label_22e000;
            case 0x22E004u: goto label_22e004;
            case 0x22E008u: goto label_22e008;
            case 0x22E00Cu: goto label_22e00c;
            case 0x22E010u: goto label_22e010;
            case 0x22E014u: goto label_22e014;
            case 0x22E018u: goto label_22e018;
            case 0x22E01Cu: goto label_22e01c;
            case 0x22E020u: goto label_22e020;
            case 0x22E024u: goto label_22e024;
            case 0x22E028u: goto label_22e028;
            case 0x22E02Cu: goto label_22e02c;
            case 0x22E030u: goto label_22e030;
            case 0x22E034u: goto label_22e034;
            case 0x22E038u: goto label_22e038;
            case 0x22E03Cu: goto label_22e03c;
            case 0x22E040u: goto label_22e040;
            case 0x22E044u: goto label_22e044;
            case 0x22E048u: goto label_22e048;
            case 0x22E04Cu: goto label_22e04c;
            case 0x22E050u: goto label_22e050;
            case 0x22E054u: goto label_22e054;
            case 0x22E058u: goto label_22e058;
            case 0x22E05Cu: goto label_22e05c;
            case 0x22E060u: goto label_22e060;
            case 0x22E064u: goto label_22e064;
            case 0x22E068u: goto label_22e068;
            case 0x22E06Cu: goto label_22e06c;
            case 0x22E070u: goto label_22e070;
            case 0x22E074u: goto label_22e074;
            case 0x22E078u: goto label_22e078;
            case 0x22E07Cu: goto label_22e07c;
            case 0x22E080u: goto label_22e080;
            case 0x22E084u: goto label_22e084;
            case 0x22E088u: goto label_22e088;
            case 0x22E08Cu: goto label_22e08c;
            case 0x22E090u: goto label_22e090;
            case 0x22E094u: goto label_22e094;
            case 0x22E098u: goto label_22e098;
            case 0x22E09Cu: goto label_22e09c;
            case 0x22E0A0u: goto label_22e0a0;
            case 0x22E0A4u: goto label_22e0a4;
            case 0x22E0A8u: goto label_22e0a8;
            case 0x22E0ACu: goto label_22e0ac;
            case 0x22E0B0u: goto label_22e0b0;
            case 0x22E0B4u: goto label_22e0b4;
            case 0x22E0B8u: goto label_22e0b8;
            case 0x22E0BCu: goto label_22e0bc;
            case 0x22E0C0u: goto label_22e0c0;
            case 0x22E0C4u: goto label_22e0c4;
            case 0x22E0C8u: goto label_22e0c8;
            case 0x22E0CCu: goto label_22e0cc;
            case 0x22E0D0u: goto label_22e0d0;
            case 0x22E0D4u: goto label_22e0d4;
            case 0x22E0D8u: goto label_22e0d8;
            case 0x22E0DCu: goto label_22e0dc;
            case 0x22E0E0u: goto label_22e0e0;
            case 0x22E0E4u: goto label_22e0e4;
            case 0x22E0E8u: goto label_22e0e8;
            case 0x22E0ECu: goto label_22e0ec;
            case 0x22E0F0u: goto label_22e0f0;
            case 0x22E0F4u: goto label_22e0f4;
            case 0x22E0F8u: goto label_22e0f8;
            case 0x22E0FCu: goto label_22e0fc;
            case 0x22E100u: goto label_22e100;
            case 0x22E104u: goto label_22e104;
            case 0x22E108u: goto label_22e108;
            case 0x22E10Cu: goto label_22e10c;
            case 0x22E110u: goto label_22e110;
            case 0x22E114u: goto label_22e114;
            case 0x22E118u: goto label_22e118;
            case 0x22E11Cu: goto label_22e11c;
            case 0x22E120u: goto label_22e120;
            case 0x22E124u: goto label_22e124;
            case 0x22E128u: goto label_22e128;
            case 0x22E12Cu: goto label_22e12c;
            case 0x22E130u: goto label_22e130;
            case 0x22E134u: goto label_22e134;
            case 0x22E138u: goto label_22e138;
            case 0x22E13Cu: goto label_22e13c;
            case 0x22E140u: goto label_22e140;
            case 0x22E144u: goto label_22e144;
            case 0x22E148u: goto label_22e148;
            case 0x22E14Cu: goto label_22e14c;
            case 0x22E150u: goto label_22e150;
            case 0x22E154u: goto label_22e154;
            case 0x22E158u: goto label_22e158;
            case 0x22E15Cu: goto label_22e15c;
            case 0x22E160u: goto label_22e160;
            case 0x22E164u: goto label_22e164;
            case 0x22E168u: goto label_22e168;
            case 0x22E16Cu: goto label_22e16c;
            case 0x22E170u: goto label_22e170;
            case 0x22E174u: goto label_22e174;
            case 0x22E178u: goto label_22e178;
            case 0x22E17Cu: goto label_22e17c;
            case 0x22E180u: goto label_22e180;
            case 0x22E184u: goto label_22e184;
            case 0x22E188u: goto label_22e188;
            case 0x22E18Cu: goto label_22e18c;
            case 0x22E190u: goto label_22e190;
            case 0x22E194u: goto label_22e194;
            case 0x22E198u: goto label_22e198;
            case 0x22E19Cu: goto label_22e19c;
            case 0x22E1A0u: goto label_22e1a0;
            case 0x22E1A4u: goto label_22e1a4;
            case 0x22E1A8u: goto label_22e1a8;
            case 0x22E1ACu: goto label_22e1ac;
            case 0x22E1B0u: goto label_22e1b0;
            case 0x22E1B4u: goto label_22e1b4;
            case 0x22E1B8u: goto label_22e1b8;
            case 0x22E1BCu: goto label_22e1bc;
            case 0x22E1C0u: goto label_22e1c0;
            case 0x22E1C4u: goto label_22e1c4;
            case 0x22E1C8u: goto label_22e1c8;
            case 0x22E1CCu: goto label_22e1cc;
            case 0x22E1D0u: goto label_22e1d0;
            case 0x22E1D4u: goto label_22e1d4;
            case 0x22E1D8u: goto label_22e1d8;
            case 0x22E1DCu: goto label_22e1dc;
            case 0x22E1E0u: goto label_22e1e0;
            case 0x22E1E4u: goto label_22e1e4;
            case 0x22E1E8u: goto label_22e1e8;
            case 0x22E1ECu: goto label_22e1ec;
            case 0x22E1F0u: goto label_22e1f0;
            case 0x22E1F4u: goto label_22e1f4;
            case 0x22E1F8u: goto label_22e1f8;
            case 0x22E1FCu: goto label_22e1fc;
            case 0x22E200u: goto label_22e200;
            case 0x22E204u: goto label_22e204;
            case 0x22E208u: goto label_22e208;
            case 0x22E20Cu: goto label_22e20c;
            case 0x22E210u: goto label_22e210;
            case 0x22E214u: goto label_22e214;
            case 0x22E218u: goto label_22e218;
            case 0x22E21Cu: goto label_22e21c;
            case 0x22E220u: goto label_22e220;
            case 0x22E224u: goto label_22e224;
            case 0x22E228u: goto label_22e228;
            case 0x22E22Cu: goto label_22e22c;
            case 0x22E230u: goto label_22e230;
            case 0x22E234u: goto label_22e234;
            case 0x22E238u: goto label_22e238;
            case 0x22E23Cu: goto label_22e23c;
            case 0x22E240u: goto label_22e240;
            case 0x22E244u: goto label_22e244;
            case 0x22E248u: goto label_22e248;
            case 0x22E24Cu: goto label_22e24c;
            case 0x22E250u: goto label_22e250;
            case 0x22E254u: goto label_22e254;
            case 0x22E258u: goto label_22e258;
            case 0x22E25Cu: goto label_22e25c;
            case 0x22E260u: goto label_22e260;
            case 0x22E264u: goto label_22e264;
            case 0x22E268u: goto label_22e268;
            case 0x22E26Cu: goto label_22e26c;
            case 0x22E270u: goto label_22e270;
            case 0x22E274u: goto label_22e274;
            case 0x22E278u: goto label_22e278;
            case 0x22E27Cu: goto label_22e27c;
            case 0x22E280u: goto label_22e280;
            case 0x22E284u: goto label_22e284;
            case 0x22E288u: goto label_22e288;
            case 0x22E28Cu: goto label_22e28c;
            case 0x22E290u: goto label_22e290;
            case 0x22E294u: goto label_22e294;
            case 0x22E298u: goto label_22e298;
            case 0x22E29Cu: goto label_22e29c;
            case 0x22E2A0u: goto label_22e2a0;
            case 0x22E2A4u: goto label_22e2a4;
            case 0x22E2A8u: goto label_22e2a8;
            case 0x22E2ACu: goto label_22e2ac;
            case 0x22E2B0u: goto label_22e2b0;
            case 0x22E2B4u: goto label_22e2b4;
            case 0x22E2B8u: goto label_22e2b8;
            case 0x22E2BCu: goto label_22e2bc;
            case 0x22E2C0u: goto label_22e2c0;
            case 0x22E2C4u: goto label_22e2c4;
            case 0x22E2C8u: goto label_22e2c8;
            case 0x22E2CCu: goto label_22e2cc;
            case 0x22E2D0u: goto label_22e2d0;
            case 0x22E2D4u: goto label_22e2d4;
            case 0x22E2D8u: goto label_22e2d8;
            case 0x22E2DCu: goto label_22e2dc;
            case 0x22E2E0u: goto label_22e2e0;
            case 0x22E2E4u: goto label_22e2e4;
            case 0x22E2E8u: goto label_22e2e8;
            case 0x22E2ECu: goto label_22e2ec;
            case 0x22E2F0u: goto label_22e2f0;
            case 0x22E2F4u: goto label_22e2f4;
            case 0x22E2F8u: goto label_22e2f8;
            case 0x22E2FCu: goto label_22e2fc;
            case 0x22E300u: goto label_22e300;
            case 0x22E304u: goto label_22e304;
            case 0x22E308u: goto label_22e308;
            case 0x22E30Cu: goto label_22e30c;
            case 0x22E310u: goto label_22e310;
            case 0x22E314u: goto label_22e314;
            case 0x22E318u: goto label_22e318;
            case 0x22E31Cu: goto label_22e31c;
            case 0x22E320u: goto label_22e320;
            case 0x22E324u: goto label_22e324;
            case 0x22E328u: goto label_22e328;
            case 0x22E32Cu: goto label_22e32c;
            case 0x22E330u: goto label_22e330;
            case 0x22E334u: goto label_22e334;
            case 0x22E338u: goto label_22e338;
            case 0x22E33Cu: goto label_22e33c;
            case 0x22E340u: goto label_22e340;
            case 0x22E344u: goto label_22e344;
            case 0x22E348u: goto label_22e348;
            case 0x22E34Cu: goto label_22e34c;
            case 0x22E350u: goto label_22e350;
            case 0x22E354u: goto label_22e354;
            case 0x22E358u: goto label_22e358;
            case 0x22E35Cu: goto label_22e35c;
            case 0x22E360u: goto label_22e360;
            case 0x22E364u: goto label_22e364;
            case 0x22E368u: goto label_22e368;
            case 0x22E36Cu: goto label_22e36c;
            case 0x22E370u: goto label_22e370;
            case 0x22E374u: goto label_22e374;
            case 0x22E378u: goto label_22e378;
            case 0x22E37Cu: goto label_22e37c;
            case 0x22E380u: goto label_22e380;
            case 0x22E384u: goto label_22e384;
            case 0x22E388u: goto label_22e388;
            case 0x22E38Cu: goto label_22e38c;
            case 0x22E390u: goto label_22e390;
            case 0x22E394u: goto label_22e394;
            case 0x22E398u: goto label_22e398;
            case 0x22E39Cu: goto label_22e39c;
            case 0x22E3A0u: goto label_22e3a0;
            case 0x22E3A4u: goto label_22e3a4;
            case 0x22E3A8u: goto label_22e3a8;
            case 0x22E3ACu: goto label_22e3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D3ACu;
label_22d3ac:
    // 0x22d3ac: 0x51100
    ctx->pc = 0x22d3acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d3b0:
    // 0x22d3b0: 0x2021021
    ctx->pc = 0x22d3b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d3b4:
    // 0x22d3b4: 0x8c420150
    ctx->pc = 0x22d3b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d3b8:
    // 0x22d3b8: 0x3042000f
    ctx->pc = 0x22d3b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_22d3bc:
    // 0x22d3bc: 0x5040001f
label_22d3c0:
    if (ctx->pc == 0x22D3C0u) {
        ctx->pc = 0x22D3C0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D3C4u;
        goto label_22d3c4;
    }
    ctx->pc = 0x22D3BCu;
    {
        const bool branch_taken_0x22d3bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d3bc) {
            ctx->pc = 0x22D3C0u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D43Cu;
            goto label_22d43c;
        }
    }
    ctx->pc = 0x22D3C4u;
label_22d3c4:
    // 0x22d3c4: 0x44800000
    ctx->pc = 0x22d3c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d3c8:
    // 0x22d3c8: 0x4600b034
    ctx->pc = 0x22d3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d3cc:
    // 0x22d3cc: 0x0
    ctx->pc = 0x22d3ccu;
    // NOP
label_22d3d0:
    // 0x22d3d0: 0x4503000a
label_22d3d4:
    if (ctx->pc == 0x22D3D4u) {
        ctx->pc = 0x22D3D4u;
        ctx->f[22] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x22D3D8u;
        goto label_22d3d8;
    }
    ctx->pc = 0x22D3D0u;
    {
        const bool branch_taken_0x22d3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3d0) {
            ctx->pc = 0x22D3D4u;
            ctx->f[22] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x22D3FCu;
            goto label_22d3fc;
        }
    }
    ctx->pc = 0x22D3D8u;
label_22d3d8:
    // 0x22d3d8: 0x46020034
    ctx->pc = 0x22d3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d3dc:
    // 0x22d3dc: 0x0
    ctx->pc = 0x22d3dcu;
    // NOP
label_22d3e0:
    // 0x22d3e0: 0x45020010
label_22d3e4:
    if (ctx->pc == 0x22D3E4u) {
        ctx->pc = 0x22D3E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D3E8u;
        goto label_22d3e8;
    }
    ctx->pc = 0x22D3E0u;
    {
        const bool branch_taken_0x22d3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3e0) {
            ctx->pc = 0x22D3E4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D424u;
            goto label_22d424;
        }
    }
    ctx->pc = 0x22D3E8u;
label_22d3e8:
    // 0x22d3e8: 0x4602b034
    ctx->pc = 0x22d3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d3ec:
    // 0x22d3ec: 0x0
    ctx->pc = 0x22d3ecu;
    // NOP
label_22d3f0:
    // 0x22d3f0: 0x4502000c
label_22d3f4:
    if (ctx->pc == 0x22D3F4u) {
        ctx->pc = 0x22D3F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D3F8u;
        goto label_22d3f8;
    }
    ctx->pc = 0x22D3F0u;
    {
        const bool branch_taken_0x22d3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3f0) {
            ctx->pc = 0x22D3F4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D424u;
            goto label_22d424;
        }
    }
    ctx->pc = 0x22D3F8u;
label_22d3f8:
    // 0x22d3f8: 0x46001586
    ctx->pc = 0x22d3f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
label_22d3fc:
    // 0x22d3fc: 0x8e030130
    ctx->pc = 0x22d3fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22d400:
    // 0x22d400: 0x2402fff0
    ctx->pc = 0x22d400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_22d404:
    // 0x22d404: 0x621824
    ctx->pc = 0x22d404u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d408:
    // 0x22d408: 0xae030130
    ctx->pc = 0x22d408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_22d40c:
    // 0x22d40c: 0x51100
    ctx->pc = 0x22d40cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d410:
    // 0x22d410: 0x2021021
    ctx->pc = 0x22d410u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d414:
    // 0x22d414: 0x8c420150
    ctx->pc = 0x22d414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d418:
    // 0x22d418: 0x621825
    ctx->pc = 0x22d418u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d41c:
    // 0x22d41c: 0xae030130
    ctx->pc = 0x22d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_22d420:
    // 0x22d420: 0x51100
    ctx->pc = 0x22d420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d424:
    // 0x22d424: 0x2021021
    ctx->pc = 0x22d424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d428:
    // 0x22d428: 0x8c430150
    ctx->pc = 0x22d428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d42c:
    // 0x22d42c: 0x2402fff0
    ctx->pc = 0x22d42cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_22d430:
    // 0x22d430: 0x621824
    ctx->pc = 0x22d430u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d434:
    // 0x22d434: 0x10000004
label_22d438:
    if (ctx->pc == 0x22D438u) {
        ctx->pc = 0x22D438u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x22D43Cu;
        goto label_22d43c;
    }
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D438u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D448u;
            goto label_22d448;
        }
    }
    ctx->pc = 0x22D43Cu;
label_22d43c:
    // 0x22d43c: 0x2021021
    ctx->pc = 0x22d43cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d440:
    // 0x22d440: 0x8e030130
    ctx->pc = 0x22d440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22d444:
    // 0x22d444: 0x8c420150
    ctx->pc = 0x22d444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d448:
    // 0x22d448: 0x621825
    ctx->pc = 0x22d448u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d44c:
    // 0x22d44c: 0x10000067
label_22d450:
    if (ctx->pc == 0x22D450u) {
        ctx->pc = 0x22D450u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
        ctx->pc = 0x22D454u;
        goto label_22d454;
    }
    ctx->pc = 0x22D44Cu;
    {
        const bool branch_taken_0x22d44c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D450u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
        if (branch_taken_0x22d44c) {
            ctx->pc = 0x22D5ECu;
            goto label_22d5ec;
        }
    }
    ctx->pc = 0x22D454u;
label_22d454:
    // 0x22d454: 0x51100
    ctx->pc = 0x22d454u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d458:
    // 0x22d458: 0x26040150
    ctx->pc = 0x22d458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 336));
label_22d45c:
    // 0x22d45c: 0x822021
    ctx->pc = 0x22d45cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22d460:
    // 0x22d460: 0x8e020134
    ctx->pc = 0x22d460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22d464:
    // 0x22d464: 0x8c830000
    ctx->pc = 0x22d464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d468:
    // 0x22d468: 0x431025
    ctx->pc = 0x22d468u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d46c:
    // 0x22d46c: 0xae020134
    ctx->pc = 0x22d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_22d470:
    // 0x22d470: 0x8c820000
    ctx->pc = 0x22d470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d474:
    // 0x22d474: 0x3c030001
    ctx->pc = 0x22d474u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_22d478:
    // 0x22d478: 0x431024
    ctx->pc = 0x22d478u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d47c:
    // 0x22d47c: 0x5040000c
label_22d480:
    if (ctx->pc == 0x22D480u) {
        ctx->pc = 0x22D480u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D484u;
        goto label_22d484;
    }
    ctx->pc = 0x22D47Cu;
    {
        const bool branch_taken_0x22d47c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d47c) {
            ctx->pc = 0x22D480u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D4B0u;
            goto label_22d4b0;
        }
    }
    ctx->pc = 0x22D484u;
label_22d484:
    // 0x22d484: 0x44800000
    ctx->pc = 0x22d484u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d488:
    // 0x22d488: 0x46001034
    ctx->pc = 0x22d488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d48c:
    // 0x22d48c: 0x0
    ctx->pc = 0x22d48cu;
    // NOP
label_22d490:
    // 0x22d490: 0x45030006
label_22d494:
    if (ctx->pc == 0x22D494u) {
        ctx->pc = 0x22D494u;
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x22D498u;
        goto label_22d498;
    }
    ctx->pc = 0x22D490u;
    {
        const bool branch_taken_0x22d490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d490) {
            ctx->pc = 0x22D494u;
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x22D4ACu;
            goto label_22d4ac;
        }
    }
    ctx->pc = 0x22D498u;
label_22d498:
    // 0x22d498: 0x4602a034
    ctx->pc = 0x22d498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d49c:
    // 0x22d49c: 0x0
    ctx->pc = 0x22d49cu;
    // NOP
label_22d4a0:
    // 0x22d4a0: 0x45020003
label_22d4a4:
    if (ctx->pc == 0x22D4A4u) {
        ctx->pc = 0x22D4A4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D4A8u;
        goto label_22d4a8;
    }
    ctx->pc = 0x22D4A0u;
    {
        const bool branch_taken_0x22d4a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d4a0) {
            ctx->pc = 0x22D4A4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D4B0u;
            goto label_22d4b0;
        }
    }
    ctx->pc = 0x22D4A8u;
label_22d4a8:
    // 0x22d4a8: 0x46001506
    ctx->pc = 0x22d4a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_22d4ac:
    // 0x22d4ac: 0x51100
    ctx->pc = 0x22d4acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d4b0:
    // 0x22d4b0: 0x2021021
    ctx->pc = 0x22d4b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d4b4:
    // 0x22d4b4: 0x8c420150
    ctx->pc = 0x22d4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d4b8:
    // 0x22d4b8: 0x3c030020
    ctx->pc = 0x22d4b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
label_22d4bc:
    // 0x22d4bc: 0x10000045
label_22d4c0:
    if (ctx->pc == 0x22D4C0u) {
        ctx->pc = 0x22D4C0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x22D4C4u;
        goto label_22d4c4;
    }
    ctx->pc = 0x22D4BCu;
    {
        const bool branch_taken_0x22d4bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D4C0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x22d4bc) {
            ctx->pc = 0x22D5D4u;
            goto label_22d5d4;
        }
    }
    ctx->pc = 0x22D4C4u;
label_22d4c4:
    // 0x22d4c4: 0x51100
    ctx->pc = 0x22d4c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d4c8:
    // 0x22d4c8: 0x2021021
    ctx->pc = 0x22d4c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d4cc:
    // 0x22d4cc: 0xc6000120
    ctx->pc = 0x22d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d4d0:
    // 0x22d4d0: 0xc441014c
    ctx->pc = 0x22d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d4d4:
    // 0x22d4d4: 0x46010000
    ctx->pc = 0x22d4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22d4d8:
    // 0x22d4d8: 0x10000044
label_22d4dc:
    if (ctx->pc == 0x22D4DCu) {
        ctx->pc = 0x22D4DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x22D4E0u;
        goto label_22d4e0;
    }
    ctx->pc = 0x22D4D8u;
    {
        const bool branch_taken_0x22d4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D4DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        if (branch_taken_0x22d4d8) {
            ctx->pc = 0x22D5ECu;
            goto label_22d5ec;
        }
    }
    ctx->pc = 0x22D4E0u;
label_22d4e0:
    // 0x22d4e0: 0x51100
    ctx->pc = 0x22d4e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d4e4:
    // 0x22d4e4: 0x2021021
    ctx->pc = 0x22d4e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d4e8:
    // 0x22d4e8: 0xc6000124
    ctx->pc = 0x22d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d4ec:
    // 0x22d4ec: 0xc441014c
    ctx->pc = 0x22d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d4f0:
    // 0x22d4f0: 0x46010000
    ctx->pc = 0x22d4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22d4f4:
    // 0x22d4f4: 0xe6000124
    ctx->pc = 0x22d4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_22d4f8:
    // 0x22d4f8: 0x8e020138
    ctx->pc = 0x22d4f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d4fc:
    // 0x22d4fc: 0x3c030001
    ctx->pc = 0x22d4fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_22d500:
    // 0x22d500: 0x431025
    ctx->pc = 0x22d500u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d504:
    // 0x22d504: 0x10000039
label_22d508:
    if (ctx->pc == 0x22D508u) {
        ctx->pc = 0x22D508u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        ctx->pc = 0x22D50Cu;
        goto label_22d50c;
    }
    ctx->pc = 0x22D504u;
    {
        const bool branch_taken_0x22d504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D508u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        if (branch_taken_0x22d504) {
            ctx->pc = 0x22D5ECu;
            goto label_22d5ec;
        }
    }
    ctx->pc = 0x22D50Cu;
label_22d50c:
    // 0x22d50c: 0x51100
    ctx->pc = 0x22d50cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d510:
    // 0x22d510: 0x26040150
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 336));
label_22d514:
    // 0x22d514: 0x822021
    ctx->pc = 0x22d514u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22d518:
    // 0x22d518: 0x8e020138
    ctx->pc = 0x22d518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d51c:
    // 0x22d51c: 0x8c830000
    ctx->pc = 0x22d51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d520:
    // 0x22d520: 0x431025
    ctx->pc = 0x22d520u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d524:
    // 0x22d524: 0xae020138
    ctx->pc = 0x22d524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_22d528:
    // 0x22d528: 0x8c820000
    ctx->pc = 0x22d528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d52c:
    // 0x22d52c: 0x3c030008
    ctx->pc = 0x22d52cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_22d530:
    // 0x22d530: 0x431024
    ctx->pc = 0x22d530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d534:
    // 0x22d534: 0x10400014
label_22d538:
    if (ctx->pc == 0x22D538u) {
        ctx->pc = 0x22D538u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D53Cu;
        goto label_22d53c;
    }
    ctx->pc = 0x22D534u;
    {
        const bool branch_taken_0x22d534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D538u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x22d534) {
            ctx->pc = 0x22D588u;
            goto label_22d588;
        }
    }
    ctx->pc = 0x22D53Cu;
label_22d53c:
    // 0x22d53c: 0xc6000800
    ctx->pc = 0x22d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d540:
    // 0x22d540: 0x3c0142c8
    ctx->pc = 0x22d540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
label_22d544:
    // 0x22d544: 0x44810800
    ctx->pc = 0x22d544u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_22d548:
    // 0x22d548: 0x46010000
    ctx->pc = 0x22d548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22d54c:
    // 0x22d54c: 0x46000834
    ctx->pc = 0x22d54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d550:
    // 0x22d550: 0x0
    ctx->pc = 0x22d550u;
    // NOP
label_22d554:
    // 0x22d554: 0x45000003
label_22d558:
    if (ctx->pc == 0x22D558u) {
        ctx->pc = 0x22D558u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
        ctx->pc = 0x22D55Cu;
        goto label_22d55c;
    }
    ctx->pc = 0x22D554u;
    {
        const bool branch_taken_0x22d554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D558u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
        if (branch_taken_0x22d554) {
            ctx->pc = 0x22D564u;
            goto label_22d564;
        }
    }
    ctx->pc = 0x22D55Cu;
label_22d55c:
    // 0x22d55c: 0xe6010800
    ctx->pc = 0x22d55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
label_22d560:
    // 0x22d560: 0x51100
    ctx->pc = 0x22d560u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d564:
    // 0x22d564: 0x26030144
    ctx->pc = 0x22d564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 324));
label_22d568:
    // 0x22d568: 0x621821
    ctx->pc = 0x22d568u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22d56c:
    // 0x22d56c: 0xc4600000
    ctx->pc = 0x22d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d570:
    // 0x22d570: 0x44800800
    ctx->pc = 0x22d570u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_22d574:
    // 0x22d574: 0x46000836
    ctx->pc = 0x22d574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d578:
    // 0x22d578: 0x0
    ctx->pc = 0x22d578u;
    // NOP
label_22d57c:
    // 0x22d57c: 0x45030001
label_22d580:
    if (ctx->pc == 0x22D580u) {
        ctx->pc = 0x22D580u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x22D584u;
        goto label_22d584;
    }
    ctx->pc = 0x22D57Cu;
    {
        const bool branch_taken_0x22d57c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d57c) {
            ctx->pc = 0x22D580u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->pc = 0x22D584u;
            goto label_22d584;
        }
    }
    ctx->pc = 0x22D584u;
label_22d584:
    // 0x22d584: 0x51100
    ctx->pc = 0x22d584u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d588:
    // 0x22d588: 0x2021021
    ctx->pc = 0x22d588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d58c:
    // 0x22d58c: 0x8c420150
    ctx->pc = 0x22d58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d590:
    // 0x22d590: 0x30420004
    ctx->pc = 0x22d590u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_22d594:
    // 0x22d594: 0x5040000c
label_22d598:
    if (ctx->pc == 0x22D598u) {
        ctx->pc = 0x22D598u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D59Cu;
        goto label_22d59c;
    }
    ctx->pc = 0x22D594u;
    {
        const bool branch_taken_0x22d594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d594) {
            ctx->pc = 0x22D598u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D5C8u;
            goto label_22d5c8;
        }
    }
    ctx->pc = 0x22D59Cu;
label_22d59c:
    // 0x22d59c: 0x44800000
    ctx->pc = 0x22d59cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d5a0:
    // 0x22d5a0: 0x46001034
    ctx->pc = 0x22d5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5a4:
    // 0x22d5a4: 0x0
    ctx->pc = 0x22d5a4u;
    // NOP
label_22d5a8:
    // 0x22d5a8: 0x45030006
label_22d5ac:
    if (ctx->pc == 0x22D5ACu) {
        ctx->pc = 0x22D5ACu;
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x22D5B0u;
        goto label_22d5b0;
    }
    ctx->pc = 0x22D5A8u;
    {
        const bool branch_taken_0x22d5a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5a8) {
            ctx->pc = 0x22D5ACu;
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x22D5C4u;
            goto label_22d5c4;
        }
    }
    ctx->pc = 0x22D5B0u;
label_22d5b0:
    // 0x22d5b0: 0x4602a834
    ctx->pc = 0x22d5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5b4:
    // 0x22d5b4: 0x0
    ctx->pc = 0x22d5b4u;
    // NOP
label_22d5b8:
    // 0x22d5b8: 0x45000003
label_22d5bc:
    if (ctx->pc == 0x22D5BCu) {
        ctx->pc = 0x22D5BCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D5C0u;
        goto label_22d5c0;
    }
    ctx->pc = 0x22D5B8u;
    {
        const bool branch_taken_0x22d5b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D5BCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x22d5b8) {
            ctx->pc = 0x22D5C8u;
            goto label_22d5c8;
        }
    }
    ctx->pc = 0x22D5C0u;
label_22d5c0:
    // 0x22d5c0: 0x46001546
    ctx->pc = 0x22d5c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_22d5c4:
    // 0x22d5c4: 0x51100
    ctx->pc = 0x22d5c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_22d5c8:
    // 0x22d5c8: 0x2021021
    ctx->pc = 0x22d5c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22d5cc:
    // 0x22d5cc: 0x8c420150
    ctx->pc = 0x22d5ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22d5d0:
    // 0x22d5d0: 0x304204f1
    ctx->pc = 0x22d5d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1265));
label_22d5d4:
    // 0x22d5d4: 0x50400006
label_22d5d8:
    if (ctx->pc == 0x22D5D8u) {
        ctx->pc = 0x22D5D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x22D5DCu;
        goto label_22d5dc;
    }
    ctx->pc = 0x22D5D4u;
    {
        const bool branch_taken_0x22d5d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d5d4) {
            ctx->pc = 0x22D5D8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x22D5F0u;
            goto label_22d5f0;
        }
    }
    ctx->pc = 0x22D5DCu;
label_22d5dc:
    // 0x22d5dc: 0x4602b834
    ctx->pc = 0x22d5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5e0:
    // 0x22d5e0: 0x0
    ctx->pc = 0x22d5e0u;
    // NOP
label_22d5e4:
    // 0x22d5e4: 0x45030001
label_22d5e8:
    if (ctx->pc == 0x22D5E8u) {
        ctx->pc = 0x22D5E8u;
        ctx->f[23] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x22D5ECu;
        goto label_22d5ec;
    }
    ctx->pc = 0x22D5E4u;
    {
        const bool branch_taken_0x22d5e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5e4) {
            ctx->pc = 0x22D5E8u;
            ctx->f[23] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x22D5ECu;
            goto label_22d5ec;
        }
    }
    ctx->pc = 0x22D5ECu;
label_22d5ec:
    // 0x22d5ec: 0x24a50001
    ctx->pc = 0x22d5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_22d5f0:
    // 0x22d5f0: 0x28a20008
    ctx->pc = 0x22d5f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
label_22d5f4:
    // 0x22d5f4: 0x5440ff24
label_22d5f8:
    if (ctx->pc == 0x22D5F8u) {
        ctx->pc = 0x22D5F8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22D5FCu;
        goto label_22d5fc;
    }
    ctx->pc = 0x22D5F4u;
    {
        const bool branch_taken_0x22d5f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22d5f4) {
            ctx->pc = 0x22D5F8u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x22D288u;
            goto label_22d288;
        }
    }
    ctx->pc = 0x22D5FCu;
label_22d5fc:
    // 0x22d5fc: 0x8e020080
    ctx->pc = 0x22d5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22d600:
    // 0x22d600: 0x504002f2
label_22d604:
    if (ctx->pc == 0x22D604u) {
        ctx->pc = 0x22D604u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->pc = 0x22D608u;
        goto label_22d608;
    }
    ctx->pc = 0x22D600u;
    {
        const bool branch_taken_0x22d600 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d600) {
            ctx->pc = 0x22D604u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 316)));
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22D608u;
label_22d608:
    // 0x22d608: 0x8e020138
    ctx->pc = 0x22d608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d60c:
    // 0x22d60c: 0x30420002
    ctx->pc = 0x22d60cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_22d610:
    // 0x22d610: 0x10400005
label_22d614:
    if (ctx->pc == 0x22D614u) {
        ctx->pc = 0x22D614u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x22D618u;
        goto label_22d618;
    }
    ctx->pc = 0x22D610u;
    {
        const bool branch_taken_0x22d610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D614u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x22d610) {
            ctx->pc = 0x22D628u;
            goto label_22d628;
        }
    }
    ctx->pc = 0x22D618u;
label_22d618:
    // 0x22d618: 0xc08b204
label_22d61c:
    if (ctx->pc == 0x22D61Cu) {
        ctx->pc = 0x22D61Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D620u;
        goto label_22d620;
    }
    ctx->pc = 0x22D618u;
    SET_GPR_U32(ctx, 31, 0x22D620u);
    ctx->pc = 0x22D61Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_see_thru_0x22c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D620u; }
    }
    if (ctx->pc != 0x22D620u) { return; }
    ctx->pc = 0x22D620u;
label_22d620:
    // 0x22d620: 0x10000006
label_22d624:
    if (ctx->pc == 0x22D624u) {
        ctx->pc = 0x22D624u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->pc = 0x22D628u;
        goto label_22d628;
    }
    ctx->pc = 0x22D620u;
    {
        const bool branch_taken_0x22d620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D624u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
        if (branch_taken_0x22d620) {
            ctx->pc = 0x22D63Cu;
            goto label_22d63c;
        }
    }
    ctx->pc = 0x22D628u;
label_22d628:
    // 0x22d628: 0x50400004
label_22d62c:
    if (ctx->pc == 0x22D62Cu) {
        ctx->pc = 0x22D62Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->pc = 0x22D630u;
        goto label_22d630;
    }
    ctx->pc = 0x22D628u;
    {
        const bool branch_taken_0x22d628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d628) {
            ctx->pc = 0x22D62Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->pc = 0x22D63Cu;
            goto label_22d63c;
        }
    }
    ctx->pc = 0x22D630u;
label_22d630:
    // 0x22d630: 0xc08b1bc
label_22d634:
    if (ctx->pc == 0x22D634u) {
        ctx->pc = 0x22D634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D638u;
        goto label_22d638;
    }
    ctx->pc = 0x22D630u;
    SET_GPR_U32(ctx, 31, 0x22D638u);
    ctx->pc = 0x22D634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_see_thru_0x22c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D638u; }
    }
    if (ctx->pc != 0x22D638u) { return; }
    ctx->pc = 0x22D638u;
label_22d638:
    // 0x22d638: 0x8e0301e0
    ctx->pc = 0x22d638u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_22d63c:
    // 0x22d63c: 0x24020092
    ctx->pc = 0x22d63cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 146));
label_22d640:
    // 0x22d640: 0x54620004
label_22d644:
    if (ctx->pc == 0x22D644u) {
        ctx->pc = 0x22D644u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22D648u;
        goto label_22d648;
    }
    ctx->pc = 0x22D640u;
    {
        const bool branch_taken_0x22d640 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22d640) {
            ctx->pc = 0x22D644u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22D654u;
            goto label_22d654;
        }
    }
    ctx->pc = 0x22D648u;
label_22d648:
    // 0x22d648: 0x8e040080
    ctx->pc = 0x22d648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22d64c:
    // 0x22d64c: 0x10000027
label_22d650:
    if (ctx->pc == 0x22D650u) {
        ctx->pc = 0x22D650u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 95));
        ctx->pc = 0x22D654u;
        goto label_22d654;
    }
    ctx->pc = 0x22D64Cu;
    {
        const bool branch_taken_0x22d64c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D650u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x22d64c) {
            ctx->pc = 0x22D6ECu;
            goto label_22d6ec;
        }
    }
    ctx->pc = 0x22D654u;
label_22d654:
    // 0x22d654: 0x30420004
    ctx->pc = 0x22d654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_22d658:
    // 0x22d658: 0x50400028
label_22d65c:
    if (ctx->pc == 0x22D65Cu) {
        ctx->pc = 0x22D65Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22D660u;
        goto label_22d660;
    }
    ctx->pc = 0x22D658u;
    {
        const bool branch_taken_0x22d658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d658) {
            ctx->pc = 0x22D65Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x22D6FCu;
            goto label_22d6fc;
        }
    }
    ctx->pc = 0x22D660u;
label_22d660:
    // 0x22d660: 0x44800000
    ctx->pc = 0x22d660u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d664:
    // 0x22d664: 0x4600a834
    ctx->pc = 0x22d664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d668:
    // 0x22d668: 0x4501000e
label_22d66c:
    if (ctx->pc == 0x22D66Cu) {
        ctx->pc = 0x22D670u;
        goto label_22d670;
    }
    ctx->pc = 0x22D668u;
    {
        const bool branch_taken_0x22d668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d668) {
            ctx->pc = 0x22D6A4u;
            goto label_22d6a4;
        }
    }
    ctx->pc = 0x22D670u;
label_22d670:
    // 0x22d670: 0x3c014040
    ctx->pc = 0x22d670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_22d674:
    // 0x22d674: 0x44810000
    ctx->pc = 0x22d674u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d678:
    // 0x22d678: 0x46150034
    ctx->pc = 0x22d678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d67c:
    // 0x22d67c: 0x45010009
label_22d680:
    if (ctx->pc == 0x22D680u) {
        ctx->pc = 0x22D684u;
        goto label_22d684;
    }
    ctx->pc = 0x22D67Cu;
    {
        const bool branch_taken_0x22d67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d67c) {
            ctx->pc = 0x22D6A4u;
            goto label_22d6a4;
        }
    }
    ctx->pc = 0x22D684u;
label_22d684:
    // 0x22d684: 0x3c014100
    ctx->pc = 0x22d684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
label_22d688:
    // 0x22d688: 0x44810000
    ctx->pc = 0x22d688u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d68c:
    // 0x22d68c: 0x4600a802
    ctx->pc = 0x22d68cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_22d690:
    // 0x22d690: 0x46000064
    ctx->pc = 0x22d690u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22d694:
    // 0x22d694: 0x44020800
    ctx->pc = 0x22d694u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_22d698:
    // 0x22d698: 0x30420001
    ctx->pc = 0x22d698u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22d69c:
    // 0x22d69c: 0x50400010
label_22d6a0:
    if (ctx->pc == 0x22D6A0u) {
        ctx->pc = 0x22D6A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22D6A4u;
        goto label_22d6a4;
    }
    ctx->pc = 0x22D69Cu;
    {
        const bool branch_taken_0x22d69c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d69c) {
            ctx->pc = 0x22D6A0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x22D6E0u;
            goto label_22d6e0;
        }
    }
    ctx->pc = 0x22D6A4u;
label_22d6a4:
    // 0x22d6a4: 0x3c0140c9
    ctx->pc = 0x22d6a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_22d6a8:
    // 0x22d6a8: 0x34210fdb
    ctx->pc = 0x22d6a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_22d6ac:
    // 0x22d6ac: 0x44816000
    ctx->pc = 0x22d6acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22d6b0:
    // 0x22d6b0: 0xc0b9e4a
label_22d6b4:
    if (ctx->pc == 0x22D6B4u) {
        ctx->pc = 0x22D6B4u;
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->pc = 0x22D6B8u;
        goto label_22d6b8;
    }
    ctx->pc = 0x22D6B0u;
    SET_GPR_U32(ctx, 31, 0x22D6B8u);
    ctx->pc = 0x22D6B4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6B8u; }
    }
    if (ctx->pc != 0x22D6B8u) { return; }
    ctx->pc = 0x22D6B8u;
label_22d6b8:
    // 0x22d6b8: 0x3c014180
    ctx->pc = 0x22d6b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
label_22d6bc:
    // 0x22d6bc: 0x44810800
    ctx->pc = 0x22d6bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_22d6c0:
    // 0x22d6c0: 0x46010002
    ctx->pc = 0x22d6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d6c4:
    // 0x22d6c4: 0x46000064
    ctx->pc = 0x22d6c4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22d6c8:
    // 0x22d6c8: 0x44020800
    ctx->pc = 0x22d6c8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_22d6cc:
    // 0x22d6cc: 0x244200a0
    ctx->pc = 0x22d6ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 160));
label_22d6d0:
    // 0x22d6d0: 0x44820000
    ctx->pc = 0x22d6d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_22d6d4:
    // 0x22d6d4: 0x46800020
    ctx->pc = 0x22d6d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_22d6d8:
    // 0x22d6d8: 0x10000002
label_22d6dc:
    if (ctx->pc == 0x22D6DCu) {
        ctx->pc = 0x22D6DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22D6E0u;
        goto label_22d6e0;
    }
    ctx->pc = 0x22D6D8u;
    {
        const bool branch_taken_0x22d6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D6DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        if (branch_taken_0x22d6d8) {
            ctx->pc = 0x22D6E4u;
            goto label_22d6e4;
        }
    }
    ctx->pc = 0x22D6E0u;
label_22d6e0:
    // 0x22d6e0: 0x44800000
    ctx->pc = 0x22d6e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d6e4:
    // 0x22d6e4: 0x46000064
    ctx->pc = 0x22d6e4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22d6e8:
    // 0x22d6e8: 0x44050800
    ctx->pc = 0x22d6e8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_22d6ec:
    // 0x22d6ec: 0xc0b40c0
label_22d6f0:
    if (ctx->pc == 0x22D6F0u) {
        ctx->pc = 0x22D6F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D6F4u;
        goto label_22d6f4;
    }
    ctx->pc = 0x22D6ECu;
    SET_GPR_U32(ctx, 31, 0x22D6F4u);
    ctx->pc = 0x22D6F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6F4u; }
    }
    if (ctx->pc != 0x22D6F4u) { return; }
    ctx->pc = 0x22D6F4u;
label_22d6f4:
    // 0x22d6f4: 0x10000006
label_22d6f8:
    if (ctx->pc == 0x22D6F8u) {
        ctx->pc = 0x22D6F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
        ctx->pc = 0x22D6FCu;
        goto label_22d6fc;
    }
    ctx->pc = 0x22D6F4u;
    {
        const bool branch_taken_0x22d6f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D6F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
        if (branch_taken_0x22d6f4) {
            ctx->pc = 0x22D710u;
            goto label_22d710;
        }
    }
    ctx->pc = 0x22D6FCu;
label_22d6fc:
    // 0x22d6fc: 0x10800003
label_22d700:
    if (ctx->pc == 0x22D700u) {
        ctx->pc = 0x22D700u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D704u;
        goto label_22d704;
    }
    ctx->pc = 0x22D6FCu;
    {
        const bool branch_taken_0x22d6fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D700u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d6fc) {
            ctx->pc = 0x22D70Cu;
            goto label_22d70c;
        }
    }
    ctx->pc = 0x22D704u;
label_22d704:
    // 0x22d704: 0xc0b40c0
label_22d708:
    if (ctx->pc == 0x22D708u) {
        ctx->pc = 0x22D708u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D70Cu;
        goto label_22d70c;
    }
    ctx->pc = 0x22D704u;
    SET_GPR_U32(ctx, 31, 0x22D70Cu);
    ctx->pc = 0x22D708u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D70Cu; }
    }
    if (ctx->pc != 0x22D70Cu) { return; }
    ctx->pc = 0x22D70Cu;
label_22d70c:
    // 0x22d70c: 0x8e020134
    ctx->pc = 0x22d70cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22d710:
    // 0x22d710: 0x3c030010
    ctx->pc = 0x22d710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_22d714:
    // 0x22d714: 0x431024
    ctx->pc = 0x22d714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d718:
    // 0x22d718: 0x5040001d
label_22d71c:
    if (ctx->pc == 0x22D71Cu) {
        ctx->pc = 0x22D71Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
        ctx->pc = 0x22D720u;
        goto label_22d720;
    }
    ctx->pc = 0x22D718u;
    {
        const bool branch_taken_0x22d718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d718) {
            ctx->pc = 0x22D71Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
            ctx->pc = 0x22D790u;
            goto label_22d790;
        }
    }
    ctx->pc = 0x22D720u;
label_22d720:
    // 0x22d720: 0x44800000
    ctx->pc = 0x22d720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d724:
    // 0x22d724: 0x4600a034
    ctx->pc = 0x22d724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d728:
    // 0x22d728: 0x0
    ctx->pc = 0x22d728u;
    // NOP
label_22d72c:
    // 0x22d72c: 0x4501000f
label_22d730:
    if (ctx->pc == 0x22D730u) {
        ctx->pc = 0x22D730u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x22D734u;
        goto label_22d734;
    }
    ctx->pc = 0x22D72Cu;
    {
        const bool branch_taken_0x22d72c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D730u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22d72c) {
            ctx->pc = 0x22D76Cu;
            goto label_22d76c;
        }
    }
    ctx->pc = 0x22D734u;
label_22d734:
    // 0x22d734: 0x3c014040
    ctx->pc = 0x22d734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_22d738:
    // 0x22d738: 0x44810000
    ctx->pc = 0x22d738u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d73c:
    // 0x22d73c: 0x46140034
    ctx->pc = 0x22d73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d740:
    // 0x22d740: 0x0
    ctx->pc = 0x22d740u;
    // NOP
label_22d744:
    // 0x22d744: 0x4501000a
label_22d748:
    if (ctx->pc == 0x22D748u) {
        ctx->pc = 0x22D748u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
        ctx->pc = 0x22D74Cu;
        goto label_22d74c;
    }
    ctx->pc = 0x22D744u;
    {
        const bool branch_taken_0x22d744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D748u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
        if (branch_taken_0x22d744) {
            ctx->pc = 0x22D770u;
            goto label_22d770;
        }
    }
    ctx->pc = 0x22D74Cu;
label_22d74c:
    // 0x22d74c: 0x3c014100
    ctx->pc = 0x22d74cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
label_22d750:
    // 0x22d750: 0x44810000
    ctx->pc = 0x22d750u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d754:
    // 0x22d754: 0x4600a002
    ctx->pc = 0x22d754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_22d758:
    // 0x22d758: 0x46000064
    ctx->pc = 0x22d758u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22d75c:
    // 0x22d75c: 0x44020800
    ctx->pc = 0x22d75cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_22d760:
    // 0x22d760: 0x30420001
    ctx->pc = 0x22d760u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22d764:
    // 0x22d764: 0x10400028
label_22d768:
    if (ctx->pc == 0x22D768u) {
        ctx->pc = 0x22D768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x22D76Cu;
        goto label_22d76c;
    }
    ctx->pc = 0x22D764u;
    {
        const bool branch_taken_0x22d764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22d764) {
            ctx->pc = 0x22D808u;
            goto label_22d808;
        }
    }
    ctx->pc = 0x22D76Cu;
label_22d76c:
    // 0x22d76c: 0x260407b4
    ctx->pc = 0x22d76cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
label_22d770:
    // 0x22d770: 0x8c4554f8
    ctx->pc = 0x22d770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21752)));
label_22d774:
    // 0x22d774: 0x24060001
    ctx->pc = 0x22d774u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_22d778:
    // 0x22d778: 0x3c013f80
    ctx->pc = 0x22d778u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_22d77c:
    // 0x22d77c: 0x44816000
    ctx->pc = 0x22d77cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22d780:
    // 0x22d780: 0xc09ffc6
label_22d784:
    if (ctx->pc == 0x22D784u) {
        ctx->pc = 0x22D784u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D788u;
        goto label_22d788;
    }
    ctx->pc = 0x22D780u;
    SET_GPR_U32(ctx, 31, 0x22D788u);
    ctx->pc = 0x22D784u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D788u; }
    }
    if (ctx->pc != 0x22D788u) { return; }
    ctx->pc = 0x22D788u;
label_22d788:
    // 0x22d788: 0x10000020
label_22d78c:
    if (ctx->pc == 0x22D78Cu) {
        ctx->pc = 0x22D78Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->pc = 0x22D790u;
        goto label_22d790;
    }
    ctx->pc = 0x22D788u;
    {
        const bool branch_taken_0x22d788 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D78Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        if (branch_taken_0x22d788) {
            ctx->pc = 0x22D80Cu;
            goto label_22d80c;
        }
    }
    ctx->pc = 0x22D790u;
label_22d790:
    // 0x22d790: 0x3c030001
    ctx->pc = 0x22d790u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_22d794:
    // 0x22d794: 0x431024
    ctx->pc = 0x22d794u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d798:
    // 0x22d798: 0x5040001c
label_22d79c:
    if (ctx->pc == 0x22D79Cu) {
        ctx->pc = 0x22D79Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->pc = 0x22D7A0u;
        goto label_22d7a0;
    }
    ctx->pc = 0x22D798u;
    {
        const bool branch_taken_0x22d798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d798) {
            ctx->pc = 0x22D79Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
            ctx->pc = 0x22D80Cu;
            goto label_22d80c;
        }
    }
    ctx->pc = 0x22D7A0u;
label_22d7a0:
    // 0x22d7a0: 0x44800000
    ctx->pc = 0x22d7a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22d7a4:
    // 0x22d7a4: 0x4600a034
    ctx->pc = 0x22d7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d7a8:
    // 0x22d7a8: 0x0
    ctx->pc = 0x22d7a8u;
    // NOP
label_22d7ac:
    // 0x22d7ac: 0x4501000f
label_22d7b0:
    if (ctx->pc == 0x22D7B0u) {
        ctx->pc = 0x22D7B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x22D7B4u;
        goto label_22d7b4;
    }
    ctx->pc = 0x22D7ACu;
    {
        const bool branch_taken_0x22d7ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D7B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22d7ac) {
            ctx->pc = 0x22D7ECu;
            goto label_22d7ec;
        }
    }
    ctx->pc = 0x22D7B4u;
label_22d7b4:
    // 0x22d7b4: 0x3c014040
    ctx->pc = 0x22d7b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_22d7b8:
    // 0x22d7b8: 0x44810000
    ctx->pc = 0x22d7b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d7bc:
    // 0x22d7bc: 0x46140034
    ctx->pc = 0x22d7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d7c0:
    // 0x22d7c0: 0x0
    ctx->pc = 0x22d7c0u;
    // NOP
label_22d7c4:
    // 0x22d7c4: 0x4501000a
label_22d7c8:
    if (ctx->pc == 0x22D7C8u) {
        ctx->pc = 0x22D7C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
        ctx->pc = 0x22D7CCu;
        goto label_22d7cc;
    }
    ctx->pc = 0x22D7C4u;
    {
        const bool branch_taken_0x22d7c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D7C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
        if (branch_taken_0x22d7c4) {
            ctx->pc = 0x22D7F0u;
            goto label_22d7f0;
        }
    }
    ctx->pc = 0x22D7CCu;
label_22d7cc:
    // 0x22d7cc: 0x3c014100
    ctx->pc = 0x22d7ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
label_22d7d0:
    // 0x22d7d0: 0x44810000
    ctx->pc = 0x22d7d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22d7d4:
    // 0x22d7d4: 0x4600a002
    ctx->pc = 0x22d7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_22d7d8:
    // 0x22d7d8: 0x46000064
    ctx->pc = 0x22d7d8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22d7dc:
    // 0x22d7dc: 0x44020800
    ctx->pc = 0x22d7dcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_22d7e0:
    // 0x22d7e0: 0x30420001
    ctx->pc = 0x22d7e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22d7e4:
    // 0x22d7e4: 0x10400008
label_22d7e8:
    if (ctx->pc == 0x22D7E8u) {
        ctx->pc = 0x22D7E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x22D7ECu;
        goto label_22d7ec;
    }
    ctx->pc = 0x22D7E4u;
    {
        const bool branch_taken_0x22d7e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D7E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22d7e4) {
            ctx->pc = 0x22D808u;
            goto label_22d808;
        }
    }
    ctx->pc = 0x22D7ECu;
label_22d7ec:
    // 0x22d7ec: 0x260407b4
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
label_22d7f0:
    // 0x22d7f0: 0x8c4554f4
    ctx->pc = 0x22d7f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21748)));
label_22d7f4:
    // 0x22d7f4: 0x24060001
    ctx->pc = 0x22d7f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_22d7f8:
    // 0x22d7f8: 0x3c013f80
    ctx->pc = 0x22d7f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_22d7fc:
    // 0x22d7fc: 0x44816000
    ctx->pc = 0x22d7fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22d800:
    // 0x22d800: 0xc09ffc6
label_22d804:
    if (ctx->pc == 0x22D804u) {
        ctx->pc = 0x22D804u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D808u;
        goto label_22d808;
    }
    ctx->pc = 0x22D800u;
    SET_GPR_U32(ctx, 31, 0x22D808u);
    ctx->pc = 0x22D804u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D808u; }
    }
    if (ctx->pc != 0x22D808u) { return; }
    ctx->pc = 0x22D808u;
label_22d808:
    // 0x22d808: 0x8e020704
    ctx->pc = 0x22d808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d80c:
    // 0x22d80c: 0x2882b
    ctx->pc = 0x22d80cu;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_22d810:
    // 0x22d810: 0x8e020138
    ctx->pc = 0x22d810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d814:
    // 0x22d814: 0x30428000
    ctx->pc = 0x22d814u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_22d818:
    // 0x22d818: 0x1040000b
label_22d81c:
    if (ctx->pc == 0x22D81Cu) {
        ctx->pc = 0x22D81Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22D820u;
        goto label_22d820;
    }
    ctx->pc = 0x22D818u;
    {
        const bool branch_taken_0x22d818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D81Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22d818) {
            ctx->pc = 0x22D848u;
            goto label_22d848;
        }
    }
    ctx->pc = 0x22D820u;
label_22d820:
    // 0x22d820: 0xc0b1a8e
label_22d824:
    if (ctx->pc == 0x22D824u) {
        ctx->pc = 0x22D824u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29456));
        ctx->pc = 0x22D828u;
        goto label_22d828;
    }
    ctx->pc = 0x22D820u;
    SET_GPR_U32(ctx, 31, 0x22D828u);
    ctx->pc = 0x22D824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29456));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D828u; }
    }
    if (ctx->pc != 0x22D828u) { return; }
    ctx->pc = 0x22D828u;
label_22d828:
    // 0x22d828: 0x40282d
    ctx->pc = 0x22d828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d82c:
    // 0x22d82c: 0x8e020704
    ctx->pc = 0x22d82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d830:
    // 0x22d830: 0x1440002c
label_22d834:
    if (ctx->pc == 0x22D834u) {
        ctx->pc = 0x22D834u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D838u;
        goto label_22d838;
    }
    ctx->pc = 0x22D830u;
    {
        const bool branch_taken_0x22d830 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22D834u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d830) {
            ctx->pc = 0x22D8E4u;
            goto label_22d8e4;
        }
    }
    ctx->pc = 0x22D838u;
label_22d838:
    // 0x22d838: 0x282d
    ctx->pc = 0x22d838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d83c:
    // 0x22d83c: 0x8e0606a4
    ctx->pc = 0x22d83cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d840:
    // 0x22d840: 0x10000024
label_22d844:
    if (ctx->pc == 0x22D844u) {
        ctx->pc = 0x22D844u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        ctx->pc = 0x22D848u;
        goto label_22d848;
    }
    ctx->pc = 0x22D840u;
    {
        const bool branch_taken_0x22d840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D844u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        if (branch_taken_0x22d840) {
            ctx->pc = 0x22D8D4u;
            goto label_22d8d4;
        }
    }
    ctx->pc = 0x22D848u;
label_22d848:
    // 0x22d848: 0x8e020134
    ctx->pc = 0x22d848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22d84c:
    // 0x22d84c: 0x3c030002
    ctx->pc = 0x22d84cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
label_22d850:
    // 0x22d850: 0x431024
    ctx->pc = 0x22d850u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d854:
    // 0x22d854: 0x1040000a
label_22d858:
    if (ctx->pc == 0x22D858u) {
        ctx->pc = 0x22D858u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22D85Cu;
        goto label_22d85c;
    }
    ctx->pc = 0x22D854u;
    {
        const bool branch_taken_0x22d854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D858u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22d854) {
            ctx->pc = 0x22D880u;
            goto label_22d880;
        }
    }
    ctx->pc = 0x22D85Cu;
label_22d85c:
    // 0x22d85c: 0x24847320
    ctx->pc = 0x22d85cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29472));
label_22d860:
    // 0x22d860: 0xc0b1a8e
label_22d864:
    if (ctx->pc == 0x22D864u) {
        ctx->pc = 0x22D868u;
        goto label_22d868;
    }
    ctx->pc = 0x22D860u;
    SET_GPR_U32(ctx, 31, 0x22D868u);
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D868u; }
    }
    if (ctx->pc != 0x22D868u) { return; }
    ctx->pc = 0x22D868u;
label_22d868:
    // 0x22d868: 0x40282d
    ctx->pc = 0x22d868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d86c:
    // 0x22d86c: 0x8e020704
    ctx->pc = 0x22d86cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d870:
    // 0x22d870: 0x10400015
label_22d874:
    if (ctx->pc == 0x22D874u) {
        ctx->pc = 0x22D874u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D878u;
        goto label_22d878;
    }
    ctx->pc = 0x22D870u;
    {
        const bool branch_taken_0x22d870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D874u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d870) {
            ctx->pc = 0x22D8C8u;
            goto label_22d8c8;
        }
    }
    ctx->pc = 0x22D878u;
label_22d878:
    // 0x22d878: 0x1000001a
label_22d87c:
    if (ctx->pc == 0x22D87Cu) {
        ctx->pc = 0x22D880u;
        goto label_22d880;
    }
    ctx->pc = 0x22D878u;
    {
        const bool branch_taken_0x22d878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d878) {
            ctx->pc = 0x22D8E4u;
            goto label_22d8e4;
        }
    }
    ctx->pc = 0x22D880u;
label_22d880:
    // 0x22d880: 0x8e020134
    ctx->pc = 0x22d880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22d884:
    // 0x22d884: 0x3c030020
    ctx->pc = 0x22d884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
label_22d888:
    // 0x22d888: 0x431024
    ctx->pc = 0x22d888u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d88c:
    // 0x22d88c: 0x10400003
label_22d890:
    if (ctx->pc == 0x22D890u) {
        ctx->pc = 0x22D890u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22D894u;
        goto label_22d894;
    }
    ctx->pc = 0x22D88Cu;
    {
        const bool branch_taken_0x22d88c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D890u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22d88c) {
            ctx->pc = 0x22D89Cu;
            goto label_22d89c;
        }
    }
    ctx->pc = 0x22D894u;
label_22d894:
    // 0x22d894: 0x1000fff2
label_22d898:
    if (ctx->pc == 0x22D898u) {
        ctx->pc = 0x22D898u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29480));
        ctx->pc = 0x22D89Cu;
        goto label_22d89c;
    }
    ctx->pc = 0x22D894u;
    {
        const bool branch_taken_0x22d894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D898u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29480));
        if (branch_taken_0x22d894) {
            ctx->pc = 0x22D860u;
            goto label_22d860;
        }
    }
    ctx->pc = 0x22D89Cu;
label_22d89c:
    // 0x22d89c: 0x8e020134
    ctx->pc = 0x22d89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22d8a0:
    // 0x22d8a0: 0x3c030040
    ctx->pc = 0x22d8a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
label_22d8a4:
    // 0x22d8a4: 0x431024
    ctx->pc = 0x22d8a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d8a8:
    // 0x22d8a8: 0x10400012
label_22d8ac:
    if (ctx->pc == 0x22D8ACu) {
        ctx->pc = 0x22D8ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22D8B0u;
        goto label_22d8b0;
    }
    ctx->pc = 0x22D8A8u;
    {
        const bool branch_taken_0x22d8a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D8ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22d8a8) {
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22D8B0u;
label_22d8b0:
    // 0x22d8b0: 0xc0b1a8e
label_22d8b4:
    if (ctx->pc == 0x22D8B4u) {
        ctx->pc = 0x22D8B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29488));
        ctx->pc = 0x22D8B8u;
        goto label_22d8b8;
    }
    ctx->pc = 0x22D8B0u;
    SET_GPR_U32(ctx, 31, 0x22D8B8u);
    ctx->pc = 0x22D8B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29488));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8B8u; }
    }
    if (ctx->pc != 0x22D8B8u) { return; }
    ctx->pc = 0x22D8B8u;
label_22d8b8:
    // 0x22d8b8: 0x40282d
    ctx->pc = 0x22d8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d8bc:
    // 0x22d8bc: 0x8e020704
    ctx->pc = 0x22d8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d8c0:
    // 0x22d8c0: 0x14400008
label_22d8c4:
    if (ctx->pc == 0x22D8C4u) {
        ctx->pc = 0x22D8C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D8C8u;
        goto label_22d8c8;
    }
    ctx->pc = 0x22D8C0u;
    {
        const bool branch_taken_0x22d8c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22D8C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d8c0) {
            ctx->pc = 0x22D8E4u;
            goto label_22d8e4;
        }
    }
    ctx->pc = 0x22D8C8u;
label_22d8c8:
    // 0x22d8c8: 0x282d
    ctx->pc = 0x22d8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d8cc:
    // 0x22d8cc: 0x8e0606a4
    ctx->pc = 0x22d8ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d8d0:
    // 0x22d8d0: 0x24070810
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2064));
label_22d8d4:
    // 0x22d8d4: 0xc0b2236
label_22d8d8:
    if (ctx->pc == 0x22D8D8u) {
        ctx->pc = 0x22D8DCu;
        goto label_22d8dc;
    }
    ctx->pc = 0x22D8D4u;
    SET_GPR_U32(ctx, 31, 0x22D8DCu);
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8DCu; }
    }
    if (ctx->pc != 0x22D8DCu) { return; }
    ctx->pc = 0x22D8DCu;
label_22d8dc:
    // 0x22d8dc: 0x1000000b
label_22d8e0:
    if (ctx->pc == 0x22D8E0u) {
        ctx->pc = 0x22D8E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 2));
        ctx->pc = 0x22D8E4u;
        goto label_22d8e4;
    }
    ctx->pc = 0x22D8DCu;
    {
        const bool branch_taken_0x22d8dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D8E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 2));
        if (branch_taken_0x22d8dc) {
            ctx->pc = 0x22D90Cu;
            goto label_22d90c;
        }
    }
    ctx->pc = 0x22D8E4u;
label_22d8e4:
    // 0x22d8e4: 0xc0b220e
label_22d8e8:
    if (ctx->pc == 0x22D8E8u) {
        ctx->pc = 0x22D8E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->pc = 0x22D8ECu;
        goto label_22d8ec;
    }
    ctx->pc = 0x22D8E4u;
    SET_GPR_U32(ctx, 31, 0x22D8ECu);
    ctx->pc = 0x22D8E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8ECu; }
    }
    if (ctx->pc != 0x22D8ECu) { return; }
    ctx->pc = 0x22D8ECu;
label_22d8ec:
    // 0x22d8ec: 0x10000008
label_22d8f0:
    if (ctx->pc == 0x22D8F0u) {
        ctx->pc = 0x22D8F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->pc = 0x22D8F4u;
        goto label_22d8f4;
    }
    ctx->pc = 0x22D8ECu;
    {
        const bool branch_taken_0x22d8ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D8F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        if (branch_taken_0x22d8ec) {
            ctx->pc = 0x22D910u;
            goto label_22d910;
        }
    }
    ctx->pc = 0x22D8F4u;
label_22d8f4:
    // 0x22d8f4: 0x8e040704
    ctx->pc = 0x22d8f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d8f8:
    // 0x22d8f8: 0x50800004
label_22d8fc:
    if (ctx->pc == 0x22D8FCu) {
        ctx->pc = 0x22D8FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
        ctx->pc = 0x22D900u;
        goto label_22d900;
    }
    ctx->pc = 0x22D8F8u;
    {
        const bool branch_taken_0x22d8f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d8f8) {
            ctx->pc = 0x22D8FCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
            ctx->pc = 0x22D90Cu;
            goto label_22d90c;
        }
    }
    ctx->pc = 0x22D900u;
label_22d900:
    // 0x22d900: 0xc0b3f1a
label_22d904:
    if (ctx->pc == 0x22D904u) {
        ctx->pc = 0x22D904u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D908u;
        goto label_22d908;
    }
    ctx->pc = 0x22D900u;
    SET_GPR_U32(ctx, 31, 0x22D908u);
    ctx->pc = 0x22D904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D908u; }
    }
    if (ctx->pc != 0x22D908u) { return; }
    ctx->pc = 0x22D908u;
label_22d908:
    // 0x22d908: 0xae000704
    ctx->pc = 0x22d908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
label_22d90c:
    // 0x22d90c: 0x8e020704
    ctx->pc = 0x22d90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_22d910:
    // 0x22d910: 0x10400015
label_22d914:
    if (ctx->pc == 0x22D914u) {
        ctx->pc = 0x22D918u;
        goto label_22d918;
    }
    ctx->pc = 0x22D910u;
    {
        const bool branch_taken_0x22d910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d910) {
            ctx->pc = 0x22D968u;
            goto label_22d968;
        }
    }
    ctx->pc = 0x22D918u;
label_22d918:
    // 0x22d918: 0x56200011
label_22d91c:
    if (ctx->pc == 0x22D91Cu) {
        ctx->pc = 0x22D91Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
        ctx->pc = 0x22D920u;
        goto label_22d920;
    }
    ctx->pc = 0x22D918u;
    {
        const bool branch_taken_0x22d918 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x22d918) {
            ctx->pc = 0x22D91Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
            ctx->pc = 0x22D960u;
            goto label_22d960;
        }
    }
    ctx->pc = 0x22D920u;
label_22d920:
    // 0x22d920: 0x8e030008
    ctx->pc = 0x22d920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d924:
    // 0x22d924: 0x24020001
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_22d928:
    // 0x22d928: 0x10620003
label_22d92c:
    if (ctx->pc == 0x22D92Cu) {
        ctx->pc = 0x22D92Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x22D930u;
        goto label_22d930;
    }
    ctx->pc = 0x22D928u;
    {
        const bool branch_taken_0x22d928 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22D92Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x22d928) {
            ctx->pc = 0x22D938u;
            goto label_22d938;
        }
    }
    ctx->pc = 0x22D930u;
label_22d930:
    // 0x22d930: 0x14620004
label_22d934:
    if (ctx->pc == 0x22D934u) {
        ctx->pc = 0x22D934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x22D938u;
        goto label_22d938;
    }
    ctx->pc = 0x22D930u;
    {
        const bool branch_taken_0x22d930 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22D934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x22d930) {
            ctx->pc = 0x22D944u;
            goto label_22d944;
        }
    }
    ctx->pc = 0x22D938u;
label_22d938:
    // 0x22d938: 0x8e0206a4
    ctx->pc = 0x22d938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d93c:
    // 0x22d93c: 0x10000004
label_22d940:
    if (ctx->pc == 0x22D940u) {
        ctx->pc = 0x22D940u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->pc = 0x22D944u;
        goto label_22d944;
    }
    ctx->pc = 0x22D93Cu;
    {
        const bool branch_taken_0x22d93c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D940u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 116)));
        if (branch_taken_0x22d93c) {
            ctx->pc = 0x22D950u;
            goto label_22d950;
        }
    }
    ctx->pc = 0x22D944u;
label_22d944:
    // 0x22d944: 0x54620020
label_22d948:
    if (ctx->pc == 0x22D948u) {
        ctx->pc = 0x22D948u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22D94Cu;
        goto label_22d94c;
    }
    ctx->pc = 0x22D944u;
    {
        const bool branch_taken_0x22d944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22d944) {
            ctx->pc = 0x22D948u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22D9C8u;
            goto label_22d9c8;
        }
    }
    ctx->pc = 0x22D94Cu;
label_22d94c:
    // 0x22d94c: 0x8e0306a4
    ctx->pc = 0x22d94cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d950:
    // 0x22d950: 0x8c620060
    ctx->pc = 0x22d950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_22d954:
    // 0x22d954: 0x34420001
    ctx->pc = 0x22d954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_22d958:
    // 0x22d958: 0x1000001a
label_22d95c:
    if (ctx->pc == 0x22D95Cu) {
        ctx->pc = 0x22D95Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x22D960u;
        goto label_22d960;
    }
    ctx->pc = 0x22D958u;
    {
        const bool branch_taken_0x22d958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D95Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x22d958) {
            ctx->pc = 0x22D9C4u;
            goto label_22d9c4;
        }
    }
    ctx->pc = 0x22D960u;
label_22d960:
    // 0x22d960: 0x54400019
label_22d964:
    if (ctx->pc == 0x22D964u) {
        ctx->pc = 0x22D964u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22D968u;
        goto label_22d968;
    }
    ctx->pc = 0x22D960u;
    {
        const bool branch_taken_0x22d960 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22d960) {
            ctx->pc = 0x22D964u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22D9C8u;
            goto label_22d9c8;
        }
    }
    ctx->pc = 0x22D968u;
label_22d968:
    // 0x22d968: 0x12200016
label_22d96c:
    if (ctx->pc == 0x22D96Cu) {
        ctx->pc = 0x22D96Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D970u;
        goto label_22d970;
    }
    ctx->pc = 0x22D968u;
    {
        const bool branch_taken_0x22d968 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D96Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22d968) {
            ctx->pc = 0x22D9C4u;
            goto label_22d9c4;
        }
    }
    ctx->pc = 0x22D970u;
label_22d970:
    // 0x22d970: 0x8e030008
    ctx->pc = 0x22d970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22d974:
    // 0x22d974: 0x10620003
label_22d978:
    if (ctx->pc == 0x22D978u) {
        ctx->pc = 0x22D978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x22D97Cu;
        goto label_22d97c;
    }
    ctx->pc = 0x22D974u;
    {
        const bool branch_taken_0x22d974 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22D978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x22d974) {
            ctx->pc = 0x22D984u;
            goto label_22d984;
        }
    }
    ctx->pc = 0x22D97Cu;
label_22d97c:
    // 0x22d97c: 0x14620009
label_22d980:
    if (ctx->pc == 0x22D980u) {
        ctx->pc = 0x22D980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x22D984u;
        goto label_22d984;
    }
    ctx->pc = 0x22D97Cu;
    {
        const bool branch_taken_0x22d97c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22D980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x22d97c) {
            ctx->pc = 0x22D9A4u;
            goto label_22d9a4;
        }
    }
    ctx->pc = 0x22D984u;
label_22d984:
    // 0x22d984: 0x8e0206a4
    ctx->pc = 0x22d984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d988:
    // 0x22d988: 0x8c440074
    ctx->pc = 0x22d988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_22d98c:
    // 0x22d98c: 0x8c820060
    ctx->pc = 0x22d98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_22d990:
    // 0x22d990: 0x3c03ffff
    ctx->pc = 0x22d990u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_22d994:
    // 0x22d994: 0x3463fffe
    ctx->pc = 0x22d994u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
label_22d998:
    // 0x22d998: 0x431024
    ctx->pc = 0x22d998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d99c:
    // 0x22d99c: 0x10000009
label_22d9a0:
    if (ctx->pc == 0x22D9A0u) {
        ctx->pc = 0x22D9A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x22D9A4u;
        goto label_22d9a4;
    }
    ctx->pc = 0x22D99Cu;
    {
        const bool branch_taken_0x22d99c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D9A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x22d99c) {
            ctx->pc = 0x22D9C4u;
            goto label_22d9c4;
        }
    }
    ctx->pc = 0x22D9A4u;
label_22d9a4:
    // 0x22d9a4: 0x54620008
label_22d9a8:
    if (ctx->pc == 0x22D9A8u) {
        ctx->pc = 0x22D9A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22D9ACu;
        goto label_22d9ac;
    }
    ctx->pc = 0x22D9A4u;
    {
        const bool branch_taken_0x22d9a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22d9a4) {
            ctx->pc = 0x22D9A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22D9C8u;
            goto label_22d9c8;
        }
    }
    ctx->pc = 0x22D9ACu;
label_22d9ac:
    // 0x22d9ac: 0x8e0206a4
    ctx->pc = 0x22d9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22d9b0:
    // 0x22d9b0: 0x8c430060
    ctx->pc = 0x22d9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_22d9b4:
    // 0x22d9b4: 0x3c04ffff
    ctx->pc = 0x22d9b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_22d9b8:
    // 0x22d9b8: 0x3484fffe
    ctx->pc = 0x22d9b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65534));
label_22d9bc:
    // 0x22d9bc: 0x641824
    ctx->pc = 0x22d9bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22d9c0:
    // 0x22d9c0: 0xac430060
    ctx->pc = 0x22d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_22d9c4:
    // 0x22d9c4: 0x8e020138
    ctx->pc = 0x22d9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22d9c8:
    // 0x22d9c8: 0x30421000
    ctx->pc = 0x22d9c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
label_22d9cc:
    // 0x22d9cc: 0x1040000b
label_22d9d0:
    if (ctx->pc == 0x22D9D0u) {
        ctx->pc = 0x22D9D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22D9D4u;
        goto label_22d9d4;
    }
    ctx->pc = 0x22D9CCu;
    {
        const bool branch_taken_0x22d9cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D9D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22d9cc) {
            ctx->pc = 0x22D9FCu;
            goto label_22d9fc;
        }
    }
    ctx->pc = 0x22D9D4u;
label_22d9d4:
    // 0x22d9d4: 0xc0b1a8e
label_22d9d8:
    if (ctx->pc == 0x22D9D8u) {
        ctx->pc = 0x22D9D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29496));
        ctx->pc = 0x22D9DCu;
        goto label_22d9dc;
    }
    ctx->pc = 0x22D9D4u;
    SET_GPR_U32(ctx, 31, 0x22D9DCu);
    ctx->pc = 0x22D9D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29496));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9DCu; }
    }
    if (ctx->pc != 0x22D9DCu) { return; }
    ctx->pc = 0x22D9DCu;
label_22d9dc:
    // 0x22d9dc: 0x40282d
    ctx->pc = 0x22d9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d9e0:
    // 0x22d9e0: 0x8e02070c
    ctx->pc = 0x22d9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_22d9e4:
    // 0x22d9e4: 0x14400038
label_22d9e8:
    if (ctx->pc == 0x22D9E8u) {
        ctx->pc = 0x22D9E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D9ECu;
        goto label_22d9ec;
    }
    ctx->pc = 0x22D9E4u;
    {
        const bool branch_taken_0x22d9e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22D9E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d9e4) {
            ctx->pc = 0x22DAC8u;
            goto label_22dac8;
        }
    }
    ctx->pc = 0x22D9ECu;
label_22d9ec:
    // 0x22d9ec: 0x282d
    ctx->pc = 0x22d9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d9f0:
    // 0x22d9f0: 0x8e0606ac
    ctx->pc = 0x22d9f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22d9f4:
    // 0x22d9f4: 0x10000030
label_22d9f8:
    if (ctx->pc == 0x22D9F8u) {
        ctx->pc = 0x22D9F8u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        ctx->pc = 0x22D9FCu;
        goto label_22d9fc;
    }
    ctx->pc = 0x22D9F4u;
    {
        const bool branch_taken_0x22d9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D9F8u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        if (branch_taken_0x22d9f4) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22D9FCu;
label_22d9fc:
    // 0x22d9fc: 0x8e020138
    ctx->pc = 0x22d9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22da00:
    // 0x22da00: 0x30422000
    ctx->pc = 0x22da00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
label_22da04:
    // 0x22da04: 0x1040000b
label_22da08:
    if (ctx->pc == 0x22DA08u) {
        ctx->pc = 0x22DA08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DA0Cu;
        goto label_22da0c;
    }
    ctx->pc = 0x22DA04u;
    {
        const bool branch_taken_0x22da04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22da04) {
            ctx->pc = 0x22DA34u;
            goto label_22da34;
        }
    }
    ctx->pc = 0x22DA0Cu;
label_22da0c:
    // 0x22da0c: 0xc0b1a8e
label_22da10:
    if (ctx->pc == 0x22DA10u) {
        ctx->pc = 0x22DA10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29512));
        ctx->pc = 0x22DA14u;
        goto label_22da14;
    }
    ctx->pc = 0x22DA0Cu;
    SET_GPR_U32(ctx, 31, 0x22DA14u);
    ctx->pc = 0x22DA10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29512));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA14u; }
    }
    if (ctx->pc != 0x22DA14u) { return; }
    ctx->pc = 0x22DA14u;
label_22da14:
    // 0x22da14: 0x40282d
    ctx->pc = 0x22da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da18:
    // 0x22da18: 0x8e02070c
    ctx->pc = 0x22da18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_22da1c:
    // 0x22da1c: 0x1440002a
label_22da20:
    if (ctx->pc == 0x22DA20u) {
        ctx->pc = 0x22DA20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DA24u;
        goto label_22da24;
    }
    ctx->pc = 0x22DA1Cu;
    {
        const bool branch_taken_0x22da1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22DA20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22da1c) {
            ctx->pc = 0x22DAC8u;
            goto label_22dac8;
        }
    }
    ctx->pc = 0x22DA24u;
label_22da24:
    // 0x22da24: 0x282d
    ctx->pc = 0x22da24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22da28:
    // 0x22da28: 0x8e0606ac
    ctx->pc = 0x22da28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22da2c:
    // 0x22da2c: 0x10000022
label_22da30:
    if (ctx->pc == 0x22DA30u) {
        ctx->pc = 0x22DA30u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        ctx->pc = 0x22DA34u;
        goto label_22da34;
    }
    ctx->pc = 0x22DA2Cu;
    {
        const bool branch_taken_0x22da2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA30u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        if (branch_taken_0x22da2c) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA34u;
label_22da34:
    // 0x22da34: 0x8e020134
    ctx->pc = 0x22da34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22da38:
    // 0x22da38: 0x3c030008
    ctx->pc = 0x22da38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_22da3c:
    // 0x22da3c: 0x431024
    ctx->pc = 0x22da3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22da40:
    // 0x22da40: 0x1040000a
label_22da44:
    if (ctx->pc == 0x22DA44u) {
        ctx->pc = 0x22DA44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DA48u;
        goto label_22da48;
    }
    ctx->pc = 0x22DA40u;
    {
        const bool branch_taken_0x22da40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22da40) {
            ctx->pc = 0x22DA6Cu;
            goto label_22da6c;
        }
    }
    ctx->pc = 0x22DA48u;
label_22da48:
    // 0x22da48: 0x24847358
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29528));
label_22da4c:
    // 0x22da4c: 0xc0b1a8e
label_22da50:
    if (ctx->pc == 0x22DA50u) {
        ctx->pc = 0x22DA54u;
        goto label_22da54;
    }
    ctx->pc = 0x22DA4Cu;
    SET_GPR_U32(ctx, 31, 0x22DA54u);
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA54u; }
    }
    if (ctx->pc != 0x22DA54u) { return; }
    ctx->pc = 0x22DA54u;
label_22da54:
    // 0x22da54: 0x40282d
    ctx->pc = 0x22da54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da58:
    // 0x22da58: 0x8e02070c
    ctx->pc = 0x22da58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_22da5c:
    // 0x22da5c: 0x10400013
label_22da60:
    if (ctx->pc == 0x22DA60u) {
        ctx->pc = 0x22DA60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DA64u;
        goto label_22da64;
    }
    ctx->pc = 0x22DA5Cu;
    {
        const bool branch_taken_0x22da5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22da5c) {
            ctx->pc = 0x22DAACu;
            goto label_22daac;
        }
    }
    ctx->pc = 0x22DA64u;
label_22da64:
    // 0x22da64: 0x10000018
label_22da68:
    if (ctx->pc == 0x22DA68u) {
        ctx->pc = 0x22DA6Cu;
        goto label_22da6c;
    }
    ctx->pc = 0x22DA64u;
    {
        const bool branch_taken_0x22da64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22da64) {
            ctx->pc = 0x22DAC8u;
            goto label_22dac8;
        }
    }
    ctx->pc = 0x22DA6Cu;
label_22da6c:
    // 0x22da6c: 0x8e020134
    ctx->pc = 0x22da6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22da70:
    // 0x22da70: 0x30422000
    ctx->pc = 0x22da70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
label_22da74:
    // 0x22da74: 0x10400003
label_22da78:
    if (ctx->pc == 0x22DA78u) {
        ctx->pc = 0x22DA78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DA7Cu;
        goto label_22da7c;
    }
    ctx->pc = 0x22DA74u;
    {
        const bool branch_taken_0x22da74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22da74) {
            ctx->pc = 0x22DA84u;
            goto label_22da84;
        }
    }
    ctx->pc = 0x22DA7Cu;
label_22da7c:
    // 0x22da7c: 0x1000fff3
label_22da80:
    if (ctx->pc == 0x22DA80u) {
        ctx->pc = 0x22DA80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29544));
        ctx->pc = 0x22DA84u;
        goto label_22da84;
    }
    ctx->pc = 0x22DA7Cu;
    {
        const bool branch_taken_0x22da7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29544));
        if (branch_taken_0x22da7c) {
            ctx->pc = 0x22DA4Cu;
            goto label_22da4c;
        }
    }
    ctx->pc = 0x22DA84u;
label_22da84:
    // 0x22da84: 0x8e020138
    ctx->pc = 0x22da84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22da88:
    // 0x22da88: 0x30420002
    ctx->pc = 0x22da88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_22da8c:
    // 0x22da8c: 0x10400012
label_22da90:
    if (ctx->pc == 0x22DA90u) {
        ctx->pc = 0x22DA90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DA94u;
        goto label_22da94;
    }
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DA90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DAD8u;
            goto label_22dad8;
        }
    }
    ctx->pc = 0x22DA94u;
label_22da94:
    // 0x22da94: 0xc0b1a8e
label_22da98:
    if (ctx->pc == 0x22DA98u) {
        ctx->pc = 0x22DA98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29560));
        ctx->pc = 0x22DA9Cu;
        goto label_22da9c;
    }
    ctx->pc = 0x22DA94u;
    SET_GPR_U32(ctx, 31, 0x22DA9Cu);
    ctx->pc = 0x22DA98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29560));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA9Cu; }
    }
    if (ctx->pc != 0x22DA9Cu) { return; }
    ctx->pc = 0x22DA9Cu;
label_22da9c:
    // 0x22da9c: 0x40282d
    ctx->pc = 0x22da9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22daa0:
    // 0x22daa0: 0x8e02070c
    ctx->pc = 0x22daa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_22daa4:
    // 0x22daa4: 0x14400008
label_22daa8:
    if (ctx->pc == 0x22DAA8u) {
        ctx->pc = 0x22DAA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DAACu;
        goto label_22daac;
    }
    ctx->pc = 0x22DAA4u;
    {
        const bool branch_taken_0x22daa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22DAA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22daa4) {
            ctx->pc = 0x22DAC8u;
            goto label_22dac8;
        }
    }
    ctx->pc = 0x22DAACu;
label_22daac:
    // 0x22daac: 0x282d
    ctx->pc = 0x22daacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dab0:
    // 0x22dab0: 0x8e0606ac
    ctx->pc = 0x22dab0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22dab4:
    // 0x22dab4: 0x24070810
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2064));
label_22dab8:
    // 0x22dab8: 0xc0b2236
label_22dabc:
    if (ctx->pc == 0x22DABCu) {
        ctx->pc = 0x22DAC0u;
        goto label_22dac0;
    }
    ctx->pc = 0x22DAB8u;
    SET_GPR_U32(ctx, 31, 0x22DAC0u);
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAC0u; }
    }
    if (ctx->pc != 0x22DAC0u) { return; }
    ctx->pc = 0x22DAC0u;
label_22dac0:
    // 0x22dac0: 0x1000000b
label_22dac4:
    if (ctx->pc == 0x22DAC4u) {
        ctx->pc = 0x22DAC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 2));
        ctx->pc = 0x22DAC8u;
        goto label_22dac8;
    }
    ctx->pc = 0x22DAC0u;
    {
        const bool branch_taken_0x22dac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DAC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 2));
        if (branch_taken_0x22dac0) {
            ctx->pc = 0x22DAF0u;
            goto label_22daf0;
        }
    }
    ctx->pc = 0x22DAC8u;
label_22dac8:
    // 0x22dac8: 0xc0b220e
label_22dacc:
    if (ctx->pc == 0x22DACCu) {
        ctx->pc = 0x22DACCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
        ctx->pc = 0x22DAD0u;
        goto label_22dad0;
    }
    ctx->pc = 0x22DAC8u;
    SET_GPR_U32(ctx, 31, 0x22DAD0u);
    ctx->pc = 0x22DACCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAD0u; }
    }
    if (ctx->pc != 0x22DAD0u) { return; }
    ctx->pc = 0x22DAD0u;
label_22dad0:
    // 0x22dad0: 0x10000008
label_22dad4:
    if (ctx->pc == 0x22DAD4u) {
        ctx->pc = 0x22DAD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x22DAD8u;
        goto label_22dad8;
    }
    ctx->pc = 0x22DAD0u;
    {
        const bool branch_taken_0x22dad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DAD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22dad0) {
            ctx->pc = 0x22DAF4u;
            goto label_22daf4;
        }
    }
    ctx->pc = 0x22DAD8u;
label_22dad8:
    // 0x22dad8: 0x8e04070c
    ctx->pc = 0x22dad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_22dadc:
    // 0x22dadc: 0x50800004
label_22dae0:
    if (ctx->pc == 0x22DAE0u) {
        ctx->pc = 0x22DAE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
        ctx->pc = 0x22DAE4u;
        goto label_22dae4;
    }
    ctx->pc = 0x22DADCu;
    {
        const bool branch_taken_0x22dadc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dadc) {
            ctx->pc = 0x22DAE0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
            ctx->pc = 0x22DAF0u;
            goto label_22daf0;
        }
    }
    ctx->pc = 0x22DAE4u;
label_22dae4:
    // 0x22dae4: 0xc0b3f1a
label_22dae8:
    if (ctx->pc == 0x22DAE8u) {
        ctx->pc = 0x22DAE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DAECu;
        goto label_22daec;
    }
    ctx->pc = 0x22DAE4u;
    SET_GPR_U32(ctx, 31, 0x22DAECu);
    ctx->pc = 0x22DAE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAECu; }
    }
    if (ctx->pc != 0x22DAECu) { return; }
    ctx->pc = 0x22DAECu;
label_22daec:
    // 0x22daec: 0xae00070c
    ctx->pc = 0x22daecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
label_22daf0:
    // 0x22daf0: 0x3c020034
    ctx->pc = 0x22daf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_22daf4:
    // 0x22daf4: 0x8c42e880
    ctx->pc = 0x22daf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_22daf8:
    // 0x22daf8: 0x50400005
label_22dafc:
    if (ctx->pc == 0x22DAFCu) {
        ctx->pc = 0x22DAFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22DB00u;
        goto label_22db00;
    }
    ctx->pc = 0x22DAF8u;
    {
        const bool branch_taken_0x22daf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22daf8) {
            ctx->pc = 0x22DAFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22DB10u;
            goto label_22db10;
        }
    }
    ctx->pc = 0x22DB00u;
label_22db00:
    // 0x22db00: 0x8e02080c
    ctx->pc = 0x22db00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
label_22db04:
    // 0x22db04: 0x5440003b
label_22db08:
    if (ctx->pc == 0x22DB08u) {
        ctx->pc = 0x22DB08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->pc = 0x22DB0Cu;
        goto label_22db0c;
    }
    ctx->pc = 0x22DB04u;
    {
        const bool branch_taken_0x22db04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22db04) {
            ctx->pc = 0x22DB08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->pc = 0x22DBF4u;
            goto label_22dbf4;
        }
    }
    ctx->pc = 0x22DB0Cu;
label_22db0c:
    // 0x22db0c: 0x8e020138
    ctx->pc = 0x22db0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22db10:
    // 0x22db10: 0x30424000
    ctx->pc = 0x22db10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_22db14:
    // 0x22db14: 0x1040000b
label_22db18:
    if (ctx->pc == 0x22DB18u) {
        ctx->pc = 0x22DB18u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DB1Cu;
        goto label_22db1c;
    }
    ctx->pc = 0x22DB14u;
    {
        const bool branch_taken_0x22db14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DB18u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22db14) {
            ctx->pc = 0x22DB44u;
            goto label_22db44;
        }
    }
    ctx->pc = 0x22DB1Cu;
label_22db1c:
    // 0x22db1c: 0xc0b1a8e
label_22db20:
    if (ctx->pc == 0x22DB20u) {
        ctx->pc = 0x22DB20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29576));
        ctx->pc = 0x22DB24u;
        goto label_22db24;
    }
    ctx->pc = 0x22DB1Cu;
    SET_GPR_U32(ctx, 31, 0x22DB24u);
    ctx->pc = 0x22DB20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29576));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB24u; }
    }
    if (ctx->pc != 0x22DB24u) { return; }
    ctx->pc = 0x22DB24u;
label_22db24:
    // 0x22db24: 0x40282d
    ctx->pc = 0x22db24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22db28:
    // 0x22db28: 0x8e020708
    ctx->pc = 0x22db28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_22db2c:
    // 0x22db2c: 0x14400026
label_22db30:
    if (ctx->pc == 0x22DB30u) {
        ctx->pc = 0x22DB30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DB34u;
        goto label_22db34;
    }
    ctx->pc = 0x22DB2Cu;
    {
        const bool branch_taken_0x22db2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22DB30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22db2c) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DB34u;
label_22db34:
    // 0x22db34: 0x282d
    ctx->pc = 0x22db34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22db38:
    // 0x22db38: 0x8e0606a8
    ctx->pc = 0x22db38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_22db3c:
    // 0x22db3c: 0x1000001e
label_22db40:
    if (ctx->pc == 0x22DB40u) {
        ctx->pc = 0x22DB40u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        ctx->pc = 0x22DB44u;
        goto label_22db44;
    }
    ctx->pc = 0x22DB3Cu;
    {
        const bool branch_taken_0x22db3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DB40u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 36880));
        if (branch_taken_0x22db3c) {
            ctx->pc = 0x22DBB8u;
            goto label_22dbb8;
        }
    }
    ctx->pc = 0x22DB44u;
label_22db44:
    // 0x22db44: 0x8e020130
    ctx->pc = 0x22db44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22db48:
    // 0x22db48: 0x3c030010
    ctx->pc = 0x22db48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_22db4c:
    // 0x22db4c: 0x431024
    ctx->pc = 0x22db4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22db50:
    // 0x22db50: 0x1040000b
label_22db54:
    if (ctx->pc == 0x22DB54u) {
        ctx->pc = 0x22DB54u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DB58u;
        goto label_22db58;
    }
    ctx->pc = 0x22DB50u;
    {
        const bool branch_taken_0x22db50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DB54u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22db50) {
            ctx->pc = 0x22DB80u;
            goto label_22db80;
        }
    }
    ctx->pc = 0x22DB58u;
label_22db58:
    // 0x22db58: 0xc0b1a8e
label_22db5c:
    if (ctx->pc == 0x22DB5Cu) {
        ctx->pc = 0x22DB5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29592));
        ctx->pc = 0x22DB60u;
        goto label_22db60;
    }
    ctx->pc = 0x22DB58u;
    SET_GPR_U32(ctx, 31, 0x22DB60u);
    ctx->pc = 0x22DB5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29592));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB60u; }
    }
    if (ctx->pc != 0x22DB60u) { return; }
    ctx->pc = 0x22DB60u;
label_22db60:
    // 0x22db60: 0x40282d
    ctx->pc = 0x22db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22db64:
    // 0x22db64: 0x8e020708
    ctx->pc = 0x22db64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_22db68:
    // 0x22db68: 0x14400017
label_22db6c:
    if (ctx->pc == 0x22DB6Cu) {
        ctx->pc = 0x22DB6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DB70u;
        goto label_22db70;
    }
    ctx->pc = 0x22DB68u;
    {
        const bool branch_taken_0x22db68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22DB6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22db68) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DB70u;
label_22db70:
    // 0x22db70: 0x282d
    ctx->pc = 0x22db70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22db74:
    // 0x22db74: 0x8e0606a8
    ctx->pc = 0x22db74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_22db78:
    // 0x22db78: 0x1000000f
label_22db7c:
    if (ctx->pc == 0x22DB7Cu) {
        ctx->pc = 0x22DB7Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2064));
        ctx->pc = 0x22DB80u;
        goto label_22db80;
    }
    ctx->pc = 0x22DB78u;
    {
        const bool branch_taken_0x22db78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DB7Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2064));
        if (branch_taken_0x22db78) {
            ctx->pc = 0x22DBB8u;
            goto label_22dbb8;
        }
    }
    ctx->pc = 0x22DB80u;
label_22db80:
    // 0x22db80: 0x8e020130
    ctx->pc = 0x22db80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22db84:
    // 0x22db84: 0x3c031000
    ctx->pc = 0x22db84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_22db88:
    // 0x22db88: 0x431024
    ctx->pc = 0x22db88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22db8c:
    // 0x22db8c: 0x10400012
label_22db90:
    if (ctx->pc == 0x22DB90u) {
        ctx->pc = 0x22DB90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22DB94u;
        goto label_22db94;
    }
    ctx->pc = 0x22DB8Cu;
    {
        const bool branch_taken_0x22db8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DB90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22db8c) {
            ctx->pc = 0x22DBD8u;
            goto label_22dbd8;
        }
    }
    ctx->pc = 0x22DB94u;
label_22db94:
    // 0x22db94: 0xc0b1a8e
label_22db98:
    if (ctx->pc == 0x22DB98u) {
        ctx->pc = 0x22DB98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29608));
        ctx->pc = 0x22DB9Cu;
        goto label_22db9c;
    }
    ctx->pc = 0x22DB94u;
    SET_GPR_U32(ctx, 31, 0x22DB9Cu);
    ctx->pc = 0x22DB98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29608));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB9Cu; }
    }
    if (ctx->pc != 0x22DB9Cu) { return; }
    ctx->pc = 0x22DB9Cu;
label_22db9c:
    // 0x22db9c: 0x40282d
    ctx->pc = 0x22db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dba0:
    // 0x22dba0: 0x8e020708
    ctx->pc = 0x22dba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_22dba4:
    // 0x22dba4: 0x14400008
label_22dba8:
    if (ctx->pc == 0x22DBA8u) {
        ctx->pc = 0x22DBA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DBACu;
        goto label_22dbac;
    }
    ctx->pc = 0x22DBA4u;
    {
        const bool branch_taken_0x22dba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22DBA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22dba4) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DBACu;
label_22dbac:
    // 0x22dbac: 0x282d
    ctx->pc = 0x22dbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dbb0:
    // 0x22dbb0: 0x8e0606a8
    ctx->pc = 0x22dbb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_22dbb4:
    // 0x22dbb4: 0x24070010
    ctx->pc = 0x22dbb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
label_22dbb8:
    // 0x22dbb8: 0xc0b2236
label_22dbbc:
    if (ctx->pc == 0x22DBBCu) {
        ctx->pc = 0x22DBC0u;
        goto label_22dbc0;
    }
    ctx->pc = 0x22DBB8u;
    SET_GPR_U32(ctx, 31, 0x22DBC0u);
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBC0u; }
    }
    if (ctx->pc != 0x22DBC0u) { return; }
    ctx->pc = 0x22DBC0u;
label_22dbc0:
    // 0x22dbc0: 0x1000000b
label_22dbc4:
    if (ctx->pc == 0x22DBC4u) {
        ctx->pc = 0x22DBC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 2));
        ctx->pc = 0x22DBC8u;
        goto label_22dbc8;
    }
    ctx->pc = 0x22DBC0u;
    {
        const bool branch_taken_0x22dbc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DBC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 2));
        if (branch_taken_0x22dbc0) {
            ctx->pc = 0x22DBF0u;
            goto label_22dbf0;
        }
    }
    ctx->pc = 0x22DBC8u;
label_22dbc8:
    // 0x22dbc8: 0xc0b220e
label_22dbcc:
    if (ctx->pc == 0x22DBCCu) {
        ctx->pc = 0x22DBCCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->pc = 0x22DBD0u;
        goto label_22dbd0;
    }
    ctx->pc = 0x22DBC8u;
    SET_GPR_U32(ctx, 31, 0x22DBD0u);
    ctx->pc = 0x22DBCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBD0u; }
    }
    if (ctx->pc != 0x22DBD0u) { return; }
    ctx->pc = 0x22DBD0u;
label_22dbd0:
    // 0x22dbd0: 0x10000008
label_22dbd4:
    if (ctx->pc == 0x22DBD4u) {
        ctx->pc = 0x22DBD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->pc = 0x22DBD8u;
        goto label_22dbd8;
    }
    ctx->pc = 0x22DBD0u;
    {
        const bool branch_taken_0x22dbd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DBD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        if (branch_taken_0x22dbd0) {
            ctx->pc = 0x22DBF4u;
            goto label_22dbf4;
        }
    }
    ctx->pc = 0x22DBD8u;
label_22dbd8:
    // 0x22dbd8: 0x8e040708
    ctx->pc = 0x22dbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_22dbdc:
    // 0x22dbdc: 0x50800004
label_22dbe0:
    if (ctx->pc == 0x22DBE0u) {
        ctx->pc = 0x22DBE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
        ctx->pc = 0x22DBE4u;
        goto label_22dbe4;
    }
    ctx->pc = 0x22DBDCu;
    {
        const bool branch_taken_0x22dbdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dbdc) {
            ctx->pc = 0x22DBE0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
            ctx->pc = 0x22DBF0u;
            goto label_22dbf0;
        }
    }
    ctx->pc = 0x22DBE4u;
label_22dbe4:
    // 0x22dbe4: 0xc0b3f1a
label_22dbe8:
    if (ctx->pc == 0x22DBE8u) {
        ctx->pc = 0x22DBE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DBECu;
        goto label_22dbec;
    }
    ctx->pc = 0x22DBE4u;
    SET_GPR_U32(ctx, 31, 0x22DBECu);
    ctx->pc = 0x22DBE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBECu; }
    }
    if (ctx->pc != 0x22DBECu) { return; }
    ctx->pc = 0x22DBECu;
label_22dbec:
    // 0x22dbec: 0xae000708
    ctx->pc = 0x22dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
label_22dbf0:
    // 0x22dbf0: 0x8e020708
    ctx->pc = 0x22dbf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_22dbf4:
    // 0x22dbf4: 0x5040000a
label_22dbf8:
    if (ctx->pc == 0x22DBF8u) {
        ctx->pc = 0x22DBF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x22DBFCu;
        goto label_22dbfc;
    }
    ctx->pc = 0x22DBF4u;
    {
        const bool branch_taken_0x22dbf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dbf4) {
            ctx->pc = 0x22DBF8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->pc = 0x22DC20u;
            goto label_22dc20;
        }
    }
    ctx->pc = 0x22DBFCu;
label_22dbfc:
    // 0x22dbfc: 0x8e0406b8
    ctx->pc = 0x22dbfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_22dc00:
    // 0x22dc00: 0x10800003
label_22dc04:
    if (ctx->pc == 0x22DC04u) {
        ctx->pc = 0x22DC04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22DC08u;
        goto label_22dc08;
    }
    ctx->pc = 0x22DC00u;
    {
        const bool branch_taken_0x22dc00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DC04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22dc00) {
            ctx->pc = 0x22DC10u;
            goto label_22dc10;
        }
    }
    ctx->pc = 0x22DC08u;
label_22dc08:
    // 0x22dc08: 0xc0b41b8
label_22dc0c:
    if (ctx->pc == 0x22DC0Cu) {
        ctx->pc = 0x22DC0Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DC10u;
        goto label_22dc10;
    }
    ctx->pc = 0x22DC08u;
    SET_GPR_U32(ctx, 31, 0x22DC10u);
    ctx->pc = 0x22DC0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC10u; }
    }
    if (ctx->pc != 0x22DC10u) { return; }
    ctx->pc = 0x22DC10u;
label_22dc10:
    // 0x22dc10: 0xc08496c
label_22dc14:
    if (ctx->pc == 0x22DC14u) {
        ctx->pc = 0x22DC14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
        ctx->pc = 0x22DC18u;
        goto label_22dc18;
    }
    ctx->pc = 0x22DC10u;
    SET_GPR_U32(ctx, 31, 0x22DC18u);
    ctx->pc = 0x22DC14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC18u; }
    }
    if (ctx->pc != 0x22DC18u) { return; }
    ctx->pc = 0x22DC18u;
label_22dc18:
    // 0x22dc18: 0x10000074
label_22dc1c:
    if (ctx->pc == 0x22DC1Cu) {
        ctx->pc = 0x22DC1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22DC20u;
        goto label_22dc20;
    }
    ctx->pc = 0x22DC18u;
    {
        const bool branch_taken_0x22dc18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DC1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        if (branch_taken_0x22dc18) {
            ctx->pc = 0x22DDECu;
            goto label_22ddec;
        }
    }
    ctx->pc = 0x22DC20u;
label_22dc20:
    // 0x22dc20: 0x3042000f
    ctx->pc = 0x22dc20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_22dc24:
    // 0x22dc24: 0x10400060
label_22dc28:
    if (ctx->pc == 0x22DC28u) {
        ctx->pc = 0x22DC28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x22DC2Cu;
        goto label_22dc2c;
    }
    ctx->pc = 0x22DC24u;
    {
        const bool branch_taken_0x22dc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DC28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x22dc24) {
            ctx->pc = 0x22DDA8u;
            goto label_22dda8;
        }
    }
    ctx->pc = 0x22DC2Cu;
label_22dc2c:
    // 0x22dc2c: 0x2484f760
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965088));
label_22dc30:
    // 0x22dc30: 0x21880
    ctx->pc = 0x22dc30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_22dc34:
    // 0x22dc34: 0x24020014
    ctx->pc = 0x22dc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_22dc38:
    // 0x22dc38: 0x2421018
    ctx->pc = 0x22dc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22dc3c:
    // 0x22dc3c: 0x621821
    ctx->pc = 0x22dc3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22dc40:
    // 0x22dc40: 0x641821
    ctx->pc = 0x22dc40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22dc44:
    // 0x22dc44: 0x260406bc
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
label_22dc48:
    // 0x22dc48: 0x8c650000
    ctx->pc = 0x22dc48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22dc4c:
    // 0x22dc4c: 0x8e0606a8
    ctx->pc = 0x22dc4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_22dc50:
    // 0x22dc50: 0x3c070008
    ctx->pc = 0x22dc50u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_22dc54:
    // 0x22dc54: 0xc08b32c
label_22dc58:
    if (ctx->pc == 0x22DC58u) {
        ctx->pc = 0x22DC58u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 6272));
        ctx->pc = 0x22DC5Cu;
        goto label_22dc5c;
    }
    ctx->pc = 0x22DC54u;
    SET_GPR_U32(ctx, 31, 0x22DC5Cu);
    ctx->pc = 0x22DC58u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 6272));
    ctx->pc = 0x22CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceTree_0x22ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC5Cu; }
    }
    if (ctx->pc != 0x22DC5Cu) { return; }
    ctx->pc = 0x22DC5Cu;
label_22dc5c:
    // 0x22dc5c: 0x50400058
label_22dc60:
    if (ctx->pc == 0x22DC60u) {
        ctx->pc = 0x22DC60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
        ctx->pc = 0x22DC64u;
        goto label_22dc64;
    }
    ctx->pc = 0x22DC5Cu;
    {
        const bool branch_taken_0x22dc5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dc5c) {
            ctx->pc = 0x22DC60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
            ctx->pc = 0x22DDC0u;
            goto label_22ddc0;
        }
    }
    ctx->pc = 0x22DC64u;
label_22dc64:
    // 0x22dc64: 0x8e0506bc
    ctx->pc = 0x22dc64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dc68:
    // 0x22dc68: 0x10a0005a
label_22dc6c:
    if (ctx->pc == 0x22DC6Cu) {
        ctx->pc = 0x22DC6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x22DC70u;
        goto label_22dc70;
    }
    ctx->pc = 0x22DC68u;
    {
        const bool branch_taken_0x22dc68 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DC6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x22dc68) {
            ctx->pc = 0x22DDD4u;
            goto label_22ddd4;
        }
    }
    ctx->pc = 0x22DC70u;
label_22dc70:
    // 0x22dc70: 0x8e042ac0
    ctx->pc = 0x22dc70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
label_22dc74:
    // 0x22dc74: 0x82001a
    ctx->pc = 0x22dc74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_22dc78:
    // 0x22dc78: 0x2012
    ctx->pc = 0x22dc78u;
    SET_GPR_U32(ctx, 4, ctx->lo);
label_22dc7c:
    // 0x22dc7c: 0x50400001
label_22dc80:
    if (ctx->pc == 0x22DC80u) {
        ctx->pc = 0x22DC80u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x22DC84u;
        goto label_22dc84;
    }
    ctx->pc = 0x22DC7Cu;
    {
        const bool branch_taken_0x22dc7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dc7c) {
            ctx->pc = 0x22DC80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22DC84u;
            goto label_22dc84;
        }
    }
    ctx->pc = 0x22DC84u;
label_22dc84:
    // 0x22dc84: 0x8ca50000
    ctx->pc = 0x22dc84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22dc88:
    // 0x22dc88: 0x3c020033
    ctx->pc = 0x22dc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22dc8c:
    // 0x22dc8c: 0x24464910
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 18704));
label_22dc90:
    // 0x22dc90: 0x8e020000
    ctx->pc = 0x22dc90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dc94:
    // 0x22dc94: 0x21080
    ctx->pc = 0x22dc94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dc98:
    // 0x22dc98: 0x461021
    ctx->pc = 0x22dc98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dc9c:
    // 0x22dc9c: 0x8c420000
    ctx->pc = 0x22dc9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dca0:
    // 0x22dca0: 0x2403000c
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_22dca4:
    // 0x22dca4: 0x832018
    ctx->pc = 0x22dca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22dca8:
    // 0x22dca8: 0x441021
    ctx->pc = 0x22dca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dcac:
    // 0x22dcac: 0xc4400068
    ctx->pc = 0x22dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dcb0:
    // 0x22dcb0: 0xe4a00030
    ctx->pc = 0x22dcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_22dcb4:
    // 0x22dcb4: 0x8e0206bc
    ctx->pc = 0x22dcb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dcb8:
    // 0x22dcb8: 0x8c430000
    ctx->pc = 0x22dcb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dcbc:
    // 0x22dcbc: 0x8e020000
    ctx->pc = 0x22dcbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dcc0:
    // 0x22dcc0: 0x21080
    ctx->pc = 0x22dcc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dcc4:
    // 0x22dcc4: 0x461021
    ctx->pc = 0x22dcc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dcc8:
    // 0x22dcc8: 0x8c420000
    ctx->pc = 0x22dcc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dccc:
    // 0x22dccc: 0x441021
    ctx->pc = 0x22dcccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dcd0:
    // 0x22dcd0: 0xc440006c
    ctx->pc = 0x22dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dcd4:
    // 0x22dcd4: 0xe4600034
    ctx->pc = 0x22dcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_22dcd8:
    // 0x22dcd8: 0x8e0206bc
    ctx->pc = 0x22dcd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dcdc:
    // 0x22dcdc: 0x8c430000
    ctx->pc = 0x22dcdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dce0:
    // 0x22dce0: 0x8e020000
    ctx->pc = 0x22dce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dce4:
    // 0x22dce4: 0x21080
    ctx->pc = 0x22dce4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dce8:
    // 0x22dce8: 0x461021
    ctx->pc = 0x22dce8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dcec:
    // 0x22dcec: 0x8c420000
    ctx->pc = 0x22dcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dcf0:
    // 0x22dcf0: 0x441021
    ctx->pc = 0x22dcf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dcf4:
    // 0x22dcf4: 0xc4400070
    ctx->pc = 0x22dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dcf8:
    // 0x22dcf8: 0xe4600038
    ctx->pc = 0x22dcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_22dcfc:
    // 0x22dcfc: 0x8e020000
    ctx->pc = 0x22dcfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dd00:
    // 0x22dd00: 0x21080
    ctx->pc = 0x22dd00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dd04:
    // 0x22dd04: 0x461021
    ctx->pc = 0x22dd04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dd08:
    // 0x22dd08: 0x8c420000
    ctx->pc = 0x22dd08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd0c:
    // 0x22dd0c: 0x441021
    ctx->pc = 0x22dd0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dd10:
    // 0x22dd10: 0xc44100e0
    ctx->pc = 0x22dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22dd14:
    // 0x22dd14: 0x44800000
    ctx->pc = 0x22dd14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22dd18:
    // 0x22dd18: 0x46000832
    ctx->pc = 0x22dd18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dd1c:
    // 0x22dd1c: 0x0
    ctx->pc = 0x22dd1cu;
    // NOP
label_22dd20:
    // 0x22dd20: 0x45010027
label_22dd24:
    if (ctx->pc == 0x22DD24u) {
        ctx->pc = 0x22DD24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
        ctx->pc = 0x22DD28u;
        goto label_22dd28;
    }
    ctx->pc = 0x22DD20u;
    {
        const bool branch_taken_0x22dd20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DD24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
        if (branch_taken_0x22dd20) {
            ctx->pc = 0x22DDC0u;
            goto label_22ddc0;
        }
    }
    ctx->pc = 0x22DD28u;
label_22dd28:
    // 0x22dd28: 0x8c430000
    ctx->pc = 0x22dd28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd2c:
    // 0x22dd2c: 0x8c620060
    ctx->pc = 0x22dd2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_22dd30:
    // 0x22dd30: 0x34420008
    ctx->pc = 0x22dd30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_22dd34:
    // 0x22dd34: 0xac620060
    ctx->pc = 0x22dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_22dd38:
    // 0x22dd38: 0x8e0206bc
    ctx->pc = 0x22dd38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dd3c:
    // 0x22dd3c: 0x8c430000
    ctx->pc = 0x22dd3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd40:
    // 0x22dd40: 0x8e020000
    ctx->pc = 0x22dd40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dd44:
    // 0x22dd44: 0x21080
    ctx->pc = 0x22dd44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dd48:
    // 0x22dd48: 0x461021
    ctx->pc = 0x22dd48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dd4c:
    // 0x22dd4c: 0x8c420000
    ctx->pc = 0x22dd4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd50:
    // 0x22dd50: 0x441021
    ctx->pc = 0x22dd50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dd54:
    // 0x22dd54: 0xc44000e0
    ctx->pc = 0x22dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd58:
    // 0x22dd58: 0xe4600040
    ctx->pc = 0x22dd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_22dd5c:
    // 0x22dd5c: 0x8e0206bc
    ctx->pc = 0x22dd5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dd60:
    // 0x22dd60: 0x8c430000
    ctx->pc = 0x22dd60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd64:
    // 0x22dd64: 0x8e020000
    ctx->pc = 0x22dd64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dd68:
    // 0x22dd68: 0x21080
    ctx->pc = 0x22dd68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dd6c:
    // 0x22dd6c: 0x461021
    ctx->pc = 0x22dd6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dd70:
    // 0x22dd70: 0x8c420000
    ctx->pc = 0x22dd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd74:
    // 0x22dd74: 0x441021
    ctx->pc = 0x22dd74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dd78:
    // 0x22dd78: 0xc44000e4
    ctx->pc = 0x22dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dd7c:
    // 0x22dd7c: 0xe4600044
    ctx->pc = 0x22dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_22dd80:
    // 0x22dd80: 0x8e0206bc
    ctx->pc = 0x22dd80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22dd84:
    // 0x22dd84: 0x8c430000
    ctx->pc = 0x22dd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd88:
    // 0x22dd88: 0x8e020000
    ctx->pc = 0x22dd88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dd8c:
    // 0x22dd8c: 0x21080
    ctx->pc = 0x22dd8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22dd90:
    // 0x22dd90: 0x461021
    ctx->pc = 0x22dd90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dd94:
    // 0x22dd94: 0x8c420000
    ctx->pc = 0x22dd94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd98:
    // 0x22dd98: 0x441021
    ctx->pc = 0x22dd98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22dd9c:
    // 0x22dd9c: 0xc44000e8
    ctx->pc = 0x22dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dda0:
    // 0x22dda0: 0x10000006
label_22dda4:
    if (ctx->pc == 0x22DDA4u) {
        ctx->pc = 0x22DDA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
        ctx->pc = 0x22DDA8u;
        goto label_22dda8;
    }
    ctx->pc = 0x22DDA0u;
    {
        const bool branch_taken_0x22dda0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DDA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
        if (branch_taken_0x22dda0) {
            ctx->pc = 0x22DDBCu;
            goto label_22ddbc;
        }
    }
    ctx->pc = 0x22DDA8u;
label_22dda8:
    // 0x22dda8: 0x8e0206bc
    ctx->pc = 0x22dda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22ddac:
    // 0x22ddac: 0x5040000a
label_22ddb0:
    if (ctx->pc == 0x22DDB0u) {
        ctx->pc = 0x22DDB0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
        ctx->pc = 0x22DDB4u;
        goto label_22ddb4;
    }
    ctx->pc = 0x22DDACu;
    {
        const bool branch_taken_0x22ddac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ddac) {
            ctx->pc = 0x22DDB0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
            ctx->pc = 0x22DDD8u;
            goto label_22ddd8;
        }
    }
    ctx->pc = 0x22DDB4u;
label_22ddb4:
    // 0x22ddb4: 0xc08496c
label_22ddb8:
    if (ctx->pc == 0x22DDB8u) {
        ctx->pc = 0x22DDB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
        ctx->pc = 0x22DDBCu;
        goto label_22ddbc;
    }
    ctx->pc = 0x22DDB4u;
    SET_GPR_U32(ctx, 31, 0x22DDBCu);
    ctx->pc = 0x22DDB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDBCu; }
    }
    if (ctx->pc != 0x22DDBCu) { return; }
    ctx->pc = 0x22DDBCu;
label_22ddbc:
    // 0x22ddbc: 0x8e0206bc
    ctx->pc = 0x22ddbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_22ddc0:
    // 0x22ddc0: 0x10400004
label_22ddc4:
    if (ctx->pc == 0x22DDC4u) {
        ctx->pc = 0x22DDC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
        ctx->pc = 0x22DDC8u;
        goto label_22ddc8;
    }
    ctx->pc = 0x22DDC0u;
    {
        const bool branch_taken_0x22ddc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DDC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
        if (branch_taken_0x22ddc0) {
            ctx->pc = 0x22DDD4u;
            goto label_22ddd4;
        }
    }
    ctx->pc = 0x22DDC8u;
label_22ddc8:
    // 0x22ddc8: 0x282d
    ctx->pc = 0x22ddc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ddcc:
    // 0x22ddcc: 0xc084a96
label_22ddd0:
    if (ctx->pc == 0x22DDD0u) {
        ctx->pc = 0x22DDD0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDD4u;
        goto label_22ddd4;
    }
    ctx->pc = 0x22DDCCu;
    SET_GPR_U32(ctx, 31, 0x22DDD4u);
    ctx->pc = 0x22DDD0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD4u; }
    }
    if (ctx->pc != 0x22DDD4u) { return; }
    ctx->pc = 0x22DDD4u;
label_22ddd4:
    // 0x22ddd4: 0x8e0406b8
    ctx->pc = 0x22ddd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_22ddd8:
    // 0x22ddd8: 0x10800003
label_22dddc:
    if (ctx->pc == 0x22DDDCu) {
        ctx->pc = 0x22DDDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22DDE0u;
        goto label_22dde0;
    }
    ctx->pc = 0x22DDD8u;
    {
        const bool branch_taken_0x22ddd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DDDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22ddd8) {
            ctx->pc = 0x22DDE8u;
            goto label_22dde8;
        }
    }
    ctx->pc = 0x22DDE0u;
label_22dde0:
    // 0x22dde0: 0xc0b41e4
label_22dde4:
    if (ctx->pc == 0x22DDE4u) {
        ctx->pc = 0x22DDE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDE8u;
        goto label_22dde8;
    }
    ctx->pc = 0x22DDE0u;
    SET_GPR_U32(ctx, 31, 0x22DDE8u);
    ctx->pc = 0x22DDE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDE8u; }
    }
    if (ctx->pc != 0x22DDE8u) { return; }
    ctx->pc = 0x22DDE8u;
label_22dde8:
    // 0x22dde8: 0x8e020138
    ctx->pc = 0x22dde8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22ddec:
    // 0x22ddec: 0x30420400
    ctx->pc = 0x22ddecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_22ddf0:
    // 0x22ddf0: 0x10400005
label_22ddf4:
    if (ctx->pc == 0x22DDF4u) {
        ctx->pc = 0x22DDF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DDF8u;
        goto label_22ddf8;
    }
    ctx->pc = 0x22DDF0u;
    {
        const bool branch_taken_0x22ddf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DDF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22ddf0) {
            ctx->pc = 0x22DE08u;
            goto label_22de08;
        }
    }
    ctx->pc = 0x22DDF8u;
label_22ddf8:
    // 0x22ddf8: 0x26040768
    ctx->pc = 0x22ddf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22ddfc:
    // 0x22ddfc: 0x8c45f70c
    ctx->pc = 0x22ddfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965004)));
label_22de00:
    // 0x22de00: 0x10000037
label_22de04:
    if (ctx->pc == 0x22DE04u) {
        ctx->pc = 0x22DE04u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22DE08u;
        goto label_22de08;
    }
    ctx->pc = 0x22DE00u;
    {
        const bool branch_taken_0x22de00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE04u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        if (branch_taken_0x22de00) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DE08u;
label_22de08:
    // 0x22de08: 0x8e020134
    ctx->pc = 0x22de08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22de0c:
    // 0x22de0c: 0x3c030020
    ctx->pc = 0x22de0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
label_22de10:
    // 0x22de10: 0x431024
    ctx->pc = 0x22de10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22de14:
    // 0x22de14: 0x10400009
label_22de18:
    if (ctx->pc == 0x22DE18u) {
        ctx->pc = 0x22DE18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x22DE1Cu;
        goto label_22de1c;
    }
    ctx->pc = 0x22DE14u;
    {
        const bool branch_taken_0x22de14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x22de14) {
            ctx->pc = 0x22DE3Cu;
            goto label_22de3c;
        }
    }
    ctx->pc = 0x22DE1Cu;
label_22de1c:
    // 0x22de1c: 0x8e0301e0
    ctx->pc = 0x22de1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_22de20:
    // 0x22de20: 0x54620007
label_22de24:
    if (ctx->pc == 0x22DE24u) {
        ctx->pc = 0x22DE24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22DE28u;
        goto label_22de28;
    }
    ctx->pc = 0x22DE20u;
    {
        const bool branch_taken_0x22de20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22de20) {
            ctx->pc = 0x22DE24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22DE40u;
            goto label_22de40;
        }
    }
    ctx->pc = 0x22DE28u;
label_22de28:
    // 0x22de28: 0x3c020035
    ctx->pc = 0x22de28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_22de2c:
    // 0x22de2c: 0x26040768
    ctx->pc = 0x22de2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22de30:
    // 0x22de30: 0x8c45f714
    ctx->pc = 0x22de30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965012)));
label_22de34:
    // 0x22de34: 0x1000002a
label_22de38:
    if (ctx->pc == 0x22DE38u) {
        ctx->pc = 0x22DE38u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22DE3Cu;
        goto label_22de3c;
    }
    ctx->pc = 0x22DE34u;
    {
        const bool branch_taken_0x22de34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE38u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        if (branch_taken_0x22de34) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DE3Cu;
label_22de3c:
    // 0x22de3c: 0x8e020138
    ctx->pc = 0x22de3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22de40:
    // 0x22de40: 0x30420080
    ctx->pc = 0x22de40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
label_22de44:
    // 0x22de44: 0x10400005
label_22de48:
    if (ctx->pc == 0x22DE48u) {
        ctx->pc = 0x22DE48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DE4Cu;
        goto label_22de4c;
    }
    ctx->pc = 0x22DE44u;
    {
        const bool branch_taken_0x22de44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22de44) {
            ctx->pc = 0x22DE5Cu;
            goto label_22de5c;
        }
    }
    ctx->pc = 0x22DE4Cu;
label_22de4c:
    // 0x22de4c: 0x26040768
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22de50:
    // 0x22de50: 0x8c45f708
    ctx->pc = 0x22de50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965000)));
label_22de54:
    // 0x22de54: 0x10000022
label_22de58:
    if (ctx->pc == 0x22DE58u) {
        ctx->pc = 0x22DE58u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x22DE5Cu;
        goto label_22de5c;
    }
    ctx->pc = 0x22DE54u;
    {
        const bool branch_taken_0x22de54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE58u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        if (branch_taken_0x22de54) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DE5Cu;
label_22de5c:
    // 0x22de5c: 0x8e020138
    ctx->pc = 0x22de5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22de60:
    // 0x22de60: 0x30420010
    ctx->pc = 0x22de60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_22de64:
    // 0x22de64: 0x10400005
label_22de68:
    if (ctx->pc == 0x22DE68u) {
        ctx->pc = 0x22DE68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DE6Cu;
        goto label_22de6c;
    }
    ctx->pc = 0x22DE64u;
    {
        const bool branch_taken_0x22de64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22de64) {
            ctx->pc = 0x22DE7Cu;
            goto label_22de7c;
        }
    }
    ctx->pc = 0x22DE6Cu;
label_22de6c:
    // 0x22de6c: 0x26040768
    ctx->pc = 0x22de6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22de70:
    // 0x22de70: 0x8c45f718
    ctx->pc = 0x22de70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965016)));
label_22de74:
    // 0x22de74: 0x1000001a
label_22de78:
    if (ctx->pc == 0x22DE78u) {
        ctx->pc = 0x22DE78u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        ctx->pc = 0x22DE7Cu;
        goto label_22de7c;
    }
    ctx->pc = 0x22DE74u;
    {
        const bool branch_taken_0x22de74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE78u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        if (branch_taken_0x22de74) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DE7Cu;
label_22de7c:
    // 0x22de7c: 0x8e020138
    ctx->pc = 0x22de7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22de80:
    // 0x22de80: 0x30420020
    ctx->pc = 0x22de80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_22de84:
    // 0x22de84: 0x10400005
label_22de88:
    if (ctx->pc == 0x22DE88u) {
        ctx->pc = 0x22DE88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DE8Cu;
        goto label_22de8c;
    }
    ctx->pc = 0x22DE84u;
    {
        const bool branch_taken_0x22de84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22de84) {
            ctx->pc = 0x22DE9Cu;
            goto label_22de9c;
        }
    }
    ctx->pc = 0x22DE8Cu;
label_22de8c:
    // 0x22de8c: 0x26040768
    ctx->pc = 0x22de8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22de90:
    // 0x22de90: 0x8c45f71c
    ctx->pc = 0x22de90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965020)));
label_22de94:
    // 0x22de94: 0x10000012
label_22de98:
    if (ctx->pc == 0x22DE98u) {
        ctx->pc = 0x22DE98u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        ctx->pc = 0x22DE9Cu;
        goto label_22de9c;
    }
    ctx->pc = 0x22DE94u;
    {
        const bool branch_taken_0x22de94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DE98u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        if (branch_taken_0x22de94) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DE9Cu;
label_22de9c:
    // 0x22de9c: 0x8e020138
    ctx->pc = 0x22de9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22dea0:
    // 0x22dea0: 0x30420040
    ctx->pc = 0x22dea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_22dea4:
    // 0x22dea4: 0x10400005
label_22dea8:
    if (ctx->pc == 0x22DEA8u) {
        ctx->pc = 0x22DEA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DEACu;
        goto label_22deac;
    }
    ctx->pc = 0x22DEA4u;
    {
        const bool branch_taken_0x22dea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DEA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22dea4) {
            ctx->pc = 0x22DEBCu;
            goto label_22debc;
        }
    }
    ctx->pc = 0x22DEACu;
label_22deac:
    // 0x22deac: 0x26040768
    ctx->pc = 0x22deacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22deb0:
    // 0x22deb0: 0x8c45f720
    ctx->pc = 0x22deb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965024)));
label_22deb4:
    // 0x22deb4: 0x1000000a
label_22deb8:
    if (ctx->pc == 0x22DEB8u) {
        ctx->pc = 0x22DEB8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        ctx->pc = 0x22DEBCu;
        goto label_22debc;
    }
    ctx->pc = 0x22DEB4u;
    {
        const bool branch_taken_0x22deb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DEB8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
        if (branch_taken_0x22deb4) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DEBCu;
label_22debc:
    // 0x22debc: 0x8e020138
    ctx->pc = 0x22debcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22dec0:
    // 0x22dec0: 0x30420001
    ctx->pc = 0x22dec0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22dec4:
    // 0x22dec4: 0x1040000a
label_22dec8:
    if (ctx->pc == 0x22DEC8u) {
        ctx->pc = 0x22DEC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x22DECCu;
        goto label_22decc;
    }
    ctx->pc = 0x22DEC4u;
    {
        const bool branch_taken_0x22dec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DEC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x22dec4) {
            ctx->pc = 0x22DEF0u;
            goto label_22def0;
        }
    }
    ctx->pc = 0x22DECCu;
label_22decc:
    // 0x22decc: 0x8e030080
    ctx->pc = 0x22deccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22ded0:
    // 0x22ded0: 0x8c630078
    ctx->pc = 0x22ded0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_22ded4:
    // 0x22ded4: 0x26040768
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22ded8:
    // 0x22ded8: 0x8c45f710
    ctx->pc = 0x22ded8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965008)));
label_22dedc:
    // 0x22dedc: 0x8c660078
    ctx->pc = 0x22dedcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_22dee0:
    // 0x22dee0: 0xc08b32c
label_22dee4:
    if (ctx->pc == 0x22DEE4u) {
        ctx->pc = 0x22DEE4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x22DEE8u;
        goto label_22dee8;
    }
    ctx->pc = 0x22DEE0u;
    SET_GPR_U32(ctx, 31, 0x22DEE8u);
    ctx->pc = 0x22DEE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x22CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceTree_0x22ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEE8u; }
    }
    if (ctx->pc != 0x22DEE8u) { return; }
    ctx->pc = 0x22DEE8u;
label_22dee8:
    // 0x22dee8: 0x10000007
label_22deec:
    if (ctx->pc == 0x22DEECu) {
        ctx->pc = 0x22DEECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->pc = 0x22DEF0u;
        goto label_22def0;
    }
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DEECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DF08u;
            goto label_22df08;
        }
    }
    ctx->pc = 0x22DEF0u;
label_22def0:
    // 0x22def0: 0x8e020768
    ctx->pc = 0x22def0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_22def4:
    // 0x22def4: 0x1040004c
label_22def8:
    if (ctx->pc == 0x22DEF8u) {
        ctx->pc = 0x22DEFCu;
        goto label_22defc;
    }
    ctx->pc = 0x22DEF4u;
    {
        const bool branch_taken_0x22def4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22def4) {
            ctx->pc = 0x22E028u;
            goto label_22e028;
        }
    }
    ctx->pc = 0x22DEFCu;
label_22defc:
    // 0x22defc: 0xc08496c
label_22df00:
    if (ctx->pc == 0x22DF00u) {
        ctx->pc = 0x22DF00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
        ctx->pc = 0x22DF04u;
        goto label_22df04;
    }
    ctx->pc = 0x22DEFCu;
    SET_GPR_U32(ctx, 31, 0x22DF04u);
    ctx->pc = 0x22DF00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF04u; }
    }
    if (ctx->pc != 0x22DF04u) { return; }
    ctx->pc = 0x22DF04u;
label_22df04:
    // 0x22df04: 0x8e020768
    ctx->pc = 0x22df04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_22df08:
    // 0x22df08: 0x10400047
label_22df0c:
    if (ctx->pc == 0x22DF0Cu) {
        ctx->pc = 0x22DF0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF10u;
        goto label_22df10;
    }
    ctx->pc = 0x22DF08u;
    {
        const bool branch_taken_0x22df08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22df08) {
            ctx->pc = 0x22E028u;
            goto label_22e028;
        }
    }
    ctx->pc = 0x22DF10u;
label_22df10:
    // 0x22df10: 0x8e020138
    ctx->pc = 0x22df10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22df14:
    // 0x22df14: 0x30420400
    ctx->pc = 0x22df14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_22df18:
    // 0x22df18: 0x10400020
label_22df1c:
    if (ctx->pc == 0x22DF1Cu) {
        ctx->pc = 0x22DF1Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF20u;
        goto label_22df20;
    }
    ctx->pc = 0x22DF18u;
    {
        const bool branch_taken_0x22df18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF1Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22df18) {
            ctx->pc = 0x22DF9Cu;
            goto label_22df9c;
        }
    }
    ctx->pc = 0x22DF20u;
label_22df20:
    // 0x22df20: 0x8e0201e0
    ctx->pc = 0x22df20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_22df24:
    // 0x22df24: 0x2443fff8
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967288));
label_22df28:
    // 0x22df28: 0x2c62008d
    ctx->pc = 0x22df28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 141));
label_22df2c:
    // 0x22df2c: 0x1040000f
label_22df30:
    if (ctx->pc == 0x22DF30u) {
        ctx->pc = 0x22DF30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x22DF34u;
        goto label_22df34;
    }
    ctx->pc = 0x22DF2Cu;
    {
        const bool branch_taken_0x22df2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22df2c) {
            ctx->pc = 0x22DF6Cu;
            goto label_22df6c;
        }
    }
    ctx->pc = 0x22DF34u;
label_22df34:
    // 0x22df34: 0x244273e0
    ctx->pc = 0x22df34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29664));
label_22df38:
    // 0x22df38: 0x31880
    ctx->pc = 0x22df38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22df3c:
    // 0x22df3c: 0x621821
    ctx->pc = 0x22df3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22df40:
    // 0x22df40: 0x8c620000
    ctx->pc = 0x22df40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22df44:
    // 0x22df44: 0x400008
label_22df48:
    if (ctx->pc == 0x22DF48u) {
        ctx->pc = 0x22DF4Cu;
        goto label_22df4c;
    }
    ctx->pc = 0x22DF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D1B0u: goto label_22d1b0;
            case 0x22D1B4u: goto label_22d1b4;
            case 0x22D1B8u: goto label_22d1b8;
            case 0x22D1BCu: goto label_22d1bc;
            case 0x22D1C0u: goto label_22d1c0;
            case 0x22D1C4u: goto label_22d1c4;
            case 0x22D1C8u: goto label_22d1c8;
            case 0x22D1CCu: goto label_22d1cc;
            case 0x22D1D0u: goto label_22d1d0;
            case 0x22D1D4u: goto label_22d1d4;
            case 0x22D1D8u: goto label_22d1d8;
            case 0x22D1DCu: goto label_22d1dc;
            case 0x22D1E0u: goto label_22d1e0;
            case 0x22D1E4u: goto label_22d1e4;
            case 0x22D1E8u: goto label_22d1e8;
            case 0x22D1ECu: goto label_22d1ec;
            case 0x22D1F0u: goto label_22d1f0;
            case 0x22D1F4u: goto label_22d1f4;
            case 0x22D1F8u: goto label_22d1f8;
            case 0x22D1FCu: goto label_22d1fc;
            case 0x22D200u: goto label_22d200;
            case 0x22D204u: goto label_22d204;
            case 0x22D208u: goto label_22d208;
            case 0x22D20Cu: goto label_22d20c;
            case 0x22D210u: goto label_22d210;
            case 0x22D214u: goto label_22d214;
            case 0x22D218u: goto label_22d218;
            case 0x22D21Cu: goto label_22d21c;
            case 0x22D220u: goto label_22d220;
            case 0x22D224u: goto label_22d224;
            case 0x22D228u: goto label_22d228;
            case 0x22D22Cu: goto label_22d22c;
            case 0x22D230u: goto label_22d230;
            case 0x22D234u: goto label_22d234;
            case 0x22D238u: goto label_22d238;
            case 0x22D23Cu: goto label_22d23c;
            case 0x22D240u: goto label_22d240;
            case 0x22D244u: goto label_22d244;
            case 0x22D248u: goto label_22d248;
            case 0x22D24Cu: goto label_22d24c;
            case 0x22D250u: goto label_22d250;
            case 0x22D254u: goto label_22d254;
            case 0x22D258u: goto label_22d258;
            case 0x22D25Cu: goto label_22d25c;
            case 0x22D260u: goto label_22d260;
            case 0x22D264u: goto label_22d264;
            case 0x22D268u: goto label_22d268;
            case 0x22D26Cu: goto label_22d26c;
            case 0x22D270u: goto label_22d270;
            case 0x22D274u: goto label_22d274;
            case 0x22D278u: goto label_22d278;
            case 0x22D27Cu: goto label_22d27c;
            case 0x22D280u: goto label_22d280;
            case 0x22D284u: goto label_22d284;
            case 0x22D288u: goto label_22d288;
            case 0x22D28Cu: goto label_22d28c;
            case 0x22D290u: goto label_22d290;
            case 0x22D294u: goto label_22d294;
            case 0x22D298u: goto label_22d298;
            case 0x22D29Cu: goto label_22d29c;
            case 0x22D2A0u: goto label_22d2a0;
            case 0x22D2A4u: goto label_22d2a4;
            case 0x22D2A8u: goto label_22d2a8;
            case 0x22D2ACu: goto label_22d2ac;
            case 0x22D2B0u: goto label_22d2b0;
            case 0x22D2B4u: goto label_22d2b4;
            case 0x22D2B8u: goto label_22d2b8;
            case 0x22D2BCu: goto label_22d2bc;
            case 0x22D2C0u: goto label_22d2c0;
            case 0x22D2C4u: goto label_22d2c4;
            case 0x22D2C8u: goto label_22d2c8;
            case 0x22D2CCu: goto label_22d2cc;
            case 0x22D2D0u: goto label_22d2d0;
            case 0x22D2D4u: goto label_22d2d4;
            case 0x22D2D8u: goto label_22d2d8;
            case 0x22D2DCu: goto label_22d2dc;
            case 0x22D2E0u: goto label_22d2e0;
            case 0x22D2E4u: goto label_22d2e4;
            case 0x22D2E8u: goto label_22d2e8;
            case 0x22D2ECu: goto label_22d2ec;
            case 0x22D2F0u: goto label_22d2f0;
            case 0x22D2F4u: goto label_22d2f4;
            case 0x22D2F8u: goto label_22d2f8;
            case 0x22D2FCu: goto label_22d2fc;
            case 0x22D300u: goto label_22d300;
            case 0x22D304u: goto label_22d304;
            case 0x22D308u: goto label_22d308;
            case 0x22D30Cu: goto label_22d30c;
            case 0x22D310u: goto label_22d310;
            case 0x22D314u: goto label_22d314;
            case 0x22D318u: goto label_22d318;
            case 0x22D31Cu: goto label_22d31c;
            case 0x22D320u: goto label_22d320;
            case 0x22D324u: goto label_22d324;
            case 0x22D328u: goto label_22d328;
            case 0x22D32Cu: goto label_22d32c;
            case 0x22D330u: goto label_22d330;
            case 0x22D334u: goto label_22d334;
            case 0x22D338u: goto label_22d338;
            case 0x22D33Cu: goto label_22d33c;
            case 0x22D340u: goto label_22d340;
            case 0x22D344u: goto label_22d344;
            case 0x22D348u: goto label_22d348;
            case 0x22D34Cu: goto label_22d34c;
            case 0x22D350u: goto label_22d350;
            case 0x22D354u: goto label_22d354;
            case 0x22D358u: goto label_22d358;
            case 0x22D35Cu: goto label_22d35c;
            case 0x22D360u: goto label_22d360;
            case 0x22D364u: goto label_22d364;
            case 0x22D368u: goto label_22d368;
            case 0x22D36Cu: goto label_22d36c;
            case 0x22D370u: goto label_22d370;
            case 0x22D374u: goto label_22d374;
            case 0x22D378u: goto label_22d378;
            case 0x22D37Cu: goto label_22d37c;
            case 0x22D380u: goto label_22d380;
            case 0x22D384u: goto label_22d384;
            case 0x22D388u: goto label_22d388;
            case 0x22D38Cu: goto label_22d38c;
            case 0x22D390u: goto label_22d390;
            case 0x22D394u: goto label_22d394;
            case 0x22D398u: goto label_22d398;
            case 0x22D39Cu: goto label_22d39c;
            case 0x22D3A0u: goto label_22d3a0;
            case 0x22D3A4u: goto label_22d3a4;
            case 0x22D3A8u: goto label_22d3a8;
            case 0x22D3ACu: goto label_22d3ac;
            case 0x22D3B0u: goto label_22d3b0;
            case 0x22D3B4u: goto label_22d3b4;
            case 0x22D3B8u: goto label_22d3b8;
            case 0x22D3BCu: goto label_22d3bc;
            case 0x22D3C0u: goto label_22d3c0;
            case 0x22D3C4u: goto label_22d3c4;
            case 0x22D3C8u: goto label_22d3c8;
            case 0x22D3CCu: goto label_22d3cc;
            case 0x22D3D0u: goto label_22d3d0;
            case 0x22D3D4u: goto label_22d3d4;
            case 0x22D3D8u: goto label_22d3d8;
            case 0x22D3DCu: goto label_22d3dc;
            case 0x22D3E0u: goto label_22d3e0;
            case 0x22D3E4u: goto label_22d3e4;
            case 0x22D3E8u: goto label_22d3e8;
            case 0x22D3ECu: goto label_22d3ec;
            case 0x22D3F0u: goto label_22d3f0;
            case 0x22D3F4u: goto label_22d3f4;
            case 0x22D3F8u: goto label_22d3f8;
            case 0x22D3FCu: goto label_22d3fc;
            case 0x22D400u: goto label_22d400;
            case 0x22D404u: goto label_22d404;
            case 0x22D408u: goto label_22d408;
            case 0x22D40Cu: goto label_22d40c;
            case 0x22D410u: goto label_22d410;
            case 0x22D414u: goto label_22d414;
            case 0x22D418u: goto label_22d418;
            case 0x22D41Cu: goto label_22d41c;
            case 0x22D420u: goto label_22d420;
            case 0x22D424u: goto label_22d424;
            case 0x22D428u: goto label_22d428;
            case 0x22D42Cu: goto label_22d42c;
            case 0x22D430u: goto label_22d430;
            case 0x22D434u: goto label_22d434;
            case 0x22D438u: goto label_22d438;
            case 0x22D43Cu: goto label_22d43c;
            case 0x22D440u: goto label_22d440;
            case 0x22D444u: goto label_22d444;
            case 0x22D448u: goto label_22d448;
            case 0x22D44Cu: goto label_22d44c;
            case 0x22D450u: goto label_22d450;
            case 0x22D454u: goto label_22d454;
            case 0x22D458u: goto label_22d458;
            case 0x22D45Cu: goto label_22d45c;
            case 0x22D460u: goto label_22d460;
            case 0x22D464u: goto label_22d464;
            case 0x22D468u: goto label_22d468;
            case 0x22D46Cu: goto label_22d46c;
            case 0x22D470u: goto label_22d470;
            case 0x22D474u: goto label_22d474;
            case 0x22D478u: goto label_22d478;
            case 0x22D47Cu: goto label_22d47c;
            case 0x22D480u: goto label_22d480;
            case 0x22D484u: goto label_22d484;
            case 0x22D488u: goto label_22d488;
            case 0x22D48Cu: goto label_22d48c;
            case 0x22D490u: goto label_22d490;
            case 0x22D494u: goto label_22d494;
            case 0x22D498u: goto label_22d498;
            case 0x22D49Cu: goto label_22d49c;
            case 0x22D4A0u: goto label_22d4a0;
            case 0x22D4A4u: goto label_22d4a4;
            case 0x22D4A8u: goto label_22d4a8;
            case 0x22D4ACu: goto label_22d4ac;
            case 0x22D4B0u: goto label_22d4b0;
            case 0x22D4B4u: goto label_22d4b4;
            case 0x22D4B8u: goto label_22d4b8;
            case 0x22D4BCu: goto label_22d4bc;
            case 0x22D4C0u: goto label_22d4c0;
            case 0x22D4C4u: goto label_22d4c4;
            case 0x22D4C8u: goto label_22d4c8;
            case 0x22D4CCu: goto label_22d4cc;
            case 0x22D4D0u: goto label_22d4d0;
            case 0x22D4D4u: goto label_22d4d4;
            case 0x22D4D8u: goto label_22d4d8;
            case 0x22D4DCu: goto label_22d4dc;
            case 0x22D4E0u: goto label_22d4e0;
            case 0x22D4E4u: goto label_22d4e4;
            case 0x22D4E8u: goto label_22d4e8;
            case 0x22D4ECu: goto label_22d4ec;
            case 0x22D4F0u: goto label_22d4f0;
            case 0x22D4F4u: goto label_22d4f4;
            case 0x22D4F8u: goto label_22d4f8;
            case 0x22D4FCu: goto label_22d4fc;
            case 0x22D500u: goto label_22d500;
            case 0x22D504u: goto label_22d504;
            case 0x22D508u: goto label_22d508;
            case 0x22D50Cu: goto label_22d50c;
            case 0x22D510u: goto label_22d510;
            case 0x22D514u: goto label_22d514;
            case 0x22D518u: goto label_22d518;
            case 0x22D51Cu: goto label_22d51c;
            case 0x22D520u: goto label_22d520;
            case 0x22D524u: goto label_22d524;
            case 0x22D528u: goto label_22d528;
            case 0x22D52Cu: goto label_22d52c;
            case 0x22D530u: goto label_22d530;
            case 0x22D534u: goto label_22d534;
            case 0x22D538u: goto label_22d538;
            case 0x22D53Cu: goto label_22d53c;
            case 0x22D540u: goto label_22d540;
            case 0x22D544u: goto label_22d544;
            case 0x22D548u: goto label_22d548;
            case 0x22D54Cu: goto label_22d54c;
            case 0x22D550u: goto label_22d550;
            case 0x22D554u: goto label_22d554;
            case 0x22D558u: goto label_22d558;
            case 0x22D55Cu: goto label_22d55c;
            case 0x22D560u: goto label_22d560;
            case 0x22D564u: goto label_22d564;
            case 0x22D568u: goto label_22d568;
            case 0x22D56Cu: goto label_22d56c;
            case 0x22D570u: goto label_22d570;
            case 0x22D574u: goto label_22d574;
            case 0x22D578u: goto label_22d578;
            case 0x22D57Cu: goto label_22d57c;
            case 0x22D580u: goto label_22d580;
            case 0x22D584u: goto label_22d584;
            case 0x22D588u: goto label_22d588;
            case 0x22D58Cu: goto label_22d58c;
            case 0x22D590u: goto label_22d590;
            case 0x22D594u: goto label_22d594;
            case 0x22D598u: goto label_22d598;
            case 0x22D59Cu: goto label_22d59c;
            case 0x22D5A0u: goto label_22d5a0;
            case 0x22D5A4u: goto label_22d5a4;
            case 0x22D5A8u: goto label_22d5a8;
            case 0x22D5ACu: goto label_22d5ac;
            case 0x22D5B0u: goto label_22d5b0;
            case 0x22D5B4u: goto label_22d5b4;
            case 0x22D5B8u: goto label_22d5b8;
            case 0x22D5BCu: goto label_22d5bc;
            case 0x22D5C0u: goto label_22d5c0;
            case 0x22D5C4u: goto label_22d5c4;
            case 0x22D5C8u: goto label_22d5c8;
            case 0x22D5CCu: goto label_22d5cc;
            case 0x22D5D0u: goto label_22d5d0;
            case 0x22D5D4u: goto label_22d5d4;
            case 0x22D5D8u: goto label_22d5d8;
            case 0x22D5DCu: goto label_22d5dc;
            case 0x22D5E0u: goto label_22d5e0;
            case 0x22D5E4u: goto label_22d5e4;
            case 0x22D5E8u: goto label_22d5e8;
            case 0x22D5ECu: goto label_22d5ec;
            case 0x22D5F0u: goto label_22d5f0;
            case 0x22D5F4u: goto label_22d5f4;
            case 0x22D5F8u: goto label_22d5f8;
            case 0x22D5FCu: goto label_22d5fc;
            case 0x22D600u: goto label_22d600;
            case 0x22D604u: goto label_22d604;
            case 0x22D608u: goto label_22d608;
            case 0x22D60Cu: goto label_22d60c;
            case 0x22D610u: goto label_22d610;
            case 0x22D614u: goto label_22d614;
            case 0x22D618u: goto label_22d618;
            case 0x22D61Cu: goto label_22d61c;
            case 0x22D620u: goto label_22d620;
            case 0x22D624u: goto label_22d624;
            case 0x22D628u: goto label_22d628;
            case 0x22D62Cu: goto label_22d62c;
            case 0x22D630u: goto label_22d630;
            case 0x22D634u: goto label_22d634;
            case 0x22D638u: goto label_22d638;
            case 0x22D63Cu: goto label_22d63c;
            case 0x22D640u: goto label_22d640;
            case 0x22D644u: goto label_22d644;
            case 0x22D648u: goto label_22d648;
            case 0x22D64Cu: goto label_22d64c;
            case 0x22D650u: goto label_22d650;
            case 0x22D654u: goto label_22d654;
            case 0x22D658u: goto label_22d658;
            case 0x22D65Cu: goto label_22d65c;
            case 0x22D660u: goto label_22d660;
            case 0x22D664u: goto label_22d664;
            case 0x22D668u: goto label_22d668;
            case 0x22D66Cu: goto label_22d66c;
            case 0x22D670u: goto label_22d670;
            case 0x22D674u: goto label_22d674;
            case 0x22D678u: goto label_22d678;
            case 0x22D67Cu: goto label_22d67c;
            case 0x22D680u: goto label_22d680;
            case 0x22D684u: goto label_22d684;
            case 0x22D688u: goto label_22d688;
            case 0x22D68Cu: goto label_22d68c;
            case 0x22D690u: goto label_22d690;
            case 0x22D694u: goto label_22d694;
            case 0x22D698u: goto label_22d698;
            case 0x22D69Cu: goto label_22d69c;
            case 0x22D6A0u: goto label_22d6a0;
            case 0x22D6A4u: goto label_22d6a4;
            case 0x22D6A8u: goto label_22d6a8;
            case 0x22D6ACu: goto label_22d6ac;
            case 0x22D6B0u: goto label_22d6b0;
            case 0x22D6B4u: goto label_22d6b4;
            case 0x22D6B8u: goto label_22d6b8;
            case 0x22D6BCu: goto label_22d6bc;
            case 0x22D6C0u: goto label_22d6c0;
            case 0x22D6C4u: goto label_22d6c4;
            case 0x22D6C8u: goto label_22d6c8;
            case 0x22D6CCu: goto label_22d6cc;
            case 0x22D6D0u: goto label_22d6d0;
            case 0x22D6D4u: goto label_22d6d4;
            case 0x22D6D8u: goto label_22d6d8;
            case 0x22D6DCu: goto label_22d6dc;
            case 0x22D6E0u: goto label_22d6e0;
            case 0x22D6E4u: goto label_22d6e4;
            case 0x22D6E8u: goto label_22d6e8;
            case 0x22D6ECu: goto label_22d6ec;
            case 0x22D6F0u: goto label_22d6f0;
            case 0x22D6F4u: goto label_22d6f4;
            case 0x22D6F8u: goto label_22d6f8;
            case 0x22D6FCu: goto label_22d6fc;
            case 0x22D700u: goto label_22d700;
            case 0x22D704u: goto label_22d704;
            case 0x22D708u: goto label_22d708;
            case 0x22D70Cu: goto label_22d70c;
            case 0x22D710u: goto label_22d710;
            case 0x22D714u: goto label_22d714;
            case 0x22D718u: goto label_22d718;
            case 0x22D71Cu: goto label_22d71c;
            case 0x22D720u: goto label_22d720;
            case 0x22D724u: goto label_22d724;
            case 0x22D728u: goto label_22d728;
            case 0x22D72Cu: goto label_22d72c;
            case 0x22D730u: goto label_22d730;
            case 0x22D734u: goto label_22d734;
            case 0x22D738u: goto label_22d738;
            case 0x22D73Cu: goto label_22d73c;
            case 0x22D740u: goto label_22d740;
            case 0x22D744u: goto label_22d744;
            case 0x22D748u: goto label_22d748;
            case 0x22D74Cu: goto label_22d74c;
            case 0x22D750u: goto label_22d750;
            case 0x22D754u: goto label_22d754;
            case 0x22D758u: goto label_22d758;
            case 0x22D75Cu: goto label_22d75c;
            case 0x22D760u: goto label_22d760;
            case 0x22D764u: goto label_22d764;
            case 0x22D768u: goto label_22d768;
            case 0x22D76Cu: goto label_22d76c;
            case 0x22D770u: goto label_22d770;
            case 0x22D774u: goto label_22d774;
            case 0x22D778u: goto label_22d778;
            case 0x22D77Cu: goto label_22d77c;
            case 0x22D780u: goto label_22d780;
            case 0x22D784u: goto label_22d784;
            case 0x22D788u: goto label_22d788;
            case 0x22D78Cu: goto label_22d78c;
            case 0x22D790u: goto label_22d790;
            case 0x22D794u: goto label_22d794;
            case 0x22D798u: goto label_22d798;
            case 0x22D79Cu: goto label_22d79c;
            case 0x22D7A0u: goto label_22d7a0;
            case 0x22D7A4u: goto label_22d7a4;
            case 0x22D7A8u: goto label_22d7a8;
            case 0x22D7ACu: goto label_22d7ac;
            case 0x22D7B0u: goto label_22d7b0;
            case 0x22D7B4u: goto label_22d7b4;
            case 0x22D7B8u: goto label_22d7b8;
            case 0x22D7BCu: goto label_22d7bc;
            case 0x22D7C0u: goto label_22d7c0;
            case 0x22D7C4u: goto label_22d7c4;
            case 0x22D7C8u: goto label_22d7c8;
            case 0x22D7CCu: goto label_22d7cc;
            case 0x22D7D0u: goto label_22d7d0;
            case 0x22D7D4u: goto label_22d7d4;
            case 0x22D7D8u: goto label_22d7d8;
            case 0x22D7DCu: goto label_22d7dc;
            case 0x22D7E0u: goto label_22d7e0;
            case 0x22D7E4u: goto label_22d7e4;
            case 0x22D7E8u: goto label_22d7e8;
            case 0x22D7ECu: goto label_22d7ec;
            case 0x22D7F0u: goto label_22d7f0;
            case 0x22D7F4u: goto label_22d7f4;
            case 0x22D7F8u: goto label_22d7f8;
            case 0x22D7FCu: goto label_22d7fc;
            case 0x22D800u: goto label_22d800;
            case 0x22D804u: goto label_22d804;
            case 0x22D808u: goto label_22d808;
            case 0x22D80Cu: goto label_22d80c;
            case 0x22D810u: goto label_22d810;
            case 0x22D814u: goto label_22d814;
            case 0x22D818u: goto label_22d818;
            case 0x22D81Cu: goto label_22d81c;
            case 0x22D820u: goto label_22d820;
            case 0x22D824u: goto label_22d824;
            case 0x22D828u: goto label_22d828;
            case 0x22D82Cu: goto label_22d82c;
            case 0x22D830u: goto label_22d830;
            case 0x22D834u: goto label_22d834;
            case 0x22D838u: goto label_22d838;
            case 0x22D83Cu: goto label_22d83c;
            case 0x22D840u: goto label_22d840;
            case 0x22D844u: goto label_22d844;
            case 0x22D848u: goto label_22d848;
            case 0x22D84Cu: goto label_22d84c;
            case 0x22D850u: goto label_22d850;
            case 0x22D854u: goto label_22d854;
            case 0x22D858u: goto label_22d858;
            case 0x22D85Cu: goto label_22d85c;
            case 0x22D860u: goto label_22d860;
            case 0x22D864u: goto label_22d864;
            case 0x22D868u: goto label_22d868;
            case 0x22D86Cu: goto label_22d86c;
            case 0x22D870u: goto label_22d870;
            case 0x22D874u: goto label_22d874;
            case 0x22D878u: goto label_22d878;
            case 0x22D87Cu: goto label_22d87c;
            case 0x22D880u: goto label_22d880;
            case 0x22D884u: goto label_22d884;
            case 0x22D888u: goto label_22d888;
            case 0x22D88Cu: goto label_22d88c;
            case 0x22D890u: goto label_22d890;
            case 0x22D894u: goto label_22d894;
            case 0x22D898u: goto label_22d898;
            case 0x22D89Cu: goto label_22d89c;
            case 0x22D8A0u: goto label_22d8a0;
            case 0x22D8A4u: goto label_22d8a4;
            case 0x22D8A8u: goto label_22d8a8;
            case 0x22D8ACu: goto label_22d8ac;
            case 0x22D8B0u: goto label_22d8b0;
            case 0x22D8B4u: goto label_22d8b4;
            case 0x22D8B8u: goto label_22d8b8;
            case 0x22D8BCu: goto label_22d8bc;
            case 0x22D8C0u: goto label_22d8c0;
            case 0x22D8C4u: goto label_22d8c4;
            case 0x22D8C8u: goto label_22d8c8;
            case 0x22D8CCu: goto label_22d8cc;
            case 0x22D8D0u: goto label_22d8d0;
            case 0x22D8D4u: goto label_22d8d4;
            case 0x22D8D8u: goto label_22d8d8;
            case 0x22D8DCu: goto label_22d8dc;
            case 0x22D8E0u: goto label_22d8e0;
            case 0x22D8E4u: goto label_22d8e4;
            case 0x22D8E8u: goto label_22d8e8;
            case 0x22D8ECu: goto label_22d8ec;
            case 0x22D8F0u: goto label_22d8f0;
            case 0x22D8F4u: goto label_22d8f4;
            case 0x22D8F8u: goto label_22d8f8;
            case 0x22D8FCu: goto label_22d8fc;
            case 0x22D900u: goto label_22d900;
            case 0x22D904u: goto label_22d904;
            case 0x22D908u: goto label_22d908;
            case 0x22D90Cu: goto label_22d90c;
            case 0x22D910u: goto label_22d910;
            case 0x22D914u: goto label_22d914;
            case 0x22D918u: goto label_22d918;
            case 0x22D91Cu: goto label_22d91c;
            case 0x22D920u: goto label_22d920;
            case 0x22D924u: goto label_22d924;
            case 0x22D928u: goto label_22d928;
            case 0x22D92Cu: goto label_22d92c;
            case 0x22D930u: goto label_22d930;
            case 0x22D934u: goto label_22d934;
            case 0x22D938u: goto label_22d938;
            case 0x22D93Cu: goto label_22d93c;
            case 0x22D940u: goto label_22d940;
            case 0x22D944u: goto label_22d944;
            case 0x22D948u: goto label_22d948;
            case 0x22D94Cu: goto label_22d94c;
            case 0x22D950u: goto label_22d950;
            case 0x22D954u: goto label_22d954;
            case 0x22D958u: goto label_22d958;
            case 0x22D95Cu: goto label_22d95c;
            case 0x22D960u: goto label_22d960;
            case 0x22D964u: goto label_22d964;
            case 0x22D968u: goto label_22d968;
            case 0x22D96Cu: goto label_22d96c;
            case 0x22D970u: goto label_22d970;
            case 0x22D974u: goto label_22d974;
            case 0x22D978u: goto label_22d978;
            case 0x22D97Cu: goto label_22d97c;
            case 0x22D980u: goto label_22d980;
            case 0x22D984u: goto label_22d984;
            case 0x22D988u: goto label_22d988;
            case 0x22D98Cu: goto label_22d98c;
            case 0x22D990u: goto label_22d990;
            case 0x22D994u: goto label_22d994;
            case 0x22D998u: goto label_22d998;
            case 0x22D99Cu: goto label_22d99c;
            case 0x22D9A0u: goto label_22d9a0;
            case 0x22D9A4u: goto label_22d9a4;
            case 0x22D9A8u: goto label_22d9a8;
            case 0x22D9ACu: goto label_22d9ac;
            case 0x22D9B0u: goto label_22d9b0;
            case 0x22D9B4u: goto label_22d9b4;
            case 0x22D9B8u: goto label_22d9b8;
            case 0x22D9BCu: goto label_22d9bc;
            case 0x22D9C0u: goto label_22d9c0;
            case 0x22D9C4u: goto label_22d9c4;
            case 0x22D9C8u: goto label_22d9c8;
            case 0x22D9CCu: goto label_22d9cc;
            case 0x22D9D0u: goto label_22d9d0;
            case 0x22D9D4u: goto label_22d9d4;
            case 0x22D9D8u: goto label_22d9d8;
            case 0x22D9DCu: goto label_22d9dc;
            case 0x22D9E0u: goto label_22d9e0;
            case 0x22D9E4u: goto label_22d9e4;
            case 0x22D9E8u: goto label_22d9e8;
            case 0x22D9ECu: goto label_22d9ec;
            case 0x22D9F0u: goto label_22d9f0;
            case 0x22D9F4u: goto label_22d9f4;
            case 0x22D9F8u: goto label_22d9f8;
            case 0x22D9FCu: goto label_22d9fc;
            case 0x22DA00u: goto label_22da00;
            case 0x22DA04u: goto label_22da04;
            case 0x22DA08u: goto label_22da08;
            case 0x22DA0Cu: goto label_22da0c;
            case 0x22DA10u: goto label_22da10;
            case 0x22DA14u: goto label_22da14;
            case 0x22DA18u: goto label_22da18;
            case 0x22DA1Cu: goto label_22da1c;
            case 0x22DA20u: goto label_22da20;
            case 0x22DA24u: goto label_22da24;
            case 0x22DA28u: goto label_22da28;
            case 0x22DA2Cu: goto label_22da2c;
            case 0x22DA30u: goto label_22da30;
            case 0x22DA34u: goto label_22da34;
            case 0x22DA38u: goto label_22da38;
            case 0x22DA3Cu: goto label_22da3c;
            case 0x22DA40u: goto label_22da40;
            case 0x22DA44u: goto label_22da44;
            case 0x22DA48u: goto label_22da48;
            case 0x22DA4Cu: goto label_22da4c;
            case 0x22DA50u: goto label_22da50;
            case 0x22DA54u: goto label_22da54;
            case 0x22DA58u: goto label_22da58;
            case 0x22DA5Cu: goto label_22da5c;
            case 0x22DA60u: goto label_22da60;
            case 0x22DA64u: goto label_22da64;
            case 0x22DA68u: goto label_22da68;
            case 0x22DA6Cu: goto label_22da6c;
            case 0x22DA70u: goto label_22da70;
            case 0x22DA74u: goto label_22da74;
            case 0x22DA78u: goto label_22da78;
            case 0x22DA7Cu: goto label_22da7c;
            case 0x22DA80u: goto label_22da80;
            case 0x22DA84u: goto label_22da84;
            case 0x22DA88u: goto label_22da88;
            case 0x22DA8Cu: goto label_22da8c;
            case 0x22DA90u: goto label_22da90;
            case 0x22DA94u: goto label_22da94;
            case 0x22DA98u: goto label_22da98;
            case 0x22DA9Cu: goto label_22da9c;
            case 0x22DAA0u: goto label_22daa0;
            case 0x22DAA4u: goto label_22daa4;
            case 0x22DAA8u: goto label_22daa8;
            case 0x22DAACu: goto label_22daac;
            case 0x22DAB0u: goto label_22dab0;
            case 0x22DAB4u: goto label_22dab4;
            case 0x22DAB8u: goto label_22dab8;
            case 0x22DABCu: goto label_22dabc;
            case 0x22DAC0u: goto label_22dac0;
            case 0x22DAC4u: goto label_22dac4;
            case 0x22DAC8u: goto label_22dac8;
            case 0x22DACCu: goto label_22dacc;
            case 0x22DAD0u: goto label_22dad0;
            case 0x22DAD4u: goto label_22dad4;
            case 0x22DAD8u: goto label_22dad8;
            case 0x22DADCu: goto label_22dadc;
            case 0x22DAE0u: goto label_22dae0;
            case 0x22DAE4u: goto label_22dae4;
            case 0x22DAE8u: goto label_22dae8;
            case 0x22DAECu: goto label_22daec;
            case 0x22DAF0u: goto label_22daf0;
            case 0x22DAF4u: goto label_22daf4;
            case 0x22DAF8u: goto label_22daf8;
            case 0x22DAFCu: goto label_22dafc;
            case 0x22DB00u: goto label_22db00;
            case 0x22DB04u: goto label_22db04;
            case 0x22DB08u: goto label_22db08;
            case 0x22DB0Cu: goto label_22db0c;
            case 0x22DB10u: goto label_22db10;
            case 0x22DB14u: goto label_22db14;
            case 0x22DB18u: goto label_22db18;
            case 0x22DB1Cu: goto label_22db1c;
            case 0x22DB20u: goto label_22db20;
            case 0x22DB24u: goto label_22db24;
            case 0x22DB28u: goto label_22db28;
            case 0x22DB2Cu: goto label_22db2c;
            case 0x22DB30u: goto label_22db30;
            case 0x22DB34u: goto label_22db34;
            case 0x22DB38u: goto label_22db38;
            case 0x22DB3Cu: goto label_22db3c;
            case 0x22DB40u: goto label_22db40;
            case 0x22DB44u: goto label_22db44;
            case 0x22DB48u: goto label_22db48;
            case 0x22DB4Cu: goto label_22db4c;
            case 0x22DB50u: goto label_22db50;
            case 0x22DB54u: goto label_22db54;
            case 0x22DB58u: goto label_22db58;
            case 0x22DB5Cu: goto label_22db5c;
            case 0x22DB60u: goto label_22db60;
            case 0x22DB64u: goto label_22db64;
            case 0x22DB68u: goto label_22db68;
            case 0x22DB6Cu: goto label_22db6c;
            case 0x22DB70u: goto label_22db70;
            case 0x22DB74u: goto label_22db74;
            case 0x22DB78u: goto label_22db78;
            case 0x22DB7Cu: goto label_22db7c;
            case 0x22DB80u: goto label_22db80;
            case 0x22DB84u: goto label_22db84;
            case 0x22DB88u: goto label_22db88;
            case 0x22DB8Cu: goto label_22db8c;
            case 0x22DB90u: goto label_22db90;
            case 0x22DB94u: goto label_22db94;
            case 0x22DB98u: goto label_22db98;
            case 0x22DB9Cu: goto label_22db9c;
            case 0x22DBA0u: goto label_22dba0;
            case 0x22DBA4u: goto label_22dba4;
            case 0x22DBA8u: goto label_22dba8;
            case 0x22DBACu: goto label_22dbac;
            case 0x22DBB0u: goto label_22dbb0;
            case 0x22DBB4u: goto label_22dbb4;
            case 0x22DBB8u: goto label_22dbb8;
            case 0x22DBBCu: goto label_22dbbc;
            case 0x22DBC0u: goto label_22dbc0;
            case 0x22DBC4u: goto label_22dbc4;
            case 0x22DBC8u: goto label_22dbc8;
            case 0x22DBCCu: goto label_22dbcc;
            case 0x22DBD0u: goto label_22dbd0;
            case 0x22DBD4u: goto label_22dbd4;
            case 0x22DBD8u: goto label_22dbd8;
            case 0x22DBDCu: goto label_22dbdc;
            case 0x22DBE0u: goto label_22dbe0;
            case 0x22DBE4u: goto label_22dbe4;
            case 0x22DBE8u: goto label_22dbe8;
            case 0x22DBECu: goto label_22dbec;
            case 0x22DBF0u: goto label_22dbf0;
            case 0x22DBF4u: goto label_22dbf4;
            case 0x22DBF8u: goto label_22dbf8;
            case 0x22DBFCu: goto label_22dbfc;
            case 0x22DC00u: goto label_22dc00;
            case 0x22DC04u: goto label_22dc04;
            case 0x22DC08u: goto label_22dc08;
            case 0x22DC0Cu: goto label_22dc0c;
            case 0x22DC10u: goto label_22dc10;
            case 0x22DC14u: goto label_22dc14;
            case 0x22DC18u: goto label_22dc18;
            case 0x22DC1Cu: goto label_22dc1c;
            case 0x22DC20u: goto label_22dc20;
            case 0x22DC24u: goto label_22dc24;
            case 0x22DC28u: goto label_22dc28;
            case 0x22DC2Cu: goto label_22dc2c;
            case 0x22DC30u: goto label_22dc30;
            case 0x22DC34u: goto label_22dc34;
            case 0x22DC38u: goto label_22dc38;
            case 0x22DC3Cu: goto label_22dc3c;
            case 0x22DC40u: goto label_22dc40;
            case 0x22DC44u: goto label_22dc44;
            case 0x22DC48u: goto label_22dc48;
            case 0x22DC4Cu: goto label_22dc4c;
            case 0x22DC50u: goto label_22dc50;
            case 0x22DC54u: goto label_22dc54;
            case 0x22DC58u: goto label_22dc58;
            case 0x22DC5Cu: goto label_22dc5c;
            case 0x22DC60u: goto label_22dc60;
            case 0x22DC64u: goto label_22dc64;
            case 0x22DC68u: goto label_22dc68;
            case 0x22DC6Cu: goto label_22dc6c;
            case 0x22DC70u: goto label_22dc70;
            case 0x22DC74u: goto label_22dc74;
            case 0x22DC78u: goto label_22dc78;
            case 0x22DC7Cu: goto label_22dc7c;
            case 0x22DC80u: goto label_22dc80;
            case 0x22DC84u: goto label_22dc84;
            case 0x22DC88u: goto label_22dc88;
            case 0x22DC8Cu: goto label_22dc8c;
            case 0x22DC90u: goto label_22dc90;
            case 0x22DC94u: goto label_22dc94;
            case 0x22DC98u: goto label_22dc98;
            case 0x22DC9Cu: goto label_22dc9c;
            case 0x22DCA0u: goto label_22dca0;
            case 0x22DCA4u: goto label_22dca4;
            case 0x22DCA8u: goto label_22dca8;
            case 0x22DCACu: goto label_22dcac;
            case 0x22DCB0u: goto label_22dcb0;
            case 0x22DCB4u: goto label_22dcb4;
            case 0x22DCB8u: goto label_22dcb8;
            case 0x22DCBCu: goto label_22dcbc;
            case 0x22DCC0u: goto label_22dcc0;
            case 0x22DCC4u: goto label_22dcc4;
            case 0x22DCC8u: goto label_22dcc8;
            case 0x22DCCCu: goto label_22dccc;
            case 0x22DCD0u: goto label_22dcd0;
            case 0x22DCD4u: goto label_22dcd4;
            case 0x22DCD8u: goto label_22dcd8;
            case 0x22DCDCu: goto label_22dcdc;
            case 0x22DCE0u: goto label_22dce0;
            case 0x22DCE4u: goto label_22dce4;
            case 0x22DCE8u: goto label_22dce8;
            case 0x22DCECu: goto label_22dcec;
            case 0x22DCF0u: goto label_22dcf0;
            case 0x22DCF4u: goto label_22dcf4;
            case 0x22DCF8u: goto label_22dcf8;
            case 0x22DCFCu: goto label_22dcfc;
            case 0x22DD00u: goto label_22dd00;
            case 0x22DD04u: goto label_22dd04;
            case 0x22DD08u: goto label_22dd08;
            case 0x22DD0Cu: goto label_22dd0c;
            case 0x22DD10u: goto label_22dd10;
            case 0x22DD14u: goto label_22dd14;
            case 0x22DD18u: goto label_22dd18;
            case 0x22DD1Cu: goto label_22dd1c;
            case 0x22DD20u: goto label_22dd20;
            case 0x22DD24u: goto label_22dd24;
            case 0x22DD28u: goto label_22dd28;
            case 0x22DD2Cu: goto label_22dd2c;
            case 0x22DD30u: goto label_22dd30;
            case 0x22DD34u: goto label_22dd34;
            case 0x22DD38u: goto label_22dd38;
            case 0x22DD3Cu: goto label_22dd3c;
            case 0x22DD40u: goto label_22dd40;
            case 0x22DD44u: goto label_22dd44;
            case 0x22DD48u: goto label_22dd48;
            case 0x22DD4Cu: goto label_22dd4c;
            case 0x22DD50u: goto label_22dd50;
            case 0x22DD54u: goto label_22dd54;
            case 0x22DD58u: goto label_22dd58;
            case 0x22DD5Cu: goto label_22dd5c;
            case 0x22DD60u: goto label_22dd60;
            case 0x22DD64u: goto label_22dd64;
            case 0x22DD68u: goto label_22dd68;
            case 0x22DD6Cu: goto label_22dd6c;
            case 0x22DD70u: goto label_22dd70;
            case 0x22DD74u: goto label_22dd74;
            case 0x22DD78u: goto label_22dd78;
            case 0x22DD7Cu: goto label_22dd7c;
            case 0x22DD80u: goto label_22dd80;
            case 0x22DD84u: goto label_22dd84;
            case 0x22DD88u: goto label_22dd88;
            case 0x22DD8Cu: goto label_22dd8c;
            case 0x22DD90u: goto label_22dd90;
            case 0x22DD94u: goto label_22dd94;
            case 0x22DD98u: goto label_22dd98;
            case 0x22DD9Cu: goto label_22dd9c;
            case 0x22DDA0u: goto label_22dda0;
            case 0x22DDA4u: goto label_22dda4;
            case 0x22DDA8u: goto label_22dda8;
            case 0x22DDACu: goto label_22ddac;
            case 0x22DDB0u: goto label_22ddb0;
            case 0x22DDB4u: goto label_22ddb4;
            case 0x22DDB8u: goto label_22ddb8;
            case 0x22DDBCu: goto label_22ddbc;
            case 0x22DDC0u: goto label_22ddc0;
            case 0x22DDC4u: goto label_22ddc4;
            case 0x22DDC8u: goto label_22ddc8;
            case 0x22DDCCu: goto label_22ddcc;
            case 0x22DDD0u: goto label_22ddd0;
            case 0x22DDD4u: goto label_22ddd4;
            case 0x22DDD8u: goto label_22ddd8;
            case 0x22DDDCu: goto label_22dddc;
            case 0x22DDE0u: goto label_22dde0;
            case 0x22DDE4u: goto label_22dde4;
            case 0x22DDE8u: goto label_22dde8;
            case 0x22DDECu: goto label_22ddec;
            case 0x22DDF0u: goto label_22ddf0;
            case 0x22DDF4u: goto label_22ddf4;
            case 0x22DDF8u: goto label_22ddf8;
            case 0x22DDFCu: goto label_22ddfc;
            case 0x22DE00u: goto label_22de00;
            case 0x22DE04u: goto label_22de04;
            case 0x22DE08u: goto label_22de08;
            case 0x22DE0Cu: goto label_22de0c;
            case 0x22DE10u: goto label_22de10;
            case 0x22DE14u: goto label_22de14;
            case 0x22DE18u: goto label_22de18;
            case 0x22DE1Cu: goto label_22de1c;
            case 0x22DE20u: goto label_22de20;
            case 0x22DE24u: goto label_22de24;
            case 0x22DE28u: goto label_22de28;
            case 0x22DE2Cu: goto label_22de2c;
            case 0x22DE30u: goto label_22de30;
            case 0x22DE34u: goto label_22de34;
            case 0x22DE38u: goto label_22de38;
            case 0x22DE3Cu: goto label_22de3c;
            case 0x22DE40u: goto label_22de40;
            case 0x22DE44u: goto label_22de44;
            case 0x22DE48u: goto label_22de48;
            case 0x22DE4Cu: goto label_22de4c;
            case 0x22DE50u: goto label_22de50;
            case 0x22DE54u: goto label_22de54;
            case 0x22DE58u: goto label_22de58;
            case 0x22DE5Cu: goto label_22de5c;
            case 0x22DE60u: goto label_22de60;
            case 0x22DE64u: goto label_22de64;
            case 0x22DE68u: goto label_22de68;
            case 0x22DE6Cu: goto label_22de6c;
            case 0x22DE70u: goto label_22de70;
            case 0x22DE74u: goto label_22de74;
            case 0x22DE78u: goto label_22de78;
            case 0x22DE7Cu: goto label_22de7c;
            case 0x22DE80u: goto label_22de80;
            case 0x22DE84u: goto label_22de84;
            case 0x22DE88u: goto label_22de88;
            case 0x22DE8Cu: goto label_22de8c;
            case 0x22DE90u: goto label_22de90;
            case 0x22DE94u: goto label_22de94;
            case 0x22DE98u: goto label_22de98;
            case 0x22DE9Cu: goto label_22de9c;
            case 0x22DEA0u: goto label_22dea0;
            case 0x22DEA4u: goto label_22dea4;
            case 0x22DEA8u: goto label_22dea8;
            case 0x22DEACu: goto label_22deac;
            case 0x22DEB0u: goto label_22deb0;
            case 0x22DEB4u: goto label_22deb4;
            case 0x22DEB8u: goto label_22deb8;
            case 0x22DEBCu: goto label_22debc;
            case 0x22DEC0u: goto label_22dec0;
            case 0x22DEC4u: goto label_22dec4;
            case 0x22DEC8u: goto label_22dec8;
            case 0x22DECCu: goto label_22decc;
            case 0x22DED0u: goto label_22ded0;
            case 0x22DED4u: goto label_22ded4;
            case 0x22DED8u: goto label_22ded8;
            case 0x22DEDCu: goto label_22dedc;
            case 0x22DEE0u: goto label_22dee0;
            case 0x22DEE4u: goto label_22dee4;
            case 0x22DEE8u: goto label_22dee8;
            case 0x22DEECu: goto label_22deec;
            case 0x22DEF0u: goto label_22def0;
            case 0x22DEF4u: goto label_22def4;
            case 0x22DEF8u: goto label_22def8;
            case 0x22DEFCu: goto label_22defc;
            case 0x22DF00u: goto label_22df00;
            case 0x22DF04u: goto label_22df04;
            case 0x22DF08u: goto label_22df08;
            case 0x22DF0Cu: goto label_22df0c;
            case 0x22DF10u: goto label_22df10;
            case 0x22DF14u: goto label_22df14;
            case 0x22DF18u: goto label_22df18;
            case 0x22DF1Cu: goto label_22df1c;
            case 0x22DF20u: goto label_22df20;
            case 0x22DF24u: goto label_22df24;
            case 0x22DF28u: goto label_22df28;
            case 0x22DF2Cu: goto label_22df2c;
            case 0x22DF30u: goto label_22df30;
            case 0x22DF34u: goto label_22df34;
            case 0x22DF38u: goto label_22df38;
            case 0x22DF3Cu: goto label_22df3c;
            case 0x22DF40u: goto label_22df40;
            case 0x22DF44u: goto label_22df44;
            case 0x22DF48u: goto label_22df48;
            case 0x22DF4Cu: goto label_22df4c;
            case 0x22DF50u: goto label_22df50;
            case 0x22DF54u: goto label_22df54;
            case 0x22DF58u: goto label_22df58;
            case 0x22DF5Cu: goto label_22df5c;
            case 0x22DF60u: goto label_22df60;
            case 0x22DF64u: goto label_22df64;
            case 0x22DF68u: goto label_22df68;
            case 0x22DF6Cu: goto label_22df6c;
            case 0x22DF70u: goto label_22df70;
            case 0x22DF74u: goto label_22df74;
            case 0x22DF78u: goto label_22df78;
            case 0x22DF7Cu: goto label_22df7c;
            case 0x22DF80u: goto label_22df80;
            case 0x22DF84u: goto label_22df84;
            case 0x22DF88u: goto label_22df88;
            case 0x22DF8Cu: goto label_22df8c;
            case 0x22DF90u: goto label_22df90;
            case 0x22DF94u: goto label_22df94;
            case 0x22DF98u: goto label_22df98;
            case 0x22DF9Cu: goto label_22df9c;
            case 0x22DFA0u: goto label_22dfa0;
            case 0x22DFA4u: goto label_22dfa4;
            case 0x22DFA8u: goto label_22dfa8;
            case 0x22DFACu: goto label_22dfac;
            case 0x22DFB0u: goto label_22dfb0;
            case 0x22DFB4u: goto label_22dfb4;
            case 0x22DFB8u: goto label_22dfb8;
            case 0x22DFBCu: goto label_22dfbc;
            case 0x22DFC0u: goto label_22dfc0;
            case 0x22DFC4u: goto label_22dfc4;
            case 0x22DFC8u: goto label_22dfc8;
            case 0x22DFCCu: goto label_22dfcc;
            case 0x22DFD0u: goto label_22dfd0;
            case 0x22DFD4u: goto label_22dfd4;
            case 0x22DFD8u: goto label_22dfd8;
            case 0x22DFDCu: goto label_22dfdc;
            case 0x22DFE0u: goto label_22dfe0;
            case 0x22DFE4u: goto label_22dfe4;
            case 0x22DFE8u: goto label_22dfe8;
            case 0x22DFECu: goto label_22dfec;
            case 0x22DFF0u: goto label_22dff0;
            case 0x22DFF4u: goto label_22dff4;
            case 0x22DFF8u: goto label_22dff8;
            case 0x22DFFCu: goto label_22dffc;
            case 0x22E000u: goto label_22e000;
            case 0x22E004u: goto label_22e004;
            case 0x22E008u: goto label_22e008;
            case 0x22E00Cu: goto label_22e00c;
            case 0x22E010u: goto label_22e010;
            case 0x22E014u: goto label_22e014;
            case 0x22E018u: goto label_22e018;
            case 0x22E01Cu: goto label_22e01c;
            case 0x22E020u: goto label_22e020;
            case 0x22E024u: goto label_22e024;
            case 0x22E028u: goto label_22e028;
            case 0x22E02Cu: goto label_22e02c;
            case 0x22E030u: goto label_22e030;
            case 0x22E034u: goto label_22e034;
            case 0x22E038u: goto label_22e038;
            case 0x22E03Cu: goto label_22e03c;
            case 0x22E040u: goto label_22e040;
            case 0x22E044u: goto label_22e044;
            case 0x22E048u: goto label_22e048;
            case 0x22E04Cu: goto label_22e04c;
            case 0x22E050u: goto label_22e050;
            case 0x22E054u: goto label_22e054;
            case 0x22E058u: goto label_22e058;
            case 0x22E05Cu: goto label_22e05c;
            case 0x22E060u: goto label_22e060;
            case 0x22E064u: goto label_22e064;
            case 0x22E068u: goto label_22e068;
            case 0x22E06Cu: goto label_22e06c;
            case 0x22E070u: goto label_22e070;
            case 0x22E074u: goto label_22e074;
            case 0x22E078u: goto label_22e078;
            case 0x22E07Cu: goto label_22e07c;
            case 0x22E080u: goto label_22e080;
            case 0x22E084u: goto label_22e084;
            case 0x22E088u: goto label_22e088;
            case 0x22E08Cu: goto label_22e08c;
            case 0x22E090u: goto label_22e090;
            case 0x22E094u: goto label_22e094;
            case 0x22E098u: goto label_22e098;
            case 0x22E09Cu: goto label_22e09c;
            case 0x22E0A0u: goto label_22e0a0;
            case 0x22E0A4u: goto label_22e0a4;
            case 0x22E0A8u: goto label_22e0a8;
            case 0x22E0ACu: goto label_22e0ac;
            case 0x22E0B0u: goto label_22e0b0;
            case 0x22E0B4u: goto label_22e0b4;
            case 0x22E0B8u: goto label_22e0b8;
            case 0x22E0BCu: goto label_22e0bc;
            case 0x22E0C0u: goto label_22e0c0;
            case 0x22E0C4u: goto label_22e0c4;
            case 0x22E0C8u: goto label_22e0c8;
            case 0x22E0CCu: goto label_22e0cc;
            case 0x22E0D0u: goto label_22e0d0;
            case 0x22E0D4u: goto label_22e0d4;
            case 0x22E0D8u: goto label_22e0d8;
            case 0x22E0DCu: goto label_22e0dc;
            case 0x22E0E0u: goto label_22e0e0;
            case 0x22E0E4u: goto label_22e0e4;
            case 0x22E0E8u: goto label_22e0e8;
            case 0x22E0ECu: goto label_22e0ec;
            case 0x22E0F0u: goto label_22e0f0;
            case 0x22E0F4u: goto label_22e0f4;
            case 0x22E0F8u: goto label_22e0f8;
            case 0x22E0FCu: goto label_22e0fc;
            case 0x22E100u: goto label_22e100;
            case 0x22E104u: goto label_22e104;
            case 0x22E108u: goto label_22e108;
            case 0x22E10Cu: goto label_22e10c;
            case 0x22E110u: goto label_22e110;
            case 0x22E114u: goto label_22e114;
            case 0x22E118u: goto label_22e118;
            case 0x22E11Cu: goto label_22e11c;
            case 0x22E120u: goto label_22e120;
            case 0x22E124u: goto label_22e124;
            case 0x22E128u: goto label_22e128;
            case 0x22E12Cu: goto label_22e12c;
            case 0x22E130u: goto label_22e130;
            case 0x22E134u: goto label_22e134;
            case 0x22E138u: goto label_22e138;
            case 0x22E13Cu: goto label_22e13c;
            case 0x22E140u: goto label_22e140;
            case 0x22E144u: goto label_22e144;
            case 0x22E148u: goto label_22e148;
            case 0x22E14Cu: goto label_22e14c;
            case 0x22E150u: goto label_22e150;
            case 0x22E154u: goto label_22e154;
            case 0x22E158u: goto label_22e158;
            case 0x22E15Cu: goto label_22e15c;
            case 0x22E160u: goto label_22e160;
            case 0x22E164u: goto label_22e164;
            case 0x22E168u: goto label_22e168;
            case 0x22E16Cu: goto label_22e16c;
            case 0x22E170u: goto label_22e170;
            case 0x22E174u: goto label_22e174;
            case 0x22E178u: goto label_22e178;
            case 0x22E17Cu: goto label_22e17c;
            case 0x22E180u: goto label_22e180;
            case 0x22E184u: goto label_22e184;
            case 0x22E188u: goto label_22e188;
            case 0x22E18Cu: goto label_22e18c;
            case 0x22E190u: goto label_22e190;
            case 0x22E194u: goto label_22e194;
            case 0x22E198u: goto label_22e198;
            case 0x22E19Cu: goto label_22e19c;
            case 0x22E1A0u: goto label_22e1a0;
            case 0x22E1A4u: goto label_22e1a4;
            case 0x22E1A8u: goto label_22e1a8;
            case 0x22E1ACu: goto label_22e1ac;
            case 0x22E1B0u: goto label_22e1b0;
            case 0x22E1B4u: goto label_22e1b4;
            case 0x22E1B8u: goto label_22e1b8;
            case 0x22E1BCu: goto label_22e1bc;
            case 0x22E1C0u: goto label_22e1c0;
            case 0x22E1C4u: goto label_22e1c4;
            case 0x22E1C8u: goto label_22e1c8;
            case 0x22E1CCu: goto label_22e1cc;
            case 0x22E1D0u: goto label_22e1d0;
            case 0x22E1D4u: goto label_22e1d4;
            case 0x22E1D8u: goto label_22e1d8;
            case 0x22E1DCu: goto label_22e1dc;
            case 0x22E1E0u: goto label_22e1e0;
            case 0x22E1E4u: goto label_22e1e4;
            case 0x22E1E8u: goto label_22e1e8;
            case 0x22E1ECu: goto label_22e1ec;
            case 0x22E1F0u: goto label_22e1f0;
            case 0x22E1F4u: goto label_22e1f4;
            case 0x22E1F8u: goto label_22e1f8;
            case 0x22E1FCu: goto label_22e1fc;
            case 0x22E200u: goto label_22e200;
            case 0x22E204u: goto label_22e204;
            case 0x22E208u: goto label_22e208;
            case 0x22E20Cu: goto label_22e20c;
            case 0x22E210u: goto label_22e210;
            case 0x22E214u: goto label_22e214;
            case 0x22E218u: goto label_22e218;
            case 0x22E21Cu: goto label_22e21c;
            case 0x22E220u: goto label_22e220;
            case 0x22E224u: goto label_22e224;
            case 0x22E228u: goto label_22e228;
            case 0x22E22Cu: goto label_22e22c;
            case 0x22E230u: goto label_22e230;
            case 0x22E234u: goto label_22e234;
            case 0x22E238u: goto label_22e238;
            case 0x22E23Cu: goto label_22e23c;
            case 0x22E240u: goto label_22e240;
            case 0x22E244u: goto label_22e244;
            case 0x22E248u: goto label_22e248;
            case 0x22E24Cu: goto label_22e24c;
            case 0x22E250u: goto label_22e250;
            case 0x22E254u: goto label_22e254;
            case 0x22E258u: goto label_22e258;
            case 0x22E25Cu: goto label_22e25c;
            case 0x22E260u: goto label_22e260;
            case 0x22E264u: goto label_22e264;
            case 0x22E268u: goto label_22e268;
            case 0x22E26Cu: goto label_22e26c;
            case 0x22E270u: goto label_22e270;
            case 0x22E274u: goto label_22e274;
            case 0x22E278u: goto label_22e278;
            case 0x22E27Cu: goto label_22e27c;
            case 0x22E280u: goto label_22e280;
            case 0x22E284u: goto label_22e284;
            case 0x22E288u: goto label_22e288;
            case 0x22E28Cu: goto label_22e28c;
            case 0x22E290u: goto label_22e290;
            case 0x22E294u: goto label_22e294;
            case 0x22E298u: goto label_22e298;
            case 0x22E29Cu: goto label_22e29c;
            case 0x22E2A0u: goto label_22e2a0;
            case 0x22E2A4u: goto label_22e2a4;
            case 0x22E2A8u: goto label_22e2a8;
            case 0x22E2ACu: goto label_22e2ac;
            case 0x22E2B0u: goto label_22e2b0;
            case 0x22E2B4u: goto label_22e2b4;
            case 0x22E2B8u: goto label_22e2b8;
            case 0x22E2BCu: goto label_22e2bc;
            case 0x22E2C0u: goto label_22e2c0;
            case 0x22E2C4u: goto label_22e2c4;
            case 0x22E2C8u: goto label_22e2c8;
            case 0x22E2CCu: goto label_22e2cc;
            case 0x22E2D0u: goto label_22e2d0;
            case 0x22E2D4u: goto label_22e2d4;
            case 0x22E2D8u: goto label_22e2d8;
            case 0x22E2DCu: goto label_22e2dc;
            case 0x22E2E0u: goto label_22e2e0;
            case 0x22E2E4u: goto label_22e2e4;
            case 0x22E2E8u: goto label_22e2e8;
            case 0x22E2ECu: goto label_22e2ec;
            case 0x22E2F0u: goto label_22e2f0;
            case 0x22E2F4u: goto label_22e2f4;
            case 0x22E2F8u: goto label_22e2f8;
            case 0x22E2FCu: goto label_22e2fc;
            case 0x22E300u: goto label_22e300;
            case 0x22E304u: goto label_22e304;
            case 0x22E308u: goto label_22e308;
            case 0x22E30Cu: goto label_22e30c;
            case 0x22E310u: goto label_22e310;
            case 0x22E314u: goto label_22e314;
            case 0x22E318u: goto label_22e318;
            case 0x22E31Cu: goto label_22e31c;
            case 0x22E320u: goto label_22e320;
            case 0x22E324u: goto label_22e324;
            case 0x22E328u: goto label_22e328;
            case 0x22E32Cu: goto label_22e32c;
            case 0x22E330u: goto label_22e330;
            case 0x22E334u: goto label_22e334;
            case 0x22E338u: goto label_22e338;
            case 0x22E33Cu: goto label_22e33c;
            case 0x22E340u: goto label_22e340;
            case 0x22E344u: goto label_22e344;
            case 0x22E348u: goto label_22e348;
            case 0x22E34Cu: goto label_22e34c;
            case 0x22E350u: goto label_22e350;
            case 0x22E354u: goto label_22e354;
            case 0x22E358u: goto label_22e358;
            case 0x22E35Cu: goto label_22e35c;
            case 0x22E360u: goto label_22e360;
            case 0x22E364u: goto label_22e364;
            case 0x22E368u: goto label_22e368;
            case 0x22E36Cu: goto label_22e36c;
            case 0x22E370u: goto label_22e370;
            case 0x22E374u: goto label_22e374;
            case 0x22E378u: goto label_22e378;
            case 0x22E37Cu: goto label_22e37c;
            case 0x22E380u: goto label_22e380;
            case 0x22E384u: goto label_22e384;
            case 0x22E388u: goto label_22e388;
            case 0x22E38Cu: goto label_22e38c;
            case 0x22E390u: goto label_22e390;
            case 0x22E394u: goto label_22e394;
            case 0x22E398u: goto label_22e398;
            case 0x22E39Cu: goto label_22e39c;
            case 0x22E3A0u: goto label_22e3a0;
            case 0x22E3A4u: goto label_22e3a4;
            case 0x22E3A8u: goto label_22e3a8;
            case 0x22E3ACu: goto label_22e3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22DF4Cu;
label_22df4c:
    // 0x22df4c: 0x10000007
label_22df50:
    if (ctx->pc == 0x22DF50u) {
        ctx->pc = 0x22DF50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22DF54u;
        goto label_22df54;
    }
    ctx->pc = 0x22DF4Cu;
    {
        const bool branch_taken_0x22df4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22df4c) {
            ctx->pc = 0x22DF6Cu;
            goto label_22df6c;
        }
    }
    ctx->pc = 0x22DF54u;
label_22df54:
    // 0x22df54: 0x10000004
label_22df58:
    if (ctx->pc == 0x22DF58u) {
        ctx->pc = 0x22DF58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x22DF5Cu;
        goto label_22df5c;
    }
    ctx->pc = 0x22DF54u;
    {
        const bool branch_taken_0x22df54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x22df54) {
            ctx->pc = 0x22DF68u;
            goto label_22df68;
        }
    }
    ctx->pc = 0x22DF5Cu;
label_22df5c:
    // 0x22df5c: 0x10000002
label_22df60:
    if (ctx->pc == 0x22DF60u) {
        ctx->pc = 0x22DF60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22DF64u;
        goto label_22df64;
    }
    ctx->pc = 0x22DF5Cu;
    {
        const bool branch_taken_0x22df5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x22df5c) {
            ctx->pc = 0x22DF68u;
            goto label_22df68;
        }
    }
    ctx->pc = 0x22DF64u;
label_22df64:
    // 0x22df64: 0x24050005
    ctx->pc = 0x22df64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_22df68:
    // 0x22df68: 0x24070002
    ctx->pc = 0x22df68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_22df6c:
    // 0x22df6c: 0x8e0208d8
    ctx->pc = 0x22df6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2264)));
label_22df70:
    // 0x22df70: 0x3c032000
    ctx->pc = 0x22df70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
label_22df74:
    // 0x22df74: 0x431024
    ctx->pc = 0x22df74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22df78:
    // 0x22df78: 0x10400003
label_22df7c:
    if (ctx->pc == 0x22DF7Cu) {
        ctx->pc = 0x22DF7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2264)));
        ctx->pc = 0x22DF80u;
        goto label_22df80;
    }
    ctx->pc = 0x22DF78u;
    {
        const bool branch_taken_0x22df78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2264)));
        if (branch_taken_0x22df78) {
            ctx->pc = 0x22DF88u;
            goto label_22df88;
        }
    }
    ctx->pc = 0x22DF80u;
label_22df80:
    // 0x22df80: 0x24050002
    ctx->pc = 0x22df80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_22df84:
    // 0x22df84: 0x24070002
    ctx->pc = 0x22df84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_22df88:
    // 0x22df88: 0x3c03dfff
    ctx->pc = 0x22df88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57343 << 16));
label_22df8c:
    // 0x22df8c: 0x3463ffff
    ctx->pc = 0x22df8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_22df90:
    // 0x22df90: 0x431024
    ctx->pc = 0x22df90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22df94:
    // 0x22df94: 0x1000000c
label_22df98:
    if (ctx->pc == 0x22DF98u) {
        ctx->pc = 0x22DF98u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
        ctx->pc = 0x22DF9Cu;
        goto label_22df9c;
    }
    ctx->pc = 0x22DF94u;
    {
        const bool branch_taken_0x22df94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22DF98u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
        if (branch_taken_0x22df94) {
            ctx->pc = 0x22DFC8u;
            goto label_22dfc8;
        }
    }
    ctx->pc = 0x22DF9Cu;
label_22df9c:
    // 0x22df9c: 0x8e0208d8
    ctx->pc = 0x22df9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2264)));
label_22dfa0:
    // 0x22dfa0: 0x3c031000
    ctx->pc = 0x22dfa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_22dfa4:
    // 0x22dfa4: 0x431024
    ctx->pc = 0x22dfa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22dfa8:
    // 0x22dfa8: 0x50400008
label_22dfac:
    if (ctx->pc == 0x22DFACu) {
        ctx->pc = 0x22DFACu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1914)));
        ctx->pc = 0x22DFB0u;
        goto label_22dfb0;
    }
    ctx->pc = 0x22DFA8u;
    {
        const bool branch_taken_0x22dfa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22dfa8) {
            ctx->pc = 0x22DFACu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1914)));
            ctx->pc = 0x22DFCCu;
            goto label_22dfcc;
        }
    }
    ctx->pc = 0x22DFB0u;
label_22dfb0:
    // 0x22dfb0: 0x86020778
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1912)));
label_22dfb4:
    // 0x22dfb4: 0x28420002
    ctx->pc = 0x22dfb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_22dfb8:
    // 0x22dfb8: 0x54400004
label_22dfbc:
    if (ctx->pc == 0x22DFBCu) {
        ctx->pc = 0x22DFBCu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1914)));
        ctx->pc = 0x22DFC0u;
        goto label_22dfc0;
    }
    ctx->pc = 0x22DFB8u;
    {
        const bool branch_taken_0x22dfb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22dfb8) {
            ctx->pc = 0x22DFBCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1914)));
            ctx->pc = 0x22DFCCu;
            goto label_22dfcc;
        }
    }
    ctx->pc = 0x22DFC0u;
label_22dfc0:
    // 0x22dfc0: 0x24050001
    ctx->pc = 0x22dfc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_22dfc4:
    // 0x22dfc4: 0x24070002
    ctx->pc = 0x22dfc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_22dfc8:
    // 0x22dfc8: 0x8602077a
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1914)));
label_22dfcc:
    // 0x22dfcc: 0x24060002
    ctx->pc = 0x22dfccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_22dfd0:
    // 0x22dfd0: 0x26040768
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
label_22dfd4:
    // 0x22dfd4: 0xc084a96
label_22dfd8:
    if (ctx->pc == 0x22DFD8u) {
        ctx->pc = 0x22DFD8u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 7));
        ctx->pc = 0x22DFDCu;
        goto label_22dfdc;
    }
    ctx->pc = 0x22DFD4u;
    SET_GPR_U32(ctx, 31, 0x22DFDCu);
    ctx->pc = 0x22DFD8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 7));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DFDCu; }
    }
    if (ctx->pc != 0x22DFDCu) { return; }
    ctx->pc = 0x22DFDCu;
label_22dfdc:
    // 0x22dfdc: 0x44800000
    ctx->pc = 0x22dfdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_22dfe0:
    // 0x22dfe0: 0x46170036
    ctx->pc = 0x22dfe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dfe4:
    // 0x22dfe4: 0x45000010
label_22dfe8:
    if (ctx->pc == 0x22DFE8u) {
        ctx->pc = 0x22DFECu;
        goto label_22dfec;
    }
    ctx->pc = 0x22DFE4u;
    {
        const bool branch_taken_0x22dfe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dfe4) {
            ctx->pc = 0x22E028u;
            goto label_22e028;
        }
    }
    ctx->pc = 0x22DFECu;
label_22dfec:
    // 0x22dfec: 0x3c013f80
    ctx->pc = 0x22dfecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_22dff0:
    // 0x22dff0: 0x44810000
    ctx->pc = 0x22dff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22dff4:
    // 0x22dff4: 0x4600b834
    ctx->pc = 0x22dff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dff8:
    // 0x22dff8: 0x4500000b
label_22dffc:
    if (ctx->pc == 0x22DFFCu) {
        ctx->pc = 0x22E000u;
        goto label_22e000;
    }
    ctx->pc = 0x22DFF8u;
    {
        const bool branch_taken_0x22dff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dff8) {
            ctx->pc = 0x22E028u;
            goto label_22e028;
        }
    }
    ctx->pc = 0x22E000u;
label_22e000:
    // 0x22e000: 0x46170001
    ctx->pc = 0x22e000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_22e004:
    // 0x22e004: 0x3c01437f
    ctx->pc = 0x22e004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
label_22e008:
    // 0x22e008: 0x44810800
    ctx->pc = 0x22e008u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_22e00c:
    // 0x22e00c: 0x46010002
    ctx->pc = 0x22e00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22e010:
    // 0x22e010: 0x8e020768
    ctx->pc = 0x22e010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_22e014:
    // 0x22e014: 0x8c440000
    ctx->pc = 0x22e014u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e018:
    // 0x22e018: 0x46000064
    ctx->pc = 0x22e018u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_22e01c:
    // 0x22e01c: 0x44050800
    ctx->pc = 0x22e01cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_22e020:
    // 0x22e020: 0xc0b40c0
label_22e024:
    if (ctx->pc == 0x22E024u) {
        ctx->pc = 0x22E024u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E028u;
        goto label_22e028;
    }
    ctx->pc = 0x22E020u;
    SET_GPR_U32(ctx, 31, 0x22E028u);
    ctx->pc = 0x22E024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E028u; }
    }
    if (ctx->pc != 0x22E028u) { return; }
    ctx->pc = 0x22E028u;
label_22e028:
    // 0x22e028: 0xc08b362
label_22e02c:
    if (ctx->pc == 0x22E02Cu) {
        ctx->pc = 0x22E02Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E030u;
        goto label_22e030;
    }
    ctx->pc = 0x22E028u;
    SET_GPR_U32(ctx, 31, 0x22E030u);
    ctx->pc = 0x22E02Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22CD88u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessFamiliar_0x22cd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E030u; }
    }
    if (ctx->pc != 0x22E030u) { return; }
    ctx->pc = 0x22E030u;
label_22e030:
    // 0x22e030: 0x8e03013c
    ctx->pc = 0x22e030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_22e034:
    // 0x22e034: 0x30620001
    ctx->pc = 0x22e034u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_22e038:
    // 0x22e038: 0x10400010
label_22e03c:
    if (ctx->pc == 0x22E03Cu) {
        ctx->pc = 0x22E03Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22E040u;
        goto label_22e040;
    }
    ctx->pc = 0x22E038u;
    {
        const bool branch_taken_0x22e038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E03Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x22e038) {
            ctx->pc = 0x22E07Cu;
            goto label_22e07c;
        }
    }
    ctx->pc = 0x22E040u;
label_22e040:
    // 0x22e040: 0x24050001
    ctx->pc = 0x22e040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_22e044:
    // 0x22e044: 0x24030002
    ctx->pc = 0x22e044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_22e048:
    // 0x22e048: 0x62280b
    ctx->pc = 0x22e048u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_22e04c:
    // 0x22e04c: 0x8e020710
    ctx->pc = 0x22e04cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1808)));
label_22e050:
    // 0x22e050: 0x4410006
label_22e054:
    if (ctx->pc == 0x22E054u) {
        ctx->pc = 0x22E054u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x22E058u;
        goto label_22e058;
    }
    ctx->pc = 0x22E050u;
    {
        const bool branch_taken_0x22e050 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22E054u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x22e050) {
            ctx->pc = 0x22E06Cu;
            goto label_22e06c;
        }
    }
    ctx->pc = 0x22E058u;
label_22e058:
    // 0x22e058: 0x8e040080
    ctx->pc = 0x22e058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22e05c:
    // 0x22e05c: 0xc09fd88
label_22e060:
    if (ctx->pc == 0x22E060u) {
        ctx->pc = 0x22E060u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x22E064u;
        goto label_22e064;
    }
    ctx->pc = 0x22E05Cu;
    SET_GPR_U32(ctx, 31, 0x22E064u);
    ctx->pc = 0x22E060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x27F620u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartDeathFX_0x27f620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E064u; }
    }
    if (ctx->pc != 0x22E064u) { return; }
    ctx->pc = 0x22E064u;
label_22e064:
    // 0x22e064: 0xae020710
    ctx->pc = 0x22e064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 2));
label_22e068:
    // 0x22e068: 0x26040050
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
label_22e06c:
    // 0x22e06c: 0xc097464
label_22e070:
    if (ctx->pc == 0x22E070u) {
        ctx->pc = 0x22E070u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E074u;
        goto label_22e074;
    }
    ctx->pc = 0x22E06Cu;
    SET_GPR_U32(ctx, 31, 0x22E074u);
    ctx->pc = 0x22E070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_death_sound_0x25d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E074u; }
    }
    if (ctx->pc != 0x22E074u) { return; }
    ctx->pc = 0x22E074u;
label_22e074:
    // 0x22e074: 0x1000000e
label_22e078:
    if (ctx->pc == 0x22E078u) {
        ctx->pc = 0x22E078u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2348)));
        ctx->pc = 0x22E07Cu;
        goto label_22e07c;
    }
    ctx->pc = 0x22E074u;
    {
        const bool branch_taken_0x22e074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E078u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2348)));
        if (branch_taken_0x22e074) {
            ctx->pc = 0x22E0B0u;
            goto label_22e0b0;
        }
    }
    ctx->pc = 0x22E07Cu;
label_22e07c:
    // 0x22e07c: 0x8e040710
    ctx->pc = 0x22e07cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1808)));
label_22e080:
    // 0x22e080: 0x4820005
label_22e084:
    if (ctx->pc == 0x22E084u) {
        ctx->pc = 0x22E084u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->pc = 0x22E088u;
        goto label_22e088;
    }
    ctx->pc = 0x22E080u;
    {
        const bool branch_taken_0x22e080 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x22e080) {
            ctx->pc = 0x22E084u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->pc = 0x22E098u;
            goto label_22e098;
        }
    }
    ctx->pc = 0x22E088u;
label_22e088:
    // 0x22e088: 0xc09e964
label_22e08c:
    if (ctx->pc == 0x22E08Cu) {
        ctx->pc = 0x22E08Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E090u;
        goto label_22e090;
    }
    ctx->pc = 0x22E088u;
    SET_GPR_U32(ctx, 31, 0x22E090u);
    ctx->pc = 0x22E08Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E090u; }
    }
    if (ctx->pc != 0x22E090u) { return; }
    ctx->pc = 0x22E090u;
label_22e090:
    // 0x22e090: 0xae020710
    ctx->pc = 0x22e090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 2));
label_22e094:
    // 0x22e094: 0x8e020140
    ctx->pc = 0x22e094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_22e098:
    // 0x22e098: 0x30420001
    ctx->pc = 0x22e098u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22e09c:
    // 0x22e09c: 0x50400004
label_22e0a0:
    if (ctx->pc == 0x22E0A0u) {
        ctx->pc = 0x22E0A0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2348)));
        ctx->pc = 0x22E0A4u;
        goto label_22e0a4;
    }
    ctx->pc = 0x22E09Cu;
    {
        const bool branch_taken_0x22e09c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22e09c) {
            ctx->pc = 0x22E0A0u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2348)));
            ctx->pc = 0x22E0B0u;
            goto label_22e0b0;
        }
    }
    ctx->pc = 0x22E0A4u;
label_22e0a4:
    // 0x22e0a4: 0xc097484
label_22e0a8:
    if (ctx->pc == 0x22E0A8u) {
        ctx->pc = 0x22E0ACu;
        goto label_22e0ac;
    }
    ctx->pc = 0x22E0A4u;
    SET_GPR_U32(ctx, 31, 0x22E0ACu);
    ctx->pc = 0x25D210u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_death_sound_0x25d210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0ACu; }
    }
    if (ctx->pc != 0x22E0ACu) { return; }
    ctx->pc = 0x22E0ACu;
label_22e0ac:
    // 0x22e0ac: 0x9602092c
    ctx->pc = 0x22e0acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2348)));
label_22e0b0:
    // 0x22e0b0: 0x50400010
label_22e0b4:
    if (ctx->pc == 0x22E0B4u) {
        ctx->pc = 0x22E0B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
        ctx->pc = 0x22E0B8u;
        goto label_22e0b8;
    }
    ctx->pc = 0x22E0B0u;
    {
        const bool branch_taken_0x22e0b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22e0b0) {
            ctx->pc = 0x22E0B4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
            ctx->pc = 0x22E0F4u;
            goto label_22e0f4;
        }
    }
    ctx->pc = 0x22E0B8u;
label_22e0b8:
    // 0x22e0b8: 0x9602093c
    ctx->pc = 0x22e0b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
label_22e0bc:
    // 0x22e0bc: 0x30420002
    ctx->pc = 0x22e0bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_22e0c0:
    // 0x22e0c0: 0x5440000c
label_22e0c4:
    if (ctx->pc == 0x22E0C4u) {
        ctx->pc = 0x22E0C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
        ctx->pc = 0x22E0C8u;
        goto label_22e0c8;
    }
    ctx->pc = 0x22E0C0u;
    {
        const bool branch_taken_0x22e0c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e0c0) {
            ctx->pc = 0x22E0C4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
            ctx->pc = 0x22E0F4u;
            goto label_22e0f4;
        }
    }
    ctx->pc = 0x22E0C8u;
label_22e0c8:
    // 0x22e0c8: 0x8e020718
    ctx->pc = 0x22e0c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_22e0cc:
    // 0x22e0cc: 0x5440000f
label_22e0d0:
    if (ctx->pc == 0x22E0D0u) {
        ctx->pc = 0x22E0D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x22E0D4u;
        goto label_22e0d4;
    }
    ctx->pc = 0x22E0CCu;
    {
        const bool branch_taken_0x22e0cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e0cc) {
            ctx->pc = 0x22E0D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->pc = 0x22E10Cu;
            goto label_22e10c;
        }
    }
    ctx->pc = 0x22E0D4u;
label_22e0d4:
    // 0x22e0d4: 0x3c04003a
    ctx->pc = 0x22e0d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22e0d8:
    // 0x22e0d8: 0x248473b8
    ctx->pc = 0x22e0d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29624));
label_22e0dc:
    // 0x22e0dc: 0x282d
    ctx->pc = 0x22e0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e0e0:
    // 0x22e0e0: 0x8e060080
    ctx->pc = 0x22e0e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22e0e4:
    // 0x22e0e4: 0xc0b1b04
label_22e0e8:
    if (ctx->pc == 0x22E0E8u) {
        ctx->pc = 0x22E0E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x22E0ECu;
        goto label_22e0ec;
    }
    ctx->pc = 0x22E0E4u;
    SET_GPR_U32(ctx, 31, 0x22E0ECu);
    ctx->pc = 0x22E0E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0ECu; }
    }
    if (ctx->pc != 0x22E0ECu) { return; }
    ctx->pc = 0x22E0ECu;
label_22e0ec:
    // 0x22e0ec: 0x10000006
label_22e0f0:
    if (ctx->pc == 0x22E0F0u) {
        ctx->pc = 0x22E0F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 2));
        ctx->pc = 0x22E0F4u;
        goto label_22e0f4;
    }
    ctx->pc = 0x22E0ECu;
    {
        const bool branch_taken_0x22e0ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E0F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 2));
        if (branch_taken_0x22e0ec) {
            ctx->pc = 0x22E108u;
            goto label_22e108;
        }
    }
    ctx->pc = 0x22E0F4u;
label_22e0f4:
    // 0x22e0f4: 0x50800004
label_22e0f8:
    if (ctx->pc == 0x22E0F8u) {
        ctx->pc = 0x22E0F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 0));
        ctx->pc = 0x22E0FCu;
        goto label_22e0fc;
    }
    ctx->pc = 0x22E0F4u;
    {
        const bool branch_taken_0x22e0f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22e0f4) {
            ctx->pc = 0x22E0F8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 0));
            ctx->pc = 0x22E108u;
            goto label_22e108;
        }
    }
    ctx->pc = 0x22E0FCu;
label_22e0fc:
    // 0x22e0fc: 0xc0b3f1a
label_22e100:
    if (ctx->pc == 0x22E100u) {
        ctx->pc = 0x22E100u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E104u;
        goto label_22e104;
    }
    ctx->pc = 0x22E0FCu;
    SET_GPR_U32(ctx, 31, 0x22E104u);
    ctx->pc = 0x22E100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E104u; }
    }
    if (ctx->pc != 0x22E104u) { return; }
    ctx->pc = 0x22E104u;
label_22e104:
    // 0x22e104: 0xae000718
    ctx->pc = 0x22e104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 0));
label_22e108:
    // 0x22e108: 0x8e020138
    ctx->pc = 0x22e108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22e10c:
    // 0x22e10c: 0x30420400
    ctx->pc = 0x22e10cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_22e110:
    // 0x22e110: 0x10400007
label_22e114:
    if (ctx->pc == 0x22E114u) {
        ctx->pc = 0x22E114u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22E118u;
        goto label_22e118;
    }
    ctx->pc = 0x22E110u;
    {
        const bool branch_taken_0x22e110 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E114u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22e110) {
            ctx->pc = 0x22E130u;
            goto label_22e130;
        }
    }
    ctx->pc = 0x22E118u;
label_22e118:
    // 0x22e118: 0x8e020090
    ctx->pc = 0x22e118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_22e11c:
    // 0x22e11c: 0x8c440000
    ctx->pc = 0x22e11cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e120:
    // 0x22e120: 0xc0b41b8
label_22e124:
    if (ctx->pc == 0x22E124u) {
        ctx->pc = 0x22E124u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E128u;
        goto label_22e128;
    }
    ctx->pc = 0x22E120u;
    SET_GPR_U32(ctx, 31, 0x22E128u);
    ctx->pc = 0x22E124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E128u; }
    }
    if (ctx->pc != 0x22E128u) { return; }
    ctx->pc = 0x22E128u;
label_22e128:
    // 0x22e128: 0x1000000b
label_22e12c:
    if (ctx->pc == 0x22E12Cu) {
        ctx->pc = 0x22E12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E130u;
        goto label_22e130;
    }
    ctx->pc = 0x22E128u;
    {
        const bool branch_taken_0x22e128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22e128) {
            ctx->pc = 0x22E158u;
            goto label_22e158;
        }
    }
    ctx->pc = 0x22E130u;
label_22e130:
    // 0x22e130: 0x8e020090
    ctx->pc = 0x22e130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_22e134:
    // 0x22e134: 0x8c440000
    ctx->pc = 0x22e134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e138:
    // 0x22e138: 0xc0b41e4
label_22e13c:
    if (ctx->pc == 0x22E13Cu) {
        ctx->pc = 0x22E13Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E140u;
        goto label_22e140;
    }
    ctx->pc = 0x22E138u;
    SET_GPR_U32(ctx, 31, 0x22E140u);
    ctx->pc = 0x22E13Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E140u; }
    }
    if (ctx->pc != 0x22E140u) { return; }
    ctx->pc = 0x22E140u;
label_22e140:
    // 0x22e140: 0x32620400
    ctx->pc = 0x22e140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1024));
label_22e144:
    // 0x22e144: 0x10400004
label_22e148:
    if (ctx->pc == 0x22E148u) {
        ctx->pc = 0x22E148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E14Cu;
        goto label_22e14c;
    }
    ctx->pc = 0x22E144u;
    {
        const bool branch_taken_0x22e144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22e144) {
            ctx->pc = 0x22E158u;
            goto label_22e158;
        }
    }
    ctx->pc = 0x22E14Cu;
label_22e14c:
    // 0x22e14c: 0xc098154
label_22e150:
    if (ctx->pc == 0x22E150u) {
        ctx->pc = 0x22E150u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E154u;
        goto label_22e154;
    }
    ctx->pc = 0x22E14Cu;
    SET_GPR_U32(ctx, 31, 0x22E154u);
    ctx->pc = 0x22E150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260550u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnpojo_0x260550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E154u; }
    }
    if (ctx->pc != 0x22E154u) { return; }
    ctx->pc = 0x22E154u;
label_22e154:
    // 0x22e154: 0x200202d
    ctx->pc = 0x22e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e158:
    // 0x22e158: 0x24050001
    ctx->pc = 0x22e158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_22e15c:
    // 0x22e15c: 0xc08b422
label_22e160:
    if (ctx->pc == 0x22E160u) {
        ctx->pc = 0x22E160u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E164u;
        goto label_22e164;
    }
    ctx->pc = 0x22E15Cu;
    SET_GPR_U32(ctx, 31, 0x22E164u);
    ctx->pc = 0x22E160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D088u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessScale_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E164u; }
    }
    if (ctx->pc != 0x22E164u) { return; }
    ctx->pc = 0x22E164u;
label_22e164:
    // 0x22e164: 0x8e020138
    ctx->pc = 0x22e164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22e168:
    // 0x22e168: 0x30420001
    ctx->pc = 0x22e168u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_22e16c:
    // 0x22e16c: 0x54400007
label_22e170:
    if (ctx->pc == 0x22E170u) {
        ctx->pc = 0x22E170u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
        ctx->pc = 0x22E174u;
        goto label_22e174;
    }
    ctx->pc = 0x22E16Cu;
    {
        const bool branch_taken_0x22e16c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e16c) {
            ctx->pc = 0x22E170u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
            ctx->pc = 0x22E18Cu;
            goto label_22e18c;
        }
    }
    ctx->pc = 0x22E174u;
label_22e174:
    // 0x22e174: 0x32620001
    ctx->pc = 0x22e174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_22e178:
    // 0x22e178: 0x50400004
label_22e17c:
    if (ctx->pc == 0x22E17Cu) {
        ctx->pc = 0x22E17Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
        ctx->pc = 0x22E180u;
        goto label_22e180;
    }
    ctx->pc = 0x22E178u;
    {
        const bool branch_taken_0x22e178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22e178) {
            ctx->pc = 0x22E17Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
            ctx->pc = 0x22E18Cu;
            goto label_22e18c;
        }
    }
    ctx->pc = 0x22E180u;
label_22e180:
    // 0x22e180: 0xc09816e
label_22e184:
    if (ctx->pc == 0x22E184u) {
        ctx->pc = 0x22E184u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E188u;
        goto label_22e188;
    }
    ctx->pc = 0x22E180u;
    SET_GPR_U32(ctx, 31, 0x22E188u);
    ctx->pc = 0x22E184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2605B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLevitatedown_0x2605b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E188u; }
    }
    if (ctx->pc != 0x22E188u) { return; }
    ctx->pc = 0x22E188u;
label_22e188:
    // 0x22e188: 0x8e022ac0
    ctx->pc = 0x22e188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
label_22e18c:
    // 0x22e18c: 0x28420063
    ctx->pc = 0x22e18cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 99));
label_22e190:
    // 0x22e190: 0x5440000e
label_22e194:
    if (ctx->pc == 0x22E194u) {
        ctx->pc = 0x22E194u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->pc = 0x22E198u;
        goto label_22e198;
    }
    ctx->pc = 0x22E190u;
    {
        const bool branch_taken_0x22e190 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e190) {
            ctx->pc = 0x22E194u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 316)));
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22E198u;
label_22e198:
    // 0x22e198: 0x8e0406ac
    ctx->pc = 0x22e198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22e19c:
    // 0x22e19c: 0x24050008
    ctx->pc = 0x22e19cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_22e1a0:
    // 0x22e1a0: 0xc0b41b8
label_22e1a4:
    if (ctx->pc == 0x22E1A4u) {
        ctx->pc = 0x22E1A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E1A8u;
        goto label_22e1a8;
    }
    ctx->pc = 0x22E1A0u;
    SET_GPR_U32(ctx, 31, 0x22E1A8u);
    ctx->pc = 0x22E1A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1A8u; }
    }
    if (ctx->pc != 0x22E1A8u) { return; }
    ctx->pc = 0x22E1A8u;
label_22e1a8:
    // 0x22e1a8: 0x8e0206ac
    ctx->pc = 0x22e1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22e1ac:
    // 0x22e1ac: 0x3c013fc0
    ctx->pc = 0x22e1acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_22e1b0:
    // 0x22e1b0: 0x44810000
    ctx->pc = 0x22e1b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22e1b4:
    // 0x22e1b4: 0xe4400040
    ctx->pc = 0x22e1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_22e1b8:
    // 0x22e1b8: 0x8e0206ac
    ctx->pc = 0x22e1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22e1bc:
    // 0x22e1bc: 0xe4400044
    ctx->pc = 0x22e1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_22e1c0:
    // 0x22e1c0: 0x8e0206ac
    ctx->pc = 0x22e1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22e1c4:
    // 0x22e1c4: 0xe4400048
    ctx->pc = 0x22e1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_22e1c8:
    // 0x22e1c8: 0x8e02013c
    ctx->pc = 0x22e1c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_22e1cc:
    // 0x22e1cc: 0xae020140
    ctx->pc = 0x22e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
label_22e1d0:
    // 0x22e1d0: 0xae00013c
    ctx->pc = 0x22e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_22e1d4:
    // 0x22e1d4: 0x8e020134
    ctx->pc = 0x22e1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22e1d8:
    // 0x22e1d8: 0x3c030008
    ctx->pc = 0x22e1d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_22e1dc:
    // 0x22e1dc: 0x431024
    ctx->pc = 0x22e1dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22e1e0:
    // 0x22e1e0: 0x50400001
label_22e1e4:
    if (ctx->pc == 0x22E1E4u) {
        ctx->pc = 0x22E1E4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2358), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22E1E8u;
        goto label_22e1e8;
    }
    ctx->pc = 0x22E1E0u;
    {
        const bool branch_taken_0x22e1e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22e1e0) {
            ctx->pc = 0x22E1E4u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 2358), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x22E1E8u;
            goto label_22e1e8;
        }
    }
    ctx->pc = 0x22E1E8u;
label_22e1e8:
    // 0x22e1e8: 0x8e020138
    ctx->pc = 0x22e1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22e1ec:
    // 0x22e1ec: 0x30420008
    ctx->pc = 0x22e1ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_22e1f0:
    // 0x22e1f0: 0x14400003
label_22e1f4:
    if (ctx->pc == 0x22E1F4u) {
        ctx->pc = 0x22E1F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E1F8u;
        goto label_22e1f8;
    }
    ctx->pc = 0x22E1F0u;
    {
        const bool branch_taken_0x22e1f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E1F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22e1f0) {
            ctx->pc = 0x22E200u;
            goto label_22e200;
        }
    }
    ctx->pc = 0x22E1F8u;
label_22e1f8:
    // 0x22e1f8: 0x10000002
label_22e1fc:
    if (ctx->pc == 0x22E1FCu) {
        ctx->pc = 0x22E1FCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2360), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22E200u;
        goto label_22e200;
    }
    ctx->pc = 0x22E1F8u;
    {
        const bool branch_taken_0x22e1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22E1FCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2360), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x22e1f8) {
            ctx->pc = 0x22E204u;
            goto label_22e204;
        }
    }
    ctx->pc = 0x22E200u;
label_22e200:
    // 0x22e200: 0xa6020938
    ctx->pc = 0x22e200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2360), (uint16_t)GPR_U32(ctx, 2));
label_22e204:
    // 0x22e204: 0x3c020032
    ctx->pc = 0x22e204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e208:
    // 0x22e208: 0xc6000118
    ctx->pc = 0x22e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e20c:
    // 0x22e20c: 0xc44115e0
    ctx->pc = 0x22e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e210:
    // 0x22e210: 0x46010034
    ctx->pc = 0x22e210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e214:
    // 0x22e214: 0x0
    ctx->pc = 0x22e214u;
    // NOP
label_22e218:
    // 0x22e218: 0x45010009
label_22e21c:
    if (ctx->pc == 0x22E21Cu) {
        ctx->pc = 0x22E21Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E220u;
        goto label_22e220;
    }
    ctx->pc = 0x22E218u;
    {
        const bool branch_taken_0x22e218 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E21Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e218) {
            ctx->pc = 0x22E240u;
            goto label_22e240;
        }
    }
    ctx->pc = 0x22E220u;
label_22e220:
    // 0x22e220: 0x3c020032
    ctx->pc = 0x22e220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e224:
    // 0x22e224: 0xc6010118
    ctx->pc = 0x22e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e228:
    // 0x22e228: 0xc44015e4
    ctx->pc = 0x22e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e22c:
    // 0x22e22c: 0x46010034
    ctx->pc = 0x22e22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e230:
    // 0x22e230: 0x0
    ctx->pc = 0x22e230u;
    // NOP
label_22e234:
    // 0x22e234: 0x45030003
label_22e238:
    if (ctx->pc == 0x22E238u) {
        ctx->pc = 0x22E238u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
        ctx->pc = 0x22E23Cu;
        goto label_22e23c;
    }
    ctx->pc = 0x22E234u;
    {
        const bool branch_taken_0x22e234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e234) {
            ctx->pc = 0x22E238u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
            ctx->pc = 0x22E244u;
            goto label_22e244;
        }
    }
    ctx->pc = 0x22E23Cu;
label_22e23c:
    // 0x22e23c: 0x46000806
    ctx->pc = 0x22e23cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e240:
    // 0x22e240: 0xe6000118
    ctx->pc = 0x22e240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_22e244:
    // 0x22e244: 0x3c020032
    ctx->pc = 0x22e244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e248:
    // 0x22e248: 0xc600011c
    ctx->pc = 0x22e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e24c:
    // 0x22e24c: 0xc44115e8
    ctx->pc = 0x22e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e250:
    // 0x22e250: 0x46010034
    ctx->pc = 0x22e250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e254:
    // 0x22e254: 0x0
    ctx->pc = 0x22e254u;
    // NOP
label_22e258:
    // 0x22e258: 0x45010009
label_22e25c:
    if (ctx->pc == 0x22E25Cu) {
        ctx->pc = 0x22E25Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E260u;
        goto label_22e260;
    }
    ctx->pc = 0x22E258u;
    {
        const bool branch_taken_0x22e258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E25Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e258) {
            ctx->pc = 0x22E280u;
            goto label_22e280;
        }
    }
    ctx->pc = 0x22E260u;
label_22e260:
    // 0x22e260: 0x3c020032
    ctx->pc = 0x22e260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e264:
    // 0x22e264: 0xc601011c
    ctx->pc = 0x22e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e268:
    // 0x22e268: 0xc44015ec
    ctx->pc = 0x22e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e26c:
    // 0x22e26c: 0x46010034
    ctx->pc = 0x22e26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e270:
    // 0x22e270: 0x0
    ctx->pc = 0x22e270u;
    // NOP
label_22e274:
    // 0x22e274: 0x45030003
label_22e278:
    if (ctx->pc == 0x22E278u) {
        ctx->pc = 0x22E278u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
        ctx->pc = 0x22E27Cu;
        goto label_22e27c;
    }
    ctx->pc = 0x22E274u;
    {
        const bool branch_taken_0x22e274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e274) {
            ctx->pc = 0x22E278u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E27Cu;
label_22e27c:
    // 0x22e27c: 0x46000806
    ctx->pc = 0x22e27cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e280:
    // 0x22e280: 0xe600011c
    ctx->pc = 0x22e280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_22e284:
    // 0x22e284: 0x3c020032
    ctx->pc = 0x22e284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e288:
    // 0x22e288: 0xc6000120
    ctx->pc = 0x22e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e28c:
    // 0x22e28c: 0xc44115f0
    ctx->pc = 0x22e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e290:
    // 0x22e290: 0x46010034
    ctx->pc = 0x22e290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e294:
    // 0x22e294: 0x0
    ctx->pc = 0x22e294u;
    // NOP
label_22e298:
    // 0x22e298: 0x45010009
label_22e29c:
    if (ctx->pc == 0x22E29Cu) {
        ctx->pc = 0x22E29Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E2A0u;
        goto label_22e2a0;
    }
    ctx->pc = 0x22E298u;
    {
        const bool branch_taken_0x22e298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E29Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e298) {
            ctx->pc = 0x22E2C0u;
            goto label_22e2c0;
        }
    }
    ctx->pc = 0x22E2A0u;
label_22e2a0:
    // 0x22e2a0: 0x3c020032
    ctx->pc = 0x22e2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e2a4:
    // 0x22e2a4: 0xc6010120
    ctx->pc = 0x22e2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2a8:
    // 0x22e2a8: 0xc44015f4
    ctx->pc = 0x22e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e2ac:
    // 0x22e2ac: 0x46010034
    ctx->pc = 0x22e2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e2b0:
    // 0x22e2b0: 0x0
    ctx->pc = 0x22e2b0u;
    // NOP
label_22e2b4:
    // 0x22e2b4: 0x45030003
label_22e2b8:
    if (ctx->pc == 0x22E2B8u) {
        ctx->pc = 0x22E2B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x22E2BCu;
        goto label_22e2bc;
    }
    ctx->pc = 0x22E2B4u;
    {
        const bool branch_taken_0x22e2b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e2b4) {
            ctx->pc = 0x22E2B8u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
            ctx->pc = 0x22E2C4u;
            goto label_22e2c4;
        }
    }
    ctx->pc = 0x22E2BCu;
label_22e2bc:
    // 0x22e2bc: 0x46000806
    ctx->pc = 0x22e2bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e2c0:
    // 0x22e2c0: 0xe6000120
    ctx->pc = 0x22e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_22e2c4:
    // 0x22e2c4: 0x3c020032
    ctx->pc = 0x22e2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e2c8:
    // 0x22e2c8: 0xc6000124
    ctx->pc = 0x22e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e2cc:
    // 0x22e2cc: 0xc44115f8
    ctx->pc = 0x22e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2d0:
    // 0x22e2d0: 0x46010034
    ctx->pc = 0x22e2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e2d4:
    // 0x22e2d4: 0x0
    ctx->pc = 0x22e2d4u;
    // NOP
label_22e2d8:
    // 0x22e2d8: 0x45010009
label_22e2dc:
    if (ctx->pc == 0x22E2DCu) {
        ctx->pc = 0x22E2DCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E2E0u;
        goto label_22e2e0;
    }
    ctx->pc = 0x22E2D8u;
    {
        const bool branch_taken_0x22e2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E2DCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e2d8) {
            ctx->pc = 0x22E300u;
            goto label_22e300;
        }
    }
    ctx->pc = 0x22E2E0u;
label_22e2e0:
    // 0x22e2e0: 0x3c020032
    ctx->pc = 0x22e2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e2e4:
    // 0x22e2e4: 0xc6010124
    ctx->pc = 0x22e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2e8:
    // 0x22e2e8: 0xc44015fc
    ctx->pc = 0x22e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e2ec:
    // 0x22e2ec: 0x46010034
    ctx->pc = 0x22e2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e2f0:
    // 0x22e2f0: 0x0
    ctx->pc = 0x22e2f0u;
    // NOP
label_22e2f4:
    // 0x22e2f4: 0x45030003
label_22e2f8:
    if (ctx->pc == 0x22E2F8u) {
        ctx->pc = 0x22E2F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->pc = 0x22E2FCu;
        goto label_22e2fc;
    }
    ctx->pc = 0x22E2F4u;
    {
        const bool branch_taken_0x22e2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e2f4) {
            ctx->pc = 0x22E2F8u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
            ctx->pc = 0x22E304u;
            goto label_22e304;
        }
    }
    ctx->pc = 0x22E2FCu;
label_22e2fc:
    // 0x22e2fc: 0x46000806
    ctx->pc = 0x22e2fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e300:
    // 0x22e300: 0xe6000124
    ctx->pc = 0x22e300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_22e304:
    // 0x22e304: 0x3c020032
    ctx->pc = 0x22e304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e308:
    // 0x22e308: 0xc6000128
    ctx->pc = 0x22e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e30c:
    // 0x22e30c: 0xc4411600
    ctx->pc = 0x22e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e310:
    // 0x22e310: 0x46010034
    ctx->pc = 0x22e310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e314:
    // 0x22e314: 0x0
    ctx->pc = 0x22e314u;
    // NOP
label_22e318:
    // 0x22e318: 0x45010009
label_22e31c:
    if (ctx->pc == 0x22E31Cu) {
        ctx->pc = 0x22E31Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E320u;
        goto label_22e320;
    }
    ctx->pc = 0x22E318u;
    {
        const bool branch_taken_0x22e318 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E31Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e318) {
            ctx->pc = 0x22E340u;
            goto label_22e340;
        }
    }
    ctx->pc = 0x22E320u;
label_22e320:
    // 0x22e320: 0x3c020032
    ctx->pc = 0x22e320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e324:
    // 0x22e324: 0xc6010128
    ctx->pc = 0x22e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e328:
    // 0x22e328: 0xc4401604
    ctx->pc = 0x22e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e32c:
    // 0x22e32c: 0x46010034
    ctx->pc = 0x22e32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e330:
    // 0x22e330: 0x0
    ctx->pc = 0x22e330u;
    // NOP
label_22e334:
    // 0x22e334: 0x45030003
label_22e338:
    if (ctx->pc == 0x22E338u) {
        ctx->pc = 0x22E338u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
        ctx->pc = 0x22E33Cu;
        goto label_22e33c;
    }
    ctx->pc = 0x22E334u;
    {
        const bool branch_taken_0x22e334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e334) {
            ctx->pc = 0x22E338u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
            ctx->pc = 0x22E344u;
            goto label_22e344;
        }
    }
    ctx->pc = 0x22E33Cu;
label_22e33c:
    // 0x22e33c: 0x46000806
    ctx->pc = 0x22e33cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e340:
    // 0x22e340: 0xe6000128
    ctx->pc = 0x22e340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_22e344:
    // 0x22e344: 0x3c020032
    ctx->pc = 0x22e344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e348:
    // 0x22e348: 0xc600012c
    ctx->pc = 0x22e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e34c:
    // 0x22e34c: 0xc4411608
    ctx->pc = 0x22e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e350:
    // 0x22e350: 0x46010034
    ctx->pc = 0x22e350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e354:
    // 0x22e354: 0x0
    ctx->pc = 0x22e354u;
    // NOP
label_22e358:
    // 0x22e358: 0x45010009
label_22e35c:
    if (ctx->pc == 0x22E35Cu) {
        ctx->pc = 0x22E35Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x22E360u;
        goto label_22e360;
    }
    ctx->pc = 0x22E358u;
    {
        const bool branch_taken_0x22e358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E35Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x22e358) {
            ctx->pc = 0x22E380u;
            goto label_22e380;
        }
    }
    ctx->pc = 0x22E360u;
label_22e360:
    // 0x22e360: 0x3c020032
    ctx->pc = 0x22e360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22e364:
    // 0x22e364: 0xc601012c
    ctx->pc = 0x22e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e368:
    // 0x22e368: 0xc440160c
    ctx->pc = 0x22e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e36c:
    // 0x22e36c: 0x46010034
    ctx->pc = 0x22e36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e370:
    // 0x22e370: 0x0
    ctx->pc = 0x22e370u;
    // NOP
label_22e374:
    // 0x22e374: 0x45030003
label_22e378:
    if (ctx->pc == 0x22E378u) {
        ctx->pc = 0x22E378u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->pc = 0x22E37Cu;
        goto label_22e37c;
    }
    ctx->pc = 0x22E374u;
    {
        const bool branch_taken_0x22e374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e374) {
            ctx->pc = 0x22E378u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
            ctx->pc = 0x22E384u;
            goto label_22e384;
        }
    }
    ctx->pc = 0x22E37Cu;
label_22e37c:
    // 0x22e37c: 0x46000806
    ctx->pc = 0x22e37cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_22e380:
    // 0x22e380: 0xe600012c
    ctx->pc = 0x22e380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_22e384:
    // 0x22e384: 0xdfbf0040
    ctx->pc = 0x22e384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e388:
    // 0x22e388: 0xdfb30030
    ctx->pc = 0x22e388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e38c:
    // 0x22e38c: 0xdfb20020
    ctx->pc = 0x22e38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e390:
    // 0x22e390: 0xdfb10010
    ctx->pc = 0x22e390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e394:
    // 0x22e394: 0xdfb00000
    ctx->pc = 0x22e394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e398:
    // 0x22e398: 0xc7b70068
    ctx->pc = 0x22e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22e39c:
    // 0x22e39c: 0xc7b60060
    ctx->pc = 0x22e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22e3a0:
    // 0x22e3a0: 0xc7b50058
    ctx->pc = 0x22e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22e3a4:
    // 0x22e3a4: 0xc7b40050
    ctx->pc = 0x22e3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22e3a8:
    // 0x22e3a8: 0x3e00008
label_22e3ac:
    if (ctx->pc == 0x22E3ACu) {
        ctx->pc = 0x22E3ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22E3B0u;
        goto label_fallthrough_0x22e3a8;
    }
    ctx->pc = 0x22E3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E3ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D1B0u: goto label_22d1b0;
            case 0x22D1B4u: goto label_22d1b4;
            case 0x22D1B8u: goto label_22d1b8;
            case 0x22D1BCu: goto label_22d1bc;
            case 0x22D1C0u: goto label_22d1c0;
            case 0x22D1C4u: goto label_22d1c4;
            case 0x22D1C8u: goto label_22d1c8;
            case 0x22D1CCu: goto label_22d1cc;
            case 0x22D1D0u: goto label_22d1d0;
            case 0x22D1D4u: goto label_22d1d4;
            case 0x22D1D8u: goto label_22d1d8;
            case 0x22D1DCu: goto label_22d1dc;
            case 0x22D1E0u: goto label_22d1e0;
            case 0x22D1E4u: goto label_22d1e4;
            case 0x22D1E8u: goto label_22d1e8;
            case 0x22D1ECu: goto label_22d1ec;
            case 0x22D1F0u: goto label_22d1f0;
            case 0x22D1F4u: goto label_22d1f4;
            case 0x22D1F8u: goto label_22d1f8;
            case 0x22D1FCu: goto label_22d1fc;
            case 0x22D200u: goto label_22d200;
            case 0x22D204u: goto label_22d204;
            case 0x22D208u: goto label_22d208;
            case 0x22D20Cu: goto label_22d20c;
            case 0x22D210u: goto label_22d210;
            case 0x22D214u: goto label_22d214;
            case 0x22D218u: goto label_22d218;
            case 0x22D21Cu: goto label_22d21c;
            case 0x22D220u: goto label_22d220;
            case 0x22D224u: goto label_22d224;
            case 0x22D228u: goto label_22d228;
            case 0x22D22Cu: goto label_22d22c;
            case 0x22D230u: goto label_22d230;
            case 0x22D234u: goto label_22d234;
            case 0x22D238u: goto label_22d238;
            case 0x22D23Cu: goto label_22d23c;
            case 0x22D240u: goto label_22d240;
            case 0x22D244u: goto label_22d244;
            case 0x22D248u: goto label_22d248;
            case 0x22D24Cu: goto label_22d24c;
            case 0x22D250u: goto label_22d250;
            case 0x22D254u: goto label_22d254;
            case 0x22D258u: goto label_22d258;
            case 0x22D25Cu: goto label_22d25c;
            case 0x22D260u: goto label_22d260;
            case 0x22D264u: goto label_22d264;
            case 0x22D268u: goto label_22d268;
            case 0x22D26Cu: goto label_22d26c;
            case 0x22D270u: goto label_22d270;
            case 0x22D274u: goto label_22d274;
            case 0x22D278u: goto label_22d278;
            case 0x22D27Cu: goto label_22d27c;
            case 0x22D280u: goto label_22d280;
            case 0x22D284u: goto label_22d284;
            case 0x22D288u: goto label_22d288;
            case 0x22D28Cu: goto label_22d28c;
            case 0x22D290u: goto label_22d290;
            case 0x22D294u: goto label_22d294;
            case 0x22D298u: goto label_22d298;
            case 0x22D29Cu: goto label_22d29c;
            case 0x22D2A0u: goto label_22d2a0;
            case 0x22D2A4u: goto label_22d2a4;
            case 0x22D2A8u: goto label_22d2a8;
            case 0x22D2ACu: goto label_22d2ac;
            case 0x22D2B0u: goto label_22d2b0;
            case 0x22D2B4u: goto label_22d2b4;
            case 0x22D2B8u: goto label_22d2b8;
            case 0x22D2BCu: goto label_22d2bc;
            case 0x22D2C0u: goto label_22d2c0;
            case 0x22D2C4u: goto label_22d2c4;
            case 0x22D2C8u: goto label_22d2c8;
            case 0x22D2CCu: goto label_22d2cc;
            case 0x22D2D0u: goto label_22d2d0;
            case 0x22D2D4u: goto label_22d2d4;
            case 0x22D2D8u: goto label_22d2d8;
            case 0x22D2DCu: goto label_22d2dc;
            case 0x22D2E0u: goto label_22d2e0;
            case 0x22D2E4u: goto label_22d2e4;
            case 0x22D2E8u: goto label_22d2e8;
            case 0x22D2ECu: goto label_22d2ec;
            case 0x22D2F0u: goto label_22d2f0;
            case 0x22D2F4u: goto label_22d2f4;
            case 0x22D2F8u: goto label_22d2f8;
            case 0x22D2FCu: goto label_22d2fc;
            case 0x22D300u: goto label_22d300;
            case 0x22D304u: goto label_22d304;
            case 0x22D308u: goto label_22d308;
            case 0x22D30Cu: goto label_22d30c;
            case 0x22D310u: goto label_22d310;
            case 0x22D314u: goto label_22d314;
            case 0x22D318u: goto label_22d318;
            case 0x22D31Cu: goto label_22d31c;
            case 0x22D320u: goto label_22d320;
            case 0x22D324u: goto label_22d324;
            case 0x22D328u: goto label_22d328;
            case 0x22D32Cu: goto label_22d32c;
            case 0x22D330u: goto label_22d330;
            case 0x22D334u: goto label_22d334;
            case 0x22D338u: goto label_22d338;
            case 0x22D33Cu: goto label_22d33c;
            case 0x22D340u: goto label_22d340;
            case 0x22D344u: goto label_22d344;
            case 0x22D348u: goto label_22d348;
            case 0x22D34Cu: goto label_22d34c;
            case 0x22D350u: goto label_22d350;
            case 0x22D354u: goto label_22d354;
            case 0x22D358u: goto label_22d358;
            case 0x22D35Cu: goto label_22d35c;
            case 0x22D360u: goto label_22d360;
            case 0x22D364u: goto label_22d364;
            case 0x22D368u: goto label_22d368;
            case 0x22D36Cu: goto label_22d36c;
            case 0x22D370u: goto label_22d370;
            case 0x22D374u: goto label_22d374;
            case 0x22D378u: goto label_22d378;
            case 0x22D37Cu: goto label_22d37c;
            case 0x22D380u: goto label_22d380;
            case 0x22D384u: goto label_22d384;
            case 0x22D388u: goto label_22d388;
            case 0x22D38Cu: goto label_22d38c;
            case 0x22D390u: goto label_22d390;
            case 0x22D394u: goto label_22d394;
            case 0x22D398u: goto label_22d398;
            case 0x22D39Cu: goto label_22d39c;
            case 0x22D3A0u: goto label_22d3a0;
            case 0x22D3A4u: goto label_22d3a4;
            case 0x22D3A8u: goto label_22d3a8;
            case 0x22D3ACu: goto label_22d3ac;
            case 0x22D3B0u: goto label_22d3b0;
            case 0x22D3B4u: goto label_22d3b4;
            case 0x22D3B8u: goto label_22d3b8;
            case 0x22D3BCu: goto label_22d3bc;
            case 0x22D3C0u: goto label_22d3c0;
            case 0x22D3C4u: goto label_22d3c4;
            case 0x22D3C8u: goto label_22d3c8;
            case 0x22D3CCu: goto label_22d3cc;
            case 0x22D3D0u: goto label_22d3d0;
            case 0x22D3D4u: goto label_22d3d4;
            case 0x22D3D8u: goto label_22d3d8;
            case 0x22D3DCu: goto label_22d3dc;
            case 0x22D3E0u: goto label_22d3e0;
            case 0x22D3E4u: goto label_22d3e4;
            case 0x22D3E8u: goto label_22d3e8;
            case 0x22D3ECu: goto label_22d3ec;
            case 0x22D3F0u: goto label_22d3f0;
            case 0x22D3F4u: goto label_22d3f4;
            case 0x22D3F8u: goto label_22d3f8;
            case 0x22D3FCu: goto label_22d3fc;
            case 0x22D400u: goto label_22d400;
            case 0x22D404u: goto label_22d404;
            case 0x22D408u: goto label_22d408;
            case 0x22D40Cu: goto label_22d40c;
            case 0x22D410u: goto label_22d410;
            case 0x22D414u: goto label_22d414;
            case 0x22D418u: goto label_22d418;
            case 0x22D41Cu: goto label_22d41c;
            case 0x22D420u: goto label_22d420;
            case 0x22D424u: goto label_22d424;
            case 0x22D428u: goto label_22d428;
            case 0x22D42Cu: goto label_22d42c;
            case 0x22D430u: goto label_22d430;
            case 0x22D434u: goto label_22d434;
            case 0x22D438u: goto label_22d438;
            case 0x22D43Cu: goto label_22d43c;
            case 0x22D440u: goto label_22d440;
            case 0x22D444u: goto label_22d444;
            case 0x22D448u: goto label_22d448;
            case 0x22D44Cu: goto label_22d44c;
            case 0x22D450u: goto label_22d450;
            case 0x22D454u: goto label_22d454;
            case 0x22D458u: goto label_22d458;
            case 0x22D45Cu: goto label_22d45c;
            case 0x22D460u: goto label_22d460;
            case 0x22D464u: goto label_22d464;
            case 0x22D468u: goto label_22d468;
            case 0x22D46Cu: goto label_22d46c;
            case 0x22D470u: goto label_22d470;
            case 0x22D474u: goto label_22d474;
            case 0x22D478u: goto label_22d478;
            case 0x22D47Cu: goto label_22d47c;
            case 0x22D480u: goto label_22d480;
            case 0x22D484u: goto label_22d484;
            case 0x22D488u: goto label_22d488;
            case 0x22D48Cu: goto label_22d48c;
            case 0x22D490u: goto label_22d490;
            case 0x22D494u: goto label_22d494;
            case 0x22D498u: goto label_22d498;
            case 0x22D49Cu: goto label_22d49c;
            case 0x22D4A0u: goto label_22d4a0;
            case 0x22D4A4u: goto label_22d4a4;
            case 0x22D4A8u: goto label_22d4a8;
            case 0x22D4ACu: goto label_22d4ac;
            case 0x22D4B0u: goto label_22d4b0;
            case 0x22D4B4u: goto label_22d4b4;
            case 0x22D4B8u: goto label_22d4b8;
            case 0x22D4BCu: goto label_22d4bc;
            case 0x22D4C0u: goto label_22d4c0;
            case 0x22D4C4u: goto label_22d4c4;
            case 0x22D4C8u: goto label_22d4c8;
            case 0x22D4CCu: goto label_22d4cc;
            case 0x22D4D0u: goto label_22d4d0;
            case 0x22D4D4u: goto label_22d4d4;
            case 0x22D4D8u: goto label_22d4d8;
            case 0x22D4DCu: goto label_22d4dc;
            case 0x22D4E0u: goto label_22d4e0;
            case 0x22D4E4u: goto label_22d4e4;
            case 0x22D4E8u: goto label_22d4e8;
            case 0x22D4ECu: goto label_22d4ec;
            case 0x22D4F0u: goto label_22d4f0;
            case 0x22D4F4u: goto label_22d4f4;
            case 0x22D4F8u: goto label_22d4f8;
            case 0x22D4FCu: goto label_22d4fc;
            case 0x22D500u: goto label_22d500;
            case 0x22D504u: goto label_22d504;
            case 0x22D508u: goto label_22d508;
            case 0x22D50Cu: goto label_22d50c;
            case 0x22D510u: goto label_22d510;
            case 0x22D514u: goto label_22d514;
            case 0x22D518u: goto label_22d518;
            case 0x22D51Cu: goto label_22d51c;
            case 0x22D520u: goto label_22d520;
            case 0x22D524u: goto label_22d524;
            case 0x22D528u: goto label_22d528;
            case 0x22D52Cu: goto label_22d52c;
            case 0x22D530u: goto label_22d530;
            case 0x22D534u: goto label_22d534;
            case 0x22D538u: goto label_22d538;
            case 0x22D53Cu: goto label_22d53c;
            case 0x22D540u: goto label_22d540;
            case 0x22D544u: goto label_22d544;
            case 0x22D548u: goto label_22d548;
            case 0x22D54Cu: goto label_22d54c;
            case 0x22D550u: goto label_22d550;
            case 0x22D554u: goto label_22d554;
            case 0x22D558u: goto label_22d558;
            case 0x22D55Cu: goto label_22d55c;
            case 0x22D560u: goto label_22d560;
            case 0x22D564u: goto label_22d564;
            case 0x22D568u: goto label_22d568;
            case 0x22D56Cu: goto label_22d56c;
            case 0x22D570u: goto label_22d570;
            case 0x22D574u: goto label_22d574;
            case 0x22D578u: goto label_22d578;
            case 0x22D57Cu: goto label_22d57c;
            case 0x22D580u: goto label_22d580;
            case 0x22D584u: goto label_22d584;
            case 0x22D588u: goto label_22d588;
            case 0x22D58Cu: goto label_22d58c;
            case 0x22D590u: goto label_22d590;
            case 0x22D594u: goto label_22d594;
            case 0x22D598u: goto label_22d598;
            case 0x22D59Cu: goto label_22d59c;
            case 0x22D5A0u: goto label_22d5a0;
            case 0x22D5A4u: goto label_22d5a4;
            case 0x22D5A8u: goto label_22d5a8;
            case 0x22D5ACu: goto label_22d5ac;
            case 0x22D5B0u: goto label_22d5b0;
            case 0x22D5B4u: goto label_22d5b4;
            case 0x22D5B8u: goto label_22d5b8;
            case 0x22D5BCu: goto label_22d5bc;
            case 0x22D5C0u: goto label_22d5c0;
            case 0x22D5C4u: goto label_22d5c4;
            case 0x22D5C8u: goto label_22d5c8;
            case 0x22D5CCu: goto label_22d5cc;
            case 0x22D5D0u: goto label_22d5d0;
            case 0x22D5D4u: goto label_22d5d4;
            case 0x22D5D8u: goto label_22d5d8;
            case 0x22D5DCu: goto label_22d5dc;
            case 0x22D5E0u: goto label_22d5e0;
            case 0x22D5E4u: goto label_22d5e4;
            case 0x22D5E8u: goto label_22d5e8;
            case 0x22D5ECu: goto label_22d5ec;
            case 0x22D5F0u: goto label_22d5f0;
            case 0x22D5F4u: goto label_22d5f4;
            case 0x22D5F8u: goto label_22d5f8;
            case 0x22D5FCu: goto label_22d5fc;
            case 0x22D600u: goto label_22d600;
            case 0x22D604u: goto label_22d604;
            case 0x22D608u: goto label_22d608;
            case 0x22D60Cu: goto label_22d60c;
            case 0x22D610u: goto label_22d610;
            case 0x22D614u: goto label_22d614;
            case 0x22D618u: goto label_22d618;
            case 0x22D61Cu: goto label_22d61c;
            case 0x22D620u: goto label_22d620;
            case 0x22D624u: goto label_22d624;
            case 0x22D628u: goto label_22d628;
            case 0x22D62Cu: goto label_22d62c;
            case 0x22D630u: goto label_22d630;
            case 0x22D634u: goto label_22d634;
            case 0x22D638u: goto label_22d638;
            case 0x22D63Cu: goto label_22d63c;
            case 0x22D640u: goto label_22d640;
            case 0x22D644u: goto label_22d644;
            case 0x22D648u: goto label_22d648;
            case 0x22D64Cu: goto label_22d64c;
            case 0x22D650u: goto label_22d650;
            case 0x22D654u: goto label_22d654;
            case 0x22D658u: goto label_22d658;
            case 0x22D65Cu: goto label_22d65c;
            case 0x22D660u: goto label_22d660;
            case 0x22D664u: goto label_22d664;
            case 0x22D668u: goto label_22d668;
            case 0x22D66Cu: goto label_22d66c;
            case 0x22D670u: goto label_22d670;
            case 0x22D674u: goto label_22d674;
            case 0x22D678u: goto label_22d678;
            case 0x22D67Cu: goto label_22d67c;
            case 0x22D680u: goto label_22d680;
            case 0x22D684u: goto label_22d684;
            case 0x22D688u: goto label_22d688;
            case 0x22D68Cu: goto label_22d68c;
            case 0x22D690u: goto label_22d690;
            case 0x22D694u: goto label_22d694;
            case 0x22D698u: goto label_22d698;
            case 0x22D69Cu: goto label_22d69c;
            case 0x22D6A0u: goto label_22d6a0;
            case 0x22D6A4u: goto label_22d6a4;
            case 0x22D6A8u: goto label_22d6a8;
            case 0x22D6ACu: goto label_22d6ac;
            case 0x22D6B0u: goto label_22d6b0;
            case 0x22D6B4u: goto label_22d6b4;
            case 0x22D6B8u: goto label_22d6b8;
            case 0x22D6BCu: goto label_22d6bc;
            case 0x22D6C0u: goto label_22d6c0;
            case 0x22D6C4u: goto label_22d6c4;
            case 0x22D6C8u: goto label_22d6c8;
            case 0x22D6CCu: goto label_22d6cc;
            case 0x22D6D0u: goto label_22d6d0;
            case 0x22D6D4u: goto label_22d6d4;
            case 0x22D6D8u: goto label_22d6d8;
            case 0x22D6DCu: goto label_22d6dc;
            case 0x22D6E0u: goto label_22d6e0;
            case 0x22D6E4u: goto label_22d6e4;
            case 0x22D6E8u: goto label_22d6e8;
            case 0x22D6ECu: goto label_22d6ec;
            case 0x22D6F0u: goto label_22d6f0;
            case 0x22D6F4u: goto label_22d6f4;
            case 0x22D6F8u: goto label_22d6f8;
            case 0x22D6FCu: goto label_22d6fc;
            case 0x22D700u: goto label_22d700;
            case 0x22D704u: goto label_22d704;
            case 0x22D708u: goto label_22d708;
            case 0x22D70Cu: goto label_22d70c;
            case 0x22D710u: goto label_22d710;
            case 0x22D714u: goto label_22d714;
            case 0x22D718u: goto label_22d718;
            case 0x22D71Cu: goto label_22d71c;
            case 0x22D720u: goto label_22d720;
            case 0x22D724u: goto label_22d724;
            case 0x22D728u: goto label_22d728;
            case 0x22D72Cu: goto label_22d72c;
            case 0x22D730u: goto label_22d730;
            case 0x22D734u: goto label_22d734;
            case 0x22D738u: goto label_22d738;
            case 0x22D73Cu: goto label_22d73c;
            case 0x22D740u: goto label_22d740;
            case 0x22D744u: goto label_22d744;
            case 0x22D748u: goto label_22d748;
            case 0x22D74Cu: goto label_22d74c;
            case 0x22D750u: goto label_22d750;
            case 0x22D754u: goto label_22d754;
            case 0x22D758u: goto label_22d758;
            case 0x22D75Cu: goto label_22d75c;
            case 0x22D760u: goto label_22d760;
            case 0x22D764u: goto label_22d764;
            case 0x22D768u: goto label_22d768;
            case 0x22D76Cu: goto label_22d76c;
            case 0x22D770u: goto label_22d770;
            case 0x22D774u: goto label_22d774;
            case 0x22D778u: goto label_22d778;
            case 0x22D77Cu: goto label_22d77c;
            case 0x22D780u: goto label_22d780;
            case 0x22D784u: goto label_22d784;
            case 0x22D788u: goto label_22d788;
            case 0x22D78Cu: goto label_22d78c;
            case 0x22D790u: goto label_22d790;
            case 0x22D794u: goto label_22d794;
            case 0x22D798u: goto label_22d798;
            case 0x22D79Cu: goto label_22d79c;
            case 0x22D7A0u: goto label_22d7a0;
            case 0x22D7A4u: goto label_22d7a4;
            case 0x22D7A8u: goto label_22d7a8;
            case 0x22D7ACu: goto label_22d7ac;
            case 0x22D7B0u: goto label_22d7b0;
            case 0x22D7B4u: goto label_22d7b4;
            case 0x22D7B8u: goto label_22d7b8;
            case 0x22D7BCu: goto label_22d7bc;
            case 0x22D7C0u: goto label_22d7c0;
            case 0x22D7C4u: goto label_22d7c4;
            case 0x22D7C8u: goto label_22d7c8;
            case 0x22D7CCu: goto label_22d7cc;
            case 0x22D7D0u: goto label_22d7d0;
            case 0x22D7D4u: goto label_22d7d4;
            case 0x22D7D8u: goto label_22d7d8;
            case 0x22D7DCu: goto label_22d7dc;
            case 0x22D7E0u: goto label_22d7e0;
            case 0x22D7E4u: goto label_22d7e4;
            case 0x22D7E8u: goto label_22d7e8;
            case 0x22D7ECu: goto label_22d7ec;
            case 0x22D7F0u: goto label_22d7f0;
            case 0x22D7F4u: goto label_22d7f4;
            case 0x22D7F8u: goto label_22d7f8;
            case 0x22D7FCu: goto label_22d7fc;
            case 0x22D800u: goto label_22d800;
            case 0x22D804u: goto label_22d804;
            case 0x22D808u: goto label_22d808;
            case 0x22D80Cu: goto label_22d80c;
            case 0x22D810u: goto label_22d810;
            case 0x22D814u: goto label_22d814;
            case 0x22D818u: goto label_22d818;
            case 0x22D81Cu: goto label_22d81c;
            case 0x22D820u: goto label_22d820;
            case 0x22D824u: goto label_22d824;
            case 0x22D828u: goto label_22d828;
            case 0x22D82Cu: goto label_22d82c;
            case 0x22D830u: goto label_22d830;
            case 0x22D834u: goto label_22d834;
            case 0x22D838u: goto label_22d838;
            case 0x22D83Cu: goto label_22d83c;
            case 0x22D840u: goto label_22d840;
            case 0x22D844u: goto label_22d844;
            case 0x22D848u: goto label_22d848;
            case 0x22D84Cu: goto label_22d84c;
            case 0x22D850u: goto label_22d850;
            case 0x22D854u: goto label_22d854;
            case 0x22D858u: goto label_22d858;
            case 0x22D85Cu: goto label_22d85c;
            case 0x22D860u: goto label_22d860;
            case 0x22D864u: goto label_22d864;
            case 0x22D868u: goto label_22d868;
            case 0x22D86Cu: goto label_22d86c;
            case 0x22D870u: goto label_22d870;
            case 0x22D874u: goto label_22d874;
            case 0x22D878u: goto label_22d878;
            case 0x22D87Cu: goto label_22d87c;
            case 0x22D880u: goto label_22d880;
            case 0x22D884u: goto label_22d884;
            case 0x22D888u: goto label_22d888;
            case 0x22D88Cu: goto label_22d88c;
            case 0x22D890u: goto label_22d890;
            case 0x22D894u: goto label_22d894;
            case 0x22D898u: goto label_22d898;
            case 0x22D89Cu: goto label_22d89c;
            case 0x22D8A0u: goto label_22d8a0;
            case 0x22D8A4u: goto label_22d8a4;
            case 0x22D8A8u: goto label_22d8a8;
            case 0x22D8ACu: goto label_22d8ac;
            case 0x22D8B0u: goto label_22d8b0;
            case 0x22D8B4u: goto label_22d8b4;
            case 0x22D8B8u: goto label_22d8b8;
            case 0x22D8BCu: goto label_22d8bc;
            case 0x22D8C0u: goto label_22d8c0;
            case 0x22D8C4u: goto label_22d8c4;
            case 0x22D8C8u: goto label_22d8c8;
            case 0x22D8CCu: goto label_22d8cc;
            case 0x22D8D0u: goto label_22d8d0;
            case 0x22D8D4u: goto label_22d8d4;
            case 0x22D8D8u: goto label_22d8d8;
            case 0x22D8DCu: goto label_22d8dc;
            case 0x22D8E0u: goto label_22d8e0;
            case 0x22D8E4u: goto label_22d8e4;
            case 0x22D8E8u: goto label_22d8e8;
            case 0x22D8ECu: goto label_22d8ec;
            case 0x22D8F0u: goto label_22d8f0;
            case 0x22D8F4u: goto label_22d8f4;
            case 0x22D8F8u: goto label_22d8f8;
            case 0x22D8FCu: goto label_22d8fc;
            case 0x22D900u: goto label_22d900;
            case 0x22D904u: goto label_22d904;
            case 0x22D908u: goto label_22d908;
            case 0x22D90Cu: goto label_22d90c;
            case 0x22D910u: goto label_22d910;
            case 0x22D914u: goto label_22d914;
            case 0x22D918u: goto label_22d918;
            case 0x22D91Cu: goto label_22d91c;
            case 0x22D920u: goto label_22d920;
            case 0x22D924u: goto label_22d924;
            case 0x22D928u: goto label_22d928;
            case 0x22D92Cu: goto label_22d92c;
            case 0x22D930u: goto label_22d930;
            case 0x22D934u: goto label_22d934;
            case 0x22D938u: goto label_22d938;
            case 0x22D93Cu: goto label_22d93c;
            case 0x22D940u: goto label_22d940;
            case 0x22D944u: goto label_22d944;
            case 0x22D948u: goto label_22d948;
            case 0x22D94Cu: goto label_22d94c;
            case 0x22D950u: goto label_22d950;
            case 0x22D954u: goto label_22d954;
            case 0x22D958u: goto label_22d958;
            case 0x22D95Cu: goto label_22d95c;
            case 0x22D960u: goto label_22d960;
            case 0x22D964u: goto label_22d964;
            case 0x22D968u: goto label_22d968;
            case 0x22D96Cu: goto label_22d96c;
            case 0x22D970u: goto label_22d970;
            case 0x22D974u: goto label_22d974;
            case 0x22D978u: goto label_22d978;
            case 0x22D97Cu: goto label_22d97c;
            case 0x22D980u: goto label_22d980;
            case 0x22D984u: goto label_22d984;
            case 0x22D988u: goto label_22d988;
            case 0x22D98Cu: goto label_22d98c;
            case 0x22D990u: goto label_22d990;
            case 0x22D994u: goto label_22d994;
            case 0x22D998u: goto label_22d998;
            case 0x22D99Cu: goto label_22d99c;
            case 0x22D9A0u: goto label_22d9a0;
            case 0x22D9A4u: goto label_22d9a4;
            case 0x22D9A8u: goto label_22d9a8;
            case 0x22D9ACu: goto label_22d9ac;
            case 0x22D9B0u: goto label_22d9b0;
            case 0x22D9B4u: goto label_22d9b4;
            case 0x22D9B8u: goto label_22d9b8;
            case 0x22D9BCu: goto label_22d9bc;
            case 0x22D9C0u: goto label_22d9c0;
            case 0x22D9C4u: goto label_22d9c4;
            case 0x22D9C8u: goto label_22d9c8;
            case 0x22D9CCu: goto label_22d9cc;
            case 0x22D9D0u: goto label_22d9d0;
            case 0x22D9D4u: goto label_22d9d4;
            case 0x22D9D8u: goto label_22d9d8;
            case 0x22D9DCu: goto label_22d9dc;
            case 0x22D9E0u: goto label_22d9e0;
            case 0x22D9E4u: goto label_22d9e4;
            case 0x22D9E8u: goto label_22d9e8;
            case 0x22D9ECu: goto label_22d9ec;
            case 0x22D9F0u: goto label_22d9f0;
            case 0x22D9F4u: goto label_22d9f4;
            case 0x22D9F8u: goto label_22d9f8;
            case 0x22D9FCu: goto label_22d9fc;
            case 0x22DA00u: goto label_22da00;
            case 0x22DA04u: goto label_22da04;
            case 0x22DA08u: goto label_22da08;
            case 0x22DA0Cu: goto label_22da0c;
            case 0x22DA10u: goto label_22da10;
            case 0x22DA14u: goto label_22da14;
            case 0x22DA18u: goto label_22da18;
            case 0x22DA1Cu: goto label_22da1c;
            case 0x22DA20u: goto label_22da20;
            case 0x22DA24u: goto label_22da24;
            case 0x22DA28u: goto label_22da28;
            case 0x22DA2Cu: goto label_22da2c;
            case 0x22DA30u: goto label_22da30;
            case 0x22DA34u: goto label_22da34;
            case 0x22DA38u: goto label_22da38;
            case 0x22DA3Cu: goto label_22da3c;
            case 0x22DA40u: goto label_22da40;
            case 0x22DA44u: goto label_22da44;
            case 0x22DA48u: goto label_22da48;
            case 0x22DA4Cu: goto label_22da4c;
            case 0x22DA50u: goto label_22da50;
            case 0x22DA54u: goto label_22da54;
            case 0x22DA58u: goto label_22da58;
            case 0x22DA5Cu: goto label_22da5c;
            case 0x22DA60u: goto label_22da60;
            case 0x22DA64u: goto label_22da64;
            case 0x22DA68u: goto label_22da68;
            case 0x22DA6Cu: goto label_22da6c;
            case 0x22DA70u: goto label_22da70;
            case 0x22DA74u: goto label_22da74;
            case 0x22DA78u: goto label_22da78;
            case 0x22DA7Cu: goto label_22da7c;
            case 0x22DA80u: goto label_22da80;
            case 0x22DA84u: goto label_22da84;
            case 0x22DA88u: goto label_22da88;
            case 0x22DA8Cu: goto label_22da8c;
            case 0x22DA90u: goto label_22da90;
            case 0x22DA94u: goto label_22da94;
            case 0x22DA98u: goto label_22da98;
            case 0x22DA9Cu: goto label_22da9c;
            case 0x22DAA0u: goto label_22daa0;
            case 0x22DAA4u: goto label_22daa4;
            case 0x22DAA8u: goto label_22daa8;
            case 0x22DAACu: goto label_22daac;
            case 0x22DAB0u: goto label_22dab0;
            case 0x22DAB4u: goto label_22dab4;
            case 0x22DAB8u: goto label_22dab8;
            case 0x22DABCu: goto label_22dabc;
            case 0x22DAC0u: goto label_22dac0;
            case 0x22DAC4u: goto label_22dac4;
            case 0x22DAC8u: goto label_22dac8;
            case 0x22DACCu: goto label_22dacc;
            case 0x22DAD0u: goto label_22dad0;
            case 0x22DAD4u: goto label_22dad4;
            case 0x22DAD8u: goto label_22dad8;
            case 0x22DADCu: goto label_22dadc;
            case 0x22DAE0u: goto label_22dae0;
            case 0x22DAE4u: goto label_22dae4;
            case 0x22DAE8u: goto label_22dae8;
            case 0x22DAECu: goto label_22daec;
            case 0x22DAF0u: goto label_22daf0;
            case 0x22DAF4u: goto label_22daf4;
            case 0x22DAF8u: goto label_22daf8;
            case 0x22DAFCu: goto label_22dafc;
            case 0x22DB00u: goto label_22db00;
            case 0x22DB04u: goto label_22db04;
            case 0x22DB08u: goto label_22db08;
            case 0x22DB0Cu: goto label_22db0c;
            case 0x22DB10u: goto label_22db10;
            case 0x22DB14u: goto label_22db14;
            case 0x22DB18u: goto label_22db18;
            case 0x22DB1Cu: goto label_22db1c;
            case 0x22DB20u: goto label_22db20;
            case 0x22DB24u: goto label_22db24;
            case 0x22DB28u: goto label_22db28;
            case 0x22DB2Cu: goto label_22db2c;
            case 0x22DB30u: goto label_22db30;
            case 0x22DB34u: goto label_22db34;
            case 0x22DB38u: goto label_22db38;
            case 0x22DB3Cu: goto label_22db3c;
            case 0x22DB40u: goto label_22db40;
            case 0x22DB44u: goto label_22db44;
            case 0x22DB48u: goto label_22db48;
            case 0x22DB4Cu: goto label_22db4c;
            case 0x22DB50u: goto label_22db50;
            case 0x22DB54u: goto label_22db54;
            case 0x22DB58u: goto label_22db58;
            case 0x22DB5Cu: goto label_22db5c;
            case 0x22DB60u: goto label_22db60;
            case 0x22DB64u: goto label_22db64;
            case 0x22DB68u: goto label_22db68;
            case 0x22DB6Cu: goto label_22db6c;
            case 0x22DB70u: goto label_22db70;
            case 0x22DB74u: goto label_22db74;
            case 0x22DB78u: goto label_22db78;
            case 0x22DB7Cu: goto label_22db7c;
            case 0x22DB80u: goto label_22db80;
            case 0x22DB84u: goto label_22db84;
            case 0x22DB88u: goto label_22db88;
            case 0x22DB8Cu: goto label_22db8c;
            case 0x22DB90u: goto label_22db90;
            case 0x22DB94u: goto label_22db94;
            case 0x22DB98u: goto label_22db98;
            case 0x22DB9Cu: goto label_22db9c;
            case 0x22DBA0u: goto label_22dba0;
            case 0x22DBA4u: goto label_22dba4;
            case 0x22DBA8u: goto label_22dba8;
            case 0x22DBACu: goto label_22dbac;
            case 0x22DBB0u: goto label_22dbb0;
            case 0x22DBB4u: goto label_22dbb4;
            case 0x22DBB8u: goto label_22dbb8;
            case 0x22DBBCu: goto label_22dbbc;
            case 0x22DBC0u: goto label_22dbc0;
            case 0x22DBC4u: goto label_22dbc4;
            case 0x22DBC8u: goto label_22dbc8;
            case 0x22DBCCu: goto label_22dbcc;
            case 0x22DBD0u: goto label_22dbd0;
            case 0x22DBD4u: goto label_22dbd4;
            case 0x22DBD8u: goto label_22dbd8;
            case 0x22DBDCu: goto label_22dbdc;
            case 0x22DBE0u: goto label_22dbe0;
            case 0x22DBE4u: goto label_22dbe4;
            case 0x22DBE8u: goto label_22dbe8;
            case 0x22DBECu: goto label_22dbec;
            case 0x22DBF0u: goto label_22dbf0;
            case 0x22DBF4u: goto label_22dbf4;
            case 0x22DBF8u: goto label_22dbf8;
            case 0x22DBFCu: goto label_22dbfc;
            case 0x22DC00u: goto label_22dc00;
            case 0x22DC04u: goto label_22dc04;
            case 0x22DC08u: goto label_22dc08;
            case 0x22DC0Cu: goto label_22dc0c;
            case 0x22DC10u: goto label_22dc10;
            case 0x22DC14u: goto label_22dc14;
            case 0x22DC18u: goto label_22dc18;
            case 0x22DC1Cu: goto label_22dc1c;
            case 0x22DC20u: goto label_22dc20;
            case 0x22DC24u: goto label_22dc24;
            case 0x22DC28u: goto label_22dc28;
            case 0x22DC2Cu: goto label_22dc2c;
            case 0x22DC30u: goto label_22dc30;
            case 0x22DC34u: goto label_22dc34;
            case 0x22DC38u: goto label_22dc38;
            case 0x22DC3Cu: goto label_22dc3c;
            case 0x22DC40u: goto label_22dc40;
            case 0x22DC44u: goto label_22dc44;
            case 0x22DC48u: goto label_22dc48;
            case 0x22DC4Cu: goto label_22dc4c;
            case 0x22DC50u: goto label_22dc50;
            case 0x22DC54u: goto label_22dc54;
            case 0x22DC58u: goto label_22dc58;
            case 0x22DC5Cu: goto label_22dc5c;
            case 0x22DC60u: goto label_22dc60;
            case 0x22DC64u: goto label_22dc64;
            case 0x22DC68u: goto label_22dc68;
            case 0x22DC6Cu: goto label_22dc6c;
            case 0x22DC70u: goto label_22dc70;
            case 0x22DC74u: goto label_22dc74;
            case 0x22DC78u: goto label_22dc78;
            case 0x22DC7Cu: goto label_22dc7c;
            case 0x22DC80u: goto label_22dc80;
            case 0x22DC84u: goto label_22dc84;
            case 0x22DC88u: goto label_22dc88;
            case 0x22DC8Cu: goto label_22dc8c;
            case 0x22DC90u: goto label_22dc90;
            case 0x22DC94u: goto label_22dc94;
            case 0x22DC98u: goto label_22dc98;
            case 0x22DC9Cu: goto label_22dc9c;
            case 0x22DCA0u: goto label_22dca0;
            case 0x22DCA4u: goto label_22dca4;
            case 0x22DCA8u: goto label_22dca8;
            case 0x22DCACu: goto label_22dcac;
            case 0x22DCB0u: goto label_22dcb0;
            case 0x22DCB4u: goto label_22dcb4;
            case 0x22DCB8u: goto label_22dcb8;
            case 0x22DCBCu: goto label_22dcbc;
            case 0x22DCC0u: goto label_22dcc0;
            case 0x22DCC4u: goto label_22dcc4;
            case 0x22DCC8u: goto label_22dcc8;
            case 0x22DCCCu: goto label_22dccc;
            case 0x22DCD0u: goto label_22dcd0;
            case 0x22DCD4u: goto label_22dcd4;
            case 0x22DCD8u: goto label_22dcd8;
            case 0x22DCDCu: goto label_22dcdc;
            case 0x22DCE0u: goto label_22dce0;
            case 0x22DCE4u: goto label_22dce4;
            case 0x22DCE8u: goto label_22dce8;
            case 0x22DCECu: goto label_22dcec;
            case 0x22DCF0u: goto label_22dcf0;
            case 0x22DCF4u: goto label_22dcf4;
            case 0x22DCF8u: goto label_22dcf8;
            case 0x22DCFCu: goto label_22dcfc;
            case 0x22DD00u: goto label_22dd00;
            case 0x22DD04u: goto label_22dd04;
            case 0x22DD08u: goto label_22dd08;
            case 0x22DD0Cu: goto label_22dd0c;
            case 0x22DD10u: goto label_22dd10;
            case 0x22DD14u: goto label_22dd14;
            case 0x22DD18u: goto label_22dd18;
            case 0x22DD1Cu: goto label_22dd1c;
            case 0x22DD20u: goto label_22dd20;
            case 0x22DD24u: goto label_22dd24;
            case 0x22DD28u: goto label_22dd28;
            case 0x22DD2Cu: goto label_22dd2c;
            case 0x22DD30u: goto label_22dd30;
            case 0x22DD34u: goto label_22dd34;
            case 0x22DD38u: goto label_22dd38;
            case 0x22DD3Cu: goto label_22dd3c;
            case 0x22DD40u: goto label_22dd40;
            case 0x22DD44u: goto label_22dd44;
            case 0x22DD48u: goto label_22dd48;
            case 0x22DD4Cu: goto label_22dd4c;
            case 0x22DD50u: goto label_22dd50;
            case 0x22DD54u: goto label_22dd54;
            case 0x22DD58u: goto label_22dd58;
            case 0x22DD5Cu: goto label_22dd5c;
            case 0x22DD60u: goto label_22dd60;
            case 0x22DD64u: goto label_22dd64;
            case 0x22DD68u: goto label_22dd68;
            case 0x22DD6Cu: goto label_22dd6c;
            case 0x22DD70u: goto label_22dd70;
            case 0x22DD74u: goto label_22dd74;
            case 0x22DD78u: goto label_22dd78;
            case 0x22DD7Cu: goto label_22dd7c;
            case 0x22DD80u: goto label_22dd80;
            case 0x22DD84u: goto label_22dd84;
            case 0x22DD88u: goto label_22dd88;
            case 0x22DD8Cu: goto label_22dd8c;
            case 0x22DD90u: goto label_22dd90;
            case 0x22DD94u: goto label_22dd94;
            case 0x22DD98u: goto label_22dd98;
            case 0x22DD9Cu: goto label_22dd9c;
            case 0x22DDA0u: goto label_22dda0;
            case 0x22DDA4u: goto label_22dda4;
            case 0x22DDA8u: goto label_22dda8;
            case 0x22DDACu: goto label_22ddac;
            case 0x22DDB0u: goto label_22ddb0;
            case 0x22DDB4u: goto label_22ddb4;
            case 0x22DDB8u: goto label_22ddb8;
            case 0x22DDBCu: goto label_22ddbc;
            case 0x22DDC0u: goto label_22ddc0;
            case 0x22DDC4u: goto label_22ddc4;
            case 0x22DDC8u: goto label_22ddc8;
            case 0x22DDCCu: goto label_22ddcc;
            case 0x22DDD0u: goto label_22ddd0;
            case 0x22DDD4u: goto label_22ddd4;
            case 0x22DDD8u: goto label_22ddd8;
            case 0x22DDDCu: goto label_22dddc;
            case 0x22DDE0u: goto label_22dde0;
            case 0x22DDE4u: goto label_22dde4;
            case 0x22DDE8u: goto label_22dde8;
            case 0x22DDECu: goto label_22ddec;
            case 0x22DDF0u: goto label_22ddf0;
            case 0x22DDF4u: goto label_22ddf4;
            case 0x22DDF8u: goto label_22ddf8;
            case 0x22DDFCu: goto label_22ddfc;
            case 0x22DE00u: goto label_22de00;
            case 0x22DE04u: goto label_22de04;
            case 0x22DE08u: goto label_22de08;
            case 0x22DE0Cu: goto label_22de0c;
            case 0x22DE10u: goto label_22de10;
            case 0x22DE14u: goto label_22de14;
            case 0x22DE18u: goto label_22de18;
            case 0x22DE1Cu: goto label_22de1c;
            case 0x22DE20u: goto label_22de20;
            case 0x22DE24u: goto label_22de24;
            case 0x22DE28u: goto label_22de28;
            case 0x22DE2Cu: goto label_22de2c;
            case 0x22DE30u: goto label_22de30;
            case 0x22DE34u: goto label_22de34;
            case 0x22DE38u: goto label_22de38;
            case 0x22DE3Cu: goto label_22de3c;
            case 0x22DE40u: goto label_22de40;
            case 0x22DE44u: goto label_22de44;
            case 0x22DE48u: goto label_22de48;
            case 0x22DE4Cu: goto label_22de4c;
            case 0x22DE50u: goto label_22de50;
            case 0x22DE54u: goto label_22de54;
            case 0x22DE58u: goto label_22de58;
            case 0x22DE5Cu: goto label_22de5c;
            case 0x22DE60u: goto label_22de60;
            case 0x22DE64u: goto label_22de64;
            case 0x22DE68u: goto label_22de68;
            case 0x22DE6Cu: goto label_22de6c;
            case 0x22DE70u: goto label_22de70;
            case 0x22DE74u: goto label_22de74;
            case 0x22DE78u: goto label_22de78;
            case 0x22DE7Cu: goto label_22de7c;
            case 0x22DE80u: goto label_22de80;
            case 0x22DE84u: goto label_22de84;
            case 0x22DE88u: goto label_22de88;
            case 0x22DE8Cu: goto label_22de8c;
            case 0x22DE90u: goto label_22de90;
            case 0x22DE94u: goto label_22de94;
            case 0x22DE98u: goto label_22de98;
            case 0x22DE9Cu: goto label_22de9c;
            case 0x22DEA0u: goto label_22dea0;
            case 0x22DEA4u: goto label_22dea4;
            case 0x22DEA8u: goto label_22dea8;
            case 0x22DEACu: goto label_22deac;
            case 0x22DEB0u: goto label_22deb0;
            case 0x22DEB4u: goto label_22deb4;
            case 0x22DEB8u: goto label_22deb8;
            case 0x22DEBCu: goto label_22debc;
            case 0x22DEC0u: goto label_22dec0;
            case 0x22DEC4u: goto label_22dec4;
            case 0x22DEC8u: goto label_22dec8;
            case 0x22DECCu: goto label_22decc;
            case 0x22DED0u: goto label_22ded0;
            case 0x22DED4u: goto label_22ded4;
            case 0x22DED8u: goto label_22ded8;
            case 0x22DEDCu: goto label_22dedc;
            case 0x22DEE0u: goto label_22dee0;
            case 0x22DEE4u: goto label_22dee4;
            case 0x22DEE8u: goto label_22dee8;
            case 0x22DEECu: goto label_22deec;
            case 0x22DEF0u: goto label_22def0;
            case 0x22DEF4u: goto label_22def4;
            case 0x22DEF8u: goto label_22def8;
            case 0x22DEFCu: goto label_22defc;
            case 0x22DF00u: goto label_22df00;
            case 0x22DF04u: goto label_22df04;
            case 0x22DF08u: goto label_22df08;
            case 0x22DF0Cu: goto label_22df0c;
            case 0x22DF10u: goto label_22df10;
            case 0x22DF14u: goto label_22df14;
            case 0x22DF18u: goto label_22df18;
            case 0x22DF1Cu: goto label_22df1c;
            case 0x22DF20u: goto label_22df20;
            case 0x22DF24u: goto label_22df24;
            case 0x22DF28u: goto label_22df28;
            case 0x22DF2Cu: goto label_22df2c;
            case 0x22DF30u: goto label_22df30;
            case 0x22DF34u: goto label_22df34;
            case 0x22DF38u: goto label_22df38;
            case 0x22DF3Cu: goto label_22df3c;
            case 0x22DF40u: goto label_22df40;
            case 0x22DF44u: goto label_22df44;
            case 0x22DF48u: goto label_22df48;
            case 0x22DF4Cu: goto label_22df4c;
            case 0x22DF50u: goto label_22df50;
            case 0x22DF54u: goto label_22df54;
            case 0x22DF58u: goto label_22df58;
            case 0x22DF5Cu: goto label_22df5c;
            case 0x22DF60u: goto label_22df60;
            case 0x22DF64u: goto label_22df64;
            case 0x22DF68u: goto label_22df68;
            case 0x22DF6Cu: goto label_22df6c;
            case 0x22DF70u: goto label_22df70;
            case 0x22DF74u: goto label_22df74;
            case 0x22DF78u: goto label_22df78;
            case 0x22DF7Cu: goto label_22df7c;
            case 0x22DF80u: goto label_22df80;
            case 0x22DF84u: goto label_22df84;
            case 0x22DF88u: goto label_22df88;
            case 0x22DF8Cu: goto label_22df8c;
            case 0x22DF90u: goto label_22df90;
            case 0x22DF94u: goto label_22df94;
            case 0x22DF98u: goto label_22df98;
            case 0x22DF9Cu: goto label_22df9c;
            case 0x22DFA0u: goto label_22dfa0;
            case 0x22DFA4u: goto label_22dfa4;
            case 0x22DFA8u: goto label_22dfa8;
            case 0x22DFACu: goto label_22dfac;
            case 0x22DFB0u: goto label_22dfb0;
            case 0x22DFB4u: goto label_22dfb4;
            case 0x22DFB8u: goto label_22dfb8;
            case 0x22DFBCu: goto label_22dfbc;
            case 0x22DFC0u: goto label_22dfc0;
            case 0x22DFC4u: goto label_22dfc4;
            case 0x22DFC8u: goto label_22dfc8;
            case 0x22DFCCu: goto label_22dfcc;
            case 0x22DFD0u: goto label_22dfd0;
            case 0x22DFD4u: goto label_22dfd4;
            case 0x22DFD8u: goto label_22dfd8;
            case 0x22DFDCu: goto label_22dfdc;
            case 0x22DFE0u: goto label_22dfe0;
            case 0x22DFE4u: goto label_22dfe4;
            case 0x22DFE8u: goto label_22dfe8;
            case 0x22DFECu: goto label_22dfec;
            case 0x22DFF0u: goto label_22dff0;
            case 0x22DFF4u: goto label_22dff4;
            case 0x22DFF8u: goto label_22dff8;
            case 0x22DFFCu: goto label_22dffc;
            case 0x22E000u: goto label_22e000;
            case 0x22E004u: goto label_22e004;
            case 0x22E008u: goto label_22e008;
            case 0x22E00Cu: goto label_22e00c;
            case 0x22E010u: goto label_22e010;
            case 0x22E014u: goto label_22e014;
            case 0x22E018u: goto label_22e018;
            case 0x22E01Cu: goto label_22e01c;
            case 0x22E020u: goto label_22e020;
            case 0x22E024u: goto label_22e024;
            case 0x22E028u: goto label_22e028;
            case 0x22E02Cu: goto label_22e02c;
            case 0x22E030u: goto label_22e030;
            case 0x22E034u: goto label_22e034;
            case 0x22E038u: goto label_22e038;
            case 0x22E03Cu: goto label_22e03c;
            case 0x22E040u: goto label_22e040;
            case 0x22E044u: goto label_22e044;
            case 0x22E048u: goto label_22e048;
            case 0x22E04Cu: goto label_22e04c;
            case 0x22E050u: goto label_22e050;
            case 0x22E054u: goto label_22e054;
            case 0x22E058u: goto label_22e058;
            case 0x22E05Cu: goto label_22e05c;
            case 0x22E060u: goto label_22e060;
            case 0x22E064u: goto label_22e064;
            case 0x22E068u: goto label_22e068;
            case 0x22E06Cu: goto label_22e06c;
            case 0x22E070u: goto label_22e070;
            case 0x22E074u: goto label_22e074;
            case 0x22E078u: goto label_22e078;
            case 0x22E07Cu: goto label_22e07c;
            case 0x22E080u: goto label_22e080;
            case 0x22E084u: goto label_22e084;
            case 0x22E088u: goto label_22e088;
            case 0x22E08Cu: goto label_22e08c;
            case 0x22E090u: goto label_22e090;
            case 0x22E094u: goto label_22e094;
            case 0x22E098u: goto label_22e098;
            case 0x22E09Cu: goto label_22e09c;
            case 0x22E0A0u: goto label_22e0a0;
            case 0x22E0A4u: goto label_22e0a4;
            case 0x22E0A8u: goto label_22e0a8;
            case 0x22E0ACu: goto label_22e0ac;
            case 0x22E0B0u: goto label_22e0b0;
            case 0x22E0B4u: goto label_22e0b4;
            case 0x22E0B8u: goto label_22e0b8;
            case 0x22E0BCu: goto label_22e0bc;
            case 0x22E0C0u: goto label_22e0c0;
            case 0x22E0C4u: goto label_22e0c4;
            case 0x22E0C8u: goto label_22e0c8;
            case 0x22E0CCu: goto label_22e0cc;
            case 0x22E0D0u: goto label_22e0d0;
            case 0x22E0D4u: goto label_22e0d4;
            case 0x22E0D8u: goto label_22e0d8;
            case 0x22E0DCu: goto label_22e0dc;
            case 0x22E0E0u: goto label_22e0e0;
            case 0x22E0E4u: goto label_22e0e4;
            case 0x22E0E8u: goto label_22e0e8;
            case 0x22E0ECu: goto label_22e0ec;
            case 0x22E0F0u: goto label_22e0f0;
            case 0x22E0F4u: goto label_22e0f4;
            case 0x22E0F8u: goto label_22e0f8;
            case 0x22E0FCu: goto label_22e0fc;
            case 0x22E100u: goto label_22e100;
            case 0x22E104u: goto label_22e104;
            case 0x22E108u: goto label_22e108;
            case 0x22E10Cu: goto label_22e10c;
            case 0x22E110u: goto label_22e110;
            case 0x22E114u: goto label_22e114;
            case 0x22E118u: goto label_22e118;
            case 0x22E11Cu: goto label_22e11c;
            case 0x22E120u: goto label_22e120;
            case 0x22E124u: goto label_22e124;
            case 0x22E128u: goto label_22e128;
            case 0x22E12Cu: goto label_22e12c;
            case 0x22E130u: goto label_22e130;
            case 0x22E134u: goto label_22e134;
            case 0x22E138u: goto label_22e138;
            case 0x22E13Cu: goto label_22e13c;
            case 0x22E140u: goto label_22e140;
            case 0x22E144u: goto label_22e144;
            case 0x22E148u: goto label_22e148;
            case 0x22E14Cu: goto label_22e14c;
            case 0x22E150u: goto label_22e150;
            case 0x22E154u: goto label_22e154;
            case 0x22E158u: goto label_22e158;
            case 0x22E15Cu: goto label_22e15c;
            case 0x22E160u: goto label_22e160;
            case 0x22E164u: goto label_22e164;
            case 0x22E168u: goto label_22e168;
            case 0x22E16Cu: goto label_22e16c;
            case 0x22E170u: goto label_22e170;
            case 0x22E174u: goto label_22e174;
            case 0x22E178u: goto label_22e178;
            case 0x22E17Cu: goto label_22e17c;
            case 0x22E180u: goto label_22e180;
            case 0x22E184u: goto label_22e184;
            case 0x22E188u: goto label_22e188;
            case 0x22E18Cu: goto label_22e18c;
            case 0x22E190u: goto label_22e190;
            case 0x22E194u: goto label_22e194;
            case 0x22E198u: goto label_22e198;
            case 0x22E19Cu: goto label_22e19c;
            case 0x22E1A0u: goto label_22e1a0;
            case 0x22E1A4u: goto label_22e1a4;
            case 0x22E1A8u: goto label_22e1a8;
            case 0x22E1ACu: goto label_22e1ac;
            case 0x22E1B0u: goto label_22e1b0;
            case 0x22E1B4u: goto label_22e1b4;
            case 0x22E1B8u: goto label_22e1b8;
            case 0x22E1BCu: goto label_22e1bc;
            case 0x22E1C0u: goto label_22e1c0;
            case 0x22E1C4u: goto label_22e1c4;
            case 0x22E1C8u: goto label_22e1c8;
            case 0x22E1CCu: goto label_22e1cc;
            case 0x22E1D0u: goto label_22e1d0;
            case 0x22E1D4u: goto label_22e1d4;
            case 0x22E1D8u: goto label_22e1d8;
            case 0x22E1DCu: goto label_22e1dc;
            case 0x22E1E0u: goto label_22e1e0;
            case 0x22E1E4u: goto label_22e1e4;
            case 0x22E1E8u: goto label_22e1e8;
            case 0x22E1ECu: goto label_22e1ec;
            case 0x22E1F0u: goto label_22e1f0;
            case 0x22E1F4u: goto label_22e1f4;
            case 0x22E1F8u: goto label_22e1f8;
            case 0x22E1FCu: goto label_22e1fc;
            case 0x22E200u: goto label_22e200;
            case 0x22E204u: goto label_22e204;
            case 0x22E208u: goto label_22e208;
            case 0x22E20Cu: goto label_22e20c;
            case 0x22E210u: goto label_22e210;
            case 0x22E214u: goto label_22e214;
            case 0x22E218u: goto label_22e218;
            case 0x22E21Cu: goto label_22e21c;
            case 0x22E220u: goto label_22e220;
            case 0x22E224u: goto label_22e224;
            case 0x22E228u: goto label_22e228;
            case 0x22E22Cu: goto label_22e22c;
            case 0x22E230u: goto label_22e230;
            case 0x22E234u: goto label_22e234;
            case 0x22E238u: goto label_22e238;
            case 0x22E23Cu: goto label_22e23c;
            case 0x22E240u: goto label_22e240;
            case 0x22E244u: goto label_22e244;
            case 0x22E248u: goto label_22e248;
            case 0x22E24Cu: goto label_22e24c;
            case 0x22E250u: goto label_22e250;
            case 0x22E254u: goto label_22e254;
            case 0x22E258u: goto label_22e258;
            case 0x22E25Cu: goto label_22e25c;
            case 0x22E260u: goto label_22e260;
            case 0x22E264u: goto label_22e264;
            case 0x22E268u: goto label_22e268;
            case 0x22E26Cu: goto label_22e26c;
            case 0x22E270u: goto label_22e270;
            case 0x22E274u: goto label_22e274;
            case 0x22E278u: goto label_22e278;
            case 0x22E27Cu: goto label_22e27c;
            case 0x22E280u: goto label_22e280;
            case 0x22E284u: goto label_22e284;
            case 0x22E288u: goto label_22e288;
            case 0x22E28Cu: goto label_22e28c;
            case 0x22E290u: goto label_22e290;
            case 0x22E294u: goto label_22e294;
            case 0x22E298u: goto label_22e298;
            case 0x22E29Cu: goto label_22e29c;
            case 0x22E2A0u: goto label_22e2a0;
            case 0x22E2A4u: goto label_22e2a4;
            case 0x22E2A8u: goto label_22e2a8;
            case 0x22E2ACu: goto label_22e2ac;
            case 0x22E2B0u: goto label_22e2b0;
            case 0x22E2B4u: goto label_22e2b4;
            case 0x22E2B8u: goto label_22e2b8;
            case 0x22E2BCu: goto label_22e2bc;
            case 0x22E2C0u: goto label_22e2c0;
            case 0x22E2C4u: goto label_22e2c4;
            case 0x22E2C8u: goto label_22e2c8;
            case 0x22E2CCu: goto label_22e2cc;
            case 0x22E2D0u: goto label_22e2d0;
            case 0x22E2D4u: goto label_22e2d4;
            case 0x22E2D8u: goto label_22e2d8;
            case 0x22E2DCu: goto label_22e2dc;
            case 0x22E2E0u: goto label_22e2e0;
            case 0x22E2E4u: goto label_22e2e4;
            case 0x22E2E8u: goto label_22e2e8;
            case 0x22E2ECu: goto label_22e2ec;
            case 0x22E2F0u: goto label_22e2f0;
            case 0x22E2F4u: goto label_22e2f4;
            case 0x22E2F8u: goto label_22e2f8;
            case 0x22E2FCu: goto label_22e2fc;
            case 0x22E300u: goto label_22e300;
            case 0x22E304u: goto label_22e304;
            case 0x22E308u: goto label_22e308;
            case 0x22E30Cu: goto label_22e30c;
            case 0x22E310u: goto label_22e310;
            case 0x22E314u: goto label_22e314;
            case 0x22E318u: goto label_22e318;
            case 0x22E31Cu: goto label_22e31c;
            case 0x22E320u: goto label_22e320;
            case 0x22E324u: goto label_22e324;
            case 0x22E328u: goto label_22e328;
            case 0x22E32Cu: goto label_22e32c;
            case 0x22E330u: goto label_22e330;
            case 0x22E334u: goto label_22e334;
            case 0x22E338u: goto label_22e338;
            case 0x22E33Cu: goto label_22e33c;
            case 0x22E340u: goto label_22e340;
            case 0x22E344u: goto label_22e344;
            case 0x22E348u: goto label_22e348;
            case 0x22E34Cu: goto label_22e34c;
            case 0x22E350u: goto label_22e350;
            case 0x22E354u: goto label_22e354;
            case 0x22E358u: goto label_22e358;
            case 0x22E35Cu: goto label_22e35c;
            case 0x22E360u: goto label_22e360;
            case 0x22E364u: goto label_22e364;
            case 0x22E368u: goto label_22e368;
            case 0x22E36Cu: goto label_22e36c;
            case 0x22E370u: goto label_22e370;
            case 0x22E374u: goto label_22e374;
            case 0x22E378u: goto label_22e378;
            case 0x22E37Cu: goto label_22e37c;
            case 0x22E380u: goto label_22e380;
            case 0x22E384u: goto label_22e384;
            case 0x22E388u: goto label_22e388;
            case 0x22E38Cu: goto label_22e38c;
            case 0x22E390u: goto label_22e390;
            case 0x22E394u: goto label_22e394;
            case 0x22E398u: goto label_22e398;
            case 0x22E39Cu: goto label_22e39c;
            case 0x22E3A0u: goto label_22e3a0;
            case 0x22E3A4u: goto label_22e3a4;
            case 0x22E3A8u: goto label_22e3a8;
            case 0x22E3ACu: goto label_22e3ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x22e3a8:
    ctx->pc = 0x22E3B0u;
}

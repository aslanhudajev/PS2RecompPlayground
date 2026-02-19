#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerProcessFamiliar
// Address: 0x22cd88 - 0x22d088
void PlayerProcessFamiliar_0x22cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22cd88u;

    // 0x22cd88: 0x27bdffc0
    ctx->pc = 0x22cd88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22cd8c: 0xffbf0030
    ctx->pc = 0x22cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22cd90: 0xffb20020
    ctx->pc = 0x22cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22cd94: 0xffb10010
    ctx->pc = 0x22cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22cd98: 0xffb00000
    ctx->pc = 0x22cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22cd9c: 0x80802d
    ctx->pc = 0x22cd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cda0: 0x8e022ac0
    ctx->pc = 0x22cda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22cda4: 0x28420050
    ctx->pc = 0x22cda4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 80));
    // 0x22cda8: 0x14400009
    ctx->pc = 0x22CDA8u;
    {
        const bool branch_taken_0x22cda8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22CDACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22cda8) {
            ctx->pc = 0x22CDD0u;
            goto label_22cdd0;
        }
    }
    ctx->pc = 0x22CDB0u;
    // 0x22cdb0: 0x3c030035
    ctx->pc = 0x22cdb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x22cdb4: 0x2463f728
    ctx->pc = 0x22cdb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965032));
    // 0x22cdb8: 0x8e020000
    ctx->pc = 0x22cdb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cdbc: 0x210c0
    ctx->pc = 0x22cdbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x22cdc0: 0x621821
    ctx->pc = 0x22cdc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cdc4: 0x26040720
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1824));
    // 0x22cdc8: 0x1000000c
    ctx->pc = 0x22CDC8u;
    {
        const bool branch_taken_0x22cdc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CDCCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        if (branch_taken_0x22cdc8) {
            ctx->pc = 0x22CDFCu;
            goto label_22cdfc;
        }
    }
    ctx->pc = 0x22CDD0u;
label_22cdd0:
    // 0x22cdd0: 0x8e022ac0
    ctx->pc = 0x22cdd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22cdd4: 0x2842001e
    ctx->pc = 0x22cdd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 30));
    // 0x22cdd8: 0x5440000d
    ctx->pc = 0x22CDD8u;
    {
        const bool branch_taken_0x22cdd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22cdd8) {
            ctx->pc = 0x22CDDCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
            ctx->pc = 0x22CE10u;
            goto label_22ce10;
        }
    }
    ctx->pc = 0x22CDE0u;
    // 0x22cde0: 0x3c030035
    ctx->pc = 0x22cde0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x22cde4: 0x2463f728
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965032));
    // 0x22cde8: 0x8e020000
    ctx->pc = 0x22cde8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cdec: 0x210c0
    ctx->pc = 0x22cdecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x22cdf0: 0x431021
    ctx->pc = 0x22cdf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cdf4: 0x26040720
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1824));
    // 0x22cdf8: 0x8c450000
    ctx->pc = 0x22cdf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22cdfc:
    // 0x22cdfc: 0x8e060080
    ctx->pc = 0x22cdfcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22ce00: 0xc08b32c
    ctx->pc = 0x22CE00u;
    SET_GPR_U32(ctx, 31, 0x22CE08u);
    ctx->pc = 0x22CE04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x22CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceTree_0x22ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE08u; }
    }
    if (ctx->pc != 0x22CE08u) { return; }
    ctx->pc = 0x22CE08u;
    // 0x22ce08: 0x10000005
    ctx->pc = 0x22CE08u;
    {
        const bool branch_taken_0x22ce08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CE0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ce08) {
            ctx->pc = 0x22CE20u;
            goto label_22ce20;
        }
    }
    ctx->pc = 0x22CE10u;
label_22ce10:
    // 0x22ce10: 0x10400003
    ctx->pc = 0x22CE10u;
    {
        const bool branch_taken_0x22ce10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ce10) {
            ctx->pc = 0x22CE20u;
            goto label_22ce20;
        }
    }
    ctx->pc = 0x22CE18u;
    // 0x22ce18: 0xc08496c
    ctx->pc = 0x22CE18u;
    SET_GPR_U32(ctx, 31, 0x22CE20u);
    ctx->pc = 0x22CE1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1824));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE20u; }
    }
    if (ctx->pc != 0x22CE20u) { return; }
    ctx->pc = 0x22CE20u;
label_22ce20:
    // 0x22ce20: 0x1220006b
    ctx->pc = 0x22CE20u;
    {
        const bool branch_taken_0x22ce20 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CE24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
        if (branch_taken_0x22ce20) {
            ctx->pc = 0x22CFD0u;
            goto label_22cfd0;
        }
    }
    ctx->pc = 0x22CE28u;
    // 0x22ce28: 0x10800092
    ctx->pc = 0x22CE28u;
    {
        const bool branch_taken_0x22ce28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CE2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x22ce28) {
            ctx->pc = 0x22D074u;
            goto label_22d074;
        }
    }
    ctx->pc = 0x22CE30u;
    // 0x22ce30: 0x8e022ac0
    ctx->pc = 0x22ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x22ce34: 0x28420063
    ctx->pc = 0x22ce34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 99));
    // 0x22ce38: 0x14400037
    ctx->pc = 0x22CE38u;
    {
        const bool branch_taken_0x22ce38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22CE3Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x22ce38) {
            ctx->pc = 0x22CF18u;
            goto label_22cf18;
        }
    }
    ctx->pc = 0x22CE40u;
    // 0x22ce40: 0x24634910
    ctx->pc = 0x22ce40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22ce44: 0x8e020000
    ctx->pc = 0x22ce44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce48: 0x21080
    ctx->pc = 0x22ce48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ce4c: 0x431021
    ctx->pc = 0x22ce4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ce50: 0x8c420000
    ctx->pc = 0x22ce50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ce54: 0xc4400164
    ctx->pc = 0x22ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce58: 0x3c013f99
    ctx->pc = 0x22ce58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x22ce5c: 0x3421999a
    ctx->pc = 0x22ce5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x22ce60: 0x44810800
    ctx->pc = 0x22ce60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x22ce64: 0x46010002
    ctx->pc = 0x22ce64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ce68: 0xe4800010
    ctx->pc = 0x22ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x22ce6c: 0x8e040720
    ctx->pc = 0x22ce6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22ce70: 0x8e020000
    ctx->pc = 0x22ce70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce74: 0x21080
    ctx->pc = 0x22ce74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ce78: 0x431021
    ctx->pc = 0x22ce78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ce7c: 0x8c420000
    ctx->pc = 0x22ce7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ce80: 0xc4400168
    ctx->pc = 0x22ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce84: 0x46010002
    ctx->pc = 0x22ce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ce88: 0xe4800014
    ctx->pc = 0x22ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22ce8c: 0x8e040720
    ctx->pc = 0x22ce8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22ce90: 0x8e020000
    ctx->pc = 0x22ce90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce94: 0x21080
    ctx->pc = 0x22ce94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ce98: 0x431021
    ctx->pc = 0x22ce98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ce9c: 0x8c420000
    ctx->pc = 0x22ce9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cea0: 0xc440016c
    ctx->pc = 0x22cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cea4: 0x46010002
    ctx->pc = 0x22cea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cea8: 0xe4800018
    ctx->pc = 0x22cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22ceac: 0x8e020720
    ctx->pc = 0x22ceacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22ceb0: 0x8c440000
    ctx->pc = 0x22ceb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ceb4: 0x8e020000
    ctx->pc = 0x22ceb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ceb8: 0x21080
    ctx->pc = 0x22ceb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cebc: 0x431021
    ctx->pc = 0x22cebcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cec0: 0x8c420000
    ctx->pc = 0x22cec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cec4: 0xc4400164
    ctx->pc = 0x22cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cec8: 0x46010002
    ctx->pc = 0x22cec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cecc: 0xe4800030
    ctx->pc = 0x22ceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x22ced0: 0x8e020720
    ctx->pc = 0x22ced0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22ced4: 0x8c440000
    ctx->pc = 0x22ced4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ced8: 0x8e020000
    ctx->pc = 0x22ced8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cedc: 0x21080
    ctx->pc = 0x22cedcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cee0: 0x431021
    ctx->pc = 0x22cee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cee4: 0x8c420000
    ctx->pc = 0x22cee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cee8: 0xc4400168
    ctx->pc = 0x22cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ceec: 0x46010002
    ctx->pc = 0x22ceecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cef0: 0xe4800034
    ctx->pc = 0x22cef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x22cef4: 0x8e020720
    ctx->pc = 0x22cef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cef8: 0x8c440000
    ctx->pc = 0x22cef8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cefc: 0x8e020000
    ctx->pc = 0x22cefcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf00: 0x21080
    ctx->pc = 0x22cf00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf04: 0x431021
    ctx->pc = 0x22cf04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf08: 0x8c420000
    ctx->pc = 0x22cf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf0c: 0xc440016c
    ctx->pc = 0x22cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf10: 0x1000002d
    ctx->pc = 0x22CF10u;
    {
        const bool branch_taken_0x22cf10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CF14u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x22cf10) {
            ctx->pc = 0x22CFC8u;
            goto label_22cfc8;
        }
    }
    ctx->pc = 0x22CF18u;
label_22cf18:
    // 0x22cf18: 0x24634910
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22cf1c: 0x8e020000
    ctx->pc = 0x22cf1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf20: 0x21080
    ctx->pc = 0x22cf20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf24: 0x431021
    ctx->pc = 0x22cf24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf28: 0x8c420000
    ctx->pc = 0x22cf28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf2c: 0xc4400164
    ctx->pc = 0x22cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf30: 0xe4800010
    ctx->pc = 0x22cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x22cf34: 0x8e040720
    ctx->pc = 0x22cf34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cf38: 0x8e020000
    ctx->pc = 0x22cf38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf3c: 0x21080
    ctx->pc = 0x22cf3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf40: 0x431021
    ctx->pc = 0x22cf40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf44: 0x8c420000
    ctx->pc = 0x22cf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf48: 0xc4400168
    ctx->pc = 0x22cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf4c: 0xe4800014
    ctx->pc = 0x22cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22cf50: 0x8e040720
    ctx->pc = 0x22cf50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cf54: 0x8e020000
    ctx->pc = 0x22cf54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf58: 0x21080
    ctx->pc = 0x22cf58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf5c: 0x431021
    ctx->pc = 0x22cf5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf60: 0x8c420000
    ctx->pc = 0x22cf60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf64: 0xc440016c
    ctx->pc = 0x22cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf68: 0xe4800018
    ctx->pc = 0x22cf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22cf6c: 0x8e020720
    ctx->pc = 0x22cf6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cf70: 0x8c440000
    ctx->pc = 0x22cf70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf74: 0x8e020000
    ctx->pc = 0x22cf74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf78: 0x21080
    ctx->pc = 0x22cf78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf7c: 0x431021
    ctx->pc = 0x22cf7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cf80: 0x8c420000
    ctx->pc = 0x22cf80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf84: 0xc4400164
    ctx->pc = 0x22cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf88: 0xe4800030
    ctx->pc = 0x22cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x22cf8c: 0x8e020720
    ctx->pc = 0x22cf8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cf90: 0x8c440000
    ctx->pc = 0x22cf90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cf94: 0x8e020000
    ctx->pc = 0x22cf94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cf98: 0x21080
    ctx->pc = 0x22cf98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cf9c: 0x431021
    ctx->pc = 0x22cf9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cfa0: 0x8c420000
    ctx->pc = 0x22cfa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cfa4: 0xc4400168
    ctx->pc = 0x22cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cfa8: 0xe4800034
    ctx->pc = 0x22cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x22cfac: 0x8e020720
    ctx->pc = 0x22cfacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x22cfb0: 0x8c440000
    ctx->pc = 0x22cfb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cfb4: 0x8e020000
    ctx->pc = 0x22cfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cfb8: 0x21080
    ctx->pc = 0x22cfb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cfbc: 0x431021
    ctx->pc = 0x22cfbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cfc0: 0x8c420000
    ctx->pc = 0x22cfc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cfc4: 0xc440016c
    ctx->pc = 0x22cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cfc8:
    // 0x22cfc8: 0xe4800038
    ctx->pc = 0x22cfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x22cfcc: 0x8e040720
    ctx->pc = 0x22cfccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
label_22cfd0:
    // 0x22cfd0: 0x10800027
    ctx->pc = 0x22CFD0u;
    {
        const bool branch_taken_0x22cfd0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CFD4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22cfd0) {
            ctx->pc = 0x22D070u;
            goto label_22d070;
        }
    }
    ctx->pc = 0x22CFD8u;
    // 0x22cfd8: 0x3c020031
    ctx->pc = 0x22cfd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22cfdc: 0x8c430018
    ctx->pc = 0x22cfdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22cfe0: 0x24024010
    ctx->pc = 0x22cfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x22cfe4: 0x1462000e
    ctx->pc = 0x22CFE4u;
    {
        const bool branch_taken_0x22cfe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22CFE8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22cfe4) {
            ctx->pc = 0x22D020u;
            goto label_22d020;
        }
    }
    ctx->pc = 0x22CFECu;
    // 0x22cfec: 0x8e020138
    ctx->pc = 0x22cfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x22cff0: 0x30420080
    ctx->pc = 0x22cff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x22cff4: 0x5040000b
    ctx->pc = 0x22CFF4u;
    {
        const bool branch_taken_0x22cff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22cff4) {
            ctx->pc = 0x22CFF8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
            ctx->pc = 0x22D024u;
            goto label_22d024;
        }
    }
    ctx->pc = 0x22CFFCu;
    // 0x22cffc: 0x8c840000
    ctx->pc = 0x22cffcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d000: 0x24050002
    ctx->pc = 0x22d000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d004: 0x302d
    ctx->pc = 0x22d004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d008: 0xdfbf0030
    ctx->pc = 0x22d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d00c: 0xdfb20020
    ctx->pc = 0x22d00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d010: 0xdfb10010
    ctx->pc = 0x22d010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d014: 0xdfb00000
    ctx->pc = 0x22d014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d018: 0x80b41b8
    ctx->pc = 0x22D018u;
    ctx->pc = 0x22D01Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x22D020u;
label_22d020:
    // 0x22d020: 0x8e020720
    ctx->pc = 0x22d020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
label_22d024:
    // 0x22d024: 0x8c440000
    ctx->pc = 0x22d024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d028: 0x24050002
    ctx->pc = 0x22d028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d02c: 0xc0b41e4
    ctx->pc = 0x22D02Cu;
    SET_GPR_U32(ctx, 31, 0x22D034u);
    ctx->pc = 0x22D030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D034u; }
    }
    if (ctx->pc != 0x22D034u) { return; }
    ctx->pc = 0x22D034u;
    // 0x22d034: 0x8e0208d8
    ctx->pc = 0x22d034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2264)));
    // 0x22d038: 0x3c031000
    ctx->pc = 0x22d038u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x22d03c: 0x431024
    ctx->pc = 0x22d03cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d040: 0x10400003
    ctx->pc = 0x22D040u;
    {
        const bool branch_taken_0x22d040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D044u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1824));
        if (branch_taken_0x22d040) {
            ctx->pc = 0x22D050u;
            goto label_22d050;
        }
    }
    ctx->pc = 0x22D048u;
    // 0x22d048: 0x24120001
    ctx->pc = 0x22d048u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d04c: 0x24110002
    ctx->pc = 0x22d04cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
label_22d050:
    // 0x22d050: 0x240282d
    ctx->pc = 0x22d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d054: 0x220302d
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d058: 0xdfbf0030
    ctx->pc = 0x22d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d05c: 0xdfb20020
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d060: 0xdfb10010
    ctx->pc = 0x22d060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d064: 0xdfb00000
    ctx->pc = 0x22d064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d068: 0x8084a96
    ctx->pc = 0x22D068u;
    ctx->pc = 0x22D06Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x212A58u;
    AnimateATree_0x212a58(rdram, ctx, runtime); return;
    ctx->pc = 0x22D070u;
label_22d070:
    // 0x22d070: 0xdfbf0030
    ctx->pc = 0x22d070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22d074:
    // 0x22d074: 0xdfb20020
    ctx->pc = 0x22d074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d078: 0xdfb10010
    ctx->pc = 0x22d078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d07c: 0xdfb00000
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d080: 0x3e00008
    ctx->pc = 0x22D080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CDD0u: goto label_22cdd0;
            case 0x22CDFCu: goto label_22cdfc;
            case 0x22CE10u: goto label_22ce10;
            case 0x22CE20u: goto label_22ce20;
            case 0x22CF18u: goto label_22cf18;
            case 0x22CFC8u: goto label_22cfc8;
            case 0x22CFD0u: goto label_22cfd0;
            case 0x22D020u: goto label_22d020;
            case 0x22D024u: goto label_22d024;
            case 0x22D050u: goto label_22d050;
            case 0x22D070u: goto label_22d070;
            case 0x22D074u: goto label_22d074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D088u;
}

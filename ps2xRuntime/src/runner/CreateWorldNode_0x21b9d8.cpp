#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateWorldNode
// Address: 0x21b9d8 - 0x21bb40
void CreateWorldNode_0x21b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21b9d8u;

    // 0x21b9d8: 0x27bdffc0
    ctx->pc = 0x21b9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21b9dc: 0xffbf0030
    ctx->pc = 0x21b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21b9e0: 0xffb20020
    ctx->pc = 0x21b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b9e4: 0xffb10010
    ctx->pc = 0x21b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21b9e8: 0xffb00000
    ctx->pc = 0x21b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b9ec: 0xa0882d
    ctx->pc = 0x21b9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9f0: 0x16200004
    ctx->pc = 0x21B9F0u;
    {
        const bool branch_taken_0x21b9f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B9F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b9f0) {
            ctx->pc = 0x21BA04u;
            goto label_21ba04;
        }
    }
    ctx->pc = 0x21B9F8u;
    // 0x21b9f8: 0x3c020032
    ctx->pc = 0x21b9f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21b9fc: 0x10000002
    ctx->pc = 0x21B9FCu;
    {
        const bool branch_taken_0x21b9fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966104)));
        if (branch_taken_0x21b9fc) {
            ctx->pc = 0x21BA08u;
            goto label_21ba08;
        }
    }
    ctx->pc = 0x21BA04u;
label_21ba04:
    // 0x21ba04: 0x8e240028
    ctx->pc = 0x21ba04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21ba08:
    // 0x21ba08: 0x282d
    ctx->pc = 0x21ba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba0c: 0xc0b3ec0
    ctx->pc = 0x21BA0Cu;
    SET_GPR_U32(ctx, 31, 0x21BA14u);
    ctx->pc = 0x21BA10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA14u; }
    }
    if (ctx->pc != 0x21BA14u) { return; }
    ctx->pc = 0x21BA14u;
    // 0x21ba14: 0x40902d
    ctx->pc = 0x21ba14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba18: 0xc600001c
    ctx->pc = 0x21ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba1c: 0xe6400030
    ctx->pc = 0x21ba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x21ba20: 0xc6000020
    ctx->pc = 0x21ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba24: 0xe6400034
    ctx->pc = 0x21ba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x21ba28: 0xc6000024
    ctx->pc = 0x21ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba2c: 0x12200019
    ctx->pc = 0x21BA2Cu;
    {
        const bool branch_taken_0x21ba2c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA30u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        if (branch_taken_0x21ba2c) {
            ctx->pc = 0x21BA94u;
            goto label_21ba94;
        }
    }
    ctx->pc = 0x21BA34u;
    // 0x21ba34: 0x8e020010
    ctx->pc = 0x21ba34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21ba38: 0x3c030100
    ctx->pc = 0x21ba38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x21ba3c: 0x34631000
    ctx->pc = 0x21ba3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4096));
    // 0x21ba40: 0x431024
    ctx->pc = 0x21ba40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ba44: 0x54400014
    ctx->pc = 0x21BA44u;
    {
        const bool branch_taken_0x21ba44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21ba44) {
            ctx->pc = 0x21BA48u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x21BA98u;
            goto label_21ba98;
        }
    }
    ctx->pc = 0x21BA4Cu;
    // 0x21ba4c: 0x8e220010
    ctx->pc = 0x21ba4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21ba50: 0x431024
    ctx->pc = 0x21ba50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ba54: 0x10400003
    ctx->pc = 0x21BA54u;
    {
        const bool branch_taken_0x21ba54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA58u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x21ba54) {
            ctx->pc = 0x21BA64u;
            goto label_21ba64;
        }
    }
    ctx->pc = 0x21BA5Cu;
    // 0x21ba5c: 0xc0b492e
    ctx->pc = 0x21BA5Cu;
    SET_GPR_U32(ctx, 31, 0x21BA64u);
    ctx->pc = 0x21BA60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25488));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA64u; }
    }
    if (ctx->pc != 0x21BA64u) { return; }
    ctx->pc = 0x21BA64u;
label_21ba64:
    // 0x21ba64: 0xc620001c
    ctx->pc = 0x21ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba68: 0xc601001c
    ctx->pc = 0x21ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ba6c: 0x46010000
    ctx->pc = 0x21ba6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba70: 0xe600001c
    ctx->pc = 0x21ba70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x21ba74: 0xc6200020
    ctx->pc = 0x21ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba78: 0xc6010020
    ctx->pc = 0x21ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ba7c: 0x46010000
    ctx->pc = 0x21ba7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba80: 0xe6000020
    ctx->pc = 0x21ba80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x21ba84: 0xc6200024
    ctx->pc = 0x21ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba88: 0xc6010024
    ctx->pc = 0x21ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ba8c: 0x46010000
    ctx->pc = 0x21ba8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba90: 0xe6000024
    ctx->pc = 0x21ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_21ba94:
    // 0x21ba94: 0x8e050018
    ctx->pc = 0x21ba94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_21ba98:
    // 0x21ba98: 0xae110018
    ctx->pc = 0x21ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x21ba9c: 0x240202d
    ctx->pc = 0x21ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21baa0: 0xc0b41b8
    ctx->pc = 0x21BAA0u;
    SET_GPR_U32(ctx, 31, 0x21BAA8u);
    ctx->pc = 0x21BAA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAA8u; }
    }
    if (ctx->pc != 0x21BAA8u) { return; }
    ctx->pc = 0x21BAA8u;
    // 0x21baa8: 0x12200007
    ctx->pc = 0x21BAA8u;
    {
        const bool branch_taken_0x21baa8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BAACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
        if (branch_taken_0x21baa8) {
            ctx->pc = 0x21BAC8u;
            goto label_21bac8;
        }
    }
    ctx->pc = 0x21BAB0u;
    // 0x21bab0: 0x8e220010
    ctx->pc = 0x21bab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21bab4: 0x431024
    ctx->pc = 0x21bab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bab8: 0x10400004
    ctx->pc = 0x21BAB8u;
    {
        const bool branch_taken_0x21bab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BABCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x21bab8) {
            ctx->pc = 0x21BACCu;
            goto label_21bacc;
        }
    }
    ctx->pc = 0x21BAC0u;
    // 0x21bac0: 0x431025
    ctx->pc = 0x21bac0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bac4: 0xae020010
    ctx->pc = 0x21bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_21bac8:
    // 0x21bac8: 0x8e020010
    ctx->pc = 0x21bac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21bacc:
    // 0x21bacc: 0x30421001
    ctx->pc = 0x21baccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4097));
    // 0x21bad0: 0x24030001
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bad4: 0x54430006
    ctx->pc = 0x21BAD4u;
    {
        const bool branch_taken_0x21bad4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21bad4) {
            ctx->pc = 0x21BAD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x21BAF0u;
            goto label_21baf0;
        }
    }
    ctx->pc = 0x21BADCu;
    // 0x21badc: 0x240202d
    ctx->pc = 0x21badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bae0: 0x24050004
    ctx->pc = 0x21bae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x21bae4: 0xc0b41b8
    ctx->pc = 0x21BAE4u;
    SET_GPR_U32(ctx, 31, 0x21BAECu);
    ctx->pc = 0x21BAE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAECu; }
    }
    if (ctx->pc != 0x21BAECu) { return; }
    ctx->pc = 0x21BAECu;
    // 0x21baec: 0x8e020010
    ctx->pc = 0x21baecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21baf0:
    // 0x21baf0: 0x30428000
    ctx->pc = 0x21baf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x21baf4: 0x10400004
    ctx->pc = 0x21BAF4u;
    {
        const bool branch_taken_0x21baf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BAF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21baf4) {
            ctx->pc = 0x21BB08u;
            goto label_21bb08;
        }
    }
    ctx->pc = 0x21BAFCu;
    // 0x21bafc: 0x24050001
    ctx->pc = 0x21bafcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bb00: 0xc0b41b8
    ctx->pc = 0x21BB00u;
    SET_GPR_U32(ctx, 31, 0x21BB08u);
    ctx->pc = 0x21BB04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB08u; }
    }
    if (ctx->pc != 0x21BB08u) { return; }
    ctx->pc = 0x21BB08u;
label_21bb08:
    // 0x21bb08: 0x8e020010
    ctx->pc = 0x21bb08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bb0c: 0x30420400
    ctx->pc = 0x21bb0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x21bb10: 0x10400004
    ctx->pc = 0x21BB10u;
    {
        const bool branch_taken_0x21bb10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BB14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bb10) {
            ctx->pc = 0x21BB24u;
            goto label_21bb24;
        }
    }
    ctx->pc = 0x21BB18u;
    // 0x21bb18: 0x2405fffe
    ctx->pc = 0x21bb18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21bb1c: 0xc0b4096
    ctx->pc = 0x21BB1Cu;
    SET_GPR_U32(ctx, 31, 0x21BB24u);
    ctx->pc = 0x21BB20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB24u; }
    }
    if (ctx->pc != 0x21BB24u) { return; }
    ctx->pc = 0x21BB24u;
label_21bb24:
    // 0x21bb24: 0x240102d
    ctx->pc = 0x21bb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb28: 0xdfbf0030
    ctx->pc = 0x21bb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21bb2c: 0xdfb20020
    ctx->pc = 0x21bb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bb30: 0xdfb10010
    ctx->pc = 0x21bb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bb34: 0xdfb00000
    ctx->pc = 0x21bb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bb38: 0x3e00008
    ctx->pc = 0x21BB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BB3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BA04u: goto label_21ba04;
            case 0x21BA08u: goto label_21ba08;
            case 0x21BA64u: goto label_21ba64;
            case 0x21BA94u: goto label_21ba94;
            case 0x21BA98u: goto label_21ba98;
            case 0x21BAC8u: goto label_21bac8;
            case 0x21BACCu: goto label_21bacc;
            case 0x21BAF0u: goto label_21baf0;
            case 0x21BB08u: goto label_21bb08;
            case 0x21BB24u: goto label_21bb24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BB40u;
}

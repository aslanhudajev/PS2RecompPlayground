#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawGlowText
// Address: 0x202a68 - 0x202c00
void DrawGlowText_0x202a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202a68u;

    // 0x202a68: 0x27bdff80
    ctx->pc = 0x202a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x202a6c: 0xffbf0060
    ctx->pc = 0x202a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x202a70: 0xffb50050
    ctx->pc = 0x202a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x202a74: 0xffb40040
    ctx->pc = 0x202a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x202a78: 0xffb30030
    ctx->pc = 0x202a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x202a7c: 0xffb20020
    ctx->pc = 0x202a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x202a80: 0xffb10010
    ctx->pc = 0x202a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x202a84: 0xffb00000
    ctx->pc = 0x202a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202a88: 0xe7b40070
    ctx->pc = 0x202a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x202a8c: 0x80a82d
    ctx->pc = 0x202a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a90: 0xa0982d
    ctx->pc = 0x202a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a94: 0x46006506
    ctx->pc = 0x202a94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x202a98: 0x3c03003a
    ctx->pc = 0x202a98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x202a9c: 0x3c020031
    ctx->pc = 0x202a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202aa0: 0x8c44f298
    ctx->pc = 0x202aa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963864)));
    // 0x202aa4: 0x42040
    ctx->pc = 0x202aa4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x202aa8: 0x3c020031
    ctx->pc = 0x202aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202aac: 0x8c42f29c
    ctx->pc = 0x202aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963868)));
    // 0x202ab0: 0x821021
    ctx->pc = 0x202ab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202ab4: 0x8c6322f8
    ctx->pc = 0x202ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x202ab8: 0x62001b
    ctx->pc = 0x202ab8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x202abc: 0x1810
    ctx->pc = 0x202abcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x202ac0: 0x50400001
    ctx->pc = 0x202AC0u;
    {
        const bool branch_taken_0x202ac0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202ac0) {
            ctx->pc = 0x202AC4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x202AC8u;
            goto label_202ac8;
        }
    }
    ctx->pc = 0x202AC8u;
label_202ac8:
    // 0x202ac8: 0x60902d
    ctx->pc = 0x202ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202acc: 0x92202a
    ctx->pc = 0x202accu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x202ad0: 0x10800003
    ctx->pc = 0x202AD0u;
    {
        const bool branch_taken_0x202ad0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x202AD4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202ad0) {
            ctx->pc = 0x202AE0u;
            goto label_202ae0;
        }
    }
    ctx->pc = 0x202AD8u;
    // 0x202ad8: 0x10000007
    ctx->pc = 0x202AD8u;
    {
        const bool branch_taken_0x202ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202ADCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202ad8) {
            ctx->pc = 0x202AF8u;
            goto label_202af8;
        }
    }
    ctx->pc = 0x202AE0u;
label_202ae0:
    // 0x202ae0: 0x3c020031
    ctx->pc = 0x202ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202ae4: 0x8c43f298
    ctx->pc = 0x202ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963864)));
    // 0x202ae8: 0x72102a
    ctx->pc = 0x202ae8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x202aec: 0x10400002
    ctx->pc = 0x202AECu;
    {
        const bool branch_taken_0x202aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202AF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x202aec) {
            ctx->pc = 0x202AF8u;
            goto label_202af8;
        }
    }
    ctx->pc = 0x202AF4u;
    // 0x202af4: 0x529023
    ctx->pc = 0x202af4u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_202af8:
    // 0x202af8: 0x4600a306
    ctx->pc = 0x202af8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202afc: 0xc0b1414
    ctx->pc = 0x202AFCu;
    SET_GPR_U32(ctx, 31, 0x202B04u);
    ctx->pc = 0x202B00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B04u; }
    }
    if (ctx->pc != 0x202B04u) { return; }
    ctx->pc = 0x202B04u;
    // 0x202b04: 0xc0b1444
    ctx->pc = 0x202B04u;
    SET_GPR_U32(ctx, 31, 0x202B0Cu);
    ctx->pc = 0x202B08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B0Cu; }
    }
    if (ctx->pc != 0x202B0Cu) { return; }
    ctx->pc = 0x202B0Cu;
    // 0x202b0c: 0x40802d
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b10: 0x3c110031
    ctx->pc = 0x202b10u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x202b14: 0xc0b145e
    ctx->pc = 0x202B14u;
    SET_GPR_U32(ctx, 31, 0x202B1Cu);
    ctx->pc = 0x202B18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294963872)));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B1Cu; }
    }
    if (ctx->pc != 0x202B1Cu) { return; }
    ctx->pc = 0x202B1Cu;
    // 0x202b1c: 0x3c020031
    ctx->pc = 0x202b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202b20: 0xc0b144c
    ctx->pc = 0x202B20u;
    SET_GPR_U32(ctx, 31, 0x202B28u);
    ctx->pc = 0x202B24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963856)));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B28u; }
    }
    if (ctx->pc != 0x202B28u) { return; }
    ctx->pc = 0x202B28u;
    // 0x202b28: 0x122200
    ctx->pc = 0x202b28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 8));
    // 0x202b2c: 0x922023
    ctx->pc = 0x202b2cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x202b30: 0x3c020031
    ctx->pc = 0x202b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202b34: 0x8c42f298
    ctx->pc = 0x202b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963864)));
    // 0x202b38: 0x822021
    ctx->pc = 0x202b38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202b3c: 0x2484ffff
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x202b40: 0x82001a
    ctx->pc = 0x202b40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x202b44: 0x2012
    ctx->pc = 0x202b44u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x202b48: 0x50400001
    ctx->pc = 0x202B48u;
    {
        const bool branch_taken_0x202b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202b48) {
            ctx->pc = 0x202B4Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x202B50u;
            goto label_202b50;
        }
    }
    ctx->pc = 0x202B50u;
label_202b50:
    // 0x202b50: 0x417c2
    ctx->pc = 0x202b50u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x202b54: 0x822021
    ctx->pc = 0x202b54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202b58: 0x42043
    ctx->pc = 0x202b58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x202b5c: 0x2402007f
    ctx->pc = 0x202b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x202b60: 0xc0b1434
    ctx->pc = 0x202B60u;
    SET_GPR_U32(ctx, 31, 0x202B68u);
    ctx->pc = 0x202B64u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B68u; }
    }
    if (ctx->pc != 0x202B68u) { return; }
    ctx->pc = 0x202B68u;
    // 0x202b68: 0x2a0202d
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b6c: 0x260282d
    ctx->pc = 0x202b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b70: 0xc0b135a
    ctx->pc = 0x202B70u;
    SET_GPR_U32(ctx, 31, 0x202B78u);
    ctx->pc = 0x202B74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B78u; }
    }
    if (ctx->pc != 0x202B78u) { return; }
    ctx->pc = 0x202B78u;
    // 0x202b78: 0x3c030031
    ctx->pc = 0x202b78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202b7c: 0x9463f28c
    ctx->pc = 0x202b7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963852)));
    // 0x202b80: 0xa4430026
    ctx->pc = 0x202b80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x202b84: 0xc0b1444
    ctx->pc = 0x202B84u;
    SET_GPR_U32(ctx, 31, 0x202B8Cu);
    ctx->pc = 0x202B88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B8Cu; }
    }
    if (ctx->pc != 0x202B8Cu) { return; }
    ctx->pc = 0x202B8Cu;
    // 0x202b8c: 0x3c0400ff
    ctx->pc = 0x202b8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x202b90: 0xc0b144c
    ctx->pc = 0x202B90u;
    SET_GPR_U32(ctx, 31, 0x202B98u);
    ctx->pc = 0x202B94u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B98u; }
    }
    if (ctx->pc != 0x202B98u) { return; }
    ctx->pc = 0x202B98u;
    // 0x202b98: 0xc0b1434
    ctx->pc = 0x202B98u;
    SET_GPR_U32(ctx, 31, 0x202BA0u);
    ctx->pc = 0x202B9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BA0u; }
    }
    if (ctx->pc != 0x202BA0u) { return; }
    ctx->pc = 0x202BA0u;
    // 0x202ba0: 0x2a0202d
    ctx->pc = 0x202ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba4: 0x260282d
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba8: 0xc0b135a
    ctx->pc = 0x202BA8u;
    SET_GPR_U32(ctx, 31, 0x202BB0u);
    ctx->pc = 0x202BACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BB0u; }
    }
    if (ctx->pc != 0x202BB0u) { return; }
    ctx->pc = 0x202BB0u;
    // 0x202bb0: 0x3c013f80
    ctx->pc = 0x202bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x202bb4: 0x44816000
    ctx->pc = 0x202bb4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x202bb8: 0xc0b1414
    ctx->pc = 0x202BB8u;
    SET_GPR_U32(ctx, 31, 0x202BC0u);
    ctx->pc = 0x202BBCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BC0u; }
    }
    if (ctx->pc != 0x202BC0u) { return; }
    ctx->pc = 0x202BC0u;
    // 0x202bc0: 0x3c100031
    ctx->pc = 0x202bc0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x202bc4: 0x8e24f2a0
    ctx->pc = 0x202bc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294963872)));
    // 0x202bc8: 0xc080570
    ctx->pc = 0x202BC8u;
    SET_GPR_U32(ctx, 31, 0x202BD0u);
    ctx->pc = 0x202BCCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BD0u; }
    }
    if (ctx->pc != 0x202BD0u) { return; }
    ctx->pc = 0x202BD0u;
    // 0x202bd0: 0x2621021
    ctx->pc = 0x202bd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x202bd4: 0xae02f284
    ctx->pc = 0x202bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963844), GPR_U32(ctx, 2));
    // 0x202bd8: 0xdfbf0060
    ctx->pc = 0x202bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202bdc: 0xdfb50050
    ctx->pc = 0x202bdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202be0: 0xdfb40040
    ctx->pc = 0x202be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202be4: 0xdfb30030
    ctx->pc = 0x202be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202be8: 0xdfb20020
    ctx->pc = 0x202be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202bec: 0xdfb10010
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202bf0: 0xdfb00000
    ctx->pc = 0x202bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202bf4: 0xc7b40070
    ctx->pc = 0x202bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202bf8: 0x3e00008
    ctx->pc = 0x202BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202AC8u: goto label_202ac8;
            case 0x202AE0u: goto label_202ae0;
            case 0x202AF8u: goto label_202af8;
            case 0x202B50u: goto label_202b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202C00u;
}

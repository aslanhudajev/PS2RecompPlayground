#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamStartCalc
// Address: 0x2a0af8 - 0x2a0c34
void BossCamStartCalc_0x2a0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0af8u;

    // 0x2a0af8: 0x27bdffa0
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a0afc: 0xffbf0040
    ctx->pc = 0x2a0afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a0b00: 0xffb00030
    ctx->pc = 0x2a0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a0b04: 0xe7b40050
    ctx->pc = 0x2a0b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a0b08: 0x3c020036
    ctx->pc = 0x2a0b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0b0c: 0x8c42d930
    ctx->pc = 0x2a0b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x2a0b10: 0x14400006
    ctx->pc = 0x2A0B10u;
    {
        const bool branch_taken_0x2a0b10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A0B14u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2a0b10) {
            ctx->pc = 0x2A0B2Cu;
            goto label_2a0b2c;
        }
    }
    ctx->pc = 0x2A0B18u;
    // 0x2a0b18: 0x3c04003b
    ctx->pc = 0x2a0b18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a0b1c: 0x2484e568
    ctx->pc = 0x2a0b1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960488));
    // 0x2a0b20: 0xc0b49a6
    ctx->pc = 0x2A0B20u;
    SET_GPR_U32(ctx, 31, 0x2A0B28u);
    ctx->pc = 0x2A0B24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B28u; }
    }
    if (ctx->pc != 0x2A0B28u) { return; }
    ctx->pc = 0x2A0B28u;
    // 0x2a0b28: 0x3c030032
    ctx->pc = 0x2a0b28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2a0b2c:
    // 0x2a0b2c: 0x24020001
    ctx->pc = 0x2a0b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0b30: 0xac62080c
    ctx->pc = 0x2a0b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2060), GPR_U32(ctx, 2));
    // 0x2a0b34: 0x3c020034
    ctx->pc = 0x2a0b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a0b38: 0x8c508b74
    ctx->pc = 0x2a0b38u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    // 0x2a0b3c: 0x3a0202d
    ctx->pc = 0x2a0b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b40: 0x282d
    ctx->pc = 0x2a0b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b44: 0x302d
    ctx->pc = 0x2a0b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b48: 0xc085298
    ctx->pc = 0x2A0B48u;
    SET_GPR_U32(ctx, 31, 0x2A0B50u);
    ctx->pc = 0x2A0B4Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B50u; }
    }
    if (ctx->pc != 0x2A0B50u) { return; }
    ctx->pc = 0x2A0B50u;
    // 0x2a0b50: 0xc7a10000
    ctx->pc = 0x2a0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0b54: 0xc6000010
    ctx->pc = 0x2a0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0b58: 0x46000b01
    ctx->pc = 0x2a0b58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0b5c: 0xe7ac0010
    ctx->pc = 0x2a0b5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a0b60: 0xc7a20004
    ctx->pc = 0x2a0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0b64: 0xc6000014
    ctx->pc = 0x2a0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0b68: 0x46001081
    ctx->pc = 0x2a0b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a0b6c: 0xe7a20014
    ctx->pc = 0x2a0b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a0b70: 0xc7a10008
    ctx->pc = 0x2a0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0b74: 0xc6000018
    ctx->pc = 0x2a0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0b78: 0x46000841
    ctx->pc = 0x2a0b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0b7c: 0xe7a10018
    ctx->pc = 0x2a0b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a0b80: 0x460c6002
    ctx->pc = 0x2a0b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a0b84: 0x46021082
    ctx->pc = 0x2a0b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a0b88: 0x46020000
    ctx->pc = 0x2a0b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0b8c: 0x46010842
    ctx->pc = 0x2a0b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a0b90: 0x46010000
    ctx->pc = 0x2a0b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0b94: 0x0
    ctx->pc = 0x2a0b94u;
    // NOP
    // 0x2a0b98: 0x0
    ctx->pc = 0x2a0b98u;
    // NOP
    // 0x2a0b9c: 0x46000504
    ctx->pc = 0x2a0b9cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a0ba0: 0x4614a032
    ctx->pc = 0x2a0ba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0ba4: 0x0
    ctx->pc = 0x2a0ba4u;
    // NOP
    // 0x2a0ba8: 0x45010007
    ctx->pc = 0x2A0BA8u;
    {
        const bool branch_taken_0x2a0ba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0BACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2a0ba8) {
            ctx->pc = 0x2A0BC8u;
            goto label_2a0bc8;
        }
    }
    ctx->pc = 0x2A0BB0u;
    // 0x2a0bb0: 0x460c6302
    ctx->pc = 0x2a0bb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a0bb4: 0x46026300
    ctx->pc = 0x2a0bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a0bb8: 0xc0ba284
    ctx->pc = 0x2A0BB8u;
    SET_GPR_U32(ctx, 31, 0x2A0BC0u);
    ctx->pc = 0x2A0BBCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BC0u; }
    }
    if (ctx->pc != 0x2A0BC0u) { return; }
    ctx->pc = 0x2A0BC0u;
    // 0x2a0bc0: 0x46000506
    ctx->pc = 0x2a0bc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2a0bc4: 0x27a40010
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_2a0bc8:
    // 0x2a0bc8: 0x27a50020
    ctx->pc = 0x2a0bc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0bcc: 0xc0b59e6
    ctx->pc = 0x2A0BCCu;
    SET_GPR_U32(ctx, 31, 0x2A0BD4u);
    ctx->pc = 0x2A0BD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BD4u; }
    }
    if (ctx->pc != 0x2A0BD4u) { return; }
    ctx->pc = 0x2A0BD4u;
    // 0x2a0bd4: 0x3c020036
    ctx->pc = 0x2a0bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0bd8: 0x8c42dbc0
    ctx->pc = 0x2a0bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0bdc: 0xc7a00000
    ctx->pc = 0x2a0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0be0: 0xe44000a4
    ctx->pc = 0x2a0be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0be4: 0xc7a00004
    ctx->pc = 0x2a0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0be8: 0xe44000a8
    ctx->pc = 0x2a0be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a0bec: 0xc7a00008
    ctx->pc = 0x2a0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0bf0: 0xe44000ac
    ctx->pc = 0x2a0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a0bf4: 0xc7a00000
    ctx->pc = 0x2a0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0bf8: 0xe44000b0
    ctx->pc = 0x2a0bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a0bfc: 0xc7a00004
    ctx->pc = 0x2a0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0c00: 0xe44000b4
    ctx->pc = 0x2a0c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a0c04: 0xc7a00008
    ctx->pc = 0x2a0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0c08: 0xe44000b8
    ctx->pc = 0x2a0c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2a0c0c: 0xc7a00020
    ctx->pc = 0x2a0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0c10: 0xe44000ec
    ctx->pc = 0x2a0c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    // 0x2a0c14: 0xc7a00024
    ctx->pc = 0x2a0c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0c18: 0xe4400104
    ctx->pc = 0x2a0c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a0c1c: 0xe45400f4
    ctx->pc = 0x2a0c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2a0c20: 0xdfbf0040
    ctx->pc = 0x2a0c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0c24: 0xdfb00030
    ctx->pc = 0x2a0c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0c28: 0xc7b40050
    ctx->pc = 0x2a0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0c2c: 0x3e00008
    ctx->pc = 0x2A0C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0B2Cu: goto label_2a0b2c;
            case 0x2A0BC8u: goto label_2a0bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0C34u;
}

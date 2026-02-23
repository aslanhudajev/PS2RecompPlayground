#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSprPutEntry
// Address: 0x1a89f0 - 0x1a8b7c
void nlSprPutEntry_0x1a89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSprPutEntry");


    ctx->pc = 0x1a89f0u;

    // 0x1a89f0: 0x27bdfff0
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a89f4: 0x7fbf0000
    ctx->pc = 0x1a89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a89f8: 0x8f868a44
    ctx->pc = 0x1a89f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
    // 0x1a89fc: 0x8f838a28
    ctx->pc = 0x1a89fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x1a8a00: 0x14c3000d
    ctx->pc = 0x1A8A00u;
    {
        const bool branch_taken_0x1a8a00 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8a00) {
            ctx->pc = 0x1A8A38u;
            goto label_1a8a38;
        }
    }
    ctx->pc = 0x1A8A08u;
    // 0x1a8a08: 0x8f828a30
    ctx->pc = 0x1a8a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1a8a0c: 0x14400006
    ctx->pc = 0x1A8A0Cu;
    {
        const bool branch_taken_0x1a8a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8A10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1a8a0c) {
            ctx->pc = 0x1A8A28u;
            goto label_1a8a28;
        }
    }
    ctx->pc = 0x1A8A14u;
    // 0x1a8a14: 0x70602e28
    ctx->pc = 0x1a8a14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a8a18: 0xc05114a
    ctx->pc = 0x1A8A18u;
    SET_GPR_U32(ctx, 31, 0x1A8A20u);
    ctx->pc = 0x1A8A1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964320));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A20u; }
        else if (ctx->pc != 0x1A8A20u) { ctx->pc = 0x1A8A20u; }
    }
    if (ctx->pc != 0x1A8A20u) { return; }
    ctx->pc = 0x1A8A20u;
label_1a8a20:
    // 0x1a8a20: 0x1000ffff
    ctx->pc = 0x1A8A20u;
    {
        const bool branch_taken_0x1a8a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8a20) {
            ctx->pc = 0x1A8A20u;
            goto label_1a8a20;
        }
    }
    ctx->pc = 0x1A8A28u;
label_1a8a28:
    // 0x1a8a28: 0xc06b750
    ctx->pc = 0x1A8A28u;
    SET_GPR_U32(ctx, 31, 0x1A8A30u);
    ctx->pc = 0x1ADD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutSub_0x1add40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A30u; }
        else if (ctx->pc != 0x1A8A30u) { ctx->pc = 0x1A8A30u; }
    }
    if (ctx->pc != 0x1A8A30u) { return; }
    ctx->pc = 0x1A8A30u;
    // 0x1a8a30: 0x10000050
    ctx->pc = 0x1A8A30u;
    {
        const bool branch_taken_0x1a8a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8A34u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a8a30) {
            ctx->pc = 0x1A8B74u;
            goto label_1a8b74;
        }
    }
    ctx->pc = 0x1A8A38u;
label_1a8a38:
    // 0x1a8a38: 0x8f878a2c
    ctx->pc = 0x1a8a38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x1a8a3c: 0x64200
    ctx->pc = 0x1a8a3cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1a8a40: 0x24c30001
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8a44: 0xaf838a44
    ctx->pc = 0x1a8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 3));
    // 0x1a8a48: 0x24090015
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a8a4c: 0x71201e28
    ctx->pc = 0x1a8a4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1a8a50: 0x24060001
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8a54: 0xe83821
    ctx->pc = 0x1a8a54u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a8a58: 0xace60004
    ctx->pc = 0x1a8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x1a8a5c: 0x24e60010
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a8a60: 0x2529ffff
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a8a64: 0xa4e500f4
    ctx->pc = 0x1a8a64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a8a68: 0x10600009
    ctx->pc = 0x1A8A68u;
    {
        const bool branch_taken_0x1a8a68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8A6Cu;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a8a68) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A8A70u;
label_1a8a70:
    // 0x1a8a70: 0x8c850000
    ctx->pc = 0x1a8a70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8a74: 0x71201e28
    ctx->pc = 0x1a8a74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1a8a78: 0x2529ffff
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a8a7c: 0xad050000
    ctx->pc = 0x1a8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1a8a80: 0x24840004
    ctx->pc = 0x1a8a80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a8a84: 0x1460fffa
    ctx->pc = 0x1A8A84u;
    {
        const bool branch_taken_0x1a8a84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8A88u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x1a8a84) {
            ctx->pc = 0x1A8A70u;
            goto label_1a8a70;
        }
    }
    ctx->pc = 0x1A8A8Cu;
    // 0x1a8a8c: 0x0
    ctx->pc = 0x1a8a8cu;
    // NOP
label_1a8a90:
    // 0x1a8a90: 0xc4c20014
    ctx->pc = 0x1a8a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8a94: 0x44801800
    ctx->pc = 0x1a8a94u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x1a8a98: 0x0
    ctx->pc = 0x1a8a98u;
    // NOP
    // 0x1a8a9c: 0x46031036
    ctx->pc = 0x1a8a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8aa0: 0x0
    ctx->pc = 0x1a8aa0u;
    // NOP
    // 0x1a8aa4: 0x45000003
    ctx->pc = 0x1A8AA4u;
    {
        const bool branch_taken_0x1a8aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8AA8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8aa4) {
            ctx->pc = 0x1A8AB4u;
            goto label_1a8ab4;
        }
    }
    ctx->pc = 0x1A8AACu;
    // 0x1a8aac: 0x10000019
    ctx->pc = 0x1A8AACu;
    {
        const bool branch_taken_0x1a8aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8AB0u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a8aac) {
            ctx->pc = 0x1A8B14u;
            goto label_1a8b14;
        }
    }
    ctx->pc = 0x1A8AB4u;
label_1a8ab4:
    // 0x1a8ab4: 0xc7808a14
    ctx->pc = 0x1a8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8ab8: 0xc7818a18
    ctx->pc = 0x1a8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8abc: 0x46020003
    ctx->pc = 0x1a8abcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1a8ac0: 0x46000847
    ctx->pc = 0x1a8ac0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1a8ac4: 0x0
    ctx->pc = 0x1a8ac4u;
    // NOP
    // 0x1a8ac8: 0x46000840
    ctx->pc = 0x1a8ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8acc: 0x46030834
    ctx->pc = 0x1a8accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8ad0: 0x0
    ctx->pc = 0x1a8ad0u;
    // NOP
    // 0x1a8ad4: 0x45000003
    ctx->pc = 0x1A8AD4u;
    {
        const bool branch_taken_0x1a8ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8AD8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)20352 << 16));
        if (branch_taken_0x1a8ad4) {
            ctx->pc = 0x1A8AE4u;
            goto label_1a8ae4;
        }
    }
    ctx->pc = 0x1A8ADCu;
    // 0x1a8adc: 0x1000000d
    ctx->pc = 0x1A8ADCu;
    {
        const bool branch_taken_0x1a8adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a8adc) {
            ctx->pc = 0x1A8B14u;
            goto label_1a8b14;
        }
    }
    ctx->pc = 0x1A8AE4u;
label_1a8ae4:
    // 0x1a8ae4: 0x44830000
    ctx->pc = 0x1a8ae4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a8ae8: 0x0
    ctx->pc = 0x1a8ae8u;
    // NOP
    // 0x1a8aec: 0x46000834
    ctx->pc = 0x1a8aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8af0: 0x0
    ctx->pc = 0x1a8af0u;
    // NOP
    // 0x1a8af4: 0x45010004
    ctx->pc = 0x1A8AF4u;
    {
        const bool branch_taken_0x1a8af4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8AF8u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a8af4) {
            ctx->pc = 0x1A8B08u;
            goto label_1a8b08;
        }
    }
    ctx->pc = 0x1A8AFCu;
    // 0x1a8afc: 0x2403ffff
    ctx->pc = 0x1a8afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8b00: 0x10000004
    ctx->pc = 0x1A8B00u;
    {
        const bool branch_taken_0x1a8b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8B04u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a8b00) {
            ctx->pc = 0x1A8B14u;
            goto label_1a8b14;
        }
    }
    ctx->pc = 0x1A8B08u;
label_1a8b08:
    // 0x1a8b08: 0x44030000
    ctx->pc = 0x1a8b08u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1a8b0c: 0x0
    ctx->pc = 0x1a8b0cu;
    // NOP
    // 0x1a8b10: 0xace30000
    ctx->pc = 0x1a8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1a8b14:
    // 0x1a8b14: 0x3c010030
    ctx->pc = 0x1a8b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a8b18: 0xc4203970
    ctx->pc = 0x1a8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8b1c: 0x3c030030
    ctx->pc = 0x1a8b1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a8b20: 0x24634090
    ctx->pc = 0x1a8b20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16528));
    // 0x1a8b24: 0xe4e00058
    ctx->pc = 0x1a8b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x1a8b28: 0x3c010030
    ctx->pc = 0x1a8b28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a8b2c: 0xc4203974
    ctx->pc = 0x1a8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8b30: 0xe4e0005c
    ctx->pc = 0x1a8b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 92), bits); }
    // 0x1a8b34: 0x3c010030
    ctx->pc = 0x1a8b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a8b38: 0xc4203978
    ctx->pc = 0x1a8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8b3c: 0xe4e00060
    ctx->pc = 0x1a8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x1a8b40: 0x90e40000
    ctx->pc = 0x1a8b40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a8b44: 0x420c0
    ctx->pc = 0x1a8b44u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a8b48: 0x641821
    ctx->pc = 0x1a8b48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8b4c: 0x8c640004
    ctx->pc = 0x1a8b4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a8b50: 0x14800004
    ctx->pc = 0x1A8B50u;
    {
        const bool branch_taken_0x1a8b50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8b50) {
            ctx->pc = 0x1A8B64u;
            goto label_1a8b64;
        }
    }
    ctx->pc = 0x1A8B58u;
    // 0x1a8b58: 0xac670004
    ctx->pc = 0x1a8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x1a8b5c: 0x10000003
    ctx->pc = 0x1A8B5Cu;
    {
        const bool branch_taken_0x1a8b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8B60u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x1a8b5c) {
            ctx->pc = 0x1A8B6Cu;
            goto label_1a8b6c;
        }
    }
    ctx->pc = 0x1A8B64u;
label_1a8b64:
    // 0x1a8b64: 0xac8700f0
    ctx->pc = 0x1a8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 7));
    // 0x1a8b68: 0xac670004
    ctx->pc = 0x1a8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_1a8b6c:
    // 0x1a8b6c: 0xace000f0
    ctx->pc = 0x1a8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x1a8b70: 0x7bbf0000
    ctx->pc = 0x1a8b70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8b74:
    // 0x1a8b74: 0x3e00008
    ctx->pc = 0x1A8B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8A20u: goto label_1a8a20;
            case 0x1A8A28u: goto label_1a8a28;
            case 0x1A8A38u: goto label_1a8a38;
            case 0x1A8A70u: goto label_1a8a70;
            case 0x1A8A90u: goto label_1a8a90;
            case 0x1A8AB4u: goto label_1a8ab4;
            case 0x1A8AE4u: goto label_1a8ae4;
            case 0x1A8B08u: goto label_1a8b08;
            case 0x1A8B14u: goto label_1a8b14;
            case 0x1A8B64u: goto label_1a8b64;
            case 0x1A8B6Cu: goto label_1a8b6c;
            case 0x1A8B74u: goto label_1a8b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8B7Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritGetTgtPrintInfo
// Address: 0x297c80 - 0x297db0
void CritGetTgtPrintInfo_0x297c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297c80u;

    // 0x297c80: 0x27bdffa0
    ctx->pc = 0x297c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x297c84: 0xffbf0040
    ctx->pc = 0x297c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297c88: 0xffb30030
    ctx->pc = 0x297c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297c8c: 0xffb20020
    ctx->pc = 0x297c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297c90: 0xffb10010
    ctx->pc = 0x297c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297c94: 0xffb00000
    ctx->pc = 0x297c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297c98: 0xe7b50058
    ctx->pc = 0x297c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x297c9c: 0xe7b40050
    ctx->pc = 0x297c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x297ca0: 0x80802d
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca4: 0xa0902d
    ctx->pc = 0x297ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca8: 0xc0982d
    ctx->pc = 0x297ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cac: 0xe0882d
    ctx->pc = 0x297cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb0: 0x3c01bf80
    ctx->pc = 0x297cb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x297cb4: 0x4481a800
    ctx->pc = 0x297cb4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x297cb8: 0x86020136
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x297cbc: 0x18400021
    ctx->pc = 0x297CBCu;
    {
        const bool branch_taken_0x297cbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297CC0u;
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x297cbc) {
            ctx->pc = 0x297D44u;
            goto label_297d44;
        }
    }
    ctx->pc = 0x297CC4u;
    // 0x297cc4: 0xc6150148
    ctx->pc = 0x297cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297cc8: 0x3c016258
    ctx->pc = 0x297cc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x297ccc: 0x3421d727
    ctx->pc = 0x297cccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x297cd0: 0x44810000
    ctx->pc = 0x297cd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297cd4: 0x46150036
    ctx->pc = 0x297cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297cd8: 0x0
    ctx->pc = 0x297cd8u;
    // NOP
    // 0x297cdc: 0x45030001
    ctx->pc = 0x297CDCu;
    {
        const bool branch_taken_0x297cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297cdc) {
            ctx->pc = 0x297CE0u;
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x297CE4u;
            goto label_297ce4;
        }
    }
    ctx->pc = 0x297CE4u;
label_297ce4:
    // 0x297ce4: 0xc6000144
    ctx->pc = 0x297ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ce8: 0x3c01bf80
    ctx->pc = 0x297ce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x297cec: 0x44816000
    ctx->pc = 0x297cecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x297cf0: 0x460c0034
    ctx->pc = 0x297cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297cf4: 0x0
    ctx->pc = 0x297cf4u;
    // NOP
    // 0x297cf8: 0x45010009
    ctx->pc = 0x297CF8u;
    {
        const bool branch_taken_0x297cf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x297CFCu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x297cf8) {
            ctx->pc = 0x297D20u;
            goto label_297d20;
        }
    }
    ctx->pc = 0x297D00u;
    // 0x297d00: 0xc6010144
    ctx->pc = 0x297d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d04: 0x3c013f80
    ctx->pc = 0x297d04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x297d08: 0x44810000
    ctx->pc = 0x297d08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297d0c: 0x46010034
    ctx->pc = 0x297d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297d10: 0x0
    ctx->pc = 0x297d10u;
    // NOP
    // 0x297d14: 0x45010002
    ctx->pc = 0x297D14u;
    {
        const bool branch_taken_0x297d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x297D18u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x297d14) {
            ctx->pc = 0x297D20u;
            goto label_297d20;
        }
    }
    ctx->pc = 0x297D1Cu;
    // 0x297d1c: 0x46000d06
    ctx->pc = 0x297d1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_297d20:
    // 0x297d20: 0xc0ba00a
    ctx->pc = 0x297D20u;
    SET_GPR_U32(ctx, 31, 0x297D28u);
    ctx->pc = 0x297D24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E8028u;
    {
        const uint32_t __entryPc = ctx->pc;
        acosf_0x2e8028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D28u; }
    }
    if (ctx->pc != 0x297D28u) { return; }
    ctx->pc = 0x297D28u;
    // 0x297d28: 0x3c014334
    ctx->pc = 0x297d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x297d2c: 0x44810800
    ctx->pc = 0x297d2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x297d30: 0x46010502
    ctx->pc = 0x297d30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297d34: 0x3c013ea2
    ctx->pc = 0x297d34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x297d38: 0x3421f983
    ctx->pc = 0x297d38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x297d3c: 0x44810000
    ctx->pc = 0x297d3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297d40: 0x4600a502
    ctx->pc = 0x297d40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_297d44:
    // 0x297d44: 0x86060128
    ctx->pc = 0x297d44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x297d48: 0x4c00006
    ctx->pc = 0x297D48u;
    {
        const bool branch_taken_0x297d48 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x297D4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297d48) {
            ctx->pc = 0x297D64u;
            goto label_297d64;
        }
    }
    ctx->pc = 0x297D50u;
    // 0x297d50: 0x3c05003b
    ctx->pc = 0x297d50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x297d54: 0xc0b6252
    ctx->pc = 0x297D54u;
    SET_GPR_U32(ctx, 31, 0x297D5Cu);
    ctx->pc = 0x297D58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959952));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D5Cu; }
    }
    if (ctx->pc != 0x297D5Cu) { return; }
    ctx->pc = 0x297D5Cu;
    // 0x297d5c: 0x1000000a
    ctx->pc = 0x297D5Cu;
    {
        const bool branch_taken_0x297d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297D60u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x297d5c) {
            ctx->pc = 0x297D88u;
            goto label_297d88;
        }
    }
    ctx->pc = 0x297D64u;
label_297d64:
    // 0x297d64: 0x3c02003b
    ctx->pc = 0x297d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x297d68: 0x2446e358
    ctx->pc = 0x297d68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294959960));
    // 0x297d6c: 0x80c30000
    ctx->pc = 0x297d6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x297d70: 0x80c40001
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x297d74: 0x80c50002
    ctx->pc = 0x297d74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x297d78: 0xa2230000
    ctx->pc = 0x297d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297d7c: 0xa2240001
    ctx->pc = 0x297d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x297d80: 0xa2250002
    ctx->pc = 0x297d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x297d84: 0xe6540000
    ctx->pc = 0x297d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_297d88:
    // 0x297d88: 0xe6750000
    ctx->pc = 0x297d88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x297d8c: 0xdfbf0040
    ctx->pc = 0x297d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297d90: 0xdfb30030
    ctx->pc = 0x297d90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297d94: 0xdfb20020
    ctx->pc = 0x297d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297d98: 0xdfb10010
    ctx->pc = 0x297d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297d9c: 0xdfb00000
    ctx->pc = 0x297d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297da0: 0xc7b50058
    ctx->pc = 0x297da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297da4: 0xc7b40050
    ctx->pc = 0x297da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297da8: 0x3e00008
    ctx->pc = 0x297DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297CE4u: goto label_297ce4;
            case 0x297D20u: goto label_297d20;
            case 0x297D44u: goto label_297d44;
            case 0x297D64u: goto label_297d64;
            case 0x297D88u: goto label_297d88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297DB0u;
}

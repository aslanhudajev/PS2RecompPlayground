#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Collision
// Address: 0x1a2c80 - 0x1a3210
void Collision_0x1a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Collision");


    ctx->pc = 0x1a2c80u;

    // 0x1a2c80: 0x27bdffd0
    ctx->pc = 0x1a2c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2c84: 0xe7bc0020
    ctx->pc = 0x1a2c84u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a2c88: 0xe7bb001c
    ctx->pc = 0x1a2c88u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a2c8c: 0xe7ba0018
    ctx->pc = 0x1a2c8cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a2c90: 0xe7b90014
    ctx->pc = 0x1a2c90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a2c94: 0xe7b80010
    ctx->pc = 0x1a2c94u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2c98: 0xe7b7000c
    ctx->pc = 0x1a2c98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a2c9c: 0xe7b60008
    ctx->pc = 0x1a2c9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a2ca0: 0xe7b50004
    ctx->pc = 0x1a2ca0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2ca4: 0xe7b40000
    ctx->pc = 0x1a2ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2ca8: 0x8f898954
    ctx->pc = 0x1a2ca8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x1a2cac: 0x460f6034
    ctx->pc = 0x1a2cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2cb0: 0xaf808958
    ctx->pc = 0x1a2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 0));
    // 0x1a2cb4: 0x45010004
    ctx->pc = 0x1A2CB4u;
    {
        const bool branch_taken_0x1a2cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CB8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2cb4) {
            ctx->pc = 0x1A2CC8u;
            goto label_1a2cc8;
        }
    }
    ctx->pc = 0x1A2CBCu;
    // 0x1a2cbc: 0x46006046
    ctx->pc = 0x1a2cbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2cc0: 0x10000003
    ctx->pc = 0x1A2CC0u;
    {
        const bool branch_taken_0x1a2cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2CC4u;
        ctx->f[2] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x1a2cc0) {
            ctx->pc = 0x1A2CD0u;
            goto label_1a2cd0;
        }
    }
    ctx->pc = 0x1A2CC8u;
label_1a2cc8:
    // 0x1a2cc8: 0x46007846
    ctx->pc = 0x1a2cc8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[15]);
    // 0x1a2ccc: 0x46006086
    ctx->pc = 0x1a2cccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_1a2cd0:
    // 0x1a2cd0: 0x46106834
    ctx->pc = 0x1a2cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2cd4: 0x0
    ctx->pc = 0x1a2cd4u;
    // NOP
    // 0x1a2cd8: 0x45010004
    ctx->pc = 0x1A2CD8u;
    {
        const bool branch_taken_0x1a2cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CDCu;
        ctx->f[3] = FPU_MOV_S(ctx->f[16]);
        if (branch_taken_0x1a2cd8) {
            ctx->pc = 0x1A2CECu;
            goto label_1a2cec;
        }
    }
    ctx->pc = 0x1A2CE0u;
    // 0x1a2ce0: 0x460068c6
    ctx->pc = 0x1a2ce0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[13]);
    // 0x1a2ce4: 0x10000002
    ctx->pc = 0x1A2CE4u;
    {
        const bool branch_taken_0x1a2ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2CE8u;
        ctx->f[4] = FPU_MOV_S(ctx->f[16]);
        if (branch_taken_0x1a2ce4) {
            ctx->pc = 0x1A2CF0u;
            goto label_1a2cf0;
        }
    }
    ctx->pc = 0x1A2CECu;
label_1a2cec:
    // 0x1a2cec: 0x46006906
    ctx->pc = 0x1a2cecu;
    ctx->f[4] = FPU_MOV_S(ctx->f[13]);
label_1a2cf0:
    // 0x1a2cf0: 0x46117034
    ctx->pc = 0x1a2cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2cf4: 0x0
    ctx->pc = 0x1a2cf4u;
    // NOP
    // 0x1a2cf8: 0x45010004
    ctx->pc = 0x1A2CF8u;
    {
        const bool branch_taken_0x1a2cf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CFCu;
        ctx->f[5] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a2cf8) {
            ctx->pc = 0x1A2D0Cu;
            goto label_1a2d0c;
        }
    }
    ctx->pc = 0x1A2D00u;
    // 0x1a2d00: 0x46007146
    ctx->pc = 0x1a2d00u;
    ctx->f[5] = FPU_MOV_S(ctx->f[14]);
    // 0x1a2d04: 0x10000002
    ctx->pc = 0x1A2D04u;
    {
        const bool branch_taken_0x1a2d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2D08u;
        ctx->f[6] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a2d04) {
            ctx->pc = 0x1A2D10u;
            goto label_1a2d10;
        }
    }
    ctx->pc = 0x1A2D0Cu;
label_1a2d0c:
    // 0x1a2d0c: 0x46007186
    ctx->pc = 0x1a2d0cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[14]);
label_1a2d10:
    // 0x1a2d10: 0x8c870000
    ctx->pc = 0x1a2d10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2d14: 0x24e7ffff
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a2d18: 0x4e00131
    ctx->pc = 0x1A2D18u;
    {
        const bool branch_taken_0x1a2d18 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1A2D1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1a2d18) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0x70805e28
    ctx->pc = 0x1a2d20u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a2d24: 0x256b0004
    ctx->pc = 0x1a2d24u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x1a2d28: 0xc5600000
    ctx->pc = 0x1a2d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d2c: 0x8c880000
    ctx->pc = 0x1a2d2cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2d30: 0x46020034
    ctx->pc = 0x1a2d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d34: 0x0
    ctx->pc = 0x1a2d34u;
    // NOP
    // 0x1a2d38: 0x45010121
    ctx->pc = 0x1A2D38u;
    {
        const bool branch_taken_0x1a2d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D3Cu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d38) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2D40u;
    // 0x1a2d40: 0xc5600000
    ctx->pc = 0x1a2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d44: 0x46040034
    ctx->pc = 0x1a2d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d48: 0x0
    ctx->pc = 0x1a2d48u;
    // NOP
    // 0x1a2d4c: 0x4501011c
    ctx->pc = 0x1A2D4Cu;
    {
        const bool branch_taken_0x1a2d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D50u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d4c) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2D54u;
    // 0x1a2d54: 0xc5600000
    ctx->pc = 0x1a2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d58: 0x46060034
    ctx->pc = 0x1a2d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d5c: 0x0
    ctx->pc = 0x1a2d5cu;
    // NOP
    // 0x1a2d60: 0x45010117
    ctx->pc = 0x1A2D60u;
    {
        const bool branch_taken_0x1a2d60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D64u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d60) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2D68u;
    // 0x1a2d68: 0xc5600000
    ctx->pc = 0x1a2d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d6c: 0x46010036
    ctx->pc = 0x1a2d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d70: 0x0
    ctx->pc = 0x1a2d70u;
    // NOP
    // 0x1a2d74: 0x45000112
    ctx->pc = 0x1A2D74u;
    {
        const bool branch_taken_0x1a2d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D78u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d74) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2D7Cu;
    // 0x1a2d7c: 0xc5600000
    ctx->pc = 0x1a2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d80: 0x46030036
    ctx->pc = 0x1a2d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d84: 0x0
    ctx->pc = 0x1a2d84u;
    // NOP
    // 0x1a2d88: 0x4500010d
    ctx->pc = 0x1A2D88u;
    {
        const bool branch_taken_0x1a2d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D8Cu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d88) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2D90u;
    // 0x1a2d90: 0xc5600000
    ctx->pc = 0x1a2d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2d94: 0x46050036
    ctx->pc = 0x1a2d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2d98: 0x0
    ctx->pc = 0x1a2d98u;
    // NOP
    // 0x1a2d9c: 0x45000108
    ctx->pc = 0x1A2D9Cu;
    {
        const bool branch_taken_0x1a2d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2DA0u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1a2d9c) {
            ctx->pc = 0x1A31C0u;
            goto label_1a31c0;
        }
    }
    ctx->pc = 0x1A2DA4u;
    // 0x1a2da4: 0x250affff
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a2da8: 0x5400106
    ctx->pc = 0x1A2DA8u;
    {
        const bool branch_taken_0x1a2da8 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x1A2DACu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 3));
        if (branch_taken_0x1a2da8) {
            ctx->pc = 0x1A31C4u;
            goto label_1a31c4;
        }
    }
    ctx->pc = 0x1A2DB0u;
label_1a2db0:
    // 0x1a2db0: 0xc5680000
    ctx->pc = 0x1a2db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2db4: 0xc5690004
    ctx->pc = 0x1a2db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a2db8: 0xc56a0008
    ctx->pc = 0x1a2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a2dbc: 0xc56b000c
    ctx->pc = 0x1a2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a2dc0: 0x44809800
    ctx->pc = 0x1a2dc0u;
    *(uint32_t*)&ctx->f[19] = GPR_U32(ctx, 0);
    // 0x1a2dc4: 0x460c4482
    ctx->pc = 0x1a2dc4u;
    ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x1a2dc8: 0x460d4802
    ctx->pc = 0x1a2dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x1a2dcc: 0x46009018
    ctx->pc = 0x1a2dccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[18], ctx->f[0]);
    // 0x1a2dd0: 0x460e501c
    ctx->pc = 0x1a2dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[14]));
    // 0x1a2dd4: 0x46005d00
    ctx->pc = 0x1a2dd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1a2dd8: 0x4613a036
    ctx->pc = 0x1a2dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2ddc: 0x0
    ctx->pc = 0x1a2ddcu;
    // NOP
    // 0x1a2de0: 0x4501000f
    ctx->pc = 0x1A2DE0u;
    {
        const bool branch_taken_0x1a2de0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2DE4u;
        ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
        if (branch_taken_0x1a2de0) {
            ctx->pc = 0x1A2E20u;
            goto label_1a2e20;
        }
    }
    ctx->pc = 0x1A2DE8u;
    // 0x1a2de8: 0x512000f2
    ctx->pc = 0x1A2DE8u;
    {
        const bool branch_taken_0x1a2de8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2de8) {
            ctx->pc = 0x1A2DECu;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
            ctx->pc = 0x1A31B4u;
            goto label_1a31b4;
        }
    }
    ctx->pc = 0x1A2DF0u;
    // 0x1a2df0: 0x460f4482
    ctx->pc = 0x1a2df0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
    // 0x1a2df4: 0x46104802
    ctx->pc = 0x1a2df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
    // 0x1a2df8: 0x46009018
    ctx->pc = 0x1a2df8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[18], ctx->f[0]);
    // 0x1a2dfc: 0x4611501c
    ctx->pc = 0x1a2dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[17]));
    // 0x1a2e00: 0x46005800
    ctx->pc = 0x1a2e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1a2e04: 0x46130034
    ctx->pc = 0x1a2e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2e08: 0x0
    ctx->pc = 0x1a2e08u;
    // NOP
    // 0x1a2e0c: 0x450000e8
    ctx->pc = 0x1A2E0Cu;
    {
        const bool branch_taken_0x1a2e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2E10u;
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x1a2e0c) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2E14u;
    // 0x1a2e14: 0x1000000f
    ctx->pc = 0x1A2E14u;
    {
        const bool branch_taken_0x1a2e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2E18u;
        ctx->f[19] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        if (branch_taken_0x1a2e14) {
            ctx->pc = 0x1A2E54u;
            goto label_1a2e54;
        }
    }
    ctx->pc = 0x1A2E1Cu;
    // 0x1a2e1c: 0x460f4482
    ctx->pc = 0x1a2e1cu;
    ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
label_1a2e20:
    // 0x1a2e20: 0x46104802
    ctx->pc = 0x1a2e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
    // 0x1a2e24: 0x46009018
    ctx->pc = 0x1a2e24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[18], ctx->f[0]);
    // 0x1a2e28: 0x4611501c
    ctx->pc = 0x1a2e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[17]));
    // 0x1a2e2c: 0x46005d80
    ctx->pc = 0x1a2e2cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1a2e30: 0x44800000
    ctx->pc = 0x1a2e30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a2e34: 0x0
    ctx->pc = 0x1a2e34u;
    // NOP
    // 0x1a2e38: 0x4600b036
    ctx->pc = 0x1a2e38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2e3c: 0x0
    ctx->pc = 0x1a2e3cu;
    // NOP
    // 0x1a2e40: 0x450100db
    ctx->pc = 0x1A2E40u;
    {
        const bool branch_taken_0x1a2e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2e40) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2E48u;
    // 0x1a2e48: 0x4600a507
    ctx->pc = 0x1a2e48u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x1a2e4c: 0x0
    ctx->pc = 0x1a2e4cu;
    // NOP
    // 0x1a2e50: 0x4616a4c0
    ctx->pc = 0x1a2e50u;
    ctx->f[19] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_1a2e54:
    // 0x1a2e54: 0x3c063f80
    ctx->pc = 0x1a2e54u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x1a2e58: 0x8d650010
    ctx->pc = 0x1a2e58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1a2e5c: 0x24030002
    ctx->pc = 0x1a2e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2e60: 0x44869000
    ctx->pc = 0x1a2e60u;
    *(uint32_t*)&ctx->f[18] = GPR_U32(ctx, 6);
    // 0x1a2e64: 0x460fa01a
    ctx->pc = 0x1a2e64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[15]);
    // 0x1a2e68: 0x46139543
    ctx->pc = 0x1a2e68u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[18] * 0.0f); } else ctx->f[21] = ctx->f[18] / ctx->f[19];
    // 0x1a2e6c: 0x460cb01c
    ctx->pc = 0x1a2e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[12]));
    // 0x1a2e70: 0x4600ac82
    ctx->pc = 0x1a2e70u;
    ctx->f[18] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1a2e74: 0x4610a01a
    ctx->pc = 0x1a2e74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[16]);
    // 0x1a2e78: 0x460db01c
    ctx->pc = 0x1a2e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[13]));
    // 0x1a2e7c: 0x4600acc2
    ctx->pc = 0x1a2e7cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1a2e80: 0x4611a01a
    ctx->pc = 0x1a2e80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[17]);
    // 0x1a2e84: 0x460eb01c
    ctx->pc = 0x1a2e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[14]));
    // 0x1a2e88: 0x10a30074
    ctx->pc = 0x1A2E88u;
    {
        const bool branch_taken_0x1a2e88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2E8Cu;
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x1a2e88) {
            ctx->pc = 0x1A305Cu;
            goto label_1a305c;
        }
    }
    ctx->pc = 0x1A2E90u;
    // 0x1a2e90: 0x24030001
    ctx->pc = 0x1a2e90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e94: 0x10a3003b
    ctx->pc = 0x1A2E94u;
    {
        const bool branch_taken_0x1a2e94 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a2e94) {
            ctx->pc = 0x1A2F84u;
            goto label_1a2f84;
        }
    }
    ctx->pc = 0x1A2E9Cu;
    // 0x1a2e9c: 0x10a00003
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EACu;
            goto label_1a2eac;
        }
    }
    ctx->pc = 0x1A2EA4u;
    // 0x1a2ea4: 0x100000a2
    ctx->pc = 0x1A2EA4u;
    {
        const bool branch_taken_0x1a2ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2ea4) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A2EACu;
label_1a2eac:
    // 0x1a2eac: 0xc575001c
    ctx->pc = 0x1a2eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2eb0: 0xc5760018
    ctx->pc = 0x1a2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a2eb4: 0xc5780028
    ctx->pc = 0x1a2eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a2eb8: 0xc5770024
    ctx->pc = 0x1a2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a2ebc: 0x44800000
    ctx->pc = 0x1a2ebcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a2ec0: 0x4614ae41
    ctx->pc = 0x1a2ec0u;
    ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x1a2ec4: 0x4615c6c1
    ctx->pc = 0x1a2ec4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x1a2ec8: 0x4613b681
    ctx->pc = 0x1a2ec8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[22], ctx->f[19]);
    // 0x1a2ecc: 0x461bd01a
    ctx->pc = 0x1a2eccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[27]);
    // 0x1a2ed0: 0x4616be81
    ctx->pc = 0x1a2ed0u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x1a2ed4: 0x461ace5d
    ctx->pc = 0x1a2ed4u;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[26]));
    // 0x1a2ed8: 0x46194642
    ctx->pc = 0x1a2ed8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[8], ctx->f[25]);
    // 0x1a2edc: 0x4600c834
    ctx->pc = 0x1a2edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2ee0: 0x0
    ctx->pc = 0x1a2ee0u;
    // NOP
    // 0x1a2ee4: 0x450100b2
    ctx->pc = 0x1A2EE4u;
    {
        const bool branch_taken_0x1a2ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2ee4) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2EECu;
    // 0x1a2eec: 0xc57a0034
    ctx->pc = 0x1a2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1a2ef0: 0xc5790030
    ctx->pc = 0x1a2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a2ef4: 0x4614c6c1
    ctx->pc = 0x1a2ef4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x1a2ef8: 0x4613bf01
    ctx->pc = 0x1a2ef8u;
    ctx->f[28] = FPU_SUB_S(ctx->f[23], ctx->f[19]);
    // 0x1a2efc: 0x4618d601
    ctx->pc = 0x1a2efcu;
    ctx->f[24] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x1a2f00: 0x4617cdc1
    ctx->pc = 0x1a2f00u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a2f04: 0x4618e01a
    ctx->pc = 0x1a2f04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[24]);
    // 0x1a2f08: 0x4617dddd
    ctx->pc = 0x1a2f08u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[23]));
    // 0x1a2f0c: 0x461745c2
    ctx->pc = 0x1a2f0cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[8], ctx->f[23]);
    // 0x1a2f10: 0x4600b834
    ctx->pc = 0x1a2f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2f14: 0x0
    ctx->pc = 0x1a2f14u;
    // NOP
    // 0x1a2f18: 0x450100a5
    ctx->pc = 0x1A2F18u;
    {
        const bool branch_taken_0x1a2f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2f18) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2F20u;
    // 0x1a2f20: 0xc5780040
    ctx->pc = 0x1a2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a2f24: 0xc577003c
    ctx->pc = 0x1a2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a2f28: 0x4614d6c1
    ctx->pc = 0x1a2f28u;
    ctx->f[27] = FPU_SUB_S(ctx->f[26], ctx->f[20]);
    // 0x1a2f2c: 0x4613cf01
    ctx->pc = 0x1a2f2cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[25], ctx->f[19]);
    // 0x1a2f30: 0x461ac681
    ctx->pc = 0x1a2f30u;
    ctx->f[26] = FPU_SUB_S(ctx->f[24], ctx->f[26]);
    // 0x1a2f34: 0x4619be41
    ctx->pc = 0x1a2f34u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a2f38: 0x461ae01a
    ctx->pc = 0x1a2f38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x1a2f3c: 0x4619de5d
    ctx->pc = 0x1a2f3cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[25]));
    // 0x1a2f40: 0x46194642
    ctx->pc = 0x1a2f40u;
    ctx->f[25] = FPU_MUL_S(ctx->f[8], ctx->f[25]);
    // 0x1a2f44: 0x4600c834
    ctx->pc = 0x1a2f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2f48: 0x0
    ctx->pc = 0x1a2f48u;
    // NOP
    // 0x1a2f4c: 0x45010098
    ctx->pc = 0x1A2F4Cu;
    {
        const bool branch_taken_0x1a2f4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2F50u;
        ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
        if (branch_taken_0x1a2f4c) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2F54u;
    // 0x1a2f54: 0x4617b541
    ctx->pc = 0x1a2f54u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1a2f58: 0x4613bd81
    ctx->pc = 0x1a2f58u;
    ctx->f[22] = FPU_SUB_S(ctx->f[23], ctx->f[19]);
    // 0x1a2f5c: 0x4614c601
    ctx->pc = 0x1a2f5cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x1a2f60: 0x4619b01a
    ctx->pc = 0x1a2f60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1a2f64: 0x4615c55d
    ctx->pc = 0x1a2f64u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[21]));
    // 0x1a2f68: 0x46154542
    ctx->pc = 0x1a2f68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x1a2f6c: 0x4600a834
    ctx->pc = 0x1a2f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2f70: 0x0
    ctx->pc = 0x1a2f70u;
    // NOP
    // 0x1a2f74: 0x4501008e
    ctx->pc = 0x1A2F74u;
    {
        const bool branch_taken_0x1a2f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2f74) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2F7Cu;
    // 0x1a2f7c: 0x1000006c
    ctx->pc = 0x1A2F7Cu;
    {
        const bool branch_taken_0x1a2f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2f7c) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A2F84u;
label_1a2f84:
    // 0x1a2f84: 0xc5750014
    ctx->pc = 0x1a2f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2f88: 0xc576001c
    ctx->pc = 0x1a2f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a2f8c: 0xc5780020
    ctx->pc = 0x1a2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a2f90: 0xc5770028
    ctx->pc = 0x1a2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a2f94: 0x44800000
    ctx->pc = 0x1a2f94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a2f98: 0x4612ae41
    ctx->pc = 0x1a2f98u;
    ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[18]);
    // 0x1a2f9c: 0x4615c6c1
    ctx->pc = 0x1a2f9cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x1a2fa0: 0x4614b681
    ctx->pc = 0x1a2fa0u;
    ctx->f[26] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x1a2fa4: 0x461bd01a
    ctx->pc = 0x1a2fa4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[27]);
    // 0x1a2fa8: 0x4616be81
    ctx->pc = 0x1a2fa8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x1a2fac: 0x461ace5d
    ctx->pc = 0x1a2facu;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[26]));
    // 0x1a2fb0: 0x46194e42
    ctx->pc = 0x1a2fb0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[9], ctx->f[25]);
    // 0x1a2fb4: 0x4600c834
    ctx->pc = 0x1a2fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2fb8: 0x0
    ctx->pc = 0x1a2fb8u;
    // NOP
    // 0x1a2fbc: 0x4501007c
    ctx->pc = 0x1A2FBCu;
    {
        const bool branch_taken_0x1a2fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2fbc) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2FC4u;
    // 0x1a2fc4: 0xc57a002c
    ctx->pc = 0x1a2fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1a2fc8: 0xc5790034
    ctx->pc = 0x1a2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a2fcc: 0x4612c6c1
    ctx->pc = 0x1a2fccu;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[18]);
    // 0x1a2fd0: 0x4614bf01
    ctx->pc = 0x1a2fd0u;
    ctx->f[28] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x1a2fd4: 0x4618d601
    ctx->pc = 0x1a2fd4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x1a2fd8: 0x4617cdc1
    ctx->pc = 0x1a2fd8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a2fdc: 0x4618e01a
    ctx->pc = 0x1a2fdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[24]);
    // 0x1a2fe0: 0x4617dddd
    ctx->pc = 0x1a2fe0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[23]));
    // 0x1a2fe4: 0x46174dc2
    ctx->pc = 0x1a2fe4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x1a2fe8: 0x4600b834
    ctx->pc = 0x1a2fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2fec: 0x0
    ctx->pc = 0x1a2fecu;
    // NOP
    // 0x1a2ff0: 0x4501006f
    ctx->pc = 0x1A2FF0u;
    {
        const bool branch_taken_0x1a2ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2ff0) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A2FF8u;
    // 0x1a2ff8: 0xc5780038
    ctx->pc = 0x1a2ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a2ffc: 0xc5770040
    ctx->pc = 0x1a2ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a3000: 0x4612d6c1
    ctx->pc = 0x1a3000u;
    ctx->f[27] = FPU_SUB_S(ctx->f[26], ctx->f[18]);
    // 0x1a3004: 0x4614cf01
    ctx->pc = 0x1a3004u;
    ctx->f[28] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
    // 0x1a3008: 0x461ac681
    ctx->pc = 0x1a3008u;
    ctx->f[26] = FPU_SUB_S(ctx->f[24], ctx->f[26]);
    // 0x1a300c: 0x4619be41
    ctx->pc = 0x1a300cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a3010: 0x461ae01a
    ctx->pc = 0x1a3010u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x1a3014: 0x4619de5d
    ctx->pc = 0x1a3014u;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[25]));
    // 0x1a3018: 0x46194e42
    ctx->pc = 0x1a3018u;
    ctx->f[25] = FPU_MUL_S(ctx->f[9], ctx->f[25]);
    // 0x1a301c: 0x4600c834
    ctx->pc = 0x1a301cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3020: 0x0
    ctx->pc = 0x1a3020u;
    // NOP
    // 0x1a3024: 0x45010062
    ctx->pc = 0x1A3024u;
    {
        const bool branch_taken_0x1a3024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3028u;
        ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
        if (branch_taken_0x1a3024) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A302Cu;
    // 0x1a302c: 0x4617b541
    ctx->pc = 0x1a302cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1a3030: 0x4614bd81
    ctx->pc = 0x1a3030u;
    ctx->f[22] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x1a3034: 0x4612c601
    ctx->pc = 0x1a3034u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[18]);
    // 0x1a3038: 0x4619b01a
    ctx->pc = 0x1a3038u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1a303c: 0x4615c55d
    ctx->pc = 0x1a303cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[21]));
    // 0x1a3040: 0x46154d42
    ctx->pc = 0x1a3040u;
    ctx->f[21] = FPU_MUL_S(ctx->f[9], ctx->f[21]);
    // 0x1a3044: 0x4600a834
    ctx->pc = 0x1a3044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3048: 0x0
    ctx->pc = 0x1a3048u;
    // NOP
    // 0x1a304c: 0x45010058
    ctx->pc = 0x1A304Cu;
    {
        const bool branch_taken_0x1a304c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a304c) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A3054u;
    // 0x1a3054: 0x10000036
    ctx->pc = 0x1A3054u;
    {
        const bool branch_taken_0x1a3054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3054) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A305Cu;
label_1a305c:
    // 0x1a305c: 0xc5750018
    ctx->pc = 0x1a305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3060: 0xc5760014
    ctx->pc = 0x1a3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a3064: 0xc5780024
    ctx->pc = 0x1a3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a3068: 0xc5770020
    ctx->pc = 0x1a3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a306c: 0x44800000
    ctx->pc = 0x1a306cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a3070: 0x4613ae41
    ctx->pc = 0x1a3070u;
    ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[19]);
    // 0x1a3074: 0x4615c6c1
    ctx->pc = 0x1a3074u;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x1a3078: 0x4612b681
    ctx->pc = 0x1a3078u;
    ctx->f[26] = FPU_SUB_S(ctx->f[22], ctx->f[18]);
    // 0x1a307c: 0x461bd01a
    ctx->pc = 0x1a307cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[27]);
    // 0x1a3080: 0x4616be81
    ctx->pc = 0x1a3080u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x1a3084: 0x461ace5d
    ctx->pc = 0x1a3084u;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[26]));
    // 0x1a3088: 0x46195642
    ctx->pc = 0x1a3088u;
    ctx->f[25] = FPU_MUL_S(ctx->f[10], ctx->f[25]);
    // 0x1a308c: 0x4600c834
    ctx->pc = 0x1a308cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3090: 0x0
    ctx->pc = 0x1a3090u;
    // NOP
    // 0x1a3094: 0x45010046
    ctx->pc = 0x1A3094u;
    {
        const bool branch_taken_0x1a3094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3094) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A309Cu;
    // 0x1a309c: 0xc57a0030
    ctx->pc = 0x1a309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1a30a0: 0xc579002c
    ctx->pc = 0x1a30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a30a4: 0x4613c6c1
    ctx->pc = 0x1a30a4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[24], ctx->f[19]);
    // 0x1a30a8: 0x4612bf01
    ctx->pc = 0x1a30a8u;
    ctx->f[28] = FPU_SUB_S(ctx->f[23], ctx->f[18]);
    // 0x1a30ac: 0x4618d601
    ctx->pc = 0x1a30acu;
    ctx->f[24] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x1a30b0: 0x4617cdc1
    ctx->pc = 0x1a30b0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a30b4: 0x4618e01a
    ctx->pc = 0x1a30b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[24]);
    // 0x1a30b8: 0x4617dddd
    ctx->pc = 0x1a30b8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[23]));
    // 0x1a30bc: 0x461755c2
    ctx->pc = 0x1a30bcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[10], ctx->f[23]);
    // 0x1a30c0: 0x4600b834
    ctx->pc = 0x1a30c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a30c4: 0x0
    ctx->pc = 0x1a30c4u;
    // NOP
    // 0x1a30c8: 0x45010039
    ctx->pc = 0x1A30C8u;
    {
        const bool branch_taken_0x1a30c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a30c8) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A30D0u;
    // 0x1a30d0: 0xc578003c
    ctx->pc = 0x1a30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a30d4: 0xc5770038
    ctx->pc = 0x1a30d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a30d8: 0x4613d6c1
    ctx->pc = 0x1a30d8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[26], ctx->f[19]);
    // 0x1a30dc: 0x4612cf01
    ctx->pc = 0x1a30dcu;
    ctx->f[28] = FPU_SUB_S(ctx->f[25], ctx->f[18]);
    // 0x1a30e0: 0x461ac681
    ctx->pc = 0x1a30e0u;
    ctx->f[26] = FPU_SUB_S(ctx->f[24], ctx->f[26]);
    // 0x1a30e4: 0x4619be41
    ctx->pc = 0x1a30e4u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a30e8: 0x461ae01a
    ctx->pc = 0x1a30e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x1a30ec: 0x4619de5d
    ctx->pc = 0x1a30ecu;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[25]));
    // 0x1a30f0: 0x46195642
    ctx->pc = 0x1a30f0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[10], ctx->f[25]);
    // 0x1a30f4: 0x4600c834
    ctx->pc = 0x1a30f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a30f8: 0x0
    ctx->pc = 0x1a30f8u;
    // NOP
    // 0x1a30fc: 0x4501002c
    ctx->pc = 0x1A30FCu;
    {
        const bool branch_taken_0x1a30fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3100u;
        ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
        if (branch_taken_0x1a30fc) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A3104u;
    // 0x1a3104: 0x4617b541
    ctx->pc = 0x1a3104u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1a3108: 0x4612bd81
    ctx->pc = 0x1a3108u;
    ctx->f[22] = FPU_SUB_S(ctx->f[23], ctx->f[18]);
    // 0x1a310c: 0x4613c601
    ctx->pc = 0x1a310cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[19]);
    // 0x1a3110: 0x4619b01a
    ctx->pc = 0x1a3110u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1a3114: 0x4615c55d
    ctx->pc = 0x1a3114u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[21]));
    // 0x1a3118: 0x46155542
    ctx->pc = 0x1a3118u;
    ctx->f[21] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x1a311c: 0x4600a834
    ctx->pc = 0x1a311cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3120: 0x0
    ctx->pc = 0x1a3120u;
    // NOP
    // 0x1a3124: 0x45010022
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A312Cu;
    // 0x1a312c: 0x0
    ctx->pc = 0x1a312cu;
    // NOP
label_1a3130:
    // 0x1a3130: 0x1440000a
    ctx->pc = 0x1A3130u;
    {
        const bool branch_taken_0x1a3130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3134u;
        ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[18]);
        if (branch_taken_0x1a3130) {
            ctx->pc = 0x1A315Cu;
            goto label_1a315c;
        }
    }
    ctx->pc = 0x1A3138u;
    // 0x1a3138: 0x46127801
    ctx->pc = 0x1a3138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[18]);
    // 0x1a313c: 0x460001c2
    ctx->pc = 0x1a313cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a3140: 0x46138001
    ctx->pc = 0x1a3140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x1a3144: 0x46000002
    ctx->pc = 0x1a3144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a3148: 0x46003818
    ctx->pc = 0x1a3148u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1a314c: 0x46148801
    ctx->pc = 0x1a314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[20]);
    // 0x1a3150: 0x1000000d
    ctx->pc = 0x1A3150u;
    {
        const bool branch_taken_0x1a3150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3154u;
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        if (branch_taken_0x1a3150) {
            ctx->pc = 0x1A3188u;
            goto label_1a3188;
        }
    }
    ctx->pc = 0x1A3158u;
    // 0x1a3158: 0x46127801
    ctx->pc = 0x1a3158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[18]);
label_1a315c:
    // 0x1a315c: 0x46000542
    ctx->pc = 0x1a315cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a3160: 0x46138001
    ctx->pc = 0x1a3160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x1a3164: 0x46000002
    ctx->pc = 0x1a3164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a3168: 0x4600a818
    ctx->pc = 0x1a3168u;
    ctx->f[31] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a316c: 0x46148801
    ctx->pc = 0x1a316cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[20]);
    // 0x1a3170: 0x4600001c
    ctx->pc = 0x1a3170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1a3174: 0x46070034
    ctx->pc = 0x1a3174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3178: 0x0
    ctx->pc = 0x1a3178u;
    // NOP
    // 0x1a317c: 0x4500000c
    ctx->pc = 0x1A317Cu;
    {
        const bool branch_taken_0x1a317c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a317c) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A3184u;
    // 0x1a3184: 0x460001c6
    ctx->pc = 0x1a3184u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_1a3188:
    // 0x1a3188: 0x8d620044
    ctx->pc = 0x1a3188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x1a318c: 0xe7928978
    ctx->pc = 0x1a318cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), bits); }
    // 0x1a3190: 0xe7938974
    ctx->pc = 0x1a3190u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), bits); }
    // 0x1a3194: 0xe7948970
    ctx->pc = 0x1a3194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), bits); }
    // 0x1a3198: 0xe788896c
    ctx->pc = 0x1a3198u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), bits); }
    // 0x1a319c: 0xe7898968
    ctx->pc = 0x1a319cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), bits); }
    // 0x1a31a0: 0xe78a8964
    ctx->pc = 0x1a31a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), bits); }
    // 0x1a31a4: 0xe78b8960
    ctx->pc = 0x1a31a4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), bits); }
    // 0x1a31a8: 0xe787895c
    ctx->pc = 0x1a31a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), bits); }
    // 0x1a31ac: 0xaf8b8958
    ctx->pc = 0x1a31acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 11));
label_1a31b0:
    // 0x1a31b0: 0x254affff
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
label_1a31b4:
    // 0x1a31b4: 0x541fefe
    ctx->pc = 0x1A31B4u;
    {
        const bool branch_taken_0x1a31b4 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1A31B8u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 72));
        if (branch_taken_0x1a31b4) {
            ctx->pc = 0x1A2DB0u;
            goto label_1a2db0;
        }
    }
    ctx->pc = 0x1A31BCu;
    // 0x1a31bc: 0x0
    ctx->pc = 0x1a31bcu;
    // NOP
label_1a31c0:
    // 0x1a31c0: 0x818c0
    ctx->pc = 0x1a31c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 3));
label_1a31c4:
    // 0x1a31c4: 0x681821
    ctx->pc = 0x1a31c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a31c8: 0x31840
    ctx->pc = 0x1a31c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a31cc: 0x24630007
    ctx->pc = 0x1a31ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1a31d0: 0x31880
    ctx->pc = 0x1a31d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a31d4: 0x24e7ffff
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a31d8: 0x4e1fed1
    ctx->pc = 0x1A31D8u;
    {
        const bool branch_taken_0x1a31d8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1A31DCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a31d8) {
            ctx->pc = 0x1A2D20u;
            goto label_1a2d20;
        }
    }
    ctx->pc = 0x1A31E0u;
label_1a31e0:
    // 0x1a31e0: 0xaf82897c
    ctx->pc = 0x1a31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936956), GPR_U32(ctx, 2));
    // 0x1a31e4: 0xc7bc0020
    ctx->pc = 0x1a31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1a31e8: 0xc7bb001c
    ctx->pc = 0x1a31e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1a31ec: 0xc7ba0018
    ctx->pc = 0x1a31ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1a31f0: 0xc7b90014
    ctx->pc = 0x1a31f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a31f4: 0xc7b80010
    ctx->pc = 0x1a31f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a31f8: 0xc7b7000c
    ctx->pc = 0x1a31f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a31fc: 0xc7b60008
    ctx->pc = 0x1a31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a3200: 0xc7b50004
    ctx->pc = 0x1a3200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3204: 0xc7b40000
    ctx->pc = 0x1a3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3208: 0x3e00008
    ctx->pc = 0x1A3208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A320Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2CC8u: goto label_1a2cc8;
            case 0x1A2CD0u: goto label_1a2cd0;
            case 0x1A2CECu: goto label_1a2cec;
            case 0x1A2CF0u: goto label_1a2cf0;
            case 0x1A2D0Cu: goto label_1a2d0c;
            case 0x1A2D10u: goto label_1a2d10;
            case 0x1A2D20u: goto label_1a2d20;
            case 0x1A2DB0u: goto label_1a2db0;
            case 0x1A2E20u: goto label_1a2e20;
            case 0x1A2E54u: goto label_1a2e54;
            case 0x1A2EACu: goto label_1a2eac;
            case 0x1A2F84u: goto label_1a2f84;
            case 0x1A305Cu: goto label_1a305c;
            case 0x1A3130u: goto label_1a3130;
            case 0x1A315Cu: goto label_1a315c;
            case 0x1A3188u: goto label_1a3188;
            case 0x1A31B0u: goto label_1a31b0;
            case 0x1A31B4u: goto label_1a31b4;
            case 0x1A31C0u: goto label_1a31c0;
            case 0x1A31C4u: goto label_1a31c4;
            case 0x1A31E0u: goto label_1a31e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3210u;
}

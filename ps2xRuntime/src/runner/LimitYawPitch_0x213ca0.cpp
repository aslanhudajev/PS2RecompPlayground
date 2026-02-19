#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitYawPitch
// Address: 0x213ca0 - 0x213f60
void LimitYawPitch_0x213ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213ca0u;

    // 0x213ca0: 0x3c020032
    ctx->pc = 0x213ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213ca4: 0x8c42f7a4
    ctx->pc = 0x213ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965156)));
    // 0x213ca8: 0x1040000a
    ctx->pc = 0x213CA8u;
    {
        const bool branch_taken_0x213ca8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213CACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x213ca8) {
            ctx->pc = 0x213CD4u;
            goto label_213cd4;
        }
    }
    ctx->pc = 0x213CB0u;
    // 0x213cb0: 0xc441ffa8
    ctx->pc = 0x213cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213cb4: 0x44800000
    ctx->pc = 0x213cb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x213cb8: 0x46000836
    ctx->pc = 0x213cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213cbc: 0x45010005
    ctx->pc = 0x213CBCu;
    {
        const bool branch_taken_0x213cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213cbc) {
            ctx->pc = 0x213CD4u;
            goto label_213cd4;
        }
    }
    ctx->pc = 0x213CC4u;
    // 0x213cc4: 0x3c0141f0
    ctx->pc = 0x213cc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x213cc8: 0x44810000
    ctx->pc = 0x213cc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213ccc: 0x10000003
    ctx->pc = 0x213CCCu;
    {
        const bool branch_taken_0x213ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213CD0u;
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213ccc) {
            ctx->pc = 0x213CDCu;
            goto label_213cdc;
        }
    }
    ctx->pc = 0x213CD4u;
label_213cd4:
    // 0x213cd4: 0x3c013f80
    ctx->pc = 0x213cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x213cd8: 0x44811800
    ctx->pc = 0x213cd8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_213cdc:
    // 0x213cdc: 0x3c020032
    ctx->pc = 0x213cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213ce0: 0x8c43f7c0
    ctx->pc = 0x213ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965184)));
    // 0x213ce4: 0x8c8201a8
    ctx->pc = 0x213ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x213ce8: 0x10620048
    ctx->pc = 0x213CE8u;
    {
        const bool branch_taken_0x213ce8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x213CECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x213ce8) {
            ctx->pc = 0x213E0Cu;
            goto label_213e0c;
        }
    }
    ctx->pc = 0x213CF0u;
    // 0x213cf0: 0xac8301a8
    ctx->pc = 0x213cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 3));
    // 0x213cf4: 0xc442f7b4
    ctx->pc = 0x213cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213cf8: 0x468010a0
    ctx->pc = 0x213cf8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x213cfc: 0xc48000ec
    ctx->pc = 0x213cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d00: 0x46006041
    ctx->pc = 0x213d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x213d04: 0x3c014049
    ctx->pc = 0x213d04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213d08: 0x34210fdb
    ctx->pc = 0x213d08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213d0c: 0x44810000
    ctx->pc = 0x213d0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213d10: 0x46010034
    ctx->pc = 0x213d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d14: 0x0
    ctx->pc = 0x213d14u;
    // NOP
    // 0x213d18: 0x45020006
    ctx->pc = 0x213D18u;
    {
        const bool branch_taken_0x213d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213d18) {
            ctx->pc = 0x213D1Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213D34u;
            goto label_213d34;
        }
    }
    ctx->pc = 0x213D20u;
    // 0x213d20: 0x3c0140c9
    ctx->pc = 0x213d20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213d24: 0x34210fdb
    ctx->pc = 0x213d24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213d28: 0x44810000
    ctx->pc = 0x213d28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213d2c: 0x1000000f
    ctx->pc = 0x213D2Cu;
    {
        const bool branch_taken_0x213d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213D30u;
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213d2c) {
            ctx->pc = 0x213D6Cu;
            goto label_213d6c;
        }
    }
    ctx->pc = 0x213D34u;
label_213d34:
    // 0x213d34: 0x46006041
    ctx->pc = 0x213d34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x213d38: 0x3c01c049
    ctx->pc = 0x213d38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213d3c: 0x34210fdb
    ctx->pc = 0x213d3cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213d40: 0x44810000
    ctx->pc = 0x213d40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213d44: 0x46000836
    ctx->pc = 0x213d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d48: 0x0
    ctx->pc = 0x213d48u;
    // NOP
    // 0x213d4c: 0x45020006
    ctx->pc = 0x213D4Cu;
    {
        const bool branch_taken_0x213d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213d4c) {
            ctx->pc = 0x213D50u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213D54u;
    // 0x213d54: 0x3c0140c9
    ctx->pc = 0x213d54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213d58: 0x34210fdb
    ctx->pc = 0x213d58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213d5c: 0x44810000
    ctx->pc = 0x213d5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213d60: 0x10000002
    ctx->pc = 0x213D60u;
    {
        const bool branch_taken_0x213d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213D64u;
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213d60) {
            ctx->pc = 0x213D6Cu;
            goto label_213d6c;
        }
    }
    ctx->pc = 0x213D68u;
label_213d68:
    // 0x213d68: 0x46006301
    ctx->pc = 0x213d68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_213d6c:
    // 0x213d6c: 0x0
    ctx->pc = 0x213d6cu;
    // NOP
    // 0x213d70: 0x0
    ctx->pc = 0x213d70u;
    // NOP
    // 0x213d74: 0x46026303
    ctx->pc = 0x213d74u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x213d78: 0xe48c00f0
    ctx->pc = 0x213d78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x213d7c: 0x3c020032
    ctx->pc = 0x213d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213d80: 0xc442f7b4
    ctx->pc = 0x213d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213d84: 0x468010a0
    ctx->pc = 0x213d84u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x213d88: 0xc4800104
    ctx->pc = 0x213d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d8c: 0x46006841
    ctx->pc = 0x213d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x213d90: 0x3c014049
    ctx->pc = 0x213d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213d94: 0x34210fdb
    ctx->pc = 0x213d94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213d98: 0x44810000
    ctx->pc = 0x213d98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213d9c: 0x46010034
    ctx->pc = 0x213d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213da0: 0x0
    ctx->pc = 0x213da0u;
    // NOP
    // 0x213da4: 0x45020006
    ctx->pc = 0x213DA4u;
    {
        const bool branch_taken_0x213da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213da4) {
            ctx->pc = 0x213DA8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213DC0u;
            goto label_213dc0;
        }
    }
    ctx->pc = 0x213DACu;
    // 0x213dac: 0x3c0140c9
    ctx->pc = 0x213dacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213db0: 0x34210fdb
    ctx->pc = 0x213db0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213db4: 0x44810000
    ctx->pc = 0x213db4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213db8: 0x1000000f
    ctx->pc = 0x213DB8u;
    {
        const bool branch_taken_0x213db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213DBCu;
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213db8) {
            ctx->pc = 0x213DF8u;
            goto label_213df8;
        }
    }
    ctx->pc = 0x213DC0u;
label_213dc0:
    // 0x213dc0: 0x46006841
    ctx->pc = 0x213dc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x213dc4: 0x3c01c049
    ctx->pc = 0x213dc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213dc8: 0x34210fdb
    ctx->pc = 0x213dc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213dcc: 0x44810000
    ctx->pc = 0x213dccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213dd0: 0x46000836
    ctx->pc = 0x213dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213dd4: 0x0
    ctx->pc = 0x213dd4u;
    // NOP
    // 0x213dd8: 0x45020006
    ctx->pc = 0x213DD8u;
    {
        const bool branch_taken_0x213dd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213dd8) {
            ctx->pc = 0x213DDCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213DF4u;
            goto label_213df4;
        }
    }
    ctx->pc = 0x213DE0u;
    // 0x213de0: 0x3c0140c9
    ctx->pc = 0x213de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213de4: 0x34210fdb
    ctx->pc = 0x213de4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213de8: 0x44810000
    ctx->pc = 0x213de8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213dec: 0x10000002
    ctx->pc = 0x213DECu;
    {
        const bool branch_taken_0x213dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213DF0u;
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213dec) {
            ctx->pc = 0x213DF8u;
            goto label_213df8;
        }
    }
    ctx->pc = 0x213DF4u;
label_213df4:
    // 0x213df4: 0x46006b41
    ctx->pc = 0x213df4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_213df8:
    // 0x213df8: 0x0
    ctx->pc = 0x213df8u;
    // NOP
    // 0x213dfc: 0x0
    ctx->pc = 0x213dfcu;
    // NOP
    // 0x213e00: 0x46026b43
    ctx->pc = 0x213e00u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[2];
    // 0x213e04: 0xe48d0108
    ctx->pc = 0x213e04u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x213e08: 0xac8001ac
    ctx->pc = 0x213e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
label_213e0c:
    // 0x213e0c: 0x3c020032
    ctx->pc = 0x213e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213e10: 0xc441f7b4
    ctx->pc = 0x213e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e14: 0x46800860
    ctx->pc = 0x213e14u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x213e18: 0xc48001ac
    ctx->pc = 0x213e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e1c: 0x46010034
    ctx->pc = 0x213e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213e20: 0x45000048
    ctx->pc = 0x213E20u;
    {
        const bool branch_taken_0x213e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213e20) {
            ctx->pc = 0x213F44u;
            goto label_213f44;
        }
    }
    ctx->pc = 0x213E28u;
    // 0x213e28: 0xc48000f0
    ctx->pc = 0x213e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e2c: 0x46001802
    ctx->pc = 0x213e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213e30: 0xc48100ec
    ctx->pc = 0x213e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e34: 0x46010040
    ctx->pc = 0x213e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213e38: 0x3c014049
    ctx->pc = 0x213e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213e3c: 0x34210fdb
    ctx->pc = 0x213e3cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213e40: 0x44810000
    ctx->pc = 0x213e40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213e44: 0x46010034
    ctx->pc = 0x213e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213e48: 0x0
    ctx->pc = 0x213e48u;
    // NOP
    // 0x213e4c: 0x45020006
    ctx->pc = 0x213E4Cu;
    {
        const bool branch_taken_0x213e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213e4c) {
            ctx->pc = 0x213E50u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213E68u;
            goto label_213e68;
        }
    }
    ctx->pc = 0x213E54u;
    // 0x213e54: 0x3c0140c9
    ctx->pc = 0x213e54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213e58: 0x34210fdb
    ctx->pc = 0x213e58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213e5c: 0x44810000
    ctx->pc = 0x213e5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213e60: 0x10000013
    ctx->pc = 0x213E60u;
    {
        const bool branch_taken_0x213e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213E64u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213e60) {
            ctx->pc = 0x213EB0u;
            goto label_213eb0;
        }
    }
    ctx->pc = 0x213E68u;
label_213e68:
    // 0x213e68: 0x46001802
    ctx->pc = 0x213e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213e6c: 0xc48100ec
    ctx->pc = 0x213e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e70: 0x46010040
    ctx->pc = 0x213e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213e74: 0x3c01c049
    ctx->pc = 0x213e74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213e78: 0x34210fdb
    ctx->pc = 0x213e78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213e7c: 0x44810000
    ctx->pc = 0x213e7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213e80: 0x46000836
    ctx->pc = 0x213e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213e84: 0x0
    ctx->pc = 0x213e84u;
    // NOP
    // 0x213e88: 0x45020006
    ctx->pc = 0x213E88u;
    {
        const bool branch_taken_0x213e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213e88) {
            ctx->pc = 0x213E8Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213EA4u;
            goto label_213ea4;
        }
    }
    ctx->pc = 0x213E90u;
    // 0x213e90: 0x3c0140c9
    ctx->pc = 0x213e90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213e94: 0x34210fdb
    ctx->pc = 0x213e94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213e98: 0x44810000
    ctx->pc = 0x213e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213e9c: 0x10000004
    ctx->pc = 0x213E9Cu;
    {
        const bool branch_taken_0x213e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213EA0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213e9c) {
            ctx->pc = 0x213EB0u;
            goto label_213eb0;
        }
    }
    ctx->pc = 0x213EA4u;
label_213ea4:
    // 0x213ea4: 0x46001802
    ctx->pc = 0x213ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213ea8: 0xc48100ec
    ctx->pc = 0x213ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213eac: 0x46010000
    ctx->pc = 0x213eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_213eb0:
    // 0x213eb0: 0xe48000ec
    ctx->pc = 0x213eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x213eb4: 0xc4800108
    ctx->pc = 0x213eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213eb8: 0x46001802
    ctx->pc = 0x213eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213ebc: 0xc4810104
    ctx->pc = 0x213ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213ec0: 0x46010040
    ctx->pc = 0x213ec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213ec4: 0x3c014049
    ctx->pc = 0x213ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213ec8: 0x34210fdb
    ctx->pc = 0x213ec8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213ecc: 0x44810000
    ctx->pc = 0x213eccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213ed0: 0x46010034
    ctx->pc = 0x213ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213ed4: 0x0
    ctx->pc = 0x213ed4u;
    // NOP
    // 0x213ed8: 0x45020006
    ctx->pc = 0x213ED8u;
    {
        const bool branch_taken_0x213ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213ed8) {
            ctx->pc = 0x213EDCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213EF4u;
            goto label_213ef4;
        }
    }
    ctx->pc = 0x213EE0u;
    // 0x213ee0: 0x3c0140c9
    ctx->pc = 0x213ee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213ee4: 0x34210fdb
    ctx->pc = 0x213ee4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213ee8: 0x44810000
    ctx->pc = 0x213ee8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213eec: 0x10000013
    ctx->pc = 0x213EECu;
    {
        const bool branch_taken_0x213eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213EF0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213eec) {
            ctx->pc = 0x213F3Cu;
            goto label_213f3c;
        }
    }
    ctx->pc = 0x213EF4u;
label_213ef4:
    // 0x213ef4: 0x46001802
    ctx->pc = 0x213ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213ef8: 0xc4810104
    ctx->pc = 0x213ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213efc: 0x46010040
    ctx->pc = 0x213efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213f00: 0x3c01c049
    ctx->pc = 0x213f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213f04: 0x34210fdb
    ctx->pc = 0x213f04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213f08: 0x44810000
    ctx->pc = 0x213f08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213f0c: 0x46000836
    ctx->pc = 0x213f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213f10: 0x0
    ctx->pc = 0x213f10u;
    // NOP
    // 0x213f14: 0x45020006
    ctx->pc = 0x213F14u;
    {
        const bool branch_taken_0x213f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213f14) {
            ctx->pc = 0x213F18u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213F30u;
            goto label_213f30;
        }
    }
    ctx->pc = 0x213F1Cu;
    // 0x213f1c: 0x3c0140c9
    ctx->pc = 0x213f1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213f20: 0x34210fdb
    ctx->pc = 0x213f20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213f24: 0x44810000
    ctx->pc = 0x213f24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213f28: 0x10000004
    ctx->pc = 0x213F28u;
    {
        const bool branch_taken_0x213f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213F2Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213f28) {
            ctx->pc = 0x213F3Cu;
            goto label_213f3c;
        }
    }
    ctx->pc = 0x213F30u;
label_213f30:
    // 0x213f30: 0x46001802
    ctx->pc = 0x213f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x213f34: 0xc4810104
    ctx->pc = 0x213f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213f38: 0x46010000
    ctx->pc = 0x213f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_213f3c:
    // 0x213f3c: 0x10000003
    ctx->pc = 0x213F3Cu;
    {
        const bool branch_taken_0x213f3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213F40u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        if (branch_taken_0x213f3c) {
            ctx->pc = 0x213F4Cu;
            goto label_213f4c;
        }
    }
    ctx->pc = 0x213F44u;
label_213f44:
    // 0x213f44: 0x3e00008
    ctx->pc = 0x213F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213CD4u: goto label_213cd4;
            case 0x213CDCu: goto label_213cdc;
            case 0x213D34u: goto label_213d34;
            case 0x213D68u: goto label_213d68;
            case 0x213D6Cu: goto label_213d6c;
            case 0x213DC0u: goto label_213dc0;
            case 0x213DF4u: goto label_213df4;
            case 0x213DF8u: goto label_213df8;
            case 0x213E0Cu: goto label_213e0c;
            case 0x213E68u: goto label_213e68;
            case 0x213EA4u: goto label_213ea4;
            case 0x213EB0u: goto label_213eb0;
            case 0x213EF4u: goto label_213ef4;
            case 0x213F30u: goto label_213f30;
            case 0x213F3Cu: goto label_213f3c;
            case 0x213F44u: goto label_213f44;
            case 0x213F4Cu: goto label_213f4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213F4Cu;
label_213f4c:
    // 0x213f4c: 0xc48001ac
    ctx->pc = 0x213f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213f50: 0x46001800
    ctx->pc = 0x213f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213f54: 0xe48001ac
    ctx->pc = 0x213f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 428), bits); }
    // 0x213f58: 0x3e00008
    ctx->pc = 0x213F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213CD4u: goto label_213cd4;
            case 0x213CDCu: goto label_213cdc;
            case 0x213D34u: goto label_213d34;
            case 0x213D68u: goto label_213d68;
            case 0x213D6Cu: goto label_213d6c;
            case 0x213DC0u: goto label_213dc0;
            case 0x213DF4u: goto label_213df4;
            case 0x213DF8u: goto label_213df8;
            case 0x213E0Cu: goto label_213e0c;
            case 0x213E68u: goto label_213e68;
            case 0x213EA4u: goto label_213ea4;
            case 0x213EB0u: goto label_213eb0;
            case 0x213EF4u: goto label_213ef4;
            case 0x213F30u: goto label_213f30;
            case 0x213F3Cu: goto label_213f3c;
            case 0x213F44u: goto label_213f44;
            case 0x213F4Cu: goto label_213f4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213F60u;
}

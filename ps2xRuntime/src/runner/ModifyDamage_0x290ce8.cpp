#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ModifyDamage
// Address: 0x290ce8 - 0x290f20
void ModifyDamage_0x290ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290ce8u;

    // 0x290ce8: 0x8ca70000
    ctx->pc = 0x290ce8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290cec: 0x3c020010
    ctx->pc = 0x290cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x290cf0: 0xc21024
    ctx->pc = 0x290cf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x290cf4: 0x1040000f
    ctx->pc = 0x290CF4u;
    {
        const bool branch_taken_0x290cf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290CF8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x290cf4) {
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290CFCu;
    // 0x290cfc: 0x3c013f80
    ctx->pc = 0x290cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x290d00: 0x44810000
    ctx->pc = 0x290d00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x290d04: 0x46010034
    ctx->pc = 0x290d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290d08: 0x45000008
    ctx->pc = 0x290D08u;
    {
        const bool branch_taken_0x290d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290d08) {
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290D10u;
    // 0x290d10: 0x46000807
    ctx->pc = 0x290d10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x290d14: 0x3c013dcc
    ctx->pc = 0x290d14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x290d18: 0x3421cccd
    ctx->pc = 0x290d18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x290d1c: 0x44810800
    ctx->pc = 0x290d1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x290d20: 0x46010002
    ctx->pc = 0x290d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290d24: 0x3e00008
    ctx->pc = 0x290D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290D28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290D2Cu;
label_290d2c:
    // 0x290d2c: 0x3e00008
    ctx->pc = 0x290D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290D30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290D34u;
label_290d34:
    // 0x290d34: 0x3c020001
    ctx->pc = 0x290d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x290d38: 0xc21024
    ctx->pc = 0x290d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x290d3c: 0x1440fffb
    ctx->pc = 0x290D3Cu;
    {
        const bool branch_taken_0x290d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290D40u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4096));
        if (branch_taken_0x290d3c) {
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290D44u;
    // 0x290d44: 0x10400003
    ctx->pc = 0x290D44u;
    {
        const bool branch_taken_0x290d44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290D48u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 512));
        if (branch_taken_0x290d44) {
            ctx->pc = 0x290D54u;
            goto label_290d54;
        }
    }
    ctx->pc = 0x290D4Cu;
    // 0x290d4c: 0x1440fff7
    ctx->pc = 0x290D4Cu;
    {
        const bool branch_taken_0x290d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290d4c) {
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290D54u;
label_290d54:
    // 0x290d54: 0x30c22000
    ctx->pc = 0x290d54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8192));
    // 0x290d58: 0x10400003
    ctx->pc = 0x290D58u;
    {
        const bool branch_taken_0x290d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290D5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 2048));
        if (branch_taken_0x290d58) {
            ctx->pc = 0x290D68u;
            goto label_290d68;
        }
    }
    ctx->pc = 0x290D60u;
    // 0x290d60: 0x1440fff2
    ctx->pc = 0x290D60u;
    {
        const bool branch_taken_0x290d60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290d60) {
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290D68u;
label_290d68:
    // 0x290d68: 0x3c020036
    ctx->pc = 0x290d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x290d6c: 0x8c42d934
    ctx->pc = 0x290d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x290d70: 0x4400009
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x290D74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290D98u;
            goto label_290d98;
        }
    }
    ctx->pc = 0x290D78u;
    // 0x290d78: 0x3c013f40
    ctx->pc = 0x290d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x290d7c: 0x44811000
    ctx->pc = 0x290d7cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x290d80: 0x3c013fa0
    ctx->pc = 0x290d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16288 << 16));
    // 0x290d84: 0x44812000
    ctx->pc = 0x290d84u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x290d88: 0x3c013fc0
    ctx->pc = 0x290d88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x290d8c: 0x44811800
    ctx->pc = 0x290d8cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x290d90: 0x10000008
    ctx->pc = 0x290D90u;
    {
        const bool branch_taken_0x290d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290D94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x290d90) {
            ctx->pc = 0x290DB4u;
            goto label_290db4;
        }
    }
    ctx->pc = 0x290D98u;
label_290d98:
    // 0x290d98: 0x3c013f00
    ctx->pc = 0x290d98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x290d9c: 0x44811000
    ctx->pc = 0x290d9cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x290da0: 0x3c013fc0
    ctx->pc = 0x290da0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x290da4: 0x44812000
    ctx->pc = 0x290da4u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x290da8: 0x3c014000
    ctx->pc = 0x290da8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x290dac: 0x44811800
    ctx->pc = 0x290dacu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x290db0: 0xc21024
    ctx->pc = 0x290db0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_290db4:
    // 0x290db4: 0x10400007
    ctx->pc = 0x290DB4u;
    {
        const bool branch_taken_0x290db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290DB8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x290db4) {
            ctx->pc = 0x290DD4u;
            goto label_290dd4;
        }
    }
    ctx->pc = 0x290DBCu;
    // 0x290dbc: 0x8ca20000
    ctx->pc = 0x290dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290dc0: 0x3c03fffe
    ctx->pc = 0x290dc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x290dc4: 0x3463fe8f
    ctx->pc = 0x290dc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65167));
    // 0x290dc8: 0x431024
    ctx->pc = 0x290dc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290dcc: 0xaca20000
    ctx->pc = 0x290dccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x290dd0: 0x30c20010
    ctx->pc = 0x290dd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16));
label_290dd4:
    // 0x290dd4: 0x10400003
    ctx->pc = 0x290DD4u;
    {
        const bool branch_taken_0x290dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290DD8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 512));
        if (branch_taken_0x290dd4) {
            ctx->pc = 0x290DE4u;
            goto label_290de4;
        }
    }
    ctx->pc = 0x290DDCu;
    // 0x290ddc: 0x54400001
    ctx->pc = 0x290DDCu;
    {
        const bool branch_taken_0x290ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290ddc) {
            ctx->pc = 0x290DE0u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
            ctx->pc = 0x290DE4u;
            goto label_290de4;
        }
    }
    ctx->pc = 0x290DE4u;
label_290de4:
    // 0x290de4: 0x30e20a00
    ctx->pc = 0x290de4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 2560));
    // 0x290de8: 0x1440000c
    ctx->pc = 0x290DE8u;
    {
        const bool branch_taken_0x290de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290de8) {
            ctx->pc = 0x290E1Cu;
            goto label_290e1c;
        }
    }
    ctx->pc = 0x290DF0u;
    // 0x290df0: 0x44800000
    ctx->pc = 0x290df0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x290df4: 0x46010036
    ctx->pc = 0x290df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290df8: 0x0
    ctx->pc = 0x290df8u;
    // NOP
    // 0x290dfc: 0x45020008
    ctx->pc = 0x290DFCu;
    {
        const bool branch_taken_0x290dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290dfc) {
            ctx->pc = 0x290E00u;
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->pc = 0x290E20u;
            goto label_290e20;
        }
    }
    ctx->pc = 0x290E04u;
    // 0x290e04: 0x460c0836
    ctx->pc = 0x290e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290e08: 0x0
    ctx->pc = 0x290e08u;
    // NOP
    // 0x290e0c: 0x45020004
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290E10u;
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->pc = 0x290E20u;
            goto label_290e20;
        }
    }
    ctx->pc = 0x290E14u;
    // 0x290e14: 0x10000002
    ctx->pc = 0x290E14u;
    {
        const bool branch_taken_0x290e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290E18u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x290e14) {
            ctx->pc = 0x290E20u;
            goto label_290e20;
        }
    }
    ctx->pc = 0x290E1Cu;
label_290e1c:
    // 0x290e1c: 0x44800000
    ctx->pc = 0x290e1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_290e20:
    // 0x290e20: 0x46010034
    ctx->pc = 0x290e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290e24: 0x0
    ctx->pc = 0x290e24u;
    // NOP
    // 0x290e28: 0x4500003a
    ctx->pc = 0x290E28u;
    {
        const bool branch_taken_0x290e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E2Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 15));
        if (branch_taken_0x290e28) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290E30u;
    // 0x290e30: 0x24020002
    ctx->pc = 0x290e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x290e34: 0x10620017
    ctx->pc = 0x290E34u;
    {
        const bool branch_taken_0x290e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290E38u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x290e34) {
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290E3Cu;
    // 0x290e3c: 0x10400005
    ctx->pc = 0x290E3Cu;
    {
        const bool branch_taken_0x290e3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x290e3c) {
            ctx->pc = 0x290E54u;
            goto label_290e54;
        }
    }
    ctx->pc = 0x290E44u;
    // 0x290e44: 0x1062000a
    ctx->pc = 0x290E44u;
    {
        const bool branch_taken_0x290e44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290E48u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x290e44) {
            ctx->pc = 0x290E70u;
            goto label_290e70;
        }
    }
    ctx->pc = 0x290E4Cu;
    // 0x290e4c: 0x3e00008
    ctx->pc = 0x290E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E50u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290E54u;
label_290e54:
    // 0x290e54: 0x24020003
    ctx->pc = 0x290e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x290e58: 0x10620018
    ctx->pc = 0x290E58u;
    {
        const bool branch_taken_0x290e58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290E5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x290e58) {
            ctx->pc = 0x290EBCu;
            goto label_290ebc;
        }
    }
    ctx->pc = 0x290E60u;
    // 0x290e60: 0x10620020
    ctx->pc = 0x290E60u;
    {
        const bool branch_taken_0x290e60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290E64u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x290e60) {
            ctx->pc = 0x290EE4u;
            goto label_290ee4;
        }
    }
    ctx->pc = 0x290E68u;
    // 0x290e68: 0x3e00008
    ctx->pc = 0x290E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E6Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290E70u;
label_290e70:
    // 0x290e70: 0x54400028
    ctx->pc = 0x290E70u;
    {
        const bool branch_taken_0x290e70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290e70) {
            ctx->pc = 0x290E74u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290E78u;
    // 0x290e78: 0x30c20100
    ctx->pc = 0x290e78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 256));
    // 0x290e7c: 0x1440001f
    ctx->pc = 0x290E7Cu;
    {
        const bool branch_taken_0x290e7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290E80u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 514));
        if (branch_taken_0x290e7c) {
            ctx->pc = 0x290EFCu;
            goto label_290efc;
        }
    }
    ctx->pc = 0x290E84u;
    // 0x290e84: 0x54400023
    ctx->pc = 0x290E84u;
    {
        const bool branch_taken_0x290e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290e84) {
            ctx->pc = 0x290E88u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290E8Cu;
    // 0x290e8c: 0x10000021
    ctx->pc = 0x290E8Cu;
    {
        const bool branch_taken_0x290e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290E90u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        if (branch_taken_0x290e8c) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290E94u;
label_290e94:
    // 0x290e94: 0x30c20002
    ctx->pc = 0x290e94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2));
    // 0x290e98: 0x5440001e
    ctx->pc = 0x290E98u;
    {
        const bool branch_taken_0x290e98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290e98) {
            ctx->pc = 0x290E9Cu;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EA0u;
    // 0x290ea0: 0x30c20200
    ctx->pc = 0x290ea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 512));
    // 0x290ea4: 0x14400015
    ctx->pc = 0x290EA4u;
    {
        const bool branch_taken_0x290ea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290EA8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 257));
        if (branch_taken_0x290ea4) {
            ctx->pc = 0x290EFCu;
            goto label_290efc;
        }
    }
    ctx->pc = 0x290EACu;
    // 0x290eac: 0x54400019
    ctx->pc = 0x290EACu;
    {
        const bool branch_taken_0x290eac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290eac) {
            ctx->pc = 0x290EB0u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EB4u;
    // 0x290eb4: 0x10000017
    ctx->pc = 0x290EB4u;
    {
        const bool branch_taken_0x290eb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290EB8u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        if (branch_taken_0x290eb4) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EBCu;
label_290ebc:
    // 0x290ebc: 0x30c20004
    ctx->pc = 0x290ebcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4));
    // 0x290ec0: 0x54400014
    ctx->pc = 0x290EC0u;
    {
        const bool branch_taken_0x290ec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290ec0) {
            ctx->pc = 0x290EC4u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EC8u;
    // 0x290ec8: 0x30c20400
    ctx->pc = 0x290ec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1024));
    // 0x290ecc: 0x1440000b
    ctx->pc = 0x290ECCu;
    {
        const bool branch_taken_0x290ecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290ED0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2056));
        if (branch_taken_0x290ecc) {
            ctx->pc = 0x290EFCu;
            goto label_290efc;
        }
    }
    ctx->pc = 0x290ED4u;
    // 0x290ed4: 0x5440000f
    ctx->pc = 0x290ED4u;
    {
        const bool branch_taken_0x290ed4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x290ed4) {
            ctx->pc = 0x290ED8u;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EDCu;
    // 0x290edc: 0x1000000d
    ctx->pc = 0x290EDCu;
    {
        const bool branch_taken_0x290edc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290EE0u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        if (branch_taken_0x290edc) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EE4u;
label_290ee4:
    // 0x290ee4: 0x10400003
    ctx->pc = 0x290EE4u;
    {
        const bool branch_taken_0x290ee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290EE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2048));
        if (branch_taken_0x290ee4) {
            ctx->pc = 0x290EF4u;
            goto label_290ef4;
        }
    }
    ctx->pc = 0x290EECu;
    // 0x290eec: 0x10000009
    ctx->pc = 0x290EECu;
    {
        const bool branch_taken_0x290eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290EF0u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        if (branch_taken_0x290eec) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EF4u;
label_290ef4:
    // 0x290ef4: 0x10400004
    ctx->pc = 0x290EF4u;
    {
        const bool branch_taken_0x290ef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290EF8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1028));
        if (branch_taken_0x290ef4) {
            ctx->pc = 0x290F08u;
            goto label_290f08;
        }
    }
    ctx->pc = 0x290EFCu;
label_290efc:
    // 0x290efc: 0x44800800
    ctx->pc = 0x290efcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x290f00: 0x3e00008
    ctx->pc = 0x290F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F04u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290F08u;
label_290f08:
    // 0x290f08: 0x50400002
    ctx->pc = 0x290F08u;
    {
        const bool branch_taken_0x290f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x290f08) {
            ctx->pc = 0x290F0Cu;
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290F10u;
    // 0x290f10: 0x46030842
    ctx->pc = 0x290f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_290f14:
    // 0x290f14: 0xe4810000
    ctx->pc = 0x290f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x290f18: 0x3e00008
    ctx->pc = 0x290F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290D2Cu: goto label_290d2c;
            case 0x290D34u: goto label_290d34;
            case 0x290D54u: goto label_290d54;
            case 0x290D68u: goto label_290d68;
            case 0x290D98u: goto label_290d98;
            case 0x290DB4u: goto label_290db4;
            case 0x290DD4u: goto label_290dd4;
            case 0x290DE4u: goto label_290de4;
            case 0x290E1Cu: goto label_290e1c;
            case 0x290E20u: goto label_290e20;
            case 0x290E54u: goto label_290e54;
            case 0x290E70u: goto label_290e70;
            case 0x290E94u: goto label_290e94;
            case 0x290EBCu: goto label_290ebc;
            case 0x290EE4u: goto label_290ee4;
            case 0x290EF4u: goto label_290ef4;
            case 0x290EFCu: goto label_290efc;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290F20u;
}

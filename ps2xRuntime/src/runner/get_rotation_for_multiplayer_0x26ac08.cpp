#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_rotation_for_multiplayer
// Address: 0x26ac08 - 0x26ae98
void get_rotation_for_multiplayer_0x26ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26ac08u;

    // 0x26ac08: 0x27bdffe0
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ac0c: 0xffbf0010
    ctx->pc = 0x26ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ac10: 0xffb00000
    ctx->pc = 0x26ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ac14: 0x240201a0
    ctx->pc = 0x26ac14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26ac18: 0x822018
    ctx->pc = 0x26ac18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26ac1c: 0x3c020034
    ctx->pc = 0x26ac1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ac20: 0x2442eb60
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26ac24: 0x828021
    ctx->pc = 0x26ac24u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26ac28: 0x10a00004
    ctx->pc = 0x26AC28u;
    {
        const bool branch_taken_0x26ac28 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AC2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        if (branch_taken_0x26ac28) {
            ctx->pc = 0x26AC3Cu;
            goto label_26ac3c;
        }
    }
    ctx->pc = 0x26AC30u;
    // 0x26ac30: 0xae0000c0
    ctx->pc = 0x26ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x26ac34: 0xae0000c4
    ctx->pc = 0x26ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x26ac38: 0xae0000c8
    ctx->pc = 0x26ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_26ac3c:
    // 0x26ac3c: 0x3c020032
    ctx->pc = 0x26ac3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26ac40: 0x8c42f9fc
    ctx->pc = 0x26ac40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965756)));
    // 0x26ac44: 0x14400008
    ctx->pc = 0x26AC44u;
    {
        const bool branch_taken_0x26ac44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26AC48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ac44) {
            ctx->pc = 0x26AC68u;
            goto label_26ac68;
        }
    }
    ctx->pc = 0x26AC4Cu;
    // 0x26ac4c: 0x3c013f33
    ctx->pc = 0x26ac4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16179 << 16));
    // 0x26ac50: 0x34213333
    ctx->pc = 0x26ac50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x26ac54: 0x44810000
    ctx->pc = 0x26ac54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ac58: 0xe60000b0
    ctx->pc = 0x26ac58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ac5c: 0xae0000b4
    ctx->pc = 0x26ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x26ac60: 0x1000006e
    ctx->pc = 0x26AC60u;
    {
        const bool branch_taken_0x26ac60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AC64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        if (branch_taken_0x26ac60) {
            ctx->pc = 0x26AE1Cu;
            goto label_26ae1c;
        }
    }
    ctx->pc = 0x26AC68u;
label_26ac68:
    // 0x26ac68: 0x8c42f914
    ctx->pc = 0x26ac68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26ac6c: 0x10400030
    ctx->pc = 0x26AC6Cu;
    {
        const bool branch_taken_0x26ac6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AC70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26ac6c) {
            ctx->pc = 0x26AD30u;
            goto label_26ad30;
        }
    }
    ctx->pc = 0x26AC74u;
    // 0x26ac74: 0x8c62ffbc
    ctx->pc = 0x26ac74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26ac78: 0x4400005
    ctx->pc = 0x26AC78u;
    {
        const bool branch_taken_0x26ac78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26AC7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26ac78) {
            ctx->pc = 0x26AC90u;
            goto label_26ac90;
        }
    }
    ctx->pc = 0x26AC80u;
    // 0x26ac80: 0x44821000
    ctx->pc = 0x26ac80u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x26ac84: 0x468010a0
    ctx->pc = 0x26ac84u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26ac88: 0x10000008
    ctx->pc = 0x26AC88u;
    {
        const bool branch_taken_0x26ac88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26ac88) {
            ctx->pc = 0x26ACACu;
            goto label_26acac;
        }
    }
    ctx->pc = 0x26AC90u;
label_26ac90:
    // 0x26ac90: 0x8c820000
    ctx->pc = 0x26ac90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ac94: 0x30430001
    ctx->pc = 0x26ac94u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26ac98: 0x21042
    ctx->pc = 0x26ac98u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26ac9c: 0x621825
    ctx->pc = 0x26ac9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26aca0: 0x44831000
    ctx->pc = 0x26aca0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x26aca4: 0x468010a0
    ctx->pc = 0x26aca4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26aca8: 0x46021080
    ctx->pc = 0x26aca8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26acac:
    // 0x26acac: 0x3c013b09
    ctx->pc = 0x26acacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15113 << 16));
    // 0x26acb0: 0x3421421f
    ctx->pc = 0x26acb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16927));
    // 0x26acb4: 0x44810000
    ctx->pc = 0x26acb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26acb8: 0x46001082
    ctx->pc = 0x26acb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26acbc: 0x3c020034
    ctx->pc = 0x26acbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26acc0: 0xc443f8f8
    ctx->pc = 0x26acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26acc4: 0x3c02003c
    ctx->pc = 0x26acc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26acc8: 0xc44038f0
    ctx->pc = 0x26acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26accc: 0x46001841
    ctx->pc = 0x26acccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26acd0: 0x46000845
    ctx->pc = 0x26acd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x26acd4: 0x3c013ca3
    ctx->pc = 0x26acd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x26acd8: 0x3421d70a
    ctx->pc = 0x26acd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26acdc: 0x44810000
    ctx->pc = 0x26acdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ace0: 0x46000842
    ctx->pc = 0x26ace0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26ace4: 0x46020834
    ctx->pc = 0x26ace4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ace8: 0x0
    ctx->pc = 0x26ace8u;
    // NOP
    // 0x26acec: 0x45030002
    ctx->pc = 0x26ACECu;
    {
        const bool branch_taken_0x26acec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26acec) {
            ctx->pc = 0x26ACF0u;
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x26ACF8u;
            goto label_26acf8;
        }
    }
    ctx->pc = 0x26ACF4u;
    // 0x26acf4: 0x3c02003c
    ctx->pc = 0x26acf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26acf8:
    // 0x26acf8: 0xc44038f0
    ctx->pc = 0x26acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26acfc: 0x46030034
    ctx->pc = 0x26acfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad00: 0x0
    ctx->pc = 0x26ad00u;
    // NOP
    // 0x26ad04: 0x45020005
    ctx->pc = 0x26AD04u;
    {
        const bool branch_taken_0x26ad04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad04) {
            ctx->pc = 0x26AD08u;
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->pc = 0x26AD1Cu;
            goto label_26ad1c;
        }
    }
    ctx->pc = 0x26AD0Cu;
    // 0x26ad0c: 0x46000800
    ctx->pc = 0x26ad0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ad10: 0x46001836
    ctx->pc = 0x26ad10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad14: 0x10000004
    ctx->pc = 0x26AD14u;
    {
        const bool branch_taken_0x26ad14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AD18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
        if (branch_taken_0x26ad14) {
            ctx->pc = 0x26AD28u;
            goto label_26ad28;
        }
    }
    ctx->pc = 0x26AD1Cu;
label_26ad1c:
    // 0x26ad1c: 0xe44038f0
    ctx->pc = 0x26ad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
    // 0x26ad20: 0x46030036
    ctx->pc = 0x26ad20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad24: 0x0
    ctx->pc = 0x26ad24u;
    // NOP
label_26ad28:
    // 0x26ad28: 0x45030001
    ctx->pc = 0x26AD28u;
    {
        const bool branch_taken_0x26ad28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad28) {
            ctx->pc = 0x26AD2Cu;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14576), bits); }
            ctx->pc = 0x26AD30u;
            goto label_26ad30;
        }
    }
    ctx->pc = 0x26AD30u;
label_26ad30:
    // 0x26ad30: 0x3c02003c
    ctx->pc = 0x26ad30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ad34: 0xc44038f0
    ctx->pc = 0x26ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad38: 0xe60000b0
    ctx->pc = 0x26ad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ad3c: 0x3c020034
    ctx->pc = 0x26ad3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ad40: 0x8c42f914
    ctx->pc = 0x26ad40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26ad44: 0x14400051
    ctx->pc = 0x26AD44u;
    {
        const bool branch_taken_0x26ad44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26AD48u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26ad44) {
            ctx->pc = 0x26AE8Cu;
            goto label_26ae8c;
        }
    }
    ctx->pc = 0x26AD4Cu;
    // 0x26ad4c: 0x3c020032
    ctx->pc = 0x26ad4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26ad50: 0x2442f9f8
    ctx->pc = 0x26ad50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x26ad54: 0xc4420030
    ctx->pc = 0x26ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ad58: 0xc441003c
    ctx->pc = 0x26ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad5c: 0xc4430038
    ctx->pc = 0x26ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ad60: 0xc44c0044
    ctx->pc = 0x26ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ad64: 0x3c020034
    ctx->pc = 0x26ad64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ad68: 0x8c43f8f0
    ctx->pc = 0x26ad68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26ad6c: 0x24020001
    ctx->pc = 0x26ad6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ad70: 0x1062000e
    ctx->pc = 0x26AD70u;
    {
        const bool branch_taken_0x26ad70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26AD74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x26ad70) {
            ctx->pc = 0x26ADACu;
            goto label_26adac;
        }
    }
    ctx->pc = 0x26AD78u;
    // 0x26ad78: 0x54400007
    ctx->pc = 0x26AD78u;
    {
        const bool branch_taken_0x26ad78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26ad78) {
            ctx->pc = 0x26AD7Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD80u;
    // 0x26ad80: 0x24020002
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ad84: 0x10620006
    ctx->pc = 0x26AD84u;
    {
        const bool branch_taken_0x26ad84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26AD88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x26ad84) {
            ctx->pc = 0x26ADA0u;
            goto label_26ada0;
        }
    }
    ctx->pc = 0x26AD8Cu;
    // 0x26ad8c: 0x5062000a
    ctx->pc = 0x26AD8Cu;
    {
        const bool branch_taken_0x26ad8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x26ad8c) {
            ctx->pc = 0x26AD90u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26ADB8u;
            goto label_26adb8;
        }
    }
    ctx->pc = 0x26AD94u;
    // 0x26ad94: 0xc6000140
    ctx->pc = 0x26ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ad98:
    // 0x26ad98: 0x10000009
    ctx->pc = 0x26AD98u;
    {
        const bool branch_taken_0x26ad98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AD9Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x26ad98) {
            ctx->pc = 0x26ADC0u;
            goto label_26adc0;
        }
    }
    ctx->pc = 0x26ADA0u;
label_26ada0:
    // 0x26ada0: 0xc6000140
    ctx->pc = 0x26ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ada4: 0x10000006
    ctx->pc = 0x26ADA4u;
    {
        const bool branch_taken_0x26ada4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ADA8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26ada4) {
            ctx->pc = 0x26ADC0u;
            goto label_26adc0;
        }
    }
    ctx->pc = 0x26ADACu;
label_26adac:
    // 0x26adac: 0xc6000148
    ctx->pc = 0x26adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26adb0: 0x10000002
    ctx->pc = 0x26ADB0u;
    {
        const bool branch_taken_0x26adb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ADB4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x26adb0) {
            ctx->pc = 0x26ADBCu;
            goto label_26adbc;
        }
    }
    ctx->pc = 0x26ADB8u;
label_26adb8:
    // 0x26adb8: 0x460c0001
    ctx->pc = 0x26adb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_26adbc:
    // 0x26adbc: 0x46001886
    ctx->pc = 0x26adbcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_26adc0:
    // 0x26adc0: 0x3c020032
    ctx->pc = 0x26adc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26adc4: 0x8c420808
    ctx->pc = 0x26adc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x26adc8: 0x10400003
    ctx->pc = 0x26ADC8u;
    {
        const bool branch_taken_0x26adc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ADCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26adc8) {
            ctx->pc = 0x26ADD8u;
            goto label_26add8;
        }
    }
    ctx->pc = 0x26ADD0u;
    // 0x26add0: 0x10000008
    ctx->pc = 0x26ADD0u;
    {
        const bool branch_taken_0x26add0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ADD4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x26add0) {
            ctx->pc = 0x26ADF4u;
            goto label_26adf4;
        }
    }
    ctx->pc = 0x26ADD8u;
label_26add8:
    // 0x26add8: 0x3c030034
    ctx->pc = 0x26add8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26addc: 0x2463e9c0
    ctx->pc = 0x26addcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x26ade0: 0x3c020034
    ctx->pc = 0x26ade0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ade4: 0x8c42f8f0
    ctx->pc = 0x26ade4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26ade8: 0x21080
    ctx->pc = 0x26ade8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x26adec: 0x431021
    ctx->pc = 0x26adecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26adf0: 0xc4410000
    ctx->pc = 0x26adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26adf4:
    // 0x26adf4: 0x3c014120
    ctx->pc = 0x26adf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x26adf8: 0x44816000
    ctx->pc = 0x26adf8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26adfc: 0x460c1302
    ctx->pc = 0x26adfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x26ae00: 0x0
    ctx->pc = 0x26ae00u;
    // NOP
    // 0x26ae04: 0x0
    ctx->pc = 0x26ae04u;
    // NOP
    // 0x26ae08: 0x460c0303
    ctx->pc = 0x26ae08u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x26ae0c: 0xc0b5a1a
    ctx->pc = 0x26AE0Cu;
    SET_GPR_U32(ctx, 31, 0x26AE14u);
    ctx->pc = 0x26AE10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE14u; }
    }
    if (ctx->pc != 0x26AE14u) { return; }
    ctx->pc = 0x26AE14u;
    // 0x26ae14: 0xe60000b4
    ctx->pc = 0x26ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26ae18: 0x3c020034
    ctx->pc = 0x26ae18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26ae1c:
    // 0x26ae1c: 0x8c42f914
    ctx->pc = 0x26ae1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26ae20: 0x1440001a
    ctx->pc = 0x26AE20u;
    {
        const bool branch_taken_0x26ae20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26AE24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26ae20) {
            ctx->pc = 0x26AE8Cu;
            goto label_26ae8c;
        }
    }
    ctx->pc = 0x26AE28u;
    // 0x26ae28: 0xc60000b0
    ctx->pc = 0x26ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ae2c: 0xc60100c0
    ctx->pc = 0x26ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ae30: 0x46010000
    ctx->pc = 0x26ae30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ae34: 0x3c013fc8
    ctx->pc = 0x26ae34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16328 << 16));
    // 0x26ae38: 0x34219d7b
    ctx->pc = 0x26ae38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 40315));
    // 0x26ae3c: 0x44811000
    ctx->pc = 0x26ae3cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x26ae40: 0x46001036
    ctx->pc = 0x26ae40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ae44: 0x0
    ctx->pc = 0x26ae44u;
    // NOP
    // 0x26ae48: 0x45020005
    ctx->pc = 0x26AE48u;
    {
        const bool branch_taken_0x26ae48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ae48) {
            ctx->pc = 0x26AE4Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26AE60u;
            goto label_26ae60;
        }
    }
    ctx->pc = 0x26AE50u;
    // 0x26ae50: 0x46011001
    ctx->pc = 0x26ae50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26ae54: 0xe60000b0
    ctx->pc = 0x26ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ae58: 0xc60000b0
    ctx->pc = 0x26ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ae5c: 0xc60100c0
    ctx->pc = 0x26ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ae60:
    // 0x26ae60: 0x46010000
    ctx->pc = 0x26ae60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ae64: 0xe60000b0
    ctx->pc = 0x26ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ae68: 0xc60000b4
    ctx->pc = 0x26ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ae6c: 0xc60100c4
    ctx->pc = 0x26ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ae70: 0x46010000
    ctx->pc = 0x26ae70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ae74: 0xe60000b4
    ctx->pc = 0x26ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26ae78: 0xc60000b8
    ctx->pc = 0x26ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ae7c: 0xc60100c8
    ctx->pc = 0x26ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ae80: 0x46010000
    ctx->pc = 0x26ae80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ae84: 0xe60000b8
    ctx->pc = 0x26ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x26ae88: 0xdfbf0010
    ctx->pc = 0x26ae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26ae8c:
    // 0x26ae8c: 0xdfb00000
    ctx->pc = 0x26ae8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ae90: 0x3e00008
    ctx->pc = 0x26AE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AC3Cu: goto label_26ac3c;
            case 0x26AC68u: goto label_26ac68;
            case 0x26AC90u: goto label_26ac90;
            case 0x26ACACu: goto label_26acac;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD1Cu: goto label_26ad1c;
            case 0x26AD28u: goto label_26ad28;
            case 0x26AD30u: goto label_26ad30;
            case 0x26AD98u: goto label_26ad98;
            case 0x26ADA0u: goto label_26ada0;
            case 0x26ADACu: goto label_26adac;
            case 0x26ADB8u: goto label_26adb8;
            case 0x26ADBCu: goto label_26adbc;
            case 0x26ADC0u: goto label_26adc0;
            case 0x26ADD8u: goto label_26add8;
            case 0x26ADF4u: goto label_26adf4;
            case 0x26AE1Cu: goto label_26ae1c;
            case 0x26AE60u: goto label_26ae60;
            case 0x26AE8Cu: goto label_26ae8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AE98u;
}

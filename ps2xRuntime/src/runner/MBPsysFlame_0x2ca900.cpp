#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysFlame
// Address: 0x2ca900 - 0x2cab30
void MBPsysFlame_0x2ca900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ca900u;

    // 0x2ca900: 0x27bdffb0
    ctx->pc = 0x2ca900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ca904: 0xffbf0020
    ctx->pc = 0x2ca904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca908: 0xffb10010
    ctx->pc = 0x2ca908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ca90c: 0xffb00000
    ctx->pc = 0x2ca90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca910: 0xe7b60040
    ctx->pc = 0x2ca910u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ca914: 0xe7b50038
    ctx->pc = 0x2ca914u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ca918: 0xe7b40030
    ctx->pc = 0x2ca918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ca91c: 0x80802d
    ctx->pc = 0x2ca91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca920: 0x44800000
    ctx->pc = 0x2ca920u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ca924: 0x46007036
    ctx->pc = 0x2ca924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca928: 0x0
    ctx->pc = 0x2ca928u;
    // NOP
    // 0x2ca92c: 0x4500000c
    ctx->pc = 0x2CA92Cu;
    {
        const bool branch_taken_0x2ca92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA930u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca92c) {
            ctx->pc = 0x2CA960u;
            goto label_2ca960;
        }
    }
    ctx->pc = 0x2CA934u;
    // 0x2ca934: 0x3c02003a
    ctx->pc = 0x2ca934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ca938: 0x2442b758
    ctx->pc = 0x2ca938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2ca93c: 0x3c013e99
    ctx->pc = 0x2ca93cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x2ca940: 0x3421999a
    ctx->pc = 0x2ca940u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2ca944: 0x44810000
    ctx->pc = 0x2ca944u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca948: 0xe4400044
    ctx->pc = 0x2ca948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca94c: 0x3c013e19
    ctx->pc = 0x2ca94cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15897 << 16));
    // 0x2ca950: 0x3421999a
    ctx->pc = 0x2ca950u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2ca954: 0x44810000
    ctx->pc = 0x2ca954u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca958: 0x1000000d
    ctx->pc = 0x2CA958u;
    {
        const bool branch_taken_0x2ca958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA95Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
        if (branch_taken_0x2ca958) {
            ctx->pc = 0x2CA990u;
            goto label_2ca990;
        }
    }
    ctx->pc = 0x2CA960u;
label_2ca960:
    // 0x2ca960: 0x3c02003a
    ctx->pc = 0x2ca960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ca964: 0x2442b758
    ctx->pc = 0x2ca964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2ca968: 0x3c013e4c
    ctx->pc = 0x2ca968u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x2ca96c: 0x3421cccd
    ctx->pc = 0x2ca96cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2ca970: 0x44810000
    ctx->pc = 0x2ca970u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca974: 0x46007002
    ctx->pc = 0x2ca974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2ca978: 0xe4400044
    ctx->pc = 0x2ca978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca97c: 0x3c013dcc
    ctx->pc = 0x2ca97cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2ca980: 0x3421cccd
    ctx->pc = 0x2ca980u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2ca984: 0x44810000
    ctx->pc = 0x2ca984u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca988: 0x46007002
    ctx->pc = 0x2ca988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2ca98c: 0xe4400048
    ctx->pc = 0x2ca98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_2ca990:
    // 0x2ca990: 0x3c013f00
    ctx->pc = 0x2ca990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2ca994: 0x44810000
    ctx->pc = 0x2ca994u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca998: 0x46006b42
    ctx->pc = 0x2ca998u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2ca99c: 0x44800000
    ctx->pc = 0x2ca99cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ca9a0: 0x46006836
    ctx->pc = 0x2ca9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca9a4: 0x0
    ctx->pc = 0x2ca9a4u;
    // NOP
    // 0x2ca9a8: 0x45000009
    ctx->pc = 0x2CA9A8u;
    {
        const bool branch_taken_0x2ca9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA9ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2ca9a8) {
            ctx->pc = 0x2CA9D0u;
            goto label_2ca9d0;
        }
    }
    ctx->pc = 0x2CA9B0u;
    // 0x2ca9b0: 0x2442b758
    ctx->pc = 0x2ca9b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2ca9b4: 0x3c013e05
    ctx->pc = 0x2ca9b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15877 << 16));
    // 0x2ca9b8: 0x34211eb8
    ctx->pc = 0x2ca9b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 7864));
    // 0x2ca9bc: 0x44810000
    ctx->pc = 0x2ca9bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca9c0: 0xe4400068
    ctx->pc = 0x2ca9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ca9c4: 0xe440006c
    ctx->pc = 0x2ca9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2ca9c8: 0x10000005
    ctx->pc = 0x2CA9C8u;
    {
        const bool branch_taken_0x2ca9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA9CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
        if (branch_taken_0x2ca9c8) {
            ctx->pc = 0x2CA9E0u;
            goto label_2ca9e0;
        }
    }
    ctx->pc = 0x2CA9D0u;
label_2ca9d0:
    // 0x2ca9d0: 0x2442b758
    ctx->pc = 0x2ca9d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2ca9d4: 0xe44d0068
    ctx->pc = 0x2ca9d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ca9d8: 0xe44d006c
    ctx->pc = 0x2ca9d8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2ca9dc: 0xe44d0070
    ctx->pc = 0x2ca9dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_2ca9e0:
    // 0x2ca9e0: 0x44800000
    ctx->pc = 0x2ca9e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ca9e4: 0x46006036
    ctx->pc = 0x2ca9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca9e8: 0x0
    ctx->pc = 0x2ca9e8u;
    // NOP
    // 0x2ca9ec: 0x45000009
    ctx->pc = 0x2CA9ECu;
    {
        const bool branch_taken_0x2ca9ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA9F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2ca9ec) {
            ctx->pc = 0x2CAA14u;
            goto label_2caa14;
        }
    }
    ctx->pc = 0x2CA9F4u;
    // 0x2ca9f4: 0x2442b758
    ctx->pc = 0x2ca9f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2ca9f8: 0x3c014120
    ctx->pc = 0x2ca9f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2ca9fc: 0x44810000
    ctx->pc = 0x2ca9fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caa00: 0xe440003c
    ctx->pc = 0x2caa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2caa04: 0x3c013f80
    ctx->pc = 0x2caa04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2caa08: 0x44810000
    ctx->pc = 0x2caa08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caa0c: 0x10000008
    ctx->pc = 0x2CAA0Cu;
    {
        const bool branch_taken_0x2caa0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAA10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        if (branch_taken_0x2caa0c) {
            ctx->pc = 0x2CAA30u;
            goto label_2caa30;
        }
    }
    ctx->pc = 0x2CAA14u;
label_2caa14:
    // 0x2caa14: 0x2442b758
    ctx->pc = 0x2caa14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2caa18: 0xe44c003c
    ctx->pc = 0x2caa18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2caa1c: 0x3c013dcc
    ctx->pc = 0x2caa1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2caa20: 0x3421cccd
    ctx->pc = 0x2caa20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2caa24: 0x44810000
    ctx->pc = 0x2caa24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caa28: 0x46006002
    ctx->pc = 0x2caa28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2caa2c: 0xe4400040
    ctx->pc = 0x2caa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2caa30:
    // 0x2caa30: 0x10c0002b
    ctx->pc = 0x2CAA30u;
    {
        const bool branch_taken_0x2caa30 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAA34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2caa30) {
            ctx->pc = 0x2CAAE0u;
            goto label_2caae0;
        }
    }
    ctx->pc = 0x2CAA38u;
    // 0x2caa38: 0xc4d60000
    ctx->pc = 0x2caa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2caa3c: 0xc4d50004
    ctx->pc = 0x2caa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2caa40: 0xc4d40008
    ctx->pc = 0x2caa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2caa44: 0x4616b302
    ctx->pc = 0x2caa44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2caa48: 0x4615a802
    ctx->pc = 0x2caa48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2caa4c: 0x46006300
    ctx->pc = 0x2caa4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2caa50: 0x4614a002
    ctx->pc = 0x2caa50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2caa54: 0x46006300
    ctx->pc = 0x2caa54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2caa58: 0x44800000
    ctx->pc = 0x2caa58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2caa5c: 0x46006032
    ctx->pc = 0x2caa5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caa60: 0x45000006
    ctx->pc = 0x2CAA60u;
    {
        const bool branch_taken_0x2caa60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caa60) {
            ctx->pc = 0x2CAA7Cu;
            goto label_2caa7c;
        }
    }
    ctx->pc = 0x2CAA68u;
    // 0x2caa68: 0x46000506
    ctx->pc = 0x2caa68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2caa6c: 0x3c01bf80
    ctx->pc = 0x2caa6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2caa70: 0x4481a800
    ctx->pc = 0x2caa70u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2caa74: 0x10000015
    ctx->pc = 0x2CAA74u;
    {
        const bool branch_taken_0x2caa74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAA78u;
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2caa74) {
            ctx->pc = 0x2CAACCu;
            goto label_2caacc;
        }
    }
    ctx->pc = 0x2CAA7Cu;
label_2caa7c:
    // 0x2caa7c: 0x3c013f70
    ctx->pc = 0x2caa7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16240 << 16));
    // 0x2caa80: 0x3421a3d7
    ctx->pc = 0x2caa80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41943));
    // 0x2caa84: 0x44810000
    ctx->pc = 0x2caa84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caa88: 0x46006034
    ctx->pc = 0x2caa88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caa8c: 0x45010008
    ctx->pc = 0x2CAA8Cu;
    {
        const bool branch_taken_0x2caa8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caa8c) {
            ctx->pc = 0x2CAAB0u;
            goto label_2caab0;
        }
    }
    ctx->pc = 0x2CAA94u;
    // 0x2caa94: 0x3c013f87
    ctx->pc = 0x2caa94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16263 << 16));
    // 0x2caa98: 0x3421ae14
    ctx->pc = 0x2caa98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 44564));
    // 0x2caa9c: 0x44810000
    ctx->pc = 0x2caa9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caaa0: 0x460c0034
    ctx->pc = 0x2caaa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caaa4: 0x0
    ctx->pc = 0x2caaa4u;
    // NOP
    // 0x2caaa8: 0x45000008
    ctx->pc = 0x2CAAA8u;
    {
        const bool branch_taken_0x2caaa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAAACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2caaa8) {
            ctx->pc = 0x2CAACCu;
            goto label_2caacc;
        }
    }
    ctx->pc = 0x2CAAB0u;
label_2caab0:
    // 0x2caab0: 0xc0b18f0
    ctx->pc = 0x2CAAB0u;
    SET_GPR_U32(ctx, 31, 0x2CAAB8u);
    ctx->pc = 0x2C63C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inv_sqrtf_0x2c63c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAB8u; }
    }
    if (ctx->pc != 0x2CAAB8u) { return; }
    ctx->pc = 0x2CAAB8u;
    // 0x2caab8: 0x46000306
    ctx->pc = 0x2caab8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2caabc: 0x460cb582
    ctx->pc = 0x2caabcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x2caac0: 0x460cad42
    ctx->pc = 0x2caac0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2caac4: 0x460ca502
    ctx->pc = 0x2caac4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2caac8: 0x3c02003a
    ctx->pc = 0x2caac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2caacc:
    // 0x2caacc: 0x2442b758
    ctx->pc = 0x2caaccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2caad0: 0xe4560058
    ctx->pc = 0x2caad0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2caad4: 0xe455005c
    ctx->pc = 0x2caad4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2caad8: 0x10000007
    ctx->pc = 0x2CAAD8u;
    {
        const bool branch_taken_0x2caad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAADCu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
        if (branch_taken_0x2caad8) {
            ctx->pc = 0x2CAAF8u;
            goto label_2caaf8;
        }
    }
    ctx->pc = 0x2CAAE0u;
label_2caae0:
    // 0x2caae0: 0x2442b758
    ctx->pc = 0x2caae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x2caae4: 0xac400058
    ctx->pc = 0x2caae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2caae8: 0x3c01bf80
    ctx->pc = 0x2caae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2caaec: 0x44810000
    ctx->pc = 0x2caaecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caaf0: 0xe440005c
    ctx->pc = 0x2caaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2caaf4: 0xac400060
    ctx->pc = 0x2caaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_2caaf8:
    // 0x2caaf8: 0x200202d
    ctx->pc = 0x2caaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caafc: 0x220282d
    ctx->pc = 0x2caafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab00: 0x302d
    ctx->pc = 0x2cab00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab04: 0x3c07003a
    ctx->pc = 0x2cab04u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2cab08: 0xc0b2814
    ctx->pc = 0x2CAB08u;
    SET_GPR_U32(ctx, 31, 0x2CAB10u);
    ctx->pc = 0x2CAB0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294948696));
    ctx->pc = 0x2CA050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDescrip_0x2ca050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB10u; }
    }
    if (ctx->pc != 0x2CAB10u) { return; }
    ctx->pc = 0x2CAB10u;
    // 0x2cab10: 0xdfbf0020
    ctx->pc = 0x2cab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cab14: 0xdfb10010
    ctx->pc = 0x2cab14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab18: 0xdfb00000
    ctx->pc = 0x2cab18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cab1c: 0xc7b60040
    ctx->pc = 0x2cab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cab20: 0xc7b50038
    ctx->pc = 0x2cab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cab24: 0xc7b40030
    ctx->pc = 0x2cab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cab28: 0x3e00008
    ctx->pc = 0x2CAB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAB2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA960u: goto label_2ca960;
            case 0x2CA990u: goto label_2ca990;
            case 0x2CA9D0u: goto label_2ca9d0;
            case 0x2CA9E0u: goto label_2ca9e0;
            case 0x2CAA14u: goto label_2caa14;
            case 0x2CAA30u: goto label_2caa30;
            case 0x2CAA7Cu: goto label_2caa7c;
            case 0x2CAAB0u: goto label_2caab0;
            case 0x2CAACCu: goto label_2caacc;
            case 0x2CAAE0u: goto label_2caae0;
            case 0x2CAAF8u: goto label_2caaf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CAB30u;
}

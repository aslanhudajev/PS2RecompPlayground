#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: corner_hilite
// Address: 0x2c1e18 - 0x2c20b4
void corner_hilite_0x2c1e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1e18u;

    // 0x2c1e18: 0x852021
    ctx->pc = 0x2c1e18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c1e1c: 0x44841800
    ctx->pc = 0x2c1e1cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 4);
    // 0x2c1e20: 0x468018e0
    ctx->pc = 0x2c1e20u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x2c1e24: 0x3c02003d
    ctx->pc = 0x2c1e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c1e28: 0xc440b80c
    ctx->pc = 0x2c1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1e2c: 0x460018c2
    ctx->pc = 0x2c1e2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c1e30: 0x3c02003d
    ctx->pc = 0x2c1e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c1e34: 0xc441b804
    ctx->pc = 0x2c1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1e38: 0x3c0140e0
    ctx->pc = 0x2c1e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16608 << 16));
    // 0x2c1e3c: 0x44810000
    ctx->pc = 0x2c1e3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e40: 0x46000882
    ctx->pc = 0x2c1e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1e44: 0x3c013f00
    ctx->pc = 0x2c1e44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c1e48: 0x44810000
    ctx->pc = 0x2c1e48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e4c: 0x46001834
    ctx->pc = 0x2c1e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1e50: 0x45000035
    ctx->pc = 0x2C1E50u;
    {
        const bool branch_taken_0x2c1e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1e50) {
            ctx->pc = 0x2C1F28u;
            goto label_2c1f28;
        }
    }
    ctx->pc = 0x2C1E58u;
    // 0x2c1e58: 0x3c013f80
    ctx->pc = 0x2c1e58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c1e5c: 0x44810000
    ctx->pc = 0x2c1e5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e60: 0x46001034
    ctx->pc = 0x2c1e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1e64: 0x45000006
    ctx->pc = 0x2C1E64u;
    {
        const bool branch_taken_0x2c1e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1e64) {
            ctx->pc = 0x2C1E80u;
            goto label_2c1e80;
        }
    }
    ctx->pc = 0x2C1E6Cu;
    // 0x2c1e6c: 0x3c014080
    ctx->pc = 0x2c1e6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c1e70: 0x44810000
    ctx->pc = 0x2c1e70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e74: 0x46001802
    ctx->pc = 0x2c1e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c1e78: 0x1000007c
    ctx->pc = 0x2C1E78u;
    {
        const bool branch_taken_0x2c1e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1E7Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2c1e78) {
            ctx->pc = 0x2C206Cu;
            goto label_2c206c;
        }
    }
    ctx->pc = 0x2C1E80u;
label_2c1e80:
    // 0x2c1e80: 0x3c014000
    ctx->pc = 0x2c1e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2c1e84: 0x44810000
    ctx->pc = 0x2c1e84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e88: 0x46001034
    ctx->pc = 0x2c1e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1e8c: 0x45000005
    ctx->pc = 0x2C1E8Cu;
    {
        const bool branch_taken_0x2c1e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1e8c) {
            ctx->pc = 0x2C1EA4u;
            goto label_2c1ea4;
        }
    }
    ctx->pc = 0x2C1E94u;
    // 0x2c1e94: 0x3c014040
    ctx->pc = 0x2c1e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2c1e98: 0x44810000
    ctx->pc = 0x2c1e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1e9c: 0x10000066
    ctx->pc = 0x2C1E9Cu;
    {
        const bool branch_taken_0x2c1e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1EA0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2c1e9c) {
            ctx->pc = 0x2C2038u;
            goto label_2c2038;
        }
    }
    ctx->pc = 0x2C1EA4u;
label_2c1ea4:
    // 0x2c1ea4: 0x3c014040
    ctx->pc = 0x2c1ea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2c1ea8: 0x44810800
    ctx->pc = 0x2c1ea8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c1eac: 0x46011034
    ctx->pc = 0x2c1eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1eb0: 0x4500000b
    ctx->pc = 0x2C1EB0u;
    {
        const bool branch_taken_0x2c1eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1eb0) {
            ctx->pc = 0x2C1EE0u;
            goto label_2c1ee0;
        }
    }
    ctx->pc = 0x2C1EB8u;
    // 0x2c1eb8: 0x46020841
    ctx->pc = 0x2c1eb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c1ebc: 0x3c013f00
    ctx->pc = 0x2c1ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c1ec0: 0x44810000
    ctx->pc = 0x2c1ec0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1ec4: 0x46030001
    ctx->pc = 0x2c1ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c1ec8: 0x46000842
    ctx->pc = 0x2c1ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1ecc: 0x46010840
    ctx->pc = 0x2c1eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2c1ed0: 0x3c014000
    ctx->pc = 0x2c1ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2c1ed4: 0x44810000
    ctx->pc = 0x2c1ed4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1ed8: 0x1000004b
    ctx->pc = 0x2C1ED8u;
    {
        const bool branch_taken_0x2c1ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1EDCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2c1ed8) {
            ctx->pc = 0x2C2008u;
            goto label_2c2008;
        }
    }
    ctx->pc = 0x2C1EE0u;
label_2c1ee0:
    // 0x2c1ee0: 0x3c014080
    ctx->pc = 0x2c1ee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c1ee4: 0x44810000
    ctx->pc = 0x2c1ee4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1ee8: 0x46001034
    ctx->pc = 0x2c1ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1eec: 0x45000005
    ctx->pc = 0x2C1EECu;
    {
        const bool branch_taken_0x2c1eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1eec) {
            ctx->pc = 0x2C1F04u;
            goto label_2c1f04;
        }
    }
    ctx->pc = 0x2C1EF4u;
    // 0x2c1ef4: 0x3c014040
    ctx->pc = 0x2c1ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2c1ef8: 0x44810000
    ctx->pc = 0x2c1ef8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1efc: 0x1000002c
    ctx->pc = 0x2C1EFCu;
    {
        const bool branch_taken_0x2c1efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1F00u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        if (branch_taken_0x2c1efc) {
            ctx->pc = 0x2C1FB0u;
            goto label_2c1fb0;
        }
    }
    ctx->pc = 0x2C1F04u;
label_2c1f04:
    // 0x2c1f04: 0x3c0140a0
    ctx->pc = 0x2c1f04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2c1f08: 0x44812000
    ctx->pc = 0x2c1f08u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x2c1f0c: 0x46041034
    ctx->pc = 0x2c1f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f10: 0x4500000d
    ctx->pc = 0x2C1F10u;
    {
        const bool branch_taken_0x2c1f10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1f10) {
            ctx->pc = 0x2C1F48u;
            goto label_2c1f48;
        }
    }
    ctx->pc = 0x2C1F18u;
    // 0x2c1f18: 0x3c014040
    ctx->pc = 0x2c1f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2c1f1c: 0x44810800
    ctx->pc = 0x2c1f1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c1f20: 0x10000033
    ctx->pc = 0x2C1F20u;
    {
        const bool branch_taken_0x2c1f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1F24u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        if (branch_taken_0x2c1f20) {
            ctx->pc = 0x2C1FF0u;
            goto label_2c1ff0;
        }
    }
    ctx->pc = 0x2C1F28u;
label_2c1f28:
    // 0x2c1f28: 0x3c013f80
    ctx->pc = 0x2c1f28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c1f2c: 0x44810000
    ctx->pc = 0x2c1f2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1f30: 0x460300c1
    ctx->pc = 0x2c1f30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c1f34: 0x3c014000
    ctx->pc = 0x2c1f34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2c1f38: 0x44810000
    ctx->pc = 0x2c1f38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1f3c: 0x46001034
    ctx->pc = 0x2c1f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f40: 0x45000004
    ctx->pc = 0x2C1F40u;
    {
        const bool branch_taken_0x2c1f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1f40) {
            ctx->pc = 0x2C1F54u;
            goto label_2c1f54;
        }
    }
    ctx->pc = 0x2C1F48u;
label_2c1f48:
    // 0x2c1f48: 0x44800800
    ctx->pc = 0x2c1f48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2c1f4c: 0x10000047
    ctx->pc = 0x2C1F4Cu;
    {
        const bool branch_taken_0x2c1f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c1f4c) {
            ctx->pc = 0x2C206Cu;
            goto label_2c206c;
        }
    }
    ctx->pc = 0x2C1F54u;
label_2c1f54:
    // 0x2c1f54: 0x3c014040
    ctx->pc = 0x2c1f54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2c1f58: 0x44810000
    ctx->pc = 0x2c1f58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1f5c: 0x46001034
    ctx->pc = 0x2c1f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f60: 0x4500000d
    ctx->pc = 0x2C1F60u;
    {
        const bool branch_taken_0x2c1f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1f60) {
            ctx->pc = 0x2C1F98u;
            goto label_2c1f98;
        }
    }
    ctx->pc = 0x2C1F68u;
    // 0x2c1f68: 0x3c014080
    ctx->pc = 0x2c1f68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c1f6c: 0x44810800
    ctx->pc = 0x2c1f6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c1f70: 0x46011041
    ctx->pc = 0x2c1f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c1f74: 0x3c013f00
    ctx->pc = 0x2c1f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c1f78: 0x44810000
    ctx->pc = 0x2c1f78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1f7c: 0x46030001
    ctx->pc = 0x2c1f7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c1f80: 0x46000842
    ctx->pc = 0x2c1f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1f84: 0x46010840
    ctx->pc = 0x2c1f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2c1f88: 0x3c014000
    ctx->pc = 0x2c1f88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2c1f8c: 0x44810000
    ctx->pc = 0x2c1f8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1f90: 0x1000001d
    ctx->pc = 0x2C1F90u;
    {
        const bool branch_taken_0x2c1f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1F94u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2c1f90) {
            ctx->pc = 0x2C2008u;
            goto label_2c2008;
        }
    }
    ctx->pc = 0x2C1F98u;
label_2c1f98:
    // 0x2c1f98: 0x3c014080
    ctx->pc = 0x2c1f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c1f9c: 0x44810000
    ctx->pc = 0x2c1f9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1fa0: 0x46001034
    ctx->pc = 0x2c1fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1fa4: 0x4500000a
    ctx->pc = 0x2C1FA4u;
    {
        const bool branch_taken_0x2c1fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1fa4) {
            ctx->pc = 0x2C1FD0u;
            goto label_2c1fd0;
        }
    }
    ctx->pc = 0x2C1FACu;
    // 0x2c1fac: 0x46001001
    ctx->pc = 0x2c1facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2c1fb0:
    // 0x2c1fb0: 0x3c013f00
    ctx->pc = 0x2c1fb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c1fb4: 0x44810800
    ctx->pc = 0x2c1fb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c1fb8: 0x46030841
    ctx->pc = 0x2c1fb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c1fbc: 0x46010002
    ctx->pc = 0x2c1fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1fc0: 0x46000040
    ctx->pc = 0x2c1fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c1fc4: 0x46031800
    ctx->pc = 0x2c1fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2c1fc8: 0x10000028
    ctx->pc = 0x2C1FC8u;
    {
        const bool branch_taken_0x2c1fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1FCCu;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2c1fc8) {
            ctx->pc = 0x2C206Cu;
            goto label_2c206c;
        }
    }
    ctx->pc = 0x2C1FD0u;
label_2c1fd0:
    // 0x2c1fd0: 0x3c0140a0
    ctx->pc = 0x2c1fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2c1fd4: 0x44812000
    ctx->pc = 0x2c1fd4u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x2c1fd8: 0x46041034
    ctx->pc = 0x2c1fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1fdc: 0x4500000e
    ctx->pc = 0x2C1FDCu;
    {
        const bool branch_taken_0x2c1fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1fdc) {
            ctx->pc = 0x2C2018u;
            goto label_2c2018;
        }
    }
    ctx->pc = 0x2C1FE4u;
    // 0x2c1fe4: 0x3c014080
    ctx->pc = 0x2c1fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c1fe8: 0x44810800
    ctx->pc = 0x2c1fe8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c1fec: 0x46011041
    ctx->pc = 0x2c1fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2c1ff0:
    // 0x2c1ff0: 0x3c013f00
    ctx->pc = 0x2c1ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c1ff4: 0x44810000
    ctx->pc = 0x2c1ff4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1ff8: 0x46030001
    ctx->pc = 0x2c1ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c1ffc: 0x46000842
    ctx->pc = 0x2c1ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2000: 0x46010840
    ctx->pc = 0x2c2000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2c2004: 0x46022001
    ctx->pc = 0x2c2004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_2c2008:
    // 0x2c2008: 0x46030002
    ctx->pc = 0x2c2008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c200c: 0x46000000
    ctx->pc = 0x2c200cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c2010: 0x10000016
    ctx->pc = 0x2C2010u;
    {
        const bool branch_taken_0x2c2010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2014u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2c2010) {
            ctx->pc = 0x2C206Cu;
            goto label_2c206c;
        }
    }
    ctx->pc = 0x2C2018u;
label_2c2018:
    // 0x2c2018: 0x3c0140c0
    ctx->pc = 0x2c2018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x2c201c: 0x44810000
    ctx->pc = 0x2c201cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2020: 0x46001034
    ctx->pc = 0x2c2020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2024: 0x4500000a
    ctx->pc = 0x2C2024u;
    {
        const bool branch_taken_0x2c2024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2024) {
            ctx->pc = 0x2C2050u;
            goto label_2c2050;
        }
    }
    ctx->pc = 0x2C202Cu;
    // 0x2c202c: 0x3c014080
    ctx->pc = 0x2c202cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c2030: 0x44810000
    ctx->pc = 0x2c2030u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2034: 0x46020001
    ctx->pc = 0x2c2034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2c2038:
    // 0x2c2038: 0x46001802
    ctx->pc = 0x2c2038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c203c: 0x46000040
    ctx->pc = 0x2c203cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c2040: 0x3c013f80
    ctx->pc = 0x2c2040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c2044: 0x44810000
    ctx->pc = 0x2c2044u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2048: 0x10000008
    ctx->pc = 0x2C2048u;
    {
        const bool branch_taken_0x2c2048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C204Cu;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2c2048) {
            ctx->pc = 0x2C206Cu;
            goto label_2c206c;
        }
    }
    ctx->pc = 0x2C2050u;
label_2c2050:
    // 0x2c2050: 0x3c0140e0
    ctx->pc = 0x2c2050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16608 << 16));
    // 0x2c2054: 0x44810000
    ctx->pc = 0x2c2054u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2058: 0x46020041
    ctx->pc = 0x2c2058u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c205c: 0x3c014080
    ctx->pc = 0x2c205cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2c2060: 0x44810000
    ctx->pc = 0x2c2060u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2064: 0x46001802
    ctx->pc = 0x2c2064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c2068: 0x46000841
    ctx->pc = 0x2c2068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c206c:
    // 0x2c206c: 0x3c0142fe
    ctx->pc = 0x2c206cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17150 << 16));
    // 0x2c2070: 0x44810000
    ctx->pc = 0x2c2070u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2074: 0x46000842
    ctx->pc = 0x2c2074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2078: 0x44800000
    ctx->pc = 0x2c2078u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c207c: 0x46000834
    ctx->pc = 0x2c207cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2080: 0x45010008
    ctx->pc = 0x2C2080u;
    {
        const bool branch_taken_0x2c2080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2080) {
            ctx->pc = 0x2C20A4u;
            goto label_2c20a4;
        }
    }
    ctx->pc = 0x2C2088u;
    // 0x2c2088: 0x3c0142fe
    ctx->pc = 0x2c2088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17150 << 16));
    // 0x2c208c: 0x44811000
    ctx->pc = 0x2c208cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c2090: 0x46011034
    ctx->pc = 0x2c2090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2094: 0x0
    ctx->pc = 0x2c2094u;
    // NOP
    // 0x2c2098: 0x45000002
    ctx->pc = 0x2C2098u;
    {
        const bool branch_taken_0x2c2098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C209Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x2c2098) {
            ctx->pc = 0x2C20A4u;
            goto label_2c20a4;
        }
    }
    ctx->pc = 0x2C20A0u;
    // 0x2c20a0: 0x46001006
    ctx->pc = 0x2c20a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2c20a4:
    // 0x2c20a4: 0x46000064
    ctx->pc = 0x2c20a4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c20a8: 0x44020800
    ctx->pc = 0x2c20a8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c20ac: 0x3e00008
    ctx->pc = 0x2C20ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C1E80u: goto label_2c1e80;
            case 0x2C1EA4u: goto label_2c1ea4;
            case 0x2C1EE0u: goto label_2c1ee0;
            case 0x2C1F04u: goto label_2c1f04;
            case 0x2C1F28u: goto label_2c1f28;
            case 0x2C1F48u: goto label_2c1f48;
            case 0x2C1F54u: goto label_2c1f54;
            case 0x2C1F98u: goto label_2c1f98;
            case 0x2C1FB0u: goto label_2c1fb0;
            case 0x2C1FD0u: goto label_2c1fd0;
            case 0x2C1FF0u: goto label_2c1ff0;
            case 0x2C2008u: goto label_2c2008;
            case 0x2C2018u: goto label_2c2018;
            case 0x2C2038u: goto label_2c2038;
            case 0x2C2050u: goto label_2c2050;
            case 0x2C206Cu: goto label_2c206c;
            case 0x2C20A4u: goto label_2c20a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C20B4u;
}

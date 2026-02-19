#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_wave_timer
// Address: 0x224e58 - 0x225184
void do_wave_timer_0x224e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224e58u;

    // 0x224e58: 0x27bdffc0
    ctx->pc = 0x224e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x224e5c: 0xffbf0030
    ctx->pc = 0x224e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x224e60: 0xffb20020
    ctx->pc = 0x224e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224e64: 0xffb10010
    ctx->pc = 0x224e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224e68: 0xffb00000
    ctx->pc = 0x224e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224e6c: 0x3c020032
    ctx->pc = 0x224e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224e70: 0x8c42080c
    ctx->pc = 0x224e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x224e74: 0x2c520001
    ctx->pc = 0x224e74u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x224e78: 0x3c020031
    ctx->pc = 0x224e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224e7c: 0xdc420e28
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x224e80: 0x30420010
    ctx->pc = 0x224e80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x224e84: 0x14400020
    ctx->pc = 0x224E84u;
    {
        const bool branch_taken_0x224e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224E88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x224e84) {
            ctx->pc = 0x224F08u;
            goto label_224f08;
        }
    }
    ctx->pc = 0x224E8Cu;
    // 0x224e8c: 0x1240000a
    ctx->pc = 0x224E8Cu;
    {
        const bool branch_taken_0x224e8c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x224E90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
        if (branch_taken_0x224e8c) {
            ctx->pc = 0x224EB8u;
            goto label_224eb8;
        }
    }
    ctx->pc = 0x224E94u;
    // 0x224e94: 0x8c420000
    ctx->pc = 0x224e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224e98: 0x30420004
    ctx->pc = 0x224e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x224e9c: 0x10400006
    ctx->pc = 0x224E9Cu;
    {
        const bool branch_taken_0x224e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224EA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x224e9c) {
            ctx->pc = 0x224EB8u;
            goto label_224eb8;
        }
    }
    ctx->pc = 0x224EA4u;
    // 0x224ea4: 0x8c4408a4
    ctx->pc = 0x224ea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2212)));
    // 0x224ea8: 0x10800004
    ctx->pc = 0x224EA8u;
    {
        const bool branch_taken_0x224ea8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x224EACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x224ea8) {
            ctx->pc = 0x224EBCu;
            goto label_224ebc;
        }
    }
    ctx->pc = 0x224EB0u;
    // 0x224eb0: 0xc0b0ce8
    ctx->pc = 0x224EB0u;
    SET_GPR_U32(ctx, 31, 0x224EB8u);
    ctx->pc = 0x224EB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EB8u; }
    }
    if (ctx->pc != 0x224EB8u) { return; }
    ctx->pc = 0x224EB8u;
label_224eb8:
    // 0x224eb8: 0x3c030032
    ctx->pc = 0x224eb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_224ebc:
    // 0x224ebc: 0x3c020034
    ctx->pc = 0x224ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224ec0: 0x8c42e7c8
    ctx->pc = 0x224ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x224ec4: 0x8442000c
    ctx->pc = 0x224ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224ec8: 0x44820000
    ctx->pc = 0x224ec8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224ecc: 0x46800020
    ctx->pc = 0x224eccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x224ed0: 0x3c013f7d
    ctx->pc = 0x224ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16253 << 16));
    // 0x224ed4: 0x342170a4
    ctx->pc = 0x224ed4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 28836));
    // 0x224ed8: 0x44810800
    ctx->pc = 0x224ed8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x224edc: 0x46010000
    ctx->pc = 0x224edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224ee0: 0xc46107c0
    ctx->pc = 0x224ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224ee4: 0x46010034
    ctx->pc = 0x224ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224ee8: 0x0
    ctx->pc = 0x224ee8u;
    // NOP
    // 0x224eec: 0x45000005
    ctx->pc = 0x224EECu;
    {
        const bool branch_taken_0x224eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224EF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x224eec) {
            ctx->pc = 0x224F04u;
            goto label_224f04;
        }
    }
    ctx->pc = 0x224EF4u;
    // 0x224ef4: 0x3c0140a0
    ctx->pc = 0x224ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x224ef8: 0x44810000
    ctx->pc = 0x224ef8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224efc: 0xe44007c4
    ctx->pc = 0x224efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1988), bits); }
    // 0x224f00: 0xe46007c0
    ctx->pc = 0x224f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1984), bits); }
label_224f04:
    // 0x224f04: 0x3c020034
    ctx->pc = 0x224f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_224f08:
    // 0x224f08: 0x8c42e7c8
    ctx->pc = 0x224f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x224f0c: 0x8c420000
    ctx->pc = 0x224f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224f10: 0x30420004
    ctx->pc = 0x224f10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x224f14: 0x10400095
    ctx->pc = 0x224F14u;
    {
        const bool branch_taken_0x224f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224F18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x224f14) {
            ctx->pc = 0x22516Cu;
            goto label_22516c;
        }
    }
    ctx->pc = 0x224F1Cu;
    // 0x224f1c: 0x3c030031
    ctx->pc = 0x224f1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x224f20: 0x8c42ff9c
    ctx->pc = 0x224f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x224f24: 0x8c630024
    ctx->pc = 0x224f24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x224f28: 0x431025
    ctx->pc = 0x224f28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224f2c: 0x14400090
    ctx->pc = 0x224F2Cu;
    {
        const bool branch_taken_0x224f2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224F30u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x224f2c) {
            ctx->pc = 0x225170u;
            goto label_225170;
        }
    }
    ctx->pc = 0x224F34u;
    // 0x224f34: 0x3c020031
    ctx->pc = 0x224f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224f38: 0xdc420e28
    ctx->pc = 0x224f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x224f3c: 0x30420004
    ctx->pc = 0x224f3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x224f40: 0x5440008c
    ctx->pc = 0x224F40u;
    {
        const bool branch_taken_0x224f40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224f40) {
            ctx->pc = 0x224F44u;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x225174u;
            goto label_225174;
        }
    }
    ctx->pc = 0x224F48u;
    // 0x224f48: 0x12400089
    ctx->pc = 0x224F48u;
    {
        const bool branch_taken_0x224f48 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x224F4Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x224f48) {
            ctx->pc = 0x225170u;
            goto label_225170;
        }
    }
    ctx->pc = 0x224F50u;
    // 0x224f50: 0xc46107c0
    ctx->pc = 0x224f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224f54: 0x46000824
    ctx->pc = 0x224f54u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x224f58: 0x44040000
    ctx->pc = 0x224f58u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x224f5c: 0x3c020031
    ctx->pc = 0x224f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224f60: 0xc440ffa8
    ctx->pc = 0x224f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f64: 0x46000841
    ctx->pc = 0x224f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224f68: 0x44800000
    ctx->pc = 0x224f68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x224f6c: 0x46000836
    ctx->pc = 0x224f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f70: 0x0
    ctx->pc = 0x224f70u;
    // NOP
    // 0x224f74: 0x45000043
    ctx->pc = 0x224F74u;
    {
        const bool branch_taken_0x224f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224F78u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1984), bits); }
        if (branch_taken_0x224f74) {
            ctx->pc = 0x225084u;
            goto label_225084;
        }
    }
    ctx->pc = 0x224F7Cu;
    // 0x224f7c: 0x882d
    ctx->pc = 0x224f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f80: 0x3c020032
    ctx->pc = 0x224f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224f84: 0x24520898
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x224f88: 0x111080
    ctx->pc = 0x224f88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x224f8c: 0x0
    ctx->pc = 0x224f8cu;
    // NOP
label_224f90:
    // 0x224f90: 0x528021
    ctx->pc = 0x224f90u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x224f94: 0x8e040000
    ctx->pc = 0x224f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224f98: 0x10800004
    ctx->pc = 0x224F98u;
    {
        const bool branch_taken_0x224f98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x224F9Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x224f98) {
            ctx->pc = 0x224FACu;
            goto label_224fac;
        }
    }
    ctx->pc = 0x224FA0u;
    // 0x224fa0: 0xc0b0b38
    ctx->pc = 0x224FA0u;
    SET_GPR_U32(ctx, 31, 0x224FA8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FA8u; }
    }
    if (ctx->pc != 0x224FA8u) { return; }
    ctx->pc = 0x224FA8u;
    // 0x224fa8: 0xae000000
    ctx->pc = 0x224fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_224fac:
    // 0x224fac: 0x2a220004
    ctx->pc = 0x224facu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x224fb0: 0x1440fff7
    ctx->pc = 0x224FB0u;
    {
        const bool branch_taken_0x224fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224FB4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x224fb0) {
            ctx->pc = 0x224F90u;
            goto label_224f90;
        }
    }
    ctx->pc = 0x224FB8u;
    // 0x224fb8: 0x3c020032
    ctx->pc = 0x224fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224fbc: 0xac4007c0
    ctx->pc = 0x224fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1984), GPR_U32(ctx, 0));
    // 0x224fc0: 0x3c020031
    ctx->pc = 0x224fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224fc4: 0xdc420e28
    ctx->pc = 0x224fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x224fc8: 0x30420010
    ctx->pc = 0x224fc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x224fcc: 0x10400026
    ctx->pc = 0x224FCCu;
    {
        const bool branch_taken_0x224fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224FD0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x224fcc) {
            ctx->pc = 0x225068u;
            goto label_225068;
        }
    }
    ctx->pc = 0x224FD4u;
    // 0x224fd4: 0x3c020031
    ctx->pc = 0x224fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224fd8: 0x8c42000c
    ctx->pc = 0x224fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224fdc: 0x21203
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x224fe0: 0x2403000c
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x224fe4: 0x14430021
    ctx->pc = 0x224FE4u;
    {
        const bool branch_taken_0x224fe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x224FE8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x224fe4) {
            ctx->pc = 0x22506Cu;
            goto label_22506c;
        }
    }
    ctx->pc = 0x224FECu;
    // 0x224fec: 0x24020002
    ctx->pc = 0x224fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x224ff0: 0xac6207bc
    ctx->pc = 0x224ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
    // 0x224ff4: 0x882d
    ctx->pc = 0x224ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ff8: 0x3c020032
    ctx->pc = 0x224ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224ffc: 0x24441bc0
    ctx->pc = 0x224ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x225000: 0x3c020032
    ctx->pc = 0x225000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x225004: 0x24480830
    ctx->pc = 0x225004u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 2096));
    // 0x225008: 0x2407000c
    ctx->pc = 0x225008u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22500c: 0x3c020032
    ctx->pc = 0x22500cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x225010: 0x24460834
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 2100));
    // 0x225014: 0x3c020032
    ctx->pc = 0x225014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x225018: 0x24450838
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2104));
    // 0x22501c: 0x0
    ctx->pc = 0x22501cu;
    // NOP
label_225020:
    // 0x225020: 0x8c8200fc
    ctx->pc = 0x225020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x225024: 0x1040000a
    ctx->pc = 0x225024u;
    {
        const bool branch_taken_0x225024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225028u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x225024) {
            ctx->pc = 0x225050u;
            goto label_225050;
        }
    }
    ctx->pc = 0x22502Cu;
    // 0x22502c: 0x481821
    ctx->pc = 0x22502cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x225030: 0xc4800050
    ctx->pc = 0x225030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225034: 0xe4600000
    ctx->pc = 0x225034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x225038: 0x461821
    ctx->pc = 0x225038u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22503c: 0xc4800054
    ctx->pc = 0x22503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225040: 0xe4600000
    ctx->pc = 0x225040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x225044: 0x451021
    ctx->pc = 0x225044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x225048: 0xc4800058
    ctx->pc = 0x225048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22504c: 0xe4400000
    ctx->pc = 0x22504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_225050:
    // 0x225050: 0x26310001
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x225054: 0x2a220004
    ctx->pc = 0x225054u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x225058: 0x1440fff1
    ctx->pc = 0x225058u;
    {
        const bool branch_taken_0x225058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22505Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11008));
        if (branch_taken_0x225058) {
            ctx->pc = 0x225020u;
            goto label_225020;
        }
    }
    ctx->pc = 0x225060u;
    // 0x225060: 0x10000004
    ctx->pc = 0x225060u;
    {
        const bool branch_taken_0x225060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x225060) {
            ctx->pc = 0x225074u;
            goto label_225074;
        }
    }
    ctx->pc = 0x225068u;
label_225068:
    // 0x225068: 0x3c030032
    ctx->pc = 0x225068u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22506c:
    // 0x22506c: 0x2402000d
    ctx->pc = 0x22506cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x225070: 0xac6207bc
    ctx->pc = 0x225070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
label_225074:
    // 0x225074: 0xc08ac56
    ctx->pc = 0x225074u;
    SET_GPR_U32(ctx, 31, 0x22507Cu);
    ctx->pc = 0x22B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_got_it_0x22b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22507Cu; }
    }
    if (ctx->pc != 0x22507Cu) { return; }
    ctx->pc = 0x22507Cu;
    // 0x22507c: 0x1000001a
    ctx->pc = 0x22507Cu;
    {
        const bool branch_taken_0x22507c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22507c) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x225084u;
label_225084:
    // 0x225084: 0x3c020032
    ctx->pc = 0x225084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x225088: 0x8c4207c8
    ctx->pc = 0x225088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1992)));
    // 0x22508c: 0x14400016
    ctx->pc = 0x22508Cu;
    {
        const bool branch_taken_0x22508c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225090u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22508c) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x225094u;
    // 0x225094: 0xc44007c0
    ctx->pc = 0x225094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225098: 0x46000064
    ctx->pc = 0x225098u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x22509c: 0x44100800
    ctx->pc = 0x22509cu;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x2250a0: 0x10900011
    ctx->pc = 0x2250A0u;
    {
        const bool branch_taken_0x2250a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 16));
        if (branch_taken_0x2250a0) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250A8u;
    // 0x2250a8: 0xc0975ce
    ctx->pc = 0x2250A8u;
    SET_GPR_U32(ctx, 31, 0x2250B0u);
    ctx->pc = 0x2250ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D738u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSecretTimer_0x25d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B0u; }
    }
    if (ctx->pc != 0x2250B0u) { return; }
    ctx->pc = 0x2250B0u;
    // 0x2250b0: 0x24020008
    ctx->pc = 0x2250b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2250b4: 0x16020005
    ctx->pc = 0x2250B4u;
    {
        const bool branch_taken_0x2250b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2250B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
        if (branch_taken_0x2250b4) {
            ctx->pc = 0x2250CCu;
            goto label_2250cc;
        }
    }
    ctx->pc = 0x2250BCu;
    // 0x2250bc: 0xc09789c
    ctx->pc = 0x2250BCu;
    SET_GPR_U32(ctx, 31, 0x2250C4u);
    ctx->pc = 0x25E270u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTimeRunsOut_0x25e270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250C4u; }
    }
    if (ctx->pc != 0x2250C4u) { return; }
    ctx->pc = 0x2250C4u;
    // 0x2250c4: 0x10000008
    ctx->pc = 0x2250C4u;
    {
        const bool branch_taken_0x2250c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2250c4) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250CCu;
label_2250cc:
    // 0x2250cc: 0x10400006
    ctx->pc = 0x2250CCu;
    {
        const bool branch_taken_0x2250cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2250D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2250cc) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250D4u;
    // 0x2250d4: 0x8c4207bc
    ctx->pc = 0x2250d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x2250d8: 0x14400003
    ctx->pc = 0x2250D8u;
    {
        const bool branch_taken_0x2250d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2250d8) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250E0u;
    // 0x2250e0: 0xc09785c
    ctx->pc = 0x2250E0u;
    SET_GPR_U32(ctx, 31, 0x2250E8u);
    ctx->pc = 0x2250E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E170u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCountDown_0x25e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250E8u; }
    }
    if (ctx->pc != 0x2250E8u) { return; }
    ctx->pc = 0x2250E8u;
label_2250e8:
    // 0x2250e8: 0x12400020
    ctx->pc = 0x2250E8u;
    {
        const bool branch_taken_0x2250e8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2250ECu;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        if (branch_taken_0x2250e8) {
            ctx->pc = 0x22516Cu;
            goto label_22516c;
        }
    }
    ctx->pc = 0x2250F0u;
    // 0x2250f0: 0xc62c07c4
    ctx->pc = 0x2250f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2250f4: 0x3c014270
    ctx->pc = 0x2250f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x2250f8: 0x44810000
    ctx->pc = 0x2250f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2250fc: 0x3c100032
    ctx->pc = 0x2250fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x225100: 0xc60d07c0
    ctx->pc = 0x225100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225104: 0x46006302
    ctx->pc = 0x225104u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x225108: 0xc08934c
    ctx->pc = 0x225108u;
    SET_GPR_U32(ctx, 31, 0x225110u);
    ctx->pc = 0x22510Cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x224D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_sandglass_0x224d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225110u; }
    }
    if (ctx->pc != 0x225110u) { return; }
    ctx->pc = 0x225110u;
    // 0x225110: 0x3c020031
    ctx->pc = 0x225110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x225114: 0xdc420e28
    ctx->pc = 0x225114u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x225118: 0x30420010
    ctx->pc = 0x225118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x22511c: 0x10400014
    ctx->pc = 0x22511Cu;
    {
        const bool branch_taken_0x22511c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225120u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x22511c) {
            ctx->pc = 0x225170u;
            goto label_225170;
        }
    }
    ctx->pc = 0x225124u;
    // 0x225124: 0xc62c07c4
    ctx->pc = 0x225124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225128: 0xc60007c0
    ctx->pc = 0x225128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22512c: 0xc0be862
    ctx->pc = 0x22512Cu;
    SET_GPR_U32(ctx, 31, 0x225134u);
    ctx->pc = 0x225130u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225134u; }
    }
    if (ctx->pc != 0x225134u) { return; }
    ctx->pc = 0x225134u;
    // 0x225134: 0x2404ff00
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x225138: 0x24050008
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x22513c: 0x24060006
    ctx->pc = 0x22513cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x225140: 0x3c0700ff
    ctx->pc = 0x225140u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x225144: 0x34e7ffff
    ctx->pc = 0x225144u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x225148: 0x3c08003a
    ctx->pc = 0x225148u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x22514c: 0x25086aa8
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27304));
    // 0x225150: 0x40482d
    ctx->pc = 0x225150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225154: 0xdfbf0030
    ctx->pc = 0x225154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225158: 0xdfb20020
    ctx->pc = 0x225158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22515c: 0xdfb10010
    ctx->pc = 0x22515cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225160: 0xdfb00000
    ctx->pc = 0x225160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225164: 0x80804c8
    ctx->pc = 0x225164u;
    ctx->pc = 0x225168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x201320u;
    DrawText_0x201320(rdram, ctx, runtime); return;
    ctx->pc = 0x22516Cu;
label_22516c:
    // 0x22516c: 0xdfbf0030
    ctx->pc = 0x22516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225170:
    // 0x225170: 0xdfb20020
    ctx->pc = 0x225170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225174:
    // 0x225174: 0xdfb10010
    ctx->pc = 0x225174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225178: 0xdfb00000
    ctx->pc = 0x225178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22517c: 0x3e00008
    ctx->pc = 0x22517Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224EB8u: goto label_224eb8;
            case 0x224EBCu: goto label_224ebc;
            case 0x224F04u: goto label_224f04;
            case 0x224F08u: goto label_224f08;
            case 0x224F90u: goto label_224f90;
            case 0x224FACu: goto label_224fac;
            case 0x225020u: goto label_225020;
            case 0x225050u: goto label_225050;
            case 0x225068u: goto label_225068;
            case 0x22506Cu: goto label_22506c;
            case 0x225074u: goto label_225074;
            case 0x225084u: goto label_225084;
            case 0x2250CCu: goto label_2250cc;
            case 0x2250E8u: goto label_2250e8;
            case 0x22516Cu: goto label_22516c;
            case 0x225170u: goto label_225170;
            case 0x225174u: goto label_225174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225184u;
}

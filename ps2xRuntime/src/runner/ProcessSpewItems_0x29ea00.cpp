#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessSpewItems
// Address: 0x29ea00 - 0x29ece0
void ProcessSpewItems_0x29ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ea00u;

    // 0x29ea00: 0x27bdff50
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29ea04: 0xffbf0080
    ctx->pc = 0x29ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29ea08: 0xffb70070
    ctx->pc = 0x29ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x29ea0c: 0xffb60060
    ctx->pc = 0x29ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29ea10: 0xffb50050
    ctx->pc = 0x29ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29ea14: 0xffb40040
    ctx->pc = 0x29ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ea18: 0xffb30030
    ctx->pc = 0x29ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29ea1c: 0xffb20020
    ctx->pc = 0x29ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ea20: 0xffb10010
    ctx->pc = 0x29ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ea24: 0xffb00000
    ctx->pc = 0x29ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ea28: 0xe7b600a0
    ctx->pc = 0x29ea28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29ea2c: 0xe7b50098
    ctx->pc = 0x29ea2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29ea30: 0xe7b40090
    ctx->pc = 0x29ea30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29ea34: 0x3c020036
    ctx->pc = 0x29ea34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ea38: 0x8c42d950
    ctx->pc = 0x29ea38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957392)));
    // 0x29ea3c: 0x1840009a
    ctx->pc = 0x29EA3Cu;
    {
        const bool branch_taken_0x29ea3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29EA40u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ea3c) {
            ctx->pc = 0x29ECA8u;
            goto label_29eca8;
        }
    }
    ctx->pc = 0x29EA44u;
    // 0x29ea44: 0x3c020036
    ctx->pc = 0x29ea44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ea48: 0x2456d958
    ctx->pc = 0x29ea48u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294957400));
    // 0x29ea4c: 0x3c020036
    ctx->pc = 0x29ea4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ea50: 0x2454d95c
    ctx->pc = 0x29ea50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294957404));
    // 0x29ea54: 0x3c150031
    ctx->pc = 0x29ea54u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x29ea58: 0x3c020036
    ctx->pc = 0x29ea58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ea5c: 0x2457d960
    ctx->pc = 0x29ea5cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x29ea60: 0x3c020036
    ctx->pc = 0x29ea60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ea64: 0x2453d964
    ctx->pc = 0x29ea64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294957412));
    // 0x29ea68: 0x121100
    ctx->pc = 0x29ea68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ea6c: 0x0
    ctx->pc = 0x29ea6cu;
    // NOP
label_29ea70:
    // 0x29ea70: 0x561821
    ctx->pc = 0x29ea70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x29ea74: 0x8c620000
    ctx->pc = 0x29ea74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ea78: 0x50400086
    ctx->pc = 0x29EA78u;
    {
        const bool branch_taken_0x29ea78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29ea78) {
            ctx->pc = 0x29EA7Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29EC94u;
            goto label_29ec94;
        }
    }
    ctx->pc = 0x29EA80u;
    // 0x29ea80: 0x944200d8
    ctx->pc = 0x29ea80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x29ea84: 0x30420100
    ctx->pc = 0x29ea84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x29ea88: 0x50400003
    ctx->pc = 0x29EA88u;
    {
        const bool branch_taken_0x29ea88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29ea88) {
            ctx->pc = 0x29EA8Cu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 4));
            ctx->pc = 0x29EA98u;
            goto label_29ea98;
        }
    }
    ctx->pc = 0x29EA90u;
    // 0x29ea90: 0x1000007f
    ctx->pc = 0x29EA90u;
    {
        const bool branch_taken_0x29ea90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EA94u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x29ea90) {
            ctx->pc = 0x29EC90u;
            goto label_29ec90;
        }
    }
    ctx->pc = 0x29EA98u;
label_29ea98:
    // 0x29ea98: 0x761021
    ctx->pc = 0x29ea98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29ea9c: 0x8c500000
    ctx->pc = 0x29ea9cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29eaa0: 0x741021
    ctx->pc = 0x29eaa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29eaa4: 0xc4410000
    ctx->pc = 0x29eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eaa8: 0xc6a2ffa8
    ctx->pc = 0x29eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29eaac: 0x46020842
    ctx->pc = 0x29eaacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29eab0: 0xc6000040
    ctx->pc = 0x29eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eab4: 0x46000840
    ctx->pc = 0x29eab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29eab8: 0xe6010040
    ctx->pc = 0x29eab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x29eabc: 0x778821
    ctx->pc = 0x29eabcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x29eac0: 0xc6200000
    ctx->pc = 0x29eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eac4: 0x46020002
    ctx->pc = 0x29eac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29eac8: 0xc6010044
    ctx->pc = 0x29eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eacc: 0x46010540
    ctx->pc = 0x29eaccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ead0: 0xe6150044
    ctx->pc = 0x29ead0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x29ead4: 0x731821
    ctx->pc = 0x29ead4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29ead8: 0xc4600000
    ctx->pc = 0x29ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eadc: 0x46020002
    ctx->pc = 0x29eadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29eae0: 0xc6010048
    ctx->pc = 0x29eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eae4: 0x46010000
    ctx->pc = 0x29eae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29eae8: 0xe6000048
    ctx->pc = 0x29eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x29eaec: 0x3c013f00
    ctx->pc = 0x29eaecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29eaf0: 0x44810000
    ctx->pc = 0x29eaf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29eaf4: 0x46001502
    ctx->pc = 0x29eaf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29eaf8: 0x3c014120
    ctx->pc = 0x29eaf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x29eafc: 0x44812000
    ctx->pc = 0x29eafcu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x29eb00: 0x4480b000
    ctx->pc = 0x29eb00u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x29eb04: 0xc6200000
    ctx->pc = 0x29eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eb08: 0x46160036
    ctx->pc = 0x29eb08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb0c: 0x0
    ctx->pc = 0x29eb0cu;
    // NOP
    // 0x29eb10: 0x45000021
    ctx->pc = 0x29EB10u;
    {
        const bool branch_taken_0x29eb10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EB14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x29eb10) {
            ctx->pc = 0x29EB98u;
            goto label_29eb98;
        }
    }
    ctx->pc = 0x29EB18u;
    // 0x29eb18: 0x26040040
    ctx->pc = 0x29eb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x29eb1c: 0xc44ce88c
    ctx->pc = 0x29eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29eb20: 0x3c013f80
    ctx->pc = 0x29eb20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29eb24: 0x44816800
    ctx->pc = 0x29eb24u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x29eb28: 0xc087b5c
    ctx->pc = 0x29EB28u;
    SET_GPR_U32(ctx, 31, 0x29EB30u);
    ctx->pc = 0x29EB2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB30u; }
    }
    if (ctx->pc != 0x29EB30u) { return; }
    ctx->pc = 0x29EB30u;
    // 0x29eb30: 0x3c013f80
    ctx->pc = 0x29eb30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29eb34: 0x44810800
    ctx->pc = 0x29eb34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29eb38: 0x46010080
    ctx->pc = 0x29eb38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29eb3c: 0x4602a901
    ctx->pc = 0x29eb3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x29eb40: 0x3c013dcc
    ctx->pc = 0x29eb40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29eb44: 0x3421cccd
    ctx->pc = 0x29eb44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29eb48: 0x44811800
    ctx->pc = 0x29eb48u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x29eb4c: 0x46032034
    ctx->pc = 0x29eb4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb50: 0x45000011
    ctx->pc = 0x29EB50u;
    {
        const bool branch_taken_0x29eb50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29eb50) {
            ctx->pc = 0x29EB98u;
            goto label_29eb98;
        }
    }
    ctx->pc = 0x29EB58u;
    // 0x29eb58: 0xc6200000
    ctx->pc = 0x29eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eb5c: 0x46000007
    ctx->pc = 0x29eb5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29eb60: 0x3c013ecc
    ctx->pc = 0x29eb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x29eb64: 0x3421cccd
    ctx->pc = 0x29eb64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29eb68: 0x44810800
    ctx->pc = 0x29eb68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29eb6c: 0x46010002
    ctx->pc = 0x29eb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29eb70: 0x46030034
    ctx->pc = 0x29eb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb74: 0x0
    ctx->pc = 0x29eb74u;
    // NOP
    // 0x29eb78: 0x45000002
    ctx->pc = 0x29EB78u;
    {
        const bool branch_taken_0x29eb78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EB7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x29eb78) {
            ctx->pc = 0x29EB84u;
            goto label_29eb84;
        }
    }
    ctx->pc = 0x29EB80u;
    // 0x29eb80: 0xe6360000
    ctx->pc = 0x29eb80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_29eb84:
    // 0x29eb84: 0xe6020044
    ctx->pc = 0x29eb84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x29eb88: 0xc6a1ffa8
    ctx->pc = 0x29eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eb8c: 0x3c014080
    ctx->pc = 0x29eb8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x29eb90: 0x44810000
    ctx->pc = 0x29eb90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29eb94: 0x46000d02
    ctx->pc = 0x29eb94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29eb98:
    // 0x29eb98: 0x3c013dcc
    ctx->pc = 0x29eb98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29eb9c: 0x3421cccd
    ctx->pc = 0x29eb9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29eba0: 0x44810000
    ctx->pc = 0x29eba0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29eba4: 0x46040036
    ctx->pc = 0x29eba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eba8: 0x0
    ctx->pc = 0x29eba8u;
    // NOP
    // 0x29ebac: 0x45000009
    ctx->pc = 0x29EBACu;
    {
        const bool branch_taken_0x29ebac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EBB0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x29ebac) {
            ctx->pc = 0x29EBD4u;
            goto label_29ebd4;
        }
    }
    ctx->pc = 0x29EBB4u;
    // 0x29ebb4: 0x571021
    ctx->pc = 0x29ebb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x29ebb8: 0xc6a1ffa8
    ctx->pc = 0x29ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ebbc: 0x3c014200
    ctx->pc = 0x29ebbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x29ebc0: 0x44810000
    ctx->pc = 0x29ebc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ebc4: 0x46000842
    ctx->pc = 0x29ebc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29ebc8: 0xc4400000
    ctx->pc = 0x29ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ebcc: 0x46010001
    ctx->pc = 0x29ebccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29ebd0: 0xe4400000
    ctx->pc = 0x29ebd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29ebd4:
    // 0x29ebd4: 0x121100
    ctx->pc = 0x29ebd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ebd8: 0x541021
    ctx->pc = 0x29ebd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29ebdc: 0xc4410000
    ctx->pc = 0x29ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ebe0: 0x4601a034
    ctx->pc = 0x29ebe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ebe4: 0x0
    ctx->pc = 0x29ebe4u;
    // NOP
    // 0x29ebe8: 0x4503000a
    ctx->pc = 0x29EBE8u;
    {
        const bool branch_taken_0x29ebe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ebe8) {
            ctx->pc = 0x29EBECu;
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
            ctx->pc = 0x29EC14u;
            goto label_29ec14;
        }
    }
    ctx->pc = 0x29EBF0u;
    // 0x29ebf0: 0x121100
    ctx->pc = 0x29ebf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ebf4: 0x541021
    ctx->pc = 0x29ebf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29ebf8: 0x4600a007
    ctx->pc = 0x29ebf8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x29ebfc: 0xc4410000
    ctx->pc = 0x29ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec00: 0x46000834
    ctx->pc = 0x29ec00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec04: 0x0
    ctx->pc = 0x29ec04u;
    // NOP
    // 0x29ec08: 0x45020005
    ctx->pc = 0x29EC08u;
    {
        const bool branch_taken_0x29ec08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ec08) {
            ctx->pc = 0x29EC0Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
            ctx->pc = 0x29EC20u;
            goto label_29ec20;
        }
    }
    ctx->pc = 0x29EC10u;
    // 0x29ec10: 0x4601a002
    ctx->pc = 0x29ec10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_29ec14:
    // 0x29ec14: 0x46000801
    ctx->pc = 0x29ec14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29ec18: 0x10000003
    ctx->pc = 0x29EC18u;
    {
        const bool branch_taken_0x29ec18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EC1Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x29ec18) {
            ctx->pc = 0x29EC28u;
            goto label_29ec28;
        }
    }
    ctx->pc = 0x29EC20u;
label_29ec20:
    // 0x29ec20: 0x541021
    ctx->pc = 0x29ec20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29ec24: 0xac400000
    ctx->pc = 0x29ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29ec28:
    // 0x29ec28: 0x121100
    ctx->pc = 0x29ec28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ec2c: 0x531021
    ctx->pc = 0x29ec2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29ec30: 0xc4430000
    ctx->pc = 0x29ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ec34: 0x4603a034
    ctx->pc = 0x29ec34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec38: 0x0
    ctx->pc = 0x29ec38u;
    // NOP
    // 0x29ec3c: 0x4503000a
    ctx->pc = 0x29EC3Cu;
    {
        const bool branch_taken_0x29ec3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ec3c) {
            ctx->pc = 0x29EC40u;
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
            ctx->pc = 0x29EC68u;
            goto label_29ec68;
        }
    }
    ctx->pc = 0x29EC44u;
    // 0x29ec44: 0x121100
    ctx->pc = 0x29ec44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ec48: 0x531021
    ctx->pc = 0x29ec48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29ec4c: 0x4600a007
    ctx->pc = 0x29ec4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x29ec50: 0xc4430000
    ctx->pc = 0x29ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ec54: 0x46001834
    ctx->pc = 0x29ec54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec58: 0x0
    ctx->pc = 0x29ec58u;
    // NOP
    // 0x29ec5c: 0x45020005
    ctx->pc = 0x29EC5Cu;
    {
        const bool branch_taken_0x29ec5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ec5c) {
            ctx->pc = 0x29EC60u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
            ctx->pc = 0x29EC74u;
            goto label_29ec74;
        }
    }
    ctx->pc = 0x29EC64u;
    // 0x29ec64: 0x4603a002
    ctx->pc = 0x29ec64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_29ec68:
    // 0x29ec68: 0x46001801
    ctx->pc = 0x29ec68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29ec6c: 0x10000003
    ctx->pc = 0x29EC6Cu;
    {
        const bool branch_taken_0x29ec6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EC70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x29ec6c) {
            ctx->pc = 0x29EC7Cu;
            goto label_29ec7c;
        }
    }
    ctx->pc = 0x29EC74u;
label_29ec74:
    // 0x29ec74: 0x531021
    ctx->pc = 0x29ec74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29ec78: 0xac400000
    ctx->pc = 0x29ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29ec7c:
    // 0x29ec7c: 0x121100
    ctx->pc = 0x29ec7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x29ec80: 0x561021
    ctx->pc = 0x29ec80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x29ec84: 0x8c440000
    ctx->pc = 0x29ec84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ec88: 0xc080ce2
    ctx->pc = 0x29EC88u;
    SET_GPR_U32(ctx, 31, 0x29EC90u);
    ctx->pc = 0x29EC8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EC90u; }
    }
    if (ctx->pc != 0x29EC90u) { return; }
    ctx->pc = 0x29EC90u;
label_29ec90:
    // 0x29ec90: 0x26520001
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29ec94:
    // 0x29ec94: 0x3c020036
    ctx->pc = 0x29ec94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ec98: 0x8c42d950
    ctx->pc = 0x29ec98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957392)));
    // 0x29ec9c: 0x242102a
    ctx->pc = 0x29ec9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x29eca0: 0x1440ff73
    ctx->pc = 0x29ECA0u;
    {
        const bool branch_taken_0x29eca0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29ECA4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x29eca0) {
            ctx->pc = 0x29EA70u;
            goto label_29ea70;
        }
    }
    ctx->pc = 0x29ECA8u;
label_29eca8:
    // 0x29eca8: 0xdfbf0080
    ctx->pc = 0x29eca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ecac: 0xdfb70070
    ctx->pc = 0x29ecacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ecb0: 0xdfb60060
    ctx->pc = 0x29ecb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ecb4: 0xdfb50050
    ctx->pc = 0x29ecb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ecb8: 0xdfb40040
    ctx->pc = 0x29ecb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ecbc: 0xdfb30030
    ctx->pc = 0x29ecbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ecc0: 0xdfb20020
    ctx->pc = 0x29ecc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ecc4: 0xdfb10010
    ctx->pc = 0x29ecc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ecc8: 0xdfb00000
    ctx->pc = 0x29ecc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eccc: 0xc7b600a0
    ctx->pc = 0x29ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29ecd0: 0xc7b50098
    ctx->pc = 0x29ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ecd4: 0xc7b40090
    ctx->pc = 0x29ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ecd8: 0x3e00008
    ctx->pc = 0x29ECD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ECDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29EA70u: goto label_29ea70;
            case 0x29EA98u: goto label_29ea98;
            case 0x29EB84u: goto label_29eb84;
            case 0x29EB98u: goto label_29eb98;
            case 0x29EBD4u: goto label_29ebd4;
            case 0x29EC14u: goto label_29ec14;
            case 0x29EC20u: goto label_29ec20;
            case 0x29EC28u: goto label_29ec28;
            case 0x29EC68u: goto label_29ec68;
            case 0x29EC74u: goto label_29ec74;
            case 0x29EC7Cu: goto label_29ec7c;
            case 0x29EC90u: goto label_29ec90;
            case 0x29EC94u: goto label_29ec94;
            case 0x29ECA8u: goto label_29eca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29ECE0u;
}

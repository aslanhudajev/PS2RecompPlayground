#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_pyr
// Address: 0x26e9f0 - 0x26eb48
void MoveCam_pyr_0x26e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e9f0u;

    // 0x26e9f0: 0x27bdffd0
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e9f4: 0xffbf0010
    ctx->pc = 0x26e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e9f8: 0xffb00000
    ctx->pc = 0x26e9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26e9fc: 0xe7b40020
    ctx->pc = 0x26e9fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26ea00: 0x240301a0
    ctx->pc = 0x26ea00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26ea04: 0x831818
    ctx->pc = 0x26ea04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26ea08: 0x3c020034
    ctx->pc = 0x26ea08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ea0c: 0x2442eb60
    ctx->pc = 0x26ea0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26ea10: 0x14800006
    ctx->pc = 0x26EA10u;
    {
        const bool branch_taken_0x26ea10 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26EA14u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26ea10) {
            ctx->pc = 0x26EA2Cu;
            goto label_26ea2c;
        }
    }
    ctx->pc = 0x26EA18u;
    // 0x26ea18: 0x3c020031
    ctx->pc = 0x26ea18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26ea1c: 0x8c430018
    ctx->pc = 0x26ea1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26ea20: 0x34028008
    ctx->pc = 0x26ea20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26ea24: 0x1462000a
    ctx->pc = 0x26EA24u;
    {
        const bool branch_taken_0x26ea24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EA28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26ea24) {
            ctx->pc = 0x26EA50u;
            goto label_26ea50;
        }
    }
    ctx->pc = 0x26EA2Cu;
label_26ea2c:
    // 0x26ea2c: 0x24020001
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ea30: 0x14820041
    ctx->pc = 0x26EA30u;
    {
        const bool branch_taken_0x26ea30 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EA34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26ea30) {
            ctx->pc = 0x26EB38u;
            goto label_26eb38;
        }
    }
    ctx->pc = 0x26EA38u;
    // 0x26ea38: 0x3c020031
    ctx->pc = 0x26ea38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26ea3c: 0x8c430018
    ctx->pc = 0x26ea3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26ea40: 0x34028008
    ctx->pc = 0x26ea40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26ea44: 0x5462003d
    ctx->pc = 0x26EA44u;
    {
        const bool branch_taken_0x26ea44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26ea44) {
            ctx->pc = 0x26EA48u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26EB3Cu;
            goto label_26eb3c;
        }
    }
    ctx->pc = 0x26EA4Cu;
    // 0x26ea4c: 0x3c030031
    ctx->pc = 0x26ea4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_26ea50:
    // 0x26ea50: 0x8c62ffbc
    ctx->pc = 0x26ea50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26ea54: 0x4400005
    ctx->pc = 0x26EA54u;
    {
        const bool branch_taken_0x26ea54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EA58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26ea54) {
            ctx->pc = 0x26EA6Cu;
            goto label_26ea6c;
        }
    }
    ctx->pc = 0x26EA5Cu;
    // 0x26ea5c: 0x4482a000
    ctx->pc = 0x26ea5cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x26ea60: 0x4680a520
    ctx->pc = 0x26ea60u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26ea64: 0x10000008
    ctx->pc = 0x26EA64u;
    {
        const bool branch_taken_0x26ea64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26ea64) {
            ctx->pc = 0x26EA88u;
            goto label_26ea88;
        }
    }
    ctx->pc = 0x26EA6Cu;
label_26ea6c:
    // 0x26ea6c: 0x8c820000
    ctx->pc = 0x26ea6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ea70: 0x30430001
    ctx->pc = 0x26ea70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26ea74: 0x21042
    ctx->pc = 0x26ea74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26ea78: 0x621825
    ctx->pc = 0x26ea78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ea7c: 0x4483a000
    ctx->pc = 0x26ea7cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x26ea80: 0x4680a520
    ctx->pc = 0x26ea80u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26ea84: 0x4614a500
    ctx->pc = 0x26ea84u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_26ea88:
    // 0x26ea88: 0x3c013c23
    ctx->pc = 0x26ea88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x26ea8c: 0x3421d70a
    ctx->pc = 0x26ea8cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26ea90: 0x44810000
    ctx->pc = 0x26ea90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ea94: 0x8e0300f8
    ctx->pc = 0x26ea94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x26ea98: 0x24020004
    ctx->pc = 0x26ea98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ea9c: 0x10620013
    ctx->pc = 0x26EA9Cu;
    {
        const bool branch_taken_0x26ea9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26EAA0u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x26ea9c) {
            ctx->pc = 0x26EAECu;
            goto label_26eaec;
        }
    }
    ctx->pc = 0x26EAA4u;
    // 0x26eaa4: 0x3c020031
    ctx->pc = 0x26eaa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26eaa8: 0x8c421b24
    ctx->pc = 0x26eaa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26eaac: 0x3042000c
    ctx->pc = 0x26eaacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x26eab0: 0x10400006
    ctx->pc = 0x26EAB0u;
    {
        const bool branch_taken_0x26eab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EAB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26eab0) {
            ctx->pc = 0x26EACCu;
            goto label_26eacc;
        }
    }
    ctx->pc = 0x26EAB8u;
    // 0x26eab8: 0xc60c00b4
    ctx->pc = 0x26eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eabc: 0xc0b5a46
    ctx->pc = 0x26EABCu;
    SET_GPR_U32(ctx, 31, 0x26EAC4u);
    ctx->pc = 0x26EAC0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAC4u; }
    }
    if (ctx->pc != 0x26EAC4u) { return; }
    ctx->pc = 0x26EAC4u;
    // 0x26eac4: 0xe60000b4
    ctx->pc = 0x26eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26eac8: 0x3c020031
    ctx->pc = 0x26eac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26eacc:
    // 0x26eacc: 0x8c421b24
    ctx->pc = 0x26eaccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26ead0: 0x30420003
    ctx->pc = 0x26ead0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x26ead4: 0x10400006
    ctx->pc = 0x26EAD4u;
    {
        const bool branch_taken_0x26ead4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EAD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26ead4) {
            ctx->pc = 0x26EAF0u;
            goto label_26eaf0;
        }
    }
    ctx->pc = 0x26EADCu;
    // 0x26eadc: 0xc60c00b4
    ctx->pc = 0x26eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eae0: 0xc0b5a3e
    ctx->pc = 0x26EAE0u;
    SET_GPR_U32(ctx, 31, 0x26EAE8u);
    ctx->pc = 0x26EAE4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D68F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SubAngle_0x2d68f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAE8u; }
    }
    if (ctx->pc != 0x26EAE8u) { return; }
    ctx->pc = 0x26EAE8u;
    // 0x26eae8: 0xe60000b4
    ctx->pc = 0x26eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_26eaec:
    // 0x26eaec: 0x3c020031
    ctx->pc = 0x26eaecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26eaf0:
    // 0x26eaf0: 0x8c421b24
    ctx->pc = 0x26eaf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26eaf4: 0x304200c0
    ctx->pc = 0x26eaf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x26eaf8: 0x10400006
    ctx->pc = 0x26EAF8u;
    {
        const bool branch_taken_0x26eaf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EAFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26eaf8) {
            ctx->pc = 0x26EB14u;
            goto label_26eb14;
        }
    }
    ctx->pc = 0x26EB00u;
    // 0x26eb00: 0xc60c00b0
    ctx->pc = 0x26eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eb04: 0xc0b5a46
    ctx->pc = 0x26EB04u;
    SET_GPR_U32(ctx, 31, 0x26EB0Cu);
    ctx->pc = 0x26EB08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB0Cu; }
    }
    if (ctx->pc != 0x26EB0Cu) { return; }
    ctx->pc = 0x26EB0Cu;
    // 0x26eb0c: 0xe60000b0
    ctx->pc = 0x26eb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26eb10: 0x3c020031
    ctx->pc = 0x26eb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26eb14:
    // 0x26eb14: 0x8c421b24
    ctx->pc = 0x26eb14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26eb18: 0x30420030
    ctx->pc = 0x26eb18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x26eb1c: 0x10400006
    ctx->pc = 0x26EB1Cu;
    {
        const bool branch_taken_0x26eb1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EB20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26eb1c) {
            ctx->pc = 0x26EB38u;
            goto label_26eb38;
        }
    }
    ctx->pc = 0x26EB24u;
    // 0x26eb24: 0xc60c00b0
    ctx->pc = 0x26eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eb28: 0xc0b5a3e
    ctx->pc = 0x26EB28u;
    SET_GPR_U32(ctx, 31, 0x26EB30u);
    ctx->pc = 0x26EB2Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D68F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SubAngle_0x2d68f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB30u; }
    }
    if (ctx->pc != 0x26EB30u) { return; }
    ctx->pc = 0x26EB30u;
    // 0x26eb30: 0xe60000b0
    ctx->pc = 0x26eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26eb34: 0xdfbf0010
    ctx->pc = 0x26eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26eb38:
    // 0x26eb38: 0xdfb00000
    ctx->pc = 0x26eb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26eb3c:
    // 0x26eb3c: 0xc7b40020
    ctx->pc = 0x26eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26eb40: 0x3e00008
    ctx->pc = 0x26EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EA2Cu: goto label_26ea2c;
            case 0x26EA50u: goto label_26ea50;
            case 0x26EA6Cu: goto label_26ea6c;
            case 0x26EA88u: goto label_26ea88;
            case 0x26EACCu: goto label_26eacc;
            case 0x26EAECu: goto label_26eaec;
            case 0x26EAF0u: goto label_26eaf0;
            case 0x26EB14u: goto label_26eb14;
            case 0x26EB38u: goto label_26eb38;
            case 0x26EB3Cu: goto label_26eb3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26EB48u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: indoorBoxCtrl__18KomonoTrnRigidTaskFv
// Address: 0x21ee30 - 0x21f318
void indoorBoxCtrl__18KomonoTrnRigidTaskFv_0x21ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("indoorBoxCtrl__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x21ee30u;

    // 0x21ee30: 0x27bdff30
    ctx->pc = 0x21ee30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21ee34: 0x7fbf0080
    ctx->pc = 0x21ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x21ee38: 0x7fb60070
    ctx->pc = 0x21ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x21ee3c: 0x7fb50060
    ctx->pc = 0x21ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x21ee40: 0x7fb40050
    ctx->pc = 0x21ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21ee44: 0x7fb30040
    ctx->pc = 0x21ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21ee48: 0x7fb20030
    ctx->pc = 0x21ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21ee4c: 0x7fb10020
    ctx->pc = 0x21ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21ee50: 0x7fb00010
    ctx->pc = 0x21ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ee54: 0xe7b60008
    ctx->pc = 0x21ee54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21ee58: 0x7080a628
    ctx->pc = 0x21ee58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21ee5c: 0xe7b50004
    ctx->pc = 0x21ee5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21ee60: 0x26840140
    ctx->pc = 0x21ee60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 320));
    // 0x21ee64: 0xc086d68
    ctx->pc = 0x21EE64u;
    SET_GPR_U32(ctx, 31, 0x21EE6Cu);
    ctx->pc = 0x21EE68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x21B5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkEndCP__14CTrnKomonoBaseFv_0x21b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE6Cu; }
        else if (ctx->pc != 0x21EE6Cu) { ctx->pc = 0x21EE6Cu; }
    }
    if (ctx->pc != 0x21EE6Cu) { return; }
    ctx->pc = 0x21EE6Cu;
    // 0x21ee6c: 0x1040000e
    ctx->pc = 0x21EE6Cu;
    {
        const bool branch_taken_0x21ee6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EE70u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21ee6c) {
            ctx->pc = 0x21EEA8u;
            goto label_21eea8;
        }
    }
    ctx->pc = 0x21EE74u;
    // 0x21ee74: 0x72808e28
    ctx->pc = 0x21ee74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_21ee78:
    // 0x21ee78: 0x8e24145c
    ctx->pc = 0x21ee78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 5212)));
    // 0x21ee7c: 0x50800005
    ctx->pc = 0x21EE7Cu;
    {
        const bool branch_taken_0x21ee7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ee7c) {
            ctx->pc = 0x21EE80u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x21EE94u;
            goto label_21ee94;
        }
    }
    ctx->pc = 0x21EE84u;
    // 0x21ee84: 0xc086e44
    ctx->pc = 0x21EE84u;
    SET_GPR_U32(ctx, 31, 0x21EE8Cu);
    ctx->pc = 0x21B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        close__25TrnKomonoTumiageColliTaskFv_0x21b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE8Cu; }
        else if (ctx->pc != 0x21EE8Cu) { ctx->pc = 0x21EE8Cu; }
    }
    if (ctx->pc != 0x21EE8Cu) { return; }
    ctx->pc = 0x21EE8Cu;
    // 0x21ee8c: 0x0
    ctx->pc = 0x21ee8cu;
    // NOP
    // 0x21ee90: 0x26100001
    ctx->pc = 0x21ee90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21ee94:
    // 0x21ee94: 0x2a020004
    ctx->pc = 0x21ee94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x21ee98: 0x1440fff7
    ctx->pc = 0x21EE98u;
    {
        const bool branch_taken_0x21ee98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21EE9Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x21ee98) {
            ctx->pc = 0x21EE78u;
            goto label_21ee78;
        }
    }
    ctx->pc = 0x21EEA0u;
    // 0x21eea0: 0xc06898c
    ctx->pc = 0x21EEA0u;
    SET_GPR_U32(ctx, 31, 0x21EEA8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEA8u; }
        else if (ctx->pc != 0x21EEA8u) { ctx->pc = 0x21EEA8u; }
    }
    if (ctx->pc != 0x21EEA8u) { return; }
    ctx->pc = 0x21EEA8u;
label_21eea8:
    // 0x21eea8: 0xc68308c0
    ctx->pc = 0x21eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21eeac: 0xc68209e8
    ctx->pc = 0x21eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21eeb0: 0xc6810420
    ctx->pc = 0x21eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eeb4: 0xc6800548
    ctx->pc = 0x21eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eeb8: 0x3c024000
    ctx->pc = 0x21eeb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21eebc: 0x44822000
    ctx->pc = 0x21eebcu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21eec0: 0x27b60094
    ctx->pc = 0x21eec0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 148));
    // 0x21eec4: 0x46021881
    ctx->pc = 0x21eec4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21eec8: 0x27b50098
    ctx->pc = 0x21eec8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 152));
    // 0x21eecc: 0x27a40090
    ctx->pc = 0x21eeccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21eed0: 0x46000801
    ctx->pc = 0x21eed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21eed4: 0x46001000
    ctx->pc = 0x21eed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21eed8: 0x46040003
    ctx->pc = 0x21eed8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21eedc: 0xe7a00090
    ctx->pc = 0x21eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21eee0: 0xc68308c4
    ctx->pc = 0x21eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21eee4: 0xc68209ec
    ctx->pc = 0x21eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21eee8: 0xc6810424
    ctx->pc = 0x21eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eeec: 0xc680054c
    ctx->pc = 0x21eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eef0: 0x46021881
    ctx->pc = 0x21eef0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21eef4: 0x46000801
    ctx->pc = 0x21eef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21eef8: 0x46001000
    ctx->pc = 0x21eef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21eefc: 0x46040003
    ctx->pc = 0x21eefcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21ef00: 0xe6c00000
    ctx->pc = 0x21ef00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x21ef04: 0xc68308c8
    ctx->pc = 0x21ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ef08: 0xc68209f0
    ctx->pc = 0x21ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ef0c: 0xc6810428
    ctx->pc = 0x21ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef10: 0xc6800550
    ctx->pc = 0x21ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef14: 0x46021881
    ctx->pc = 0x21ef14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21ef18: 0x46000801
    ctx->pc = 0x21ef18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef1c: 0x46001000
    ctx->pc = 0x21ef1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ef20: 0x46040003
    ctx->pc = 0x21ef20u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21ef24: 0x0
    ctx->pc = 0x21ef24u;
    // NOP
    // 0x21ef28: 0x0
    ctx->pc = 0x21ef28u;
    // NOP
    // 0x21ef2c: 0xc06be7f
    ctx->pc = 0x21EF2Cu;
    SET_GPR_U32(ctx, 31, 0x21EF34u);
    ctx->pc = 0x21EF30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF34u; }
        else if (ctx->pc != 0x21EF34u) { ctx->pc = 0x21EF34u; }
    }
    if (ctx->pc != 0x21EF34u) { return; }
    ctx->pc = 0x21EF34u;
    // 0x21ef34: 0xc6830548
    ctx->pc = 0x21ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ef38: 0xc68209e8
    ctx->pc = 0x21ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ef3c: 0xc6810420
    ctx->pc = 0x21ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef40: 0xc68008c0
    ctx->pc = 0x21ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef44: 0x3c024000
    ctx->pc = 0x21ef44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21ef48: 0x44822000
    ctx->pc = 0x21ef48u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21ef4c: 0x27b000a4
    ctx->pc = 0x21ef4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 164));
    // 0x21ef50: 0x46021881
    ctx->pc = 0x21ef50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21ef54: 0x27b100a8
    ctx->pc = 0x21ef54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 168));
    // 0x21ef58: 0x27a400a0
    ctx->pc = 0x21ef58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ef5c: 0x46000801
    ctx->pc = 0x21ef5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef60: 0x46001000
    ctx->pc = 0x21ef60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ef64: 0x46040003
    ctx->pc = 0x21ef64u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21ef68: 0xe7a000a0
    ctx->pc = 0x21ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21ef6c: 0xc683054c
    ctx->pc = 0x21ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ef70: 0xc68209ec
    ctx->pc = 0x21ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ef74: 0xc6810424
    ctx->pc = 0x21ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef78: 0xc68008c4
    ctx->pc = 0x21ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef7c: 0x46021881
    ctx->pc = 0x21ef7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21ef80: 0x46000801
    ctx->pc = 0x21ef80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef84: 0x46001000
    ctx->pc = 0x21ef84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ef88: 0x46040003
    ctx->pc = 0x21ef88u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21ef8c: 0xe6000000
    ctx->pc = 0x21ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ef90: 0xc6830550
    ctx->pc = 0x21ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ef94: 0xc68209f0
    ctx->pc = 0x21ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ef98: 0xc6810428
    ctx->pc = 0x21ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef9c: 0xc68008c8
    ctx->pc = 0x21ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21efa0: 0x46021881
    ctx->pc = 0x21efa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21efa4: 0x46000801
    ctx->pc = 0x21efa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21efa8: 0x46001000
    ctx->pc = 0x21efa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21efac: 0x46040003
    ctx->pc = 0x21efacu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21efb0: 0x0
    ctx->pc = 0x21efb0u;
    // NOP
    // 0x21efb4: 0x0
    ctx->pc = 0x21efb4u;
    // NOP
    // 0x21efb8: 0xc06be7f
    ctx->pc = 0x21EFB8u;
    SET_GPR_U32(ctx, 31, 0x21EFC0u);
    ctx->pc = 0x21EFBCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFC0u; }
        else if (ctx->pc != 0x21EFC0u) { ctx->pc = 0x21EFC0u; }
    }
    if (ctx->pc != 0x21EFC0u) { return; }
    ctx->pc = 0x21EFC0u;
    // 0x21efc0: 0xc6830670
    ctx->pc = 0x21efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21efc4: 0xc68209e8
    ctx->pc = 0x21efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21efc8: 0xc6810798
    ctx->pc = 0x21efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21efcc: 0xc68008c0
    ctx->pc = 0x21efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21efd0: 0x3c024000
    ctx->pc = 0x21efd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21efd4: 0x44822000
    ctx->pc = 0x21efd4u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21efd8: 0x27b200b4
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 180));
    // 0x21efdc: 0x46021881
    ctx->pc = 0x21efdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21efe0: 0x27b300b8
    ctx->pc = 0x21efe0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 184));
    // 0x21efe4: 0x27a400b0
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x21efe8: 0x46000801
    ctx->pc = 0x21efe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21efec: 0x46001000
    ctx->pc = 0x21efecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21eff0: 0x46040003
    ctx->pc = 0x21eff0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21eff4: 0xe7a000b0
    ctx->pc = 0x21eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21eff8: 0xc6830674
    ctx->pc = 0x21eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21effc: 0xc68209ec
    ctx->pc = 0x21effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f000: 0xc681079c
    ctx->pc = 0x21f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f004: 0xc68008c4
    ctx->pc = 0x21f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f008: 0x46021881
    ctx->pc = 0x21f008u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21f00c: 0x46000801
    ctx->pc = 0x21f00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21f010: 0x46001000
    ctx->pc = 0x21f010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21f014: 0x46040003
    ctx->pc = 0x21f014u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21f018: 0xe6400000
    ctx->pc = 0x21f018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21f01c: 0xc6830678
    ctx->pc = 0x21f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21f020: 0xc68209f0
    ctx->pc = 0x21f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f024: 0xc68107a0
    ctx->pc = 0x21f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f028: 0xc68008c8
    ctx->pc = 0x21f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f02c: 0x46021881
    ctx->pc = 0x21f02cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21f030: 0x46000801
    ctx->pc = 0x21f030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21f034: 0x46001000
    ctx->pc = 0x21f034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21f038: 0x46040003
    ctx->pc = 0x21f038u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x21f03c: 0x0
    ctx->pc = 0x21f03cu;
    // NOP
    // 0x21f040: 0x0
    ctx->pc = 0x21f040u;
    // NOP
    // 0x21f044: 0xc06be7f
    ctx->pc = 0x21F044u;
    SET_GPR_U32(ctx, 31, 0x21F04Cu);
    ctx->pc = 0x21F048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F04Cu; }
        else if (ctx->pc != 0x21F04Cu) { ctx->pc = 0x21F04Cu; }
    }
    if (ctx->pc != 0x21F04Cu) { return; }
    ctx->pc = 0x21F04Cu;
    // 0x21f04c: 0x27a40090
    ctx->pc = 0x21f04cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21f050: 0x27a500a0
    ctx->pc = 0x21f050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x21f054: 0xc06be5a
    ctx->pc = 0x21F054u;
    SET_GPR_U32(ctx, 31, 0x21F05Cu);
    ctx->pc = 0x21F058u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F05Cu; }
        else if (ctx->pc != 0x21F05Cu) { ctx->pc = 0x21F05Cu; }
    }
    if (ctx->pc != 0x21F05Cu) { return; }
    ctx->pc = 0x21F05Cu;
    // 0x21f05c: 0x27a400a0
    ctx->pc = 0x21f05cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x21f060: 0x27a500b0
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f064: 0xc06be5a
    ctx->pc = 0x21F064u;
    SET_GPR_U32(ctx, 31, 0x21F06Cu);
    ctx->pc = 0x21F068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F06Cu; }
        else if (ctx->pc != 0x21F06Cu) { ctx->pc = 0x21F06Cu; }
    }
    if (ctx->pc != 0x21F06Cu) { return; }
    ctx->pc = 0x21F06Cu;
    // 0x21f06c: 0xc7a00090
    ctx->pc = 0x21f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f070: 0x3c024080
    ctx->pc = 0x21f070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x21f074: 0x3c033f80
    ctx->pc = 0x21f074u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x21f078: 0x44805000
    ctx->pc = 0x21f078u;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 0);
    // 0x21f07c: 0x44825800
    ctx->pc = 0x21f07cu;
    *(uint32_t*)&ctx->f[11] = GPR_U32(ctx, 2);
    // 0x21f080: 0xe6800190
    ctx->pc = 0x21f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 400), bits); }
    // 0x21f084: 0xc6c00000
    ctx->pc = 0x21f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f088: 0xe6800194
    ctx->pc = 0x21f088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 404), bits); }
    // 0x21f08c: 0xc6a00000
    ctx->pc = 0x21f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f090: 0xe6800198
    ctx->pc = 0x21f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 408), bits); }
    // 0x21f094: 0xae80019c
    ctx->pc = 0x21f094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 0));
    // 0x21f098: 0xc7a000a0
    ctx->pc = 0x21f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f09c: 0xe68001a0
    ctx->pc = 0x21f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 416), bits); }
    // 0x21f0a0: 0xc6000000
    ctx->pc = 0x21f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0a4: 0xe68001a4
    ctx->pc = 0x21f0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 420), bits); }
    // 0x21f0a8: 0xc6200000
    ctx->pc = 0x21f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0ac: 0xe68001a8
    ctx->pc = 0x21f0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 424), bits); }
    // 0x21f0b0: 0xae8001ac
    ctx->pc = 0x21f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 0));
    // 0x21f0b4: 0xc7a000b0
    ctx->pc = 0x21f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0b8: 0xe68001b0
    ctx->pc = 0x21f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 432), bits); }
    // 0x21f0bc: 0xc6400000
    ctx->pc = 0x21f0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0c0: 0xe68001b4
    ctx->pc = 0x21f0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 436), bits); }
    // 0x21f0c4: 0xc6600000
    ctx->pc = 0x21f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0c8: 0xe68001b8
    ctx->pc = 0x21f0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 440), bits); }
    // 0x21f0cc: 0xae8001bc
    ctx->pc = 0x21f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 0));
    // 0x21f0d0: 0xae8001c0
    ctx->pc = 0x21f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 0));
    // 0x21f0d4: 0xae8001c4
    ctx->pc = 0x21f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 0));
    // 0x21f0d8: 0xae8001c8
    ctx->pc = 0x21f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 0));
    // 0x21f0dc: 0xae8301cc
    ctx->pc = 0x21f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 3));
    // 0x21f0e0: 0xc6810670
    ctx->pc = 0x21f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f0e4: 0xc6800674
    ctx->pc = 0x21f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0e8: 0xc6890678
    ctx->pc = 0x21f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x21f0ec: 0xc6880798
    ctx->pc = 0x21f0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21f0f0: 0xc687079c
    ctx->pc = 0x21f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21f0f4: 0xc68607a0
    ctx->pc = 0x21f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21f0f8: 0x46015540
    ctx->pc = 0x21f0f8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x21f0fc: 0xc68508c0
    ctx->pc = 0x21f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21f100: 0xc68408c4
    ctx->pc = 0x21f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21f104: 0xc68308c8
    ctx->pc = 0x21f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21f108: 0x46005500
    ctx->pc = 0x21f108u;
    ctx->f[20] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x21f10c: 0xc68209e8
    ctx->pc = 0x21f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f110: 0xc68109ec
    ctx->pc = 0x21f110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f114: 0x46095580
    ctx->pc = 0x21f114u;
    ctx->f[22] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
    // 0x21f118: 0xc68009f0
    ctx->pc = 0x21f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f11c: 0x4608ad40
    ctx->pc = 0x21f11cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[8]);
    // 0x21f120: 0x4607a500
    ctx->pc = 0x21f120u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[7]);
    // 0x21f124: 0x4606b580
    ctx->pc = 0x21f124u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[6]);
    // 0x21f128: 0x4605ad40
    ctx->pc = 0x21f128u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[5]);
    // 0x21f12c: 0x4604a500
    ctx->pc = 0x21f12cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x21f130: 0x4603b580
    ctx->pc = 0x21f130u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x21f134: 0x4602ad40
    ctx->pc = 0x21f134u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x21f138: 0x4601a500
    ctx->pc = 0x21f138u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x21f13c: 0x4600b580
    ctx->pc = 0x21f13cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x21f140: 0x460bad43
    ctx->pc = 0x21f140u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[11];
    // 0x21f144: 0x460ba503
    ctx->pc = 0x21f144u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[11];
    // 0x21f148: 0xe6951450
    ctx->pc = 0x21f148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 5200), bits); }
    // 0x21f14c: 0x460bb583
    ctx->pc = 0x21f14cu;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[11];
    // 0x21f150: 0xe6941454
    ctx->pc = 0x21f150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 5204), bits); }
    // 0x21f154: 0xe6961458
    ctx->pc = 0x21f154u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 5208), bits); }
    // 0x21f158: 0x4bede37d
    ctx->pc = 0x21f158u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21f15c: 0x4bedeb7d
    ctx->pc = 0x21f15cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21f160: 0x4bedf37d
    ctx->pc = 0x21f160u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21f164: 0x4bedfb7d
    ctx->pc = 0x21f164u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21f168: 0x4600ab06
    ctx->pc = 0x21f168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21f16c: 0x4600a346
    ctx->pc = 0x21f16cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x21f170: 0xc06c202
    ctx->pc = 0x21F170u;
    SET_GPR_U32(ctx, 31, 0x21F178u);
    ctx->pc = 0x21F174u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F178u; }
        else if (ctx->pc != 0x21F178u) { ctx->pc = 0x21F178u; }
    }
    if (ctx->pc != 0x21F178u) { return; }
    ctx->pc = 0x21F178u;
    // 0x21f178: 0xc06c04e
    ctx->pc = 0x21F178u;
    SET_GPR_U32(ctx, 31, 0x21F180u);
    ctx->pc = 0x21F17Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F180u; }
        else if (ctx->pc != 0x21F180u) { ctx->pc = 0x21F180u; }
    }
    if (ctx->pc != 0x21F180u) { return; }
    ctx->pc = 0x21F180u;
    // 0x21f180: 0xc0853ac
    ctx->pc = 0x21F180u;
    SET_GPR_U32(ctx, 31, 0x21F188u);
    ctx->pc = 0x21F184u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 364)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F188u; }
        else if (ctx->pc != 0x21F188u) { ctx->pc = 0x21F188u; }
    }
    if (ctx->pc != 0x21F188u) { return; }
    ctx->pc = 0x21F188u;
    // 0x21f188: 0x3c03002c
    ctx->pc = 0x21f188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x21f18c: 0x24710810
    ctx->pc = 0x21f18cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 2064));
    // 0x21f190: 0x3c03002c
    ctx->pc = 0x21f190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x21f194: 0x70009e28
    ctx->pc = 0x21f194u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f198: 0x72808628
    ctx->pc = 0x21f198u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21f19c: 0x24720840
    ctx->pc = 0x21f19cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 2112));
label_21f1a0:
    // 0x21f1a0: 0x8e03145c
    ctx->pc = 0x21f1a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 5212)));
    // 0x21f1a4: 0x50600011
    ctx->pc = 0x21F1A4u;
    {
        const bool branch_taken_0x21f1a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f1a4) {
            ctx->pc = 0x21F1A8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x21F1ECu;
            goto label_21f1ec;
        }
    }
    ctx->pc = 0x21F1ACu;
    // 0x21f1ac: 0x4bede37d
    ctx->pc = 0x21f1acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21f1b0: 0x4bedeb7d
    ctx->pc = 0x21f1b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21f1b4: 0x4bedf37d
    ctx->pc = 0x21f1b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21f1b8: 0x4bedfb7d
    ctx->pc = 0x21f1b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21f1bc: 0xc62d0004
    ctx->pc = 0x21f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21f1c0: 0xc62e0008
    ctx->pc = 0x21f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21f1c4: 0xc06c202
    ctx->pc = 0x21F1C4u;
    SET_GPR_U32(ctx, 31, 0x21F1CCu);
    ctx->pc = 0x21F1C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1CCu; }
        else if (ctx->pc != 0x21F1CCu) { ctx->pc = 0x21F1CCu; }
    }
    if (ctx->pc != 0x21F1CCu) { return; }
    ctx->pc = 0x21F1CCu;
    // 0x21f1cc: 0xc0853ac
    ctx->pc = 0x21F1CCu;
    SET_GPR_U32(ctx, 31, 0x21F1D4u);
    ctx->pc = 0x21F1D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1D4u; }
        else if (ctx->pc != 0x21F1D4u) { ctx->pc = 0x21F1D4u; }
    }
    if (ctx->pc != 0x21F1D4u) { return; }
    ctx->pc = 0x21F1D4u;
    // 0x21f1d4: 0x4bff6b7e
    ctx->pc = 0x21f1d4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21f1d8: 0x4bfe6b7e
    ctx->pc = 0x21f1d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21f1dc: 0x4bfd6b7e
    ctx->pc = 0x21f1dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21f1e0: 0x4bfc6b7e
    ctx->pc = 0x21f1e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21f1e4: 0x0
    ctx->pc = 0x21f1e4u;
    // NOP
    // 0x21f1e8: 0x26730001
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_21f1ec:
    // 0x21f1ec: 0x2a630004
    ctx->pc = 0x21f1ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 4));
    // 0x21f1f0: 0x26100004
    ctx->pc = 0x21f1f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x21f1f4: 0x2631000c
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
    // 0x21f1f8: 0x1460ffe9
    ctx->pc = 0x21F1F8u;
    {
        const bool branch_taken_0x21f1f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F1FCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x21f1f8) {
            ctx->pc = 0x21F1A0u;
            goto label_21f1a0;
        }
    }
    ctx->pc = 0x21F200u;
    // 0x21f200: 0x4bff6b7e
    ctx->pc = 0x21f200u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21f204: 0x4bfe6b7e
    ctx->pc = 0x21f204u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21f208: 0x4bfd6b7e
    ctx->pc = 0x21f208u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21f20c: 0x4bfc6b7e
    ctx->pc = 0x21f20cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21f210: 0x3c03002c
    ctx->pc = 0x21f210u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x21f214: 0x70009e28
    ctx->pc = 0x21f214u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f218: 0x72808628
    ctx->pc = 0x21f218u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21f21c: 0x24710810
    ctx->pc = 0x21f21cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 2064));
label_21f220:
    // 0x21f220: 0x8e03145c
    ctx->pc = 0x21f220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 5212)));
    // 0x21f224: 0x5060002b
    ctx->pc = 0x21F224u;
    {
        const bool branch_taken_0x21f224 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f224) {
            ctx->pc = 0x21F228u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x21F2D4u;
            goto label_21f2d4;
        }
    }
    ctx->pc = 0x21F22Cu;
    // 0x21f22c: 0x4bede37d
    ctx->pc = 0x21f22cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21f230: 0x4bedeb7d
    ctx->pc = 0x21f230u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21f234: 0x4bedf37d
    ctx->pc = 0x21f234u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21f238: 0x4bedfb7d
    ctx->pc = 0x21f238u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21f23c: 0x4600ab06
    ctx->pc = 0x21f23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21f240: 0x4600a346
    ctx->pc = 0x21f240u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x21f244: 0xc06c202
    ctx->pc = 0x21F244u;
    SET_GPR_U32(ctx, 31, 0x21F24Cu);
    ctx->pc = 0x21F248u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F24Cu; }
        else if (ctx->pc != 0x21F24Cu) { ctx->pc = 0x21F24Cu; }
    }
    if (ctx->pc != 0x21F24Cu) { return; }
    ctx->pc = 0x21F24Cu;
    // 0x21f24c: 0xc06c04e
    ctx->pc = 0x21F24Cu;
    SET_GPR_U32(ctx, 31, 0x21F254u);
    ctx->pc = 0x21F250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F254u; }
        else if (ctx->pc != 0x21F254u) { ctx->pc = 0x21F254u; }
    }
    if (ctx->pc != 0x21F254u) { return; }
    ctx->pc = 0x21F254u;
    // 0x21f254: 0xc62d0004
    ctx->pc = 0x21f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21f258: 0xc62e0008
    ctx->pc = 0x21f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21f25c: 0xc06c202
    ctx->pc = 0x21F25Cu;
    SET_GPR_U32(ctx, 31, 0x21F264u);
    ctx->pc = 0x21F260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F264u; }
        else if (ctx->pc != 0x21F264u) { ctx->pc = 0x21F264u; }
    }
    if (ctx->pc != 0x21F264u) { return; }
    ctx->pc = 0x21F264u;
    // 0x21f264: 0x8f848c48
    ctx->pc = 0x21f264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x21f268: 0x8c830004
    ctx->pc = 0x21f268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21f26c: 0x31040
    ctx->pc = 0x21f26cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x21f270: 0x431021
    ctx->pc = 0x21f270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f274: 0x21080
    ctx->pc = 0x21f274u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f278: 0x431021
    ctx->pc = 0x21f278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f27c: 0x21100
    ctx->pc = 0x21f27cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x21f280: 0x821021
    ctx->pc = 0x21f280u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21f284: 0xc06c06f
    ctx->pc = 0x21F284u;
    SET_GPR_U32(ctx, 31, 0x21F28Cu);
    ctx->pc = 0x21F288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F28Cu; }
        else if (ctx->pc != 0x21F28Cu) { ctx->pc = 0x21F28Cu; }
    }
    if (ctx->pc != 0x21F28Cu) { return; }
    ctx->pc = 0x21F28Cu;
    // 0x21f28c: 0x27a400c0
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f290: 0xafa000c0
    ctx->pc = 0x21f290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x21f294: 0x27b200c4
    ctx->pc = 0x21f294u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 196));
    // 0x21f298: 0xae400000
    ctx->pc = 0x21f298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21f29c: 0x27b500c8
    ctx->pc = 0x21f29cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 200));
    // 0x21f2a0: 0x70802e28
    ctx->pc = 0x21f2a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21f2a4: 0xc06bf00
    ctx->pc = 0x21F2A4u;
    SET_GPR_U32(ctx, 31, 0x21F2ACu);
    ctx->pc = 0x21F2A8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2ACu; }
        else if (ctx->pc != 0x21F2ACu) { ctx->pc = 0x21F2ACu; }
    }
    if (ctx->pc != 0x21F2ACu) { return; }
    ctx->pc = 0x21F2ACu;
    // 0x21f2ac: 0xc6ae0000
    ctx->pc = 0x21f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21f2b0: 0x8e04145c
    ctx->pc = 0x21f2b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 5212)));
    // 0x21f2b4: 0xc7ac00c0
    ctx->pc = 0x21f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f2b8: 0xc086e48
    ctx->pc = 0x21F2B8u;
    SET_GPR_U32(ctx, 31, 0x21F2C0u);
    ctx->pc = 0x21F2BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x21B920u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPos__25TrnKomonoTumiageColliTaskFfff_0x21b920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2C0u; }
        else if (ctx->pc != 0x21F2C0u) { ctx->pc = 0x21F2C0u; }
    }
    if (ctx->pc != 0x21F2C0u) { return; }
    ctx->pc = 0x21F2C0u;
    // 0x21f2c0: 0x4bff6b7e
    ctx->pc = 0x21f2c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21f2c4: 0x4bfe6b7e
    ctx->pc = 0x21f2c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21f2c8: 0x4bfd6b7e
    ctx->pc = 0x21f2c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21f2cc: 0x4bfc6b7e
    ctx->pc = 0x21f2ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21f2d0: 0x26730001
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_21f2d4:
    // 0x21f2d4: 0x2a630004
    ctx->pc = 0x21f2d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 4));
    // 0x21f2d8: 0x26100004
    ctx->pc = 0x21f2d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x21f2dc: 0x1460ffd0
    ctx->pc = 0x21F2DCu;
    {
        const bool branch_taken_0x21f2dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F2E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x21f2dc) {
            ctx->pc = 0x21F220u;
            goto label_21f220;
        }
    }
    ctx->pc = 0x21F2E4u;
    // 0x21f2e4: 0x7bbf0080
    ctx->pc = 0x21f2e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f2e8: 0x7bb60070
    ctx->pc = 0x21f2e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f2ec: 0x7bb50060
    ctx->pc = 0x21f2ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f2f0: 0x7bb40050
    ctx->pc = 0x21f2f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f2f4: 0x7bb30040
    ctx->pc = 0x21f2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f2f8: 0x7bb20030
    ctx->pc = 0x21f2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f2fc: 0x7bb10020
    ctx->pc = 0x21f2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f300: 0x7bb00010
    ctx->pc = 0x21f300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f304: 0xc7b60008
    ctx->pc = 0x21f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21f308: 0xc7b50004
    ctx->pc = 0x21f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21f30c: 0xc7b40000
    ctx->pc = 0x21f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f310: 0x3e00008
    ctx->pc = 0x21F310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EE78u: goto label_21ee78;
            case 0x21EE94u: goto label_21ee94;
            case 0x21EEA8u: goto label_21eea8;
            case 0x21F1A0u: goto label_21f1a0;
            case 0x21F1ECu: goto label_21f1ec;
            case 0x21F220u: goto label_21f220;
            case 0x21F2D4u: goto label_21f2d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F318u;
}
